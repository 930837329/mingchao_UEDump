
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: PhysicsCore

/// Enum /Script/GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately              = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd                    = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing                             = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectAttributeCaptureSource
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source                                    = 0,
	EGameplayEffectAttributeCaptureSource__Target                                    = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityActivationMode
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority                                        = 0,
	EGameplayAbilityActivationMode__NonAuthority                                     = 1,
	EGameplayAbilityActivationMode__Predicting                                       = 2,
	EGameplayAbilityActivationMode__Confirmed                                        = 3,
	EGameplayAbilityActivationMode__Rejected                                         = 4
};

/// Enum /Script/GameplayAbilities.EAbilityGenericReplicatedEvent
/// Size: 0x01 (1 bytes)
enum class EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm                                   = 0,
	EAbilityGenericReplicatedEvent__GenericCancel                                    = 1,
	EAbilityGenericReplicatedEvent__InputPressed                                     = 2,
	EAbilityGenericReplicatedEvent__InputReleased                                    = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient                          = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer                          = 5,
	EAbilityGenericReplicatedEvent__GameCustom1                                      = 6,
	EAbilityGenericReplicatedEvent__GameCustom2                                      = 7,
	EAbilityGenericReplicatedEvent__GameCustom3                                      = 8,
	EAbilityGenericReplicatedEvent__GameCustom4                                      = 9,
	EAbilityGenericReplicatedEvent__GameCustom5                                      = 10,
	EAbilityGenericReplicatedEvent__GameCustom6                                      = 11
};

/// Enum /Script/GameplayAbilities.EGameplayEffectReplicationMode
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectReplicationMode : uint8_t
{
	EGameplayEffectReplicationMode__Minimal                                          = 0,
	EGameplayEffectReplicationMode__Mixed                                            = 1,
	EGameplayEffectReplicationMode__Full                                             = 2
};

/// Enum /Script/GameplayAbilities.EAbilityTaskWaitState
/// Size: 0x01 (1 bytes)
enum class EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame                                             = 1,
	EAbilityTaskWaitState__WaitingOnUser                                             = 2,
	EAbilityTaskWaitState__WaitingOnAvatar                                           = 4
};

/// Enum /Script/GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
/// Size: 0x01 (1 bytes)
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource                  = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward                     = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace                        = 2
};

/// Enum /Script/GameplayAbilities.EAbilityTaskNetSyncType
/// Size: 0x01 (1 bytes)
enum class EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait                                                = 0,
	EAbilityTaskNetSyncType__OnlyServerWait                                          = 1,
	EAbilityTaskNetSyncType__OnlyClientWait                                          = 2
};

/// Enum /Script/GameplayAbilities.EWaitAttributeChangeComparison
/// Size: 0x01 (1 bytes)
enum class EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None                                             = 0,
	EWaitAttributeChangeComparison__GreaterThan                                      = 1,
	EWaitAttributeChangeComparison__LessThan                                         = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo                             = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo                                = 4,
	EWaitAttributeChangeComparison__NotEqualTo                                       = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo                                   = 6
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInputBinds
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1                                             = 0,
	EGameplayAbilityInputBinds__Ability2                                             = 1,
	EGameplayAbilityInputBinds__Ability3                                             = 2,
	EGameplayAbilityInputBinds__Ability4                                             = 3,
	EGameplayAbilityInputBinds__Ability5                                             = 4,
	EGameplayAbilityInputBinds__Ability6                                             = 5,
	EGameplayAbilityInputBinds__Ability7                                             = 6,
	EGameplayAbilityInputBinds__Ability8                                             = 7,
	EGameplayAbilityInputBinds__Ability9                                             = 8
};

/// Enum /Script/GameplayAbilities.ETargetDataFilterSelf
/// Size: 0x01 (1 bytes)
enum class ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any                                                  = 0,
	ETargetDataFilterSelf__TDFS_NoSelf                                               = 1,
	ETargetDataFilterSelf__TDFS_NoOthers                                             = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTargetingLocationType
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform                          = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform                            = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform                           = 2
};

/// Enum /Script/GameplayAbilities.EGameplayTargetingConfirmation
/// Size: 0x01 (1 bytes)
enum class EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant                                          = 0,
	EGameplayTargetingConfirmation__UserConfirmed                                    = 1,
	EGameplayTargetingConfirmation__Custom                                           = 2,
	EGameplayTargetingConfirmation__CustomMulti                                      = 3
};

/// Enum /Script/GameplayAbilities.ERepAnimPositionMethod
/// Size: 0x01 (1 bytes)
enum class ERepAnimPositionMethod : uint8_t
{
	ERepAnimPositionMethod__Position                                                 = 0,
	ERepAnimPositionMethod__CurrentSectionId                                         = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTriggerSource
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent                                     = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded                                     = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent                                   = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityReplicationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo                                   = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetSecurityPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
	EGameplayAbilityNetSecurityPolicy__ClientOrServer                                = 0,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyExecution                           = 1,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyTermination                         = 2,
	EGameplayAbilityNetSecurityPolicy__ServerOnly                                    = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetExecutionPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted                               = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly                                    = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated                              = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly                                   = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInstancingPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced                                   = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor                              = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution                          = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCuePayloadType
/// Size: 0x01 (1 bytes)
enum class EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__CueParameters                                           = 0,
	EGameplayCuePayloadType__FromSpec                                                = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset                         = 0,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod                        = 1,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod              = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingExpirationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack                        = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveStackNumberAndRefreshDuration     = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration                         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingPeriodPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication                = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingDurationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication            = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh                              = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectDurationType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant                                             = 0,
	EGameplayEffectDurationType__Infinite                                            = 1,
	EGameplayEffectDurationType__HasDuration                                         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	EGameplayEffectScopedModifierAggregatorType__CapturedAttributeBacked             = 0,
	EGameplayEffectScopedModifierAggregatorType__Transient                           = 1
};

/// Enum /Script/GameplayAbilities.EAttributeBasedFloatCalculationType
/// Size: 0x01 (1 bytes)
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude                          = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue                          = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude                     = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel      = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectMagnitudeCalculation
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat                               = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased                              = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass                      = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller                                 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayTagEventType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved                                              = 0,
	EGameplayTagEventType__AnyCountChange                                            = 1
};

/// Enum /Script/GameplayAbilities.EGameplayCueEvent
/// Size: 0x01 (1 bytes)
enum class EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive                                                      = 0,
	EGameplayCueEvent__WhileActive                                                   = 1,
	EGameplayCueEvent__Executed                                                      = 2,
	EGameplayCueEvent__Removed                                                       = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None                                                = 0,
	EGameplayEffectStackingType__AggregateBySource                                   = 1,
	EGameplayEffectStackingType__AggregateByTarget                                   = 2
};

/// Enum /Script/GameplayAbilities.EGameplayModOp
/// Size: 0x01 (1 bytes)
enum class EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive                                                         = 0,
	EGameplayModOp__Multiplicitive                                                   = 1,
	EGameplayModOp__AdvancedMultiply                                                 = 2,
	EGameplayModOp__Override                                                         = 3,
	EGameplayModOp__Max                                                              = 4
};

/// Enum /Script/GameplayAbilities.EGameplayModEvaluationChannel
/// Size: 0x01 (1 bytes)
enum class EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel0                                          = 0,
	EGameplayModEvaluationChannel__Channel1                                          = 1,
	EGameplayModEvaluationChannel__Channel2                                          = 2,
	EGameplayModEvaluationChannel__Channel3                                          = 3,
	EGameplayModEvaluationChannel__Channel4                                          = 4,
	EGameplayModEvaluationChannel__Channel5                                          = 5,
	EGameplayModEvaluationChannel__Channel6                                          = 6,
	EGameplayModEvaluationChannel__Channel7                                          = 7,
	EGameplayModEvaluationChannel__Channel8                                          = 8,
	EGameplayModEvaluationChannel__Channel9                                          = 9
};

/// Class /Script/GameplayAbilities.AbilitySystemBlueprintLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool TargetDataHasOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                   // [0x94ccb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool TargetDataHasHitResult(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);                                 // [0x94cb30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool TargetDataHasEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                 // [0x94c9b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool TargetDataHasActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                    // [0x94c830] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FGameplayEffectSpecHandle SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle);                                      // [0x94c700] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayEffectSpecHandle SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32_t StackCount);                       // [0x94c580] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayEffectSpecHandle SetDuration(FGameplayEffectSpecHandle SpecHandle, float Duration);                             // [0x94c400] Final|Native|Static|Public|BlueprintCallable 
	// void SendGameplayEventToActor(class AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload);                   // [0x94c090] Final|Native|Static|Public|BlueprintCallable 
	// bool NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);          // [0x94bd30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel); // [0x94bb70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, class USceneComponent* TargetAttachComponent); // [0x94b380] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// FGameplayTargetDataFilterHandle MakeFilterHandle(FGameplayTargetDataFilter Filter, class AActor* FilterActor);           // [0x94b210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsValid(FGameplayAttribute Attribute);                                                                              // [0x94b030] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters);                                             // [0x94ae80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsInstigatorLocallyControlled(FGameplayCueParameters Parameters);                                                   // [0x94acd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool HasHitResult(FGameplayCueParameters Parameters);                                                                    // [0x94ab20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FTransform GetTargetDataOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                             // [0x94a980] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FTransform GetTargetDataEndPointTransform(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                  // [0x94a7e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FVector GetTargetDataEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                              // [0x94a650] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FVector GetOrigin(FGameplayCueParameters Parameters);                                                                    // [0x94a490] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// float GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute);                 // [0x94a220] Final|Native|Static|Public|BlueprintCallable 
	// FTransform GetInstigatorTransform(FGameplayCueParameters Parameters);                                                    // [0x94a050] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// class AActor* GetInstigatorActor(FGameplayCueParameters Parameters);                                                     // [0x949ea0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FHitResult GetHitResultFromTargetData(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);                       // [0x949cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FHitResult GetHitResult(FGameplayCueParameters Parameters);                                                              // [0x949ab0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal); // [0x949830] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool GetGameplayCueDirection(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Direction);          // [0x9495f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // [0x949390] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // [0x949130] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float GetFloatAttributeBase(class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);       // [0x948ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float GetFloatAttribute(class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);           // [0x948c70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FGameplayEffectContextHandle GetEffectContext(FGameplayEffectSpecHandle SpecHandle);                                     // [0x948b40] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetDataCountFromTargetData(FGameplayAbilityTargetDataHandle& TargetData);                                        // [0x948a00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// TArray<FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle);           // [0x948810] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// TArray<AActor*> GetAllActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData);                                // [0x948690] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// TArray<AActor*> GetActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                    // [0x9484d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// int32_t GetActorCount(FGameplayCueParameters Parameters);                                                                // [0x948320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class AActor* GetActorByIndex(FGameplayCueParameters Parameters, int32_t Index);                                         // [0x948130] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle);                                    // [0x9480a0] Final|Native|Static|Public|BlueprintCallable 
	// float GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle);                                        // [0x948010] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle);                                // [0x947f80] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle);                                     // [0x947ef0] Final|Native|Static|Public|BlueprintCallable 
	// float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle); // [0x947e10] Final|Native|Static|Public|BlueprintCallable 
	// float GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle);                                  // [0x947d80] Final|Native|Static|Public|BlueprintCallable 
	// FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle);                                    // [0x947cb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);                                           // [0x947c20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void ForwardGameplayCueToTarget(TScriptInterface<Class> TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x9479e0] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayAbilityTargetDataHandle FilterTargetData(FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass); // [0x9477e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess); // [0x947420] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, bool& bSuccess); // [0x9470c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);        // [0x946d60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin);                                 // [0x946c20] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// bool EffectContextIsValid(FGameplayEffectContextHandle EffectContext);                                                   // [0x946b20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext);                             // [0x946a20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext);                                              // [0x946920] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class UObject* EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext);                                 // [0x946820] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class AActor* EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext);                       // [0x946720] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FVector EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext);                                              // [0x946610] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// class AActor* EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext);                               // [0x946510] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FHitResult EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext);                                        // [0x9463b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class AActor* EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext);                                  // [0x9462b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset);           // [0x946060] Final|Native|Static|Public|BlueprintCallable 
	// bool DoesTargetDataContainActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, class AActor* Actor);       // [0x945ea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, FGameplayTagRequirements& SourceTagReqs, FGameplayTagRequirements& TargetTagReqs); // [0x945b90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // [0x9459d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void BreakGameplayCueParameters(FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, class AActor*& Instigator, class AActor*& EffectCauser, class UObject*& SourceObject, class UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, class USceneComponent*& TargetAttachComponent); // [0x945200] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude); // [0x945010] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayEffectSpecHandle AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, int32_t Key, float Magnitude); // [0x944e50] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayAbilityTargetDataHandle AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, FGameplayAbilityTargetDataHandle& HandleToAdd); // [0x944c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // [0x944a60] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayEffectSpecHandle AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, class UClass* LinkedGameplayEffect); // [0x9448e0] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayEffectSpecHandle AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);   // [0x944710] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);              // [0x944570] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayEffectSpecHandle AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);     // [0x9443a0] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayEffectSpecHandle AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);                // [0x944200] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(FGameplayAbilityTargetingLocationInfo& SourceLocation, FGameplayAbilityTargetingLocationInfo& TargetLocation); // [0x944040] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(FHitResult& HitResult);                                  // [0x943f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<AActor*>& ActorArray, bool OneTargetPerHandle);  // [0x943e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);                                        // [0x943d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/GameplayAbilities.AttributeDefaults
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FAttributeDefaults
{ 
	class UClass*                                      Attributes;                                                 // 0x0000   (0x0008)  
	class UDataTable*                                  DefaultStartingTable;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FGameplayAbilitySpecHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.PredictionKey
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FPredictionKey
{ 
	class UPackageMap*                                 PredictiveConnection;                                       // 0x0000   (0x0008)  
	int16_t                                            Current;                                                    // 0x0008   (0x0002)  
	int16_t                                            Base;                                                       // 0x000A   (0x0002)  
	bool                                               bIsStale;                                                   // 0x000C   (0x0001)  
	bool                                               bIsServerInitiated;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActivationInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FGameplayAbilityActivationInfo
{ 
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                             // 0x0000   (0x0001)  
	bool                                               bCanBeEndedByOtherInstance : 1;                             // 0x0001:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FPredictionKey                                     PredictionKeyWhenActivated;                                 // 0x0008   (0x0010)  
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FActiveGameplayEffectHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
	bool                                               bPassedFiltersAndWasExecuted;                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpec
/// Size: 0x00D4 (212 bytes) (0x00000C - 0x0000E0) align 8 pad: 0x0000
struct FGameplayAbilitySpec : FFastArraySerializerItem
{ 
	FGameplayAbilitySpecHandle                         Handle;                                                     // 0x000C   (0x0004)  
	class UGameplayAbility*                            Ability;                                                    // 0x0010   (0x0008)  
	int32_t                                            Level;                                                      // 0x0018   (0x0004)  
	int32_t                                            InputID;                                                    // 0x001C   (0x0004)  
	class UObject*                                     SourceObject;                                               // 0x0020   (0x0008)  
	char                                               ActiveCount;                                                // 0x0028   (0x0001)  
	bool                                               InputPressed : 1;                                           // 0x0029:0 (0x0001)  
	bool                                               RemoveAfterActivation : 1;                                  // 0x0029:1 (0x0001)  
	bool                                               PendingRemove : 1;                                          // 0x0029:2 (0x0001)  
	bool                                               bActivateOnce : 1;                                          // 0x0029:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	FGameplayAbilityActivationInfo                     ActivationInfo;                                             // 0x0030   (0x0018)  
	FGameplayTagContainer                              DynamicAbilityTags;                                         // 0x0048   (0x0020)  
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                     // 0x0068   (0x0010)  
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                        // 0x0078   (0x0010)  
	FActiveGameplayEffectHandle                        GameplayEffectHandle;                                       // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0090   (0x0050)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecContainer
/// Size: 0x0018 (24 bytes) (0x000108 - 0x000120) align 8 pad: 0x0000
struct FGameplayAbilitySpecContainer : FFastArraySerializer
{ 
	TArray<FGameplayAbilitySpec>                       Items;                                                      // 0x0108   (0x0010)  
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0118   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontage
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FGameplayAbilityRepAnimMontage
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0000   (0x0008)  
	float                                              PlayRate;                                                   // 0x0008   (0x0004)  
	float                                              Position;                                                   // 0x000C   (0x0004)  
	float                                              BlendTime;                                                  // 0x0010   (0x0004)  
	char                                               NextSectionID;                                              // 0x0014   (0x0001)  
	bool                                               bRepPosition : 1;                                           // 0x0015:0 (0x0001)  
	bool                                               IsStopped : 1;                                              // 0x0015:1 (0x0001)  
	bool                                               ForcePlayBit : 1;                                           // 0x0015:2 (0x0001)  
	bool                                               SkipPositionCorrection : 1;                                 // 0x0015:3 (0x0001)  
	bool                                               bSkipPlayRate : 1;                                          // 0x0015:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0010)  
	char                                               SectionIdToPlay;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityLocalAnimMontage
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FGameplayAbilityLocalAnimMontage
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0000   (0x0008)  
	bool                                               PlayBit;                                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0010)  
	class UGameplayAbility*                            AnimatingAbility;                                           // 0x0020   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAttribute
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FGameplayAttribute
{ 
	FString                                            AttributeName;                                              // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	class UStruct*                                     AttributeOwner;                                             // 0x0030   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifiedAttribute
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FGameplayEffectModifiedAttribute
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	float                                              TotalMagnitude;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureDefinition
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FGameplayEffectAttributeCaptureDefinition
{ 
	FGameplayAttribute                                 AttributeToCapture;                                         // 0x0000   (0x0038)  
	EGameplayEffectAttributeCaptureSource              AttributeSource;                                            // 0x0038   (0x0001)  
	bool                                               bSnapshot;                                                  // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003A   (0x0002)  MISSED
	FGameplayTag                                       DataTag;                                                    // 0x003C   (0x000C)  
	FGameplayTag                                       DataTag2;                                                   // 0x0048   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpec
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 pad: 0x0000
struct FGameplayEffectAttributeCaptureSpec
{ 
	FGameplayEffectAttributeCaptureDefinition          BackingDefinition;                                          // 0x0000   (0x0058)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FGameplayEffectAttributeCaptureSpecContainer
{ 
	TArray<FGameplayEffectAttributeCaptureSpec>        SourceAttributes;                                           // 0x0000   (0x0010)  
	TArray<FGameplayEffectAttributeCaptureSpec>        TargetAttributes;                                           // 0x0010   (0x0010)  
	bool                                               bHasNonSnapshottedAttributes;                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.TagContainerAggregator
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 pad: 0x0000
struct FTagContainerAggregator
{ 
	FGameplayTagContainer                              CapturedActorTags;                                          // 0x0000   (0x0020)  
	FGameplayTagContainer                              CapturedSpecTags;                                           // 0x0020   (0x0020)  
	FGameplayTagContainer                              ScopedTags;                                                 // 0x0040   (0x0020)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.ModifierSpec
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FModifierSpec
{ 
	float                                              EvaluatedMagnitude;                                         // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.ScalableFloat
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FScalableFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FCurveTableRowHandle                               Curve;                                                      // 0x0008   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecDef
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 pad: 0x0000
struct FGameplayAbilitySpecDef
{ 
	class UClass*                                      Ability;                                                    // 0x0000   (0x0008)  
	FScalableFloat                                     LevelScalableFloat;                                         // 0x0008   (0x0028)  
	int32_t                                            InputID;                                                    // 0x0030   (0x0004)  
	EGameplayEffectGrantedAbilityRemovePolicy          RemovalPolicy;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	class UObject*                                     SourceObject;                                               // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0040   (0x0050)  MISSED
	FGameplayAbilitySpecHandle                         AssignedHandle;                                             // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandle
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FGameplayEffectContextHandle
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpec
/// Size: 0x02B0 (688 bytes) (0x000000 - 0x0002B0) align 8 pad: 0x0000
struct FGameplayEffectSpec
{ 
	bool                                               FromRemote;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	int32_t                                            GameplayEffectServerId;                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class AActor*                                      CurrentSpecTarget;                                          // 0x0010   (0x0008)  
	class UGameplayEffect*                             Def;                                                        // 0x0018   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0020   (0x0010)  
	FGameplayEffectAttributeCaptureSpecContainer       CapturedRelevantAttributes;                                 // 0x0030   (0x0028)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0058   (0x0010)  MISSED
	float                                              Duration;                                                   // 0x0068   (0x0004)  
	float                                              Period;                                                     // 0x006C   (0x0004)  
	float                                              ChanceToApplyToTarget;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FTagContainerAggregator                            CapturedSourceTags;                                         // 0x0078   (0x0088)  
	FTagContainerAggregator                            CapturedTargetTags;                                         // 0x0100   (0x0088)  
	FGameplayTagContainer                              DynamicGrantedTags;                                         // 0x0188   (0x0020)  
	FGameplayTagContainer                              DynamicAssetTags;                                           // 0x01A8   (0x0020)  
	TArray<FModifierSpec>                              Modifiers;                                                  // 0x01C8   (0x0010)  
	int32_t                                            StackCount;                                                 // 0x01D8   (0x0004)  
	bool                                               bCompletedSourceAttributeCapture : 1;                       // 0x01DC:0 (0x0001)  
	bool                                               bCompletedTargetAttributeCapture : 1;                       // 0x01DC:1 (0x0001)  
	bool                                               bDurationLocked : 1;                                        // 0x01DC:2 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x01DD   (0x0003)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilitySpecs;                                        // 0x01E0   (0x0010)  
	unsigned char                                      UnknownData05_6[0xA0];                                      // 0x01F0   (0x00A0)  MISSED
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0290   (0x0018)  
	float                                              Level;                                                      // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData06_7[0x4];                                       // 0x02AC   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffect
/// Size: 0x0374 (884 bytes) (0x00000C - 0x000380) align 8 pad: 0x0000
struct FActiveGameplayEffect : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0xC];                                       // 0x000C   (0x000C)  MISSED
	FGameplayEffectSpec                                Spec;                                                       // 0x0018   (0x02B0)  
	FPredictionKey                                     PredictionKey;                                              // 0x02C8   (0x0010)  
	float                                              StartServerWorldTime;                                       // 0x02D8   (0x0004)  
	float                                              CachedStartServerWorldTime;                                 // 0x02DC   (0x0004)  
	float                                              StartWorldTime;                                             // 0x02E0   (0x0004)  
	float                                              PauseStartTime;                                             // 0x02E4   (0x0004)  
	bool                                               bIsInhibited;                                               // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x97];                                      // 0x02E9   (0x0097)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectsContainer
/// Size: 0x03A8 (936 bytes) (0x000108 - 0x0004B0) align 8 pad: 0x0000
struct FActiveGameplayEffectsContainer : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_3[0x58];                                      // 0x0108   (0x0058)  MISSED
	TArray<FActiveGameplayEffect>                      GameplayEffects_Internal;                                   // 0x0160   (0x0010)  
	unsigned char                                      UnknownData01_6[0x318];                                     // 0x0170   (0x0318)  MISSED
	TArray<class UGameplayEffect*>                     ApplicationImmunityQueryEffects;                            // 0x0488   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0498   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueParameters
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 pad: 0x0000
struct FGameplayCueParameters
{ 
	float                                              NormalizedMagnitude;                                        // 0x0000   (0x0004)  
	float                                              RawMagnitude;                                               // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
	FGameplayTag                                       MatchedTagName;                                             // 0x0020   (0x000C)  
	FGameplayTag                                       OriginalTag;                                                // 0x002C   (0x000C)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0038   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0058   (0x0020)  
	FVector_NetQuantize10                              Location;                                                   // 0x0078   (0x000C)  
	FVector_NetQuantizeNormal                          Normal;                                                     // 0x0084   (0x000C)  
	SDK_UNDEFINED(8,474) /* TWeakObjectPtr<AActor*> */ __um(Instigator);                                           // 0x0090   (0x0008)  
	SDK_UNDEFINED(8,475) /* TWeakObjectPtr<AActor*> */ __um(EffectCauser);                                         // 0x0098   (0x0008)  
	SDK_UNDEFINED(8,476) /* TWeakObjectPtr<UObject*> */ __um(SourceObject);                                        // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,477) /* TWeakObjectPtr<UPhysicalMaterial*> */ __um(PhysicalMaterial);                          // 0x00A8   (0x0008)  
	int32_t                                            GameplayEffectLevel;                                        // 0x00B0   (0x0004)  
	int32_t                                            AbilityLevel;                                               // 0x00B4   (0x0004)  
	SDK_UNDEFINED(8,478) /* TWeakObjectPtr<USceneComponent*> */ __um(TargetAttachComponent);                       // 0x00B8   (0x0008)  
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCue
/// Size: 0x00E4 (228 bytes) (0x00000C - 0x0000F0) align 8 pad: 0x0000
struct FActiveGameplayCue : FFastArraySerializerItem
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x000C   (0x000C)  
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0010)  
	FGameplayCueParameters                             Parameters;                                                 // 0x0028   (0x00C0)  
	bool                                               bPredictivelyRemoved;                                       // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCueContainer
/// Size: 0x0020 (32 bytes) (0x000108 - 0x000128) align 8 pad: 0x0000
struct FActiveGameplayCueContainer : FFastArraySerializer
{ 
	TArray<FActiveGameplayCue>                         GameplayCues;                                               // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0118   (0x0008)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0120   (0x0008)  
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMap
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FMinimalReplicationTagCountMap
{ 
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0000   (0x0050)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyItem
/// Size: 0x0014 (20 bytes) (0x00000C - 0x000020) align 8 pad: 0x0000
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyMap
/// Size: 0x0010 (16 bytes) (0x000108 - 0x000118) align 8 pad: 0x0000
struct FReplicatedPredictionKeyMap : FFastArraySerializer
{ 
	TArray<FReplicatedPredictionKeyItem>               PredictionKeys;                                             // 0x0108   (0x0010)  
};

/// Class /Script/GameplayAbilities.AbilitySystemComponent
/// Size: 0x1240 (4672 bytes) (0x000130 - 0x001370) align 8 pad: 0x0000
class UAbilitySystemComponent : public UGameplayTasksComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0130   (0x0010)  MISSED
	TArray<FAttributeDefaults>                         DefaultStartingData;                                        // 0x0140   (0x0010)  
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                          // 0x0150   (0x0010)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0160   (0x000C)  
	unsigned char                                      UnknownData01_6[0x194];                                     // 0x016C   (0x0194)  MISSED
	float                                              OutgoingDuration;                                           // 0x0300   (0x0004)  
	float                                              IncomingDuration;                                           // 0x0304   (0x0004)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0308   (0x0020)  MISSED
	TArray<FString>                                    ClientDebugStrings;                                         // 0x0328   (0x0010)  
	TArray<FString>                                    ServerDebugStrings;                                         // 0x0338   (0x0010)  
	unsigned char                                      UnknownData03_6[0x58];                                      // 0x0348   (0x0058)  MISSED
	bool                                               UserAbilityActivationInhibited;                             // 0x03A0   (0x0001)  
	bool                                               ReplicationProxyEnabled;                                    // 0x03A1   (0x0001)  
	bool                                               bSuppressGrantAbility;                                      // 0x03A2   (0x0001)  
	bool                                               bSuppressGameplayCues;                                      // 0x03A3   (0x0001)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x03A4   (0x0004)  MISSED
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                        // 0x03A8   (0x0010)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x03B8   (0x0028)  MISSED
	class AActor*                                      OwnerActor;                                                 // 0x03E0   (0x0008)  
	class AActor*                                      AvatarActor;                                                // 0x03E8   (0x0008)  
	unsigned char                                      UnknownData06_6[0x10];                                      // 0x03F0   (0x0010)  MISSED
	FGameplayAbilitySpecContainer                      ActivatableAbilities;                                       // 0x0400   (0x0120)  
	unsigned char                                      UnknownData07_6[0x30];                                      // 0x0520   (0x0030)  MISSED
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                            // 0x0550   (0x0010)  
	unsigned char                                      UnknownData08_6[0x200];                                     // 0x0560   (0x0200)  MISSED
	FGameplayAbilityRepAnimMontage                     RepAnimMontageInfo;                                         // 0x0760   (0x0030)  
	bool                                               bCachedIsNetSimulated;                                      // 0x0790   (0x0001)  
	bool                                               bPendingMontageRep;                                         // 0x0791   (0x0001)  
	unsigned char                                      UnknownData09_6[0x6];                                       // 0x0792   (0x0006)  MISSED
	FGameplayAbilityLocalAnimMontage                   LocalAnimMontageInfo;                                       // 0x0798   (0x0028)  
	unsigned char                                      UnknownData10_6[0xA0];                                      // 0x07C0   (0x00A0)  MISSED
	FActiveGameplayEffectsContainer                    ActiveGameplayEffects;                                      // 0x0860   (0x04B0)  
	FActiveGameplayCueContainer                        ActiveGameplayCues;                                         // 0x0D10   (0x0128)  
	FActiveGameplayCueContainer                        MinimalReplicationGameplayCues;                             // 0x0E38   (0x0128)  
	unsigned char                                      UnknownData11_6[0x130];                                     // 0x0F60   (0x0130)  MISSED
	TArray<char>                                       BlockedAbilityBindings;                                     // 0x1090   (0x0010)  
	unsigned char                                      UnknownData12_6[0x130];                                     // 0x10A0   (0x0130)  MISSED
	FMinimalReplicationTagCountMap                     MinimalReplicationTags;                                     // 0x11D0   (0x0060)  
	unsigned char                                      UnknownData13_6[0x18];                                      // 0x1230   (0x0018)  MISSED
	FReplicatedPredictionKeyMap                        ReplicatedPredictionKeyMap;                                 // 0x1248   (0x0118)  
	SDK_UNDEFINED(16,479) /* FMulticastInlineDelegate */ __um(TagUpdated);                                         // 0x1360   (0x0010)  
	// void UpdateTagMap(FGameplayTag& BaseTag, int32_t CountDelta);                                                            // [0x955680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);                          // [0x9555b0] Final|Native|Public|BlueprintCallable 
	// bool TryActivateAbilitiesByTag(FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);                // [0x9554a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void TargetConfirm();                                                                                                    // [0x955480] Native|Public|BlueprintCallable 
	// void TargetCancel();                                                                                                     // [0x955460] Native|Public|BlueprintCallable 
	// void SetUserAbilityActivationInhibited(bool NewInhibit);                                                                 // [0x9553d0] Native|Public|BlueprintCallable 
	// void SetTagMapCount(FGameplayTag& Tag, int32_t NewCount, bool NeedNotify);                                               // [0x955260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetRemoteGameplayEffectInhibition(int32_t HandleId, bool bShouldBeInhibited);                                       // [0x955190] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// void SetGeHandleStart(int32_t HandleIdStart);                                                                            // [0x955110] Final|Native|Static|Public 
	// void SetGeHandleIdPrefix(int32_t InHandleIdPrefix);                                                                      // [0x955090] Final|Native|Static|Public 
	// void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32_t NewLevel);                               // [0x954f80] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel);                           // [0x954ea0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x954960] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); // [0x9547f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x954670] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); // [0x954390] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); // [0x954160] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x953f90] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle);                                                   // [0x953ee0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle);                                                    // [0x953e30] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// void ServerPrintDebug_RequestWithStrings(TArray<FString> Strings);                                                       // [0x953d40] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// void ServerPrintDebug_Request();                                                                                         // [0x953cf0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); // [0x953b50] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);                           // [0x953a40] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName); // [0x953860] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, FName SectionName);                    // [0x953720] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x9535f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo);                                                            // [0x953420] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// void ResetTagMap();                                                                                                      // [0x953400] Final|Native|Protected|BlueprintCallable 
	// void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // [0x9532f0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);                             // [0x953210] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// int32_t RemoveActiveEffectsWithTags(FGameplayTagContainer Tags);                                                         // [0x953120] Final|Native|Public|BlueprintCallable 
	// int32_t RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags);                                                   // [0x953030] Final|Native|Public|BlueprintCallable 
	// int32_t RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags);                                                  // [0x952f40] Final|Native|Public|BlueprintCallable 
	// int32_t RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags);                                                  // [0x952f40] Final|Native|Public|BlueprintCallable 
	// void OnTagUpdated(FGameplayTag& Tag, bool TagExists, int32_t CountDelta);                                                // [0x952e10] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// void OnRep_ServerDebugString();                                                                                          // [0x952df0] Native|Public        
	// void OnRep_ReplicatedAnimMontage();                                                                                      // [0x952dd0] Native|Protected     
	// void OnRep_OwningActor();                                                                                                // [0x952db0] Final|Native|Public  
	// void OnRep_ClientDebugString();                                                                                          // [0x952d90] Native|Public        
	// void OnRep_ActivateAbilities();                                                                                          // [0x952d70] Native|Protected     
	// void NetMulticast_InvokeGameplayCuesExecuted_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x952ad0] Net|Native|Event|NetMulticast|Public 
	// void NetMulticast_InvokeGameplayCuesExecuted(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x9528e0] Net|Native|Event|NetMulticast|Public 
	// void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x952640] Net|Native|Event|NetMulticast|Public 
	// void NetMulticast_InvokeGameplayCueExecuted_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x9523f0] Net|Native|Event|NetMulticast|Public 
	// void NetMulticast_InvokeGameplayCueExecuted_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);      // [0x9522d0] Net|Native|Event|NetMulticast|Public 
	// void NetMulticast_InvokeGameplayCueExecuted(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x952110] Net|Native|Event|NetMulticast|Public 
	// void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x951c70] Net|Native|Event|NetMulticast|Public 
	// void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); // [0x951b70] Net|Native|Event|NetMulticast|Public 
	// void NetMulticast_InvokeGameplayCueAdded_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); // [0x951ec0] Net|Native|Event|NetMulticast|Public 
	// void NetMulticast_InvokeGameplayCueAdded(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x9519b0] Net|Native|Event|NetMulticast|Public 
	// FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle Context); // [0x9517a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FGameplayEffectContextHandle MakeEffectContext();                                                                        // [0x951710] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);                                                // [0x951640] Final|Native|Public|BlueprintCallable 
	// bool IsGameplayCueActive(FGameplayTag GameplayCueTag);                                                                   // [0x951580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetUserAbilityActivationInhibited();                                                                                // [0x951550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetTagCount(FGameplayTag TagToCheck);                                                                            // [0x951410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetGeHandleIdPrefix();                                                                                           // [0x9513e0] Final|Native|Static|Public 
	// float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute);                      // [0x9511b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0x9510a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags);                             // [0x950f70] Final|Native|Public|BlueprintCallable|Const 
	// TArray<FActiveGameplayEffectHandle> GetActiveEffects(FGameplayEffectQuery& Query);                                       // [0x950e70] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate);                                             // [0x950de0] Net|NetReliableNative|Event|Protected|NetClient 
	// void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); // [0x950cb0] Net|NetReliableNative|Event|Public|NetClient 
	// void ClientPrintDebug_Response(TArray<FString> Strings, int32_t GameFlags);                                              // [0x950ba0] Net|NetReliableNative|Event|Public|NetClient 
	// void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);           // [0x950aa0] Net|NetReliableNative|Event|Protected|NetClient 
	// void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x9509a0] Net|NetReliableNative|Event|Protected|NetClient 
	// void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x950630] Net|NetReliableNative|Event|Protected|NetClient 
	// void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey);           // [0x950540] Net|NetReliableNative|Event|Protected|NetClient 
	// void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey);                   // [0x950460] Net|NetReliableNative|Event|Protected|NetClient 
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context); // [0x950290] Final|Native|Public|BlueprintCallable 
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext); // [0x9500e0] Final|Native|Public|BlueprintCallable 
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target); // [0x94ffb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle& SpecHandle);                     // [0x94fec0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void AbilityConfirmOrCancel__DelegateSignature();                                                                        // [0x25a7960] MulticastDelegate|Public|Delegate 
	// void AbilityAbilityKey__DelegateSignature(int32_t InputID);                                                              // [0x25a7960] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUD
/// Size: 0x0000 (0 bytes) (0x000398 - 0x000398) align 8 pad: 0x0000
class AAbilitySystemDebugHUD : public AHUD
{ 
public:
};

/// Struct /Script/GameplayAbilities.NetSerializeScriptStructCache
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNetSerializeScriptStructCache
{ 
	TArray<class UScriptStruct*>                       ScriptStructs;                                              // 0x0000   (0x0010)  
};

/// Class /Script/GameplayAbilities.AbilitySystemGlobals
/// Size: 0x02C8 (712 bytes) (0x000030 - 0x0002F8) align 8 pad: 0x0000
class UAbilitySystemGlobals : public UObject
{ 
public:
	FSoftClassPath                                     AbilitySystemGlobalsClassName;                              // 0x0030   (0x0020)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED
	FGameplayTag                                       ActivateFailIsDeadTag;                                      // 0x0078   (0x000C)  
	FName                                              ActivateFailIsDeadName;                                     // 0x0084   (0x000C)  
	FGameplayTag                                       ActivateFailCooldownTag;                                    // 0x0090   (0x000C)  
	FName                                              ActivateFailCooldownName;                                   // 0x009C   (0x000C)  
	FGameplayTag                                       ActivateFailCostTag;                                        // 0x00A8   (0x000C)  
	FName                                              ActivateFailCostName;                                       // 0x00B4   (0x000C)  
	FGameplayTag                                       ActivateFailTagsBlockedTag;                                 // 0x00C0   (0x000C)  
	FName                                              ActivateFailTagsBlockedName;                                // 0x00CC   (0x000C)  
	FGameplayTag                                       ActivateFailTagsMissingTag;                                 // 0x00D8   (0x000C)  
	FName                                              ActivateFailTagsMissingName;                                // 0x00E4   (0x000C)  
	FGameplayTag                                       ActivateFailNetworkingTag;                                  // 0x00F0   (0x000C)  
	FName                                              ActivateFailNetworkingName;                                 // 0x00FC   (0x000C)  
	int32_t                                            MinimalReplicationTagCountBits;                             // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	FNetSerializeScriptStructCache                     TargetDataStructCache;                                      // 0x0110   (0x0010)  
	bool                                               bAllowGameplayModEvaluationChannels;                        // 0x0120   (0x0001)  
	EGameplayModEvaluationChannel                      DefaultGameplayModEvaluationChannel;                        // 0x0121   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0122   (0x0002)  MISSED
	FName                                              GameplayModEvaluationChannelAliases[10];                    // 0x0124   (0x0078)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x019C   (0x0004)  MISSED
	FSoftObjectPath                                    GlobalCurveTableName;                                       // 0x01A0   (0x0020)  
	class UCurveTable*                                 GlobalCurveTable;                                           // 0x01C0   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeMetaDataTableName;                           // 0x01C8   (0x0020)  
	class UDataTable*                                  GlobalAttributeMetaDataTable;                               // 0x01E8   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeSetDefaultsTableName;                        // 0x01F0   (0x0020)  
	TArray<FSoftObjectPath>                            GlobalAttributeSetDefaultsTableNames;                       // 0x0210   (0x0010)  
	TArray<class UCurveTable*>                         GlobalAttributeDefaultsTables;                              // 0x0220   (0x0010)  
	FSoftObjectPath                                    GlobalGameplayCueManagerClass;                              // 0x0230   (0x0020)  
	FSoftObjectPath                                    GlobalGameplayCueManagerName;                               // 0x0250   (0x0020)  
	TArray<FString>                                    GameplayCueNotifyPaths;                                     // 0x0270   (0x0010)  
	FSoftObjectPath                                    GameplayTagResponseTableName;                               // 0x0280   (0x0020)  
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                   // 0x02A0   (0x0008)  
	bool                                               PredictTargetGameplayEffects;                               // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x02A9   (0x0007)  MISSED
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                   // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData05_7[0x40];                                      // 0x02B8   (0x0040)  MISSED
	// void ToggleIgnoreAbilitySystemCosts();                                                                                   // [0x95a430] Exec|Native|Public   
	// void ToggleIgnoreAbilitySystemCooldowns();                                                                               // [0x95a410] Exec|Native|Public   
	// void ServerEndPlayerAbility(FString AbilityNameMatch);                                                                   // [0x95a320] Final|Exec|Native|Public 
	// void ServerCancelPlayerAbility(FString AbilityNameMatch);                                                                // [0x95a320] Final|Exec|Native|Public 
	// void ServerActivatePlayerAbility(FString AbilityNameMatch);                                                              // [0x95a320] Final|Exec|Native|Public 
	// void ListPlayerAbilities();                                                                                              // [0x95a130] Final|Exec|Native|Public 
};

/// Class /Script/GameplayAbilities.AbilitySystemInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAbilitySystemInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemReplicationProxyInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAbilitySystemReplicationProxyInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AttributeSet
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UAttributeSet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemTestAttributeSet
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000078) align 8 pad: 0x0000
class UAbilitySystemTestAttributeSet : public UAttributeSet
{ 
public:
	float                                              MaxHealth;                                                  // 0x0038   (0x0004)  
	float                                              Health;                                                     // 0x003C   (0x0004)  
	float                                              Mana;                                                       // 0x0040   (0x0004)  
	float                                              MaxMana;                                                    // 0x0044   (0x0004)  
	float                                              Damage;                                                     // 0x0048   (0x0004)  
	float                                              SpellDamage;                                                // 0x004C   (0x0004)  
	float                                              PhysicalDamage;                                             // 0x0050   (0x0004)  
	float                                              CritChance;                                                 // 0x0054   (0x0004)  
	float                                              CritMultiplier;                                             // 0x0058   (0x0004)  
	float                                              ArmorDamageReduction;                                       // 0x005C   (0x0004)  
	float                                              DodgeChance;                                                // 0x0060   (0x0004)  
	float                                              LifeSteal;                                                  // 0x0064   (0x0004)  
	float                                              Strength;                                                   // 0x0068   (0x0004)  
	float                                              StackingAttribute1;                                         // 0x006C   (0x0004)  
	float                                              StackingAttribute2;                                         // 0x0070   (0x0004)  
	float                                              NoStackAttribute;                                           // 0x0074   (0x0004)  
};

/// Class /Script/GameplayAbilities.AbilitySystemTestPawn
/// Size: 0x0020 (32 bytes) (0x000330 - 0x000350) align 8 pad: 0x0000
class AAbilitySystemTestPawn : public ADefaultPawn
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0330   (0x0018)  MISSED
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                     // 0x0348   (0x0008)  
};

/// Class /Script/GameplayAbilities.AbilityTask
/// Size: 0x0018 (24 bytes) (0x000070 - 0x000088) align 8 pad: 0x0000
class UAbilityTask : public UGameplayTask
{ 
public:
	class UGameplayAbility*                            Ability;                                                    // 0x0070   (0x0008)  
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                     // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base
/// Size: 0x0038 (56 bytes) (0x000088 - 0x0000C0) align 8 pad: 0x0000
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{ 
public:
	FName                                              ForceName;                                                  // 0x0088   (0x000C)  
	ERootMotionFinishVelocityMode                      FinishVelocityMode;                                         // 0x0094   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	FVector                                            FinishSetVelocity;                                          // 0x0098   (0x000C)  
	float                                              FinishClampVelocity;                                        // 0x00A4   (0x0004)  
	class UCharacterMovementComponent*                 MovementComponent;                                          // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
/// Size: 0x0038 (56 bytes) (0x0000C0 - 0x0000F8) align 8 pad: 0x0000
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,480) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00C0   (0x0010)  
	FVector                                            WorldDirection;                                             // 0x00D0   (0x000C)  
	float                                              Strength;                                                   // 0x00DC   (0x0004)  
	float                                              Duration;                                                   // 0x00E0   (0x0004)  
	bool                                               bIsAdditive;                                                // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E5   (0x0003)  MISSED
	class UCurveFloat*                                 StrengthOverTime;                                           // 0x00E8   (0x0008)  
	bool                                               bEnableGravity;                                             // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00F1   (0x0007)  MISSED
	// class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // [0x9584a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
/// Size: 0x0058 (88 bytes) (0x0000C0 - 0x000118) align 8 pad: 0x0000
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,481) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,482) /* FMulticastInlineDelegate */ __um(OnLanded);                                           // 0x00D0   (0x0010)  
	FRotator                                           Rotation;                                                   // 0x00E0   (0x000C)  
	float                                              Distance;                                                   // 0x00EC   (0x0004)  
	float                                              Height;                                                     // 0x00F0   (0x0004)  
	float                                              Duration;                                                   // 0x00F4   (0x0004)  
	float                                              MinimumLandedTriggerTime;                                   // 0x00F8   (0x0004)  
	bool                                               bFinishOnLanded;                                            // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x0100   (0x0008)  
	class UCurveFloat*                                 TimeMappingCurve;                                           // 0x0108   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0110   (0x0008)  MISSED
	// void OnLandedCallback(FHitResult& Hit);                                                                                  // [0x95a150] Final|Native|Public|HasOutParms 
	// void Finish();                                                                                                           // [0x95a110] Final|Native|Public|BlueprintCallable 
	// class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve); // [0x958800] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
/// Size: 0x0078 (120 bytes) (0x0000C0 - 0x000138) align 8 pad: 0x0000
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,483) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00D0   (0x0008)  MISSED
	FVector                                            StartLocation;                                              // 0x00D8   (0x000C)  
	FVector                                            TargetLocation;                                             // 0x00E4   (0x000C)  
	class AActor*                                      TargetActor;                                                // 0x00F0   (0x0008)  
	FVector                                            TargetLocationOffset;                                       // 0x00F8   (0x000C)  
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                            // 0x0104   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0105   (0x0003)  MISSED
	float                                              Duration;                                                   // 0x0108   (0x0004)  
	bool                                               bDisableDestinationReachedInterrupt;                        // 0x010C   (0x0001)  
	bool                                               bSetNewMovementMode;                                        // 0x010D   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x010E   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x010F   (0x0001)  
	class UCurveVector*                                PathOffsetCurve;                                            // 0x0110   (0x0008)  
	class UCurveFloat*                                 TimeMappingCurve;                                           // 0x0118   (0x0008)  
	class UCurveFloat*                                 TargetLerpSpeedHorizontalCurve;                             // 0x0120   (0x0008)  
	class UCurveFloat*                                 TargetLerpSpeedVerticalCurve;                               // 0x0128   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0130   (0x0008)  MISSED
	// void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);                                        // [0x95a250] Final|Native|Public  
	// void OnRep_TargetLocation();                                                                                             // [0x95a230] Final|Native|Protected 
	// class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0x959460] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0x958be0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
/// Size: 0x0050 (80 bytes) (0x0000C0 - 0x000110) align 8 pad: 0x0000
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,484) /* FMulticastInlineDelegate */ __um(OnTimedOut);                                         // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,485) /* FMulticastInlineDelegate */ __um(OnTimedOutAndDestinationReached);                    // 0x00D0   (0x0010)  
	FVector                                            StartLocation;                                              // 0x00E0   (0x000C)  
	FVector                                            TargetLocation;                                             // 0x00EC   (0x000C)  
	float                                              Duration;                                                   // 0x00F8   (0x0004)  
	bool                                               bSetNewMovementMode;                                        // 0x00FC   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x00FD   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x00FE   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00FF   (0x0001)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0108   (0x0008)  MISSED
	// class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x9590f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
/// Size: 0x0058 (88 bytes) (0x0000C0 - 0x000118) align 8 pad: 0x0000
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,486) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00C0   (0x0010)  
	FVector                                            Location;                                                   // 0x00D0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	class AActor*                                      LocationActor;                                              // 0x00E0   (0x0008)  
	float                                              Strength;                                                   // 0x00E8   (0x0004)  
	float                                              Duration;                                                   // 0x00EC   (0x0004)  
	float                                              Radius;                                                     // 0x00F0   (0x0004)  
	bool                                               bIsPush;                                                    // 0x00F4   (0x0001)  
	bool                                               bIsAdditive;                                                // 0x00F5   (0x0001)  
	bool                                               bNoZForce;                                                  // 0x00F6   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00F7   (0x0001)  MISSED
	class UCurveFloat*                                 StrengthDistanceFalloff;                                    // 0x00F8   (0x0008)  
	class UCurveFloat*                                 StrengthOverTime;                                           // 0x0100   (0x0008)  
	bool                                               bUseFixedWorldDirection;                                    // 0x0108   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0109   (0x0003)  MISSED
	FRotator                                           FixedWorldDirection;                                        // 0x010C   (0x000C)  
	// class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x959bc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_MoveToLocation
/// Size: 0x0048 (72 bytes) (0x000088 - 0x0000D0) align 8 pad: 0x0000
class UAbilityTask_MoveToLocation : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,487) /* FMulticastInlineDelegate */ __um(OnTargetLocationReached);                            // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0098   (0x0004)  MISSED
	FVector                                            StartLocation;                                              // 0x009C   (0x000C)  
	FVector                                            TargetLocation;                                             // 0x00A8   (0x000C)  
	float                                              DurationOfMovement;                                         // 0x00B4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UCurveFloat*                                 LerpCurve;                                                  // 0x00C0   (0x0008)  
	class UCurveVector*                                LerpCurveVector;                                            // 0x00C8   (0x0008)  
	// class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve); // [0x95cf00] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint
/// Size: 0x0018 (24 bytes) (0x000088 - 0x0000A0) align 8 pad: 0x0000
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,488) /* FMulticastInlineDelegate */ __um(OnSync);                                             // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0098   (0x0008)  MISSED
	// class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType); // [0x95f7d0] Final|Native|Static|Public|BlueprintCallable 
	// void OnSignalCallback();                                                                                                 // [0x95d530] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait
/// Size: 0x00A0 (160 bytes) (0x000088 - 0x000128) align 8 pad: 0x0000
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,489) /* FMulticastInlineDelegate */ __um(OnCompleted);                                        // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,490) /* FMulticastInlineDelegate */ __um(OnBlendOut);                                         // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,491) /* FMulticastInlineDelegate */ __um(OnInterrupted);                                      // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,492) /* FMulticastInlineDelegate */ __um(OnCancelled);                                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,493) /* FMulticastInlineDelegate */ __um(OnTick);                                             // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00D8   (0x0028)  MISSED
	class UAnimMontage*                                MontageToPlay;                                              // 0x0100   (0x0008)  
	float                                              Rate;                                                       // 0x0108   (0x0004)  
	FName                                              StartSection;                                               // 0x010C   (0x000C)  
	float                                              AnimRootMotionTranslationScale;                             // 0x0118   (0x0004)  
	float                                              StartTimeSeconds;                                           // 0x011C   (0x0004)  
	bool                                               bStopWhenAbilityEnds;                                       // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0121   (0x0007)  MISSED
	// void TickTask(float DeltaTime);                                                                                          // [0x95d960] Final|Native|Public  
	// void OnMontageInterrupted();                                                                                             // [0x95d510] Final|Native|Public  
	// void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);                                                     // [0x95d440] Final|Native|Public  
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x95d370] Final|Native|Public  
	// class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool NeedTick); // [0x95c990] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_Repeat
/// Size: 0x0038 (56 bytes) (0x000088 - 0x0000C0) align 8 pad: 0x0000
class UAbilityTask_Repeat : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,494) /* FMulticastInlineDelegate */ __um(OnPerformAction);                                    // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,495) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A8   (0x0018)  MISSED
	// class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // [0x95d550] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_SpawnActor
/// Size: 0x0048 (72 bytes) (0x000088 - 0x0000D0) align 8 pad: 0x0000
class UAbilityTask_SpawnActor : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,496) /* FMulticastInlineDelegate */ __um(Success);                                            // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,497) /* FMulticastInlineDelegate */ __um(DidNotSpawn);                                        // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x00A8   (0x0028)  MISSED
	// class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class UClass* Class); // [0x95d660] Final|Native|Static|Public|BlueprintCallable 
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class AActor* SpawnedActor); // [0x95cc60] Final|Native|Public|BlueprintCallable 
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class UClass* Class, class AActor*& SpawnedActor); // [0x95c660] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_StartAbilityState
/// Size: 0x0038 (56 bytes) (0x000088 - 0x0000C0) align 8 pad: 0x0000
class UAbilityTask_StartAbilityState : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,498) /* FMulticastInlineDelegate */ __um(OnStateEnded);                                       // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,499) /* FMulticastInlineDelegate */ __um(OnStateInterrupted);                                 // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A8   (0x0018)  MISSED
	// class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState); // [0x95d830] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_VisualizeTargeting
/// Size: 0x0028 (40 bytes) (0x000088 - 0x0000B0) align 8 pad: 0x0000
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,500) /* FMulticastInlineDelegate */ __um(TimeElapsed);                                        // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0098   (0x0018)  MISSED
	// class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration); // [0x95db50] Final|Native|Static|Public|BlueprintCallable 
	// class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, FName TaskInstanceName, float Duration); // [0x95d9f0] Final|Native|Static|Public|BlueprintCallable 
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);        // [0x95ce30] Final|Native|Public|BlueprintCallable 
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor*& SpawnedActor); // [0x95c870] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate
/// Size: 0x00C8 (200 bytes) (0x000088 - 0x000150) align 8 pad: 0x0000
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,501) /* FMulticastInlineDelegate */ __um(OnActivate);                                         // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0xB8];                                      // 0x0098   (0x00B8)  MISSED
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x95e0e0] Final|Native|Static|Public|BlueprintCallable 
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x95e2f0] Final|Native|Static|Public|BlueprintCallable 
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x95df30] Final|Native|Static|Public|BlueprintCallable 
	// void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);                                                        // [0x95d100] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit
/// Size: 0x0080 (128 bytes) (0x000088 - 0x000108) align 8 pad: 0x0000
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,502) /* FMulticastInlineDelegate */ __um(OnCommit);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x70];                                      // 0x0098   (0x0070)  MISSED
	// class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce); // [0x95e630] Final|Native|Static|Public|BlueprintCallable 
	// class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce); // [0x95e4c0] Final|Native|Static|Public|BlueprintCallable 
	// void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);                                                          // [0x95d190] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChange
/// Size: 0x0080 (128 bytes) (0x000088 - 0x000108) align 8 pad: 0x0000
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,503) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0098   (0x0068)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x0100   (0x0008)  
	// class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner); // [0x95f390] Final|Native|Static|Public|BlueprintCallable 
	// class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner); // [0x95e7b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
/// Size: 0x00C0 (192 bytes) (0x000088 - 0x000148) align 8 pad: 0x0000
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,504) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x0098   (0x00A8)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x0140   (0x0008)  
	// class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner); // [0x95eb30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
/// Size: 0x0070 (112 bytes) (0x000088 - 0x0000F8) align 8 pad: 0x0000
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,505) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0098   (0x0058)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x00F0   (0x0008)  
	// class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner); // [0x95f040] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitCancel
/// Size: 0x0018 (24 bytes) (0x000088 - 0x0000A0) align 8 pad: 0x0000
class UAbilityTask_WaitCancel : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,506) /* FMulticastInlineDelegate */ __um(OnCancel);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0098   (0x0008)  MISSED
	// class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);                                        // [0x95dcb0] Final|Native|Static|Public|BlueprintCallable 
	// void OnLocalCancelCallback();                                                                                            // [0x95d310] Final|Native|Public  
	// void OnCancelCallback();                                                                                                 // [0x95d220] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirm
/// Size: 0x0020 (32 bytes) (0x000088 - 0x0000A8) align 8 pad: 0x0000
class UAbilityTask_WaitConfirm : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,507) /* FMulticastInlineDelegate */ __um(OnConfirm);                                          // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0098   (0x0010)  MISSED
	// class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);                                      // [0x95dd40] Final|Native|Static|Public|BlueprintCallable 
	// void OnConfirmCallback(class UGameplayAbility* InAbility);                                                               // [0x95d260] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel
/// Size: 0x0028 (40 bytes) (0x000088 - 0x0000B0) align 8 pad: 0x0000
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,508) /* FMulticastInlineDelegate */ __um(OnConfirm);                                          // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,509) /* FMulticastInlineDelegate */ __um(OnCancel);                                           // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A8   (0x0008)  MISSED
	// class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);                          // [0x95ddd0] Final|Native|Static|Public|BlueprintCallable 
	// void OnLocalConfirmCallback();                                                                                           // [0x95d350] Final|Native|Public  
	// void OnLocalCancelCallback();                                                                                            // [0x95d330] Final|Native|Public  
	// void OnConfirmCallback();                                                                                                // [0x95d2f0] Final|Native|Public  
	// void OnCancelCallback();                                                                                                 // [0x95d240] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitDelay
/// Size: 0x0018 (24 bytes) (0x000088 - 0x0000A0) align 8 pad: 0x0000
class UAbilityTask_WaitDelay : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,510) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0098   (0x0008)  MISSED
	// class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);                              // [0x95de60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
/// Size: 0x0148 (328 bytes) (0x000088 - 0x0001D0) align 8 pad: 0x0000
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_3[0x138];                                     // 0x0088   (0x0138)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x01C8   (0x0008)  MISSED
	// void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle); // [0x9623c0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
/// Size: 0x0020 (32 bytes) (0x0001D0 - 0x0001F0) align 8 pad: 0x0000
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	SDK_UNDEFINED(16,511) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x01D0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x01E0   (0x0010)  MISSED
	// class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x963560] Final|Native|Static|Public|BlueprintCallable 
	// class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x963130] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
/// Size: 0x0020 (32 bytes) (0x0001D0 - 0x0001F0) align 8 pad: 0x0000
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	SDK_UNDEFINED(16,512) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x01D0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x01E0   (0x0010)  MISSED
	// class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x963ce0] Final|Native|Static|Public|BlueprintCallable 
	// class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // [0x9638b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
/// Size: 0x00B8 (184 bytes) (0x000088 - 0x000140) align 8 pad: 0x0000
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,513) /* FMulticastInlineDelegate */ __um(bLocked);                                            // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x98];                                      // 0x0098   (0x0098)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x0130   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0138   (0x0008)  MISSED
	// class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // [0x964030] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
/// Size: 0x0040 (64 bytes) (0x000088 - 0x0000C8) align 8 pad: 0x0000
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,514) /* FMulticastInlineDelegate */ __um(OnRemoved);                                          // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,515) /* FMulticastInlineDelegate */ __um(InvalidHandle);                                      // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x00A8   (0x0020)  MISSED
	// class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x962ee0] Final|Native|Static|Public|BlueprintCallable 
	// void OnGameplayEffectRemoved(FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);                                   // [0x962520] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
/// Size: 0x0038 (56 bytes) (0x000088 - 0x0000C0) align 8 pad: 0x0000
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,516) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,517) /* FMulticastInlineDelegate */ __um(InvalidHandle);                                      // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A8   (0x0018)  MISSED
	// class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x962fc0] Final|Native|Static|Public|BlueprintCallable 
	// void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount, bool bPremature); // [0x962610] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent
/// Size: 0x0038 (56 bytes) (0x000088 - 0x0000C0) align 8 pad: 0x0000
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,518) /* FMulticastInlineDelegate */ __um(EventReceived);                                      // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0098   (0x0010)  MISSED
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00B0   (0x0010)  MISSED
	// class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, FGameplayTag EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0x964360] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTag
/// Size: 0x0028 (40 bytes) (0x000088 - 0x0000B0) align 8 pad: 0x0000
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0088   (0x0010)  MISSED
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00A0   (0x0010)  MISSED
	// void GameplayTagCallback(FGameplayTag Tag, int32_t NewCount);                                                            // [0x9622d0] Native|Public        
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded
/// Size: 0x0010 (16 bytes) (0x0000B0 - 0x0000C0) align 8 pad: 0x0000
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,519) /* FMulticastInlineDelegate */ __um(Added);                                              // 0x00B0   (0x0010)  
	// class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x964500] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
/// Size: 0x0010 (16 bytes) (0x0000B0 - 0x0000C0) align 8 pad: 0x0000
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,520) /* FMulticastInlineDelegate */ __um(Removed);                                            // 0x00B0   (0x0010)  
	// class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x964660] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputPress
/// Size: 0x0020 (32 bytes) (0x000088 - 0x0000A8) align 8 pad: 0x0000
class UAbilityTask_WaitInputPress : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,521) /* FMulticastInlineDelegate */ __um(OnPress);                                            // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0098   (0x0010)  MISSED
	// class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);      // [0x9647c0] Final|Native|Static|Public|BlueprintCallable 
	// void OnPressCallback();                                                                                                  // [0x962a70] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputRelease
/// Size: 0x0020 (32 bytes) (0x000088 - 0x0000A8) align 8 pad: 0x0000
class UAbilityTask_WaitInputRelease : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,522) /* FMulticastInlineDelegate */ __um(OnRelease);                                          // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0098   (0x0010)  MISSED
	// class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // [0x964890] Final|Native|Static|Public|BlueprintCallable 
	// void OnReleaseCallback();                                                                                                // [0x962a90] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange
/// Size: 0x0020 (32 bytes) (0x000088 - 0x0000A8) align 8 pad: 0x0000
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,523) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0098   (0x0010)  MISSED
	// void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x962960] Final|Native|Public  
	// class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode); // [0x962000] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitOverlap
/// Size: 0x0010 (16 bytes) (0x000088 - 0x000098) align 8 pad: 0x0000
class UAbilityTask_WaitOverlap : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,524) /* FMulticastInlineDelegate */ __um(OnOverlap);                                          // 0x0088   (0x0010)  
	// class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);                                   // [0x9630a0] Final|Native|Static|Public|BlueprintCallable 
	// void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x962770] Final|Native|Public|HasOutParms|HasDefaults 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitTargetData
/// Size: 0x0040 (64 bytes) (0x000088 - 0x0000C8) align 8 pad: 0x0000
class UAbilityTask_WaitTargetData : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,525) /* FMulticastInlineDelegate */ __um(ValidData);                                          // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,526) /* FMulticastInlineDelegate */ __um(Cancelled);                                          // 0x0098   (0x0010)  
	class UClass*                                      TargetClass;                                                // 0x00A8   (0x0008)  
	class AGameplayAbilityTargetActor*                 TargetActor;                                                // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00B8   (0x0010)  MISSED
	// class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor); // [0x964ac0] Final|Native|Static|Public|BlueprintCallable 
	// class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class); // [0x964960] Final|Native|Static|Public|BlueprintCallable 
	// void OnTargetDataReplicatedCancelledCallback();                                                                          // [0x962ec0] Final|Native|Public  
	// void OnTargetDataReplicatedCallback(FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);                 // [0x962d30] Final|Native|Public|HasOutParms 
	// void OnTargetDataReadyCallback(FGameplayAbilityTargetDataHandle& Data);                                                  // [0x962bf0] Final|Native|Public|HasOutParms 
	// void OnTargetDataCancelledCallback(FGameplayAbilityTargetDataHandle& Data);                                              // [0x962ab0] Final|Native|Public|HasOutParms 
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);        // [0x962200] Final|Native|Public|BlueprintCallable 
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor*& SpawnedActor); // [0x961ee0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitVelocityChange
/// Size: 0x0028 (40 bytes) (0x000088 - 0x0000B0) align 8 pad: 0x0000
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,527) /* FMulticastInlineDelegate */ __um(OnVelocityChage);                                    // 0x0088   (0x0010)  
	class UMovementComponent*                          CachedMovementComponent;                                    // 0x0098   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00A0   (0x0010)  MISSED
	// class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude); // [0x9620d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetDataHandle
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FGameplayAbilityTargetDataHandle
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEventData
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 pad: 0x0000
struct FGameplayEventData
{ 
	FGameplayTag                                       EventTag;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class AActor*                                      Instigator;                                                 // 0x0010   (0x0008)  
	class AActor*                                      Target;                                                     // 0x0018   (0x0008)  
	class UObject*                                     OptionalObject;                                             // 0x0020   (0x0008)  
	class UObject*                                     OptionalObject2;                                            // 0x0028   (0x0008)  
	FGameplayEffectContextHandle                       ContextHandle;                                              // 0x0030   (0x0018)  
	FGameplayTagContainer                              InstigatorTags;                                             // 0x0048   (0x0020)  
	FGameplayTagContainer                              TargetTags;                                                 // 0x0068   (0x0020)  
	float                                              EventMagnitude;                                             // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0090   (0x0028)  
};

/// Struct /Script/GameplayAbilities.AbilityTriggerData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FAbilityTriggerData
{ 
	FGameplayTag                                       TriggerTag;                                                 // 0x0000   (0x000C)  
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbility
/// Size: 0x0390 (912 bytes) (0x000030 - 0x0003C0) align 8 pad: 0x0000
class UGameplayAbility : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x80];                                      // 0x0030   (0x0080)  MISSED
	FGameplayTagContainer                              AbilityTags;                                                // 0x00B0   (0x0020)  
	bool                                               bReplicateInputDirectly;                                    // 0x00D0   (0x0001)  
	bool                                               RemoteInstanceEnded;                                        // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D2   (0x0004)  MISSED
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                          // 0x00D6   (0x0001)  
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                           // 0x00D7   (0x0001)  
	bool                                               bServerRespectsRemoteAbilityCancellation;                   // 0x00D8   (0x0001)  
	bool                                               bRetriggerInstancedAbility;                                 // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00DA   (0x0006)  MISSED
	FGameplayAbilityActivationInfo                     CurrentActivationInfo;                                      // 0x00E0   (0x0018)  
	FGameplayEventData                                 CurrentEventData;                                           // 0x00F8   (0x00B8)  
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                         // 0x01B0   (0x0001)  
	TEnumAsByte<EGameplayAbilityNetSecurityPolicy>     NetSecurityPolicy;                                          // 0x01B1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x01B2   (0x0006)  MISSED
	class UClass*                                      CostGameplayEffectClass;                                    // 0x01B8   (0x0008)  
	TArray<FAbilityTriggerData>                        AbilityTriggers;                                            // 0x01C0   (0x0010)  
	class UClass*                                      CooldownGameplayEffectClass;                                // 0x01D0   (0x0008)  
	FGameplayTagContainer                              CancelAbilitiesWithTag;                                     // 0x01D8   (0x0020)  
	FGameplayTagContainer                              BlockAbilitiesWithTag;                                      // 0x01F8   (0x0020)  
	FGameplayTagContainer                              ActivationOwnedTags;                                        // 0x0218   (0x0020)  
	FGameplayTagContainer                              ActivationRequiredTags;                                     // 0x0238   (0x0020)  
	FGameplayTagContainer                              ActivationBlockedTags;                                      // 0x0258   (0x0020)  
	FGameplayTagContainer                              SourceRequiredTags;                                         // 0x0278   (0x0020)  
	FGameplayTagContainer                              SourceBlockedTags;                                          // 0x0298   (0x0020)  
	FGameplayTagContainer                              TargetRequiredTags;                                         // 0x02B8   (0x0020)  
	FGameplayTagContainer                              TargetBlockedTags;                                          // 0x02D8   (0x0020)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x02F8   (0x0020)  MISSED
	TArray<class UGameplayTask*>                       ActiveTasks;                                                // 0x0318   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x0328   (0x0010)  MISSED
	class UAnimMontage*                                CurrentMontage;                                             // 0x0338   (0x0008)  
	unsigned char                                      UnknownData06_6[0x60];                                      // 0x0340   (0x0060)  MISSED
	bool                                               bIsActive;                                                  // 0x03A0   (0x0001)  
	bool                                               bIsCancelable;                                              // 0x03A1   (0x0001)  
	bool                                               bIsBlockingOtherAbilities;                                  // 0x03A2   (0x0001)  
	unsigned char                                      UnknownData07_6[0x15];                                      // 0x03A3   (0x0015)  MISSED
	bool                                               bMarkPendingKillOnAbilityEnd;                               // 0x03B8   (0x0001)  
	unsigned char                                      UnknownData08_7[0x7];                                       // 0x03B9   (0x0007)  MISSED
	// void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);                                                           // [0x96e630] Native|Public|BlueprintCallable 
	// void SetCanBeCanceled(bool bCanBeCanceled);                                                                              // [0x96e5a0] Native|Public|BlueprintCallable 
	// void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);                                               // [0x96e280] Native|Protected|BlueprintCallable 
	// void RemoveGrantedByEffect();                                                                                            // [0x96e260] Native|Public|BlueprintCallable 
	// void MontageStop(float OverrideBlendOutTime);                                                                            // [0x96e1e0] Final|Native|Protected|BlueprintCallable 
	// void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName);                                              // [0x96e0e0] Final|Native|Protected|BlueprintCallable 
	// void MontageJumpToSection(FName SectionName);                                                                            // [0x96e040] Final|Native|Protected|BlueprintCallable 
	// FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName);            // [0x96df20] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();                                            // [0x96de80] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);                // [0x96dd40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);                    // [0x25a7960] Event|Protected|BlueprintEvent|Const 
	// void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);                                                                  // [0x96dc90] Native|Protected|BlueprintCallable 
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x25a7960] Event|Protected|BlueprintEvent 
	// bool K2_HasAuthority();                                                                                                  // [0x96dc60] Final|Native|Public|BlueprintCallable|Const 
	// void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);        // [0x96da70] Native|Protected|HasOutParms|BlueprintCallable 
	// void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);                           // [0x96d900] Native|Protected|BlueprintCallable 
	// void K2_EndAbility();                                                                                                    // [0x96d8e0] Native|Protected|BlueprintCallable 
	// void K2_CommitExecute();                                                                                                 // [0x25a7960] Event|Public|BlueprintEvent 
	// bool K2_CommitAbilityCost(bool BroadcastCommitEvent);                                                                    // [0x96d840] Native|Public|BlueprintCallable 
	// bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);                                            // [0x96d750] Native|Public|BlueprintCallable 
	// bool K2_CommitAbility();                                                                                                 // [0x96d720] Native|Public|BlueprintCallable 
	// bool K2_CheckAbilityCost();                                                                                              // [0x96d6f0] Native|Public|BlueprintCallable 
	// bool K2_CheckAbilityCooldown();                                                                                          // [0x96d6c0] Native|Public|BlueprintCallable 
	// void K2_CancelAbility();                                                                                                 // [0x96d6a0] Final|Native|Public|BlueprintCallable 
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer& RelevantTags);                    // [0x25a7960] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData); // [0x96d470] Final|Native|Protected|BlueprintCallable 
	// FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(FGameplayEffectSpecHandle EffectSpecHandle);               // [0x96d380] Final|Native|Protected|BlueprintCallable 
	// void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // [0x96d150] Native|Protected|HasOutParms|BlueprintCallable 
	// void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);     // [0x96cfc0] Native|Protected|BlueprintCallable 
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& eventData);                                                         // [0x25a7960] Event|Protected|HasOutParms|BlueprintEvent 
	// void K2_ActivateAbility();                                                                                               // [0x25a7960] Event|Protected|BlueprintEvent 
	// bool IsLocallyControlled();                                                                                              // [0x96cf90] Final|Native|Public|BlueprintCallable|Const 
	// void InvalidateClientPredictionKey();                                                                                    // [0x96cf70] Final|Native|Public|BlueprintCallable|Const 
	// class USkeletalMeshComponent* GetOwningComponentFromActorInfo();                                                         // [0x96cf40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class AActor* GetOwningActorFromActorInfo();                                                                             // [0x96cf10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FGameplayEffectContextHandle GetGrantedByEffectContext();                                                                // [0x96ce80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UObject* GetCurrentSourceObject();                                                                                 // [0x96ce50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UAnimMontage* GetCurrentMontage();                                                                                 // [0x96ce20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetCooldownTimeRemaining();                                                                                        // [0x96cdf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData);                   // [0x96cc40] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class AActor* GetAvatarActorFromActorInfo();                                                                             // [0x96cc10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FGameplayAbilityActorInfo GetActorInfo();                                                                                // [0x96cb90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();                                                 // [0x96cb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetAbilityLevel();                                                                                               // [0x96cb30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void EndTaskByInstanceName(FName InstanceName);                                                                          // [0x96ca90] Final|Native|Protected|BlueprintCallable 
	// void EndAbilityState(FName OptionalStateNameToEnd);                                                                      // [0x96c9f0] Final|Native|Protected|BlueprintCallable 
	// void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);                                                       // [0x96c900] Final|Native|Protected|BlueprintCallable 
	// void CancelTaskByInstanceName(FName InstanceName);                                                                       // [0x96c860] Final|Native|Protected|BlueprintCallable 
	// void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);             // [0x96c780] Final|Native|Protected|BlueprintCallable 
	// void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove);     // [0x96c660] Final|Native|Protected|BlueprintCallable 
	// void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32_t StacksToRemove);         // [0x96c540] Final|Native|Protected|BlueprintCallable 
	// TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x96c2f0] Final|Native|Protected|BlueprintCallable 
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x96c1d0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbility_CharacterJump
/// Size: 0x0000 (0 bytes) (0x0003C0 - 0x0003C0) align 8 pad: 0x0000
class UGameplayAbility_CharacterJump : public UGameplayAbility
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbility_Montage
/// Size: 0x0038 (56 bytes) (0x0003C0 - 0x0003F8) align 8 pad: 0x0000
class UGameplayAbility_Montage : public UGameplayAbility
{ 
public:
	class UAnimMontage*                                MontageToPlay;                                              // 0x03C0   (0x0008)  
	float                                              PlayRate;                                                   // 0x03C8   (0x0004)  
	FName                                              SectionName;                                                // 0x03CC   (0x000C)  
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                        // 0x03D8   (0x0010)  
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                              // 0x03E8   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayAbilityBlueprint
/// Size: 0x0000 (0 bytes) (0x0000A8 - 0x0000A8) align 8 pad: 0x0000
class UGameplayAbilityBlueprint : public UBlueprint
{ 
public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilityBindInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FGameplayAbilityBindInfo
{ 
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      GameplayAbilityClass;                                       // 0x0008   (0x0008)  
};

/// Class /Script/GameplayAbilities.GameplayAbilitySet
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UGameplayAbilitySet : public UDataAsset
{ 
public:
	TArray<FGameplayAbilityBindInfo>                   Abilities;                                                  // 0x0038   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfo
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 pad: 0x0000
struct FGameplayAbilityTargetingLocationInfo
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         LiteralTransform;                                           // 0x0020   (0x0030)  
	class AActor*                                      SourceActor;                                                // 0x0050   (0x0008)  
	class UMeshComponent*                              SourceComponent;                                            // 0x0058   (0x0008)  
	class UGameplayAbility*                            SourceAbility;                                              // 0x0060   (0x0008)  
	FName                                              SourceSocketName;                                           // 0x0068   (0x000C)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0074   (0x000C)  MISSED
};

/// Struct /Script/GameplayAbilities.WorldReticleParameters
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FWorldReticleParameters
{ 
	FVector                                            AOEScale;                                                   // 0x0000   (0x000C)  
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilterHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FGameplayTargetDataFilterHandle
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor
/// Size: 0x0128 (296 bytes) (0x0002A8 - 0x0003D0) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class AGameplayAbilityTargetActor : public AActor
{ 
public:
	bool                                               ShouldProduceTargetDataOnServer;                            // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02A9   (0x0007)  MISSED
	FGameplayAbilityTargetingLocationInfo              StartLocation;                                              // 0x02B0   (0x0080)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0330   (0x0030)  MISSED
	class APlayerController*                           MasterPC;                                                   // 0x0360   (0x0008)  
	class UGameplayAbility*                            OwningAbility;                                              // 0x0368   (0x0008)  
	bool                                               bDestroyOnConfirmation;                                     // 0x0370   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0371   (0x0007)  MISSED
	class AActor*                                      SourceActor;                                                // 0x0378   (0x0008)  
	FWorldReticleParameters                            ReticleParams;                                              // 0x0380   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x038C   (0x0004)  MISSED
	class UClass*                                      ReticleClass;                                               // 0x0390   (0x0008)  
	FGameplayTargetDataFilterHandle                    Filter;                                                     // 0x0398   (0x0010)  
	bool                                               bDebug;                                                     // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x17];                                      // 0x03A9   (0x0017)  MISSED
	class UAbilitySystemComponent*                     GenericDelegateBoundASC;                                    // 0x03C0   (0x0008)  
	// void ConfirmTargeting();                                                                                                 // [0x972ed0] Native|Public        
	// void CancelTargeting();                                                                                                  // [0x972eb0] Native|Public        
};
#pragma pack(pop)

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Trace
/// Size: 0x0028 (40 bytes) (0x0003C8 - 0x0003F0) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{ 
public:
	float                                              MaxRange;                                                   // 0x03C8   (0x0004)  
	FCollisionProfileName                              TraceProfile;                                               // 0x03CC   (0x000C)  
	bool                                               bTraceAffectsAimPitch;                                      // 0x03D8   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x03D9   (0x000F)  MISSED
};
#pragma pack(pop)

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
/// Size: 0x0028 (40 bytes) (0x0003E8 - 0x000410) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{ 
public:
	float                                              CollisionRadius;                                            // 0x03E8   (0x0004)  
	float                                              CollisionHeight;                                            // 0x03EC   (0x0004)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x03F0   (0x0018)  MISSED
};
#pragma pack(pop)

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
/// Size: 0x0018 (24 bytes) (0x000408 - 0x000420) align 16 pad: 0x0000
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{ 
public:
	class UClass*                                      PlacedActorClass;                                           // 0x0408   (0x0008)  
	class UMaterialInterface*                          PlacedActorMaterial;                                        // 0x0410   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0418   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Radius
/// Size: 0x0008 (8 bytes) (0x0003C8 - 0x0003D0) align 16 pad: 0x0000
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{ 
public:
	float                                              Radius;                                                     // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x03CC   (0x0004)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
/// Size: 0x0008 (8 bytes) (0x0003E8 - 0x0003F0) align 16 pad: 0x0000
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x03E8   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle
/// Size: 0x0020 (32 bytes) (0x0002A8 - 0x0002C8) align 8 pad: 0x0000
class AGameplayAbilityWorldReticle : public AActor
{ 
public:
	FWorldReticleParameters                            Parameters;                                                 // 0x02A8   (0x000C)  
	bool                                               bFaceOwnerFlat;                                             // 0x02B4   (0x0001)  
	bool                                               bSnapToTargetedActor;                                       // 0x02B5   (0x0001)  
	bool                                               bIsTargetValid;                                             // 0x02B6   (0x0001)  
	bool                                               bIsTargetAnActor;                                           // 0x02B7   (0x0001)  
	class APlayerController*                           MasterPC;                                                   // 0x02B8   (0x0008)  
	class AActor*                                      TargetingActor;                                             // 0x02C0   (0x0008)  
	// void SetReticleMaterialParamVector(FName ParamName, FVector Value);                                                      // [0x25a7960] Event|Public|HasDefaults|BlueprintEvent 
	// void SetReticleMaterialParamFloat(FName ParamName, float Value);                                                         // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnValidTargetChanged(bool bNewValue);                                                                               // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnTargetingAnActor(bool bNewValue);                                                                                 // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnParametersInitialized();                                                                                          // [0x25a7960] Event|Public|BlueprintEvent 
	// void FaceTowardSource(bool bFaceIn2D);                                                                                   // [0x972ef0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
/// Size: 0x0018 (24 bytes) (0x0002C8 - 0x0002E0) align 8 pad: 0x0000
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{ 
public:
	class UCapsuleComponent*                           CollisionComponent;                                         // 0x02C8   (0x0008)  
	TArray<class UActorComponent*>                     VisualizationComponents;                                    // 0x02D0   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayCueInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UGameplayCueInterface : public UInterface
{ 
public:
	// void ForwardGameplayCueToParent();                                                                                       // [0x972f80] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters);                // [0x25a7960] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Struct /Script/GameplayAbilities.GameplayCueObjectLibrary
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FGameplayCueObjectLibrary
{ 
	TArray<FString>                                    Paths;                                                      // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	class UObjectLibrary*                              ActorObjectLibrary;                                         // 0x0030   (0x0008)  
	class UObjectLibrary*                              StaticObjectLibrary;                                        // 0x0038   (0x0008)  
	class UGameplayCueSet*                             CueSet;                                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0048   (0x0004)  MISSED
	bool                                               bShouldSyncScan;                                            // 0x004C   (0x0001)  
	bool                                               bShouldAsyncLoad;                                           // 0x004D   (0x0001)  
	bool                                               bShouldSyncLoad;                                            // 0x004E   (0x0001)  
	bool                                               bHasBeenInitialized;                                        // 0x004F   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecForRPC
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 pad: 0x0000
struct FGameplayEffectSpecForRPC
{ 
	class UGameplayEffect*                             Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0018   (0x0018)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0030   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0050   (0x0020)  
	float                                              Level;                                                      // 0x0070   (0x0004)  
	float                                              AbilityLevel;                                               // 0x0074   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCuePendingExecute
/// Size: 0x0178 (376 bytes) (0x000000 - 0x000178) align 8 pad: 0x0000
struct FGameplayCuePendingExecute
{ 
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0000   (0x0020)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0020   (0x0010)  
	EGameplayCuePayloadType                            PayloadType;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	class UAbilitySystemComponent*                     OwningComponent;                                            // 0x0038   (0x0008)  
	FGameplayEffectSpecForRPC                          FromSpec;                                                   // 0x0040   (0x0078)  
	FGameplayCueParameters                             CueParameters;                                              // 0x00B8   (0x00C0)  
};

/// Struct /Script/GameplayAbilities.PreallocationInfo
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 pad: 0x0000
struct FPreallocationInfo
{ 
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0000   (0x0050)  MISSED
	TArray<class UClass*>                              ClassesNeedingPreallocation;                                // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueManager
/// Size: 0x02E0 (736 bytes) (0x000038 - 0x000318) align 8 pad: 0x0000
class UGameplayCueManager : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0038   (0x0018)  MISSED
	FGameplayCueObjectLibrary                          RuntimeGameplayCueObjectLibrary;                            // 0x0050   (0x0050)  
	FGameplayCueObjectLibrary                          EditorGameplayCueObjectLibrary;                             // 0x00A0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x1C8];                                     // 0x00F0   (0x01C8)  MISSED
	TArray<class UClass*>                              LoadedGameplayCueNotifyClasses;                             // 0x02B8   (0x0010)  
	TArray<class UClass*>                              GameplayCueClassesForPreallocation;                         // 0x02C8   (0x0010)  
	TArray<FGameplayCuePendingExecute>                 PendingExecuteCues;                                         // 0x02D8   (0x0010)  
	int32_t                                            GameplayCueSendContextCount;                                // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02EC   (0x0004)  MISSED
	TArray<FPreallocationInfo>                         PreallocationInfoList_Internal;                             // 0x02F0   (0x0010)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x0300   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Actor
/// Size: 0x0068 (104 bytes) (0x0002A8 - 0x000310) align 8 pad: 0x0000
class AGameplayCueNotify_Actor : public AActor
{ 
public:
	bool                                               bAutoDestroyOnRemove;                                       // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02A9   (0x0003)  MISSED
	float                                              AutoDestroyDelay;                                           // 0x02AC   (0x0004)  
	bool                                               WarnIfTimelineIsStillRunning;                               // 0x02B0   (0x0001)  
	bool                                               WarnIfLatentActionIsStillRunning;                           // 0x02B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x02B2   (0x0002)  MISSED
	FGameplayTag                                       GameplayCueTag;                                             // 0x02B4   (0x000C)  
	FName                                              GameplayCueName;                                            // 0x02C0   (0x000C)  
	bool                                               bAutoAttachToOwner;                                         // 0x02CC   (0x0001)  
	bool                                               IsOverride;                                                 // 0x02CD   (0x0001)  
	bool                                               bUniqueInstancePerInstigator;                               // 0x02CE   (0x0001)  
	bool                                               bUniqueInstancePerSourceObject;                             // 0x02CF   (0x0001)  
	bool                                               bAllowMultipleOnActiveEvents;                               // 0x02D0   (0x0001)  
	bool                                               bAllowMultipleWhileActiveEvents;                            // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x02D2   (0x0002)  MISSED
	int32_t                                            NumPreallocatedInstances;                                   // 0x02D4   (0x0004)  
	unsigned char                                      UnknownData03_7[0x38];                                      // 0x02D8   (0x0038)  MISSED
	// bool WhileActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0x979850] Native|Event|Public|HasOutParms|BlueprintEvent 
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x9794b0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// void OnOwnerDestroyed(class AActor* DestroyedActor);                                                                     // [0x979420] Native|Public        
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                              // [0x979080] Native|Event|Public|HasOutParms|BlueprintEvent 
	// bool OnActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x978ce0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void K2_EndGameplayCue();                                                                                                // [0x978cc0] Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Static
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UGameplayCueNotify_Static : public UObject
{ 
public:
	FGameplayTag                                       GameplayCueTag;                                             // 0x0030   (0x000C)  
	FName                                              GameplayCueName;                                            // 0x003C   (0x000C)  
	bool                                               IsOverride;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
	// bool WhileActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0x979a20] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x979680] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                              // [0x979250] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// bool OnActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x978eb0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_HitImpact
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{ 
public:
	class USoundBase*                                  Sound;                                                      // 0x0050   (0x0008)  
	class UParticleSystem*                             ParticleSystem;                                             // 0x0058   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FGameplayCueNotifyData
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FSoftObjectPath                                    GameplayCueNotifyObj;                                       // 0x0010   (0x0020)  
	class UClass*                                      LoadedGameplayCueClass;                                     // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueSet
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000098) align 8 pad: 0x0000
class UGameplayCueSet : public UDataAsset
{ 
public:
	TArray<FGameplayCueNotifyData>                     GameplayCueData;                                            // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UGameplayCueTranslator : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator_Test
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{ 
public:
};

/// Struct /Script/GameplayAbilities.AttributeBasedFloat
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align 8 pad: 0x0000
struct FAttributeBasedFloat
{ 
	FScalableFloat                                     Coefficient;                                                // 0x0000   (0x0028)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0028   (0x0028)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0050   (0x0028)  
	FGameplayEffectAttributeCaptureDefinition          BackingAttribute;                                           // 0x0078   (0x0058)  
	FCurveTableRowHandle                               AttributeCurve;                                             // 0x00D0   (0x0018)  
	EAttributeBasedFloatCalculationType                AttributeCalculationType;                                   // 0x00E8   (0x0001)  
	EGameplayModEvaluationChannel                      FinalChannel;                                               // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00EA   (0x0006)  MISSED
	FGameplayTagContainer                              SourceTagFilter;                                            // 0x00F0   (0x0020)  
	FGameplayTagContainer                              TargetTagFilter;                                            // 0x0110   (0x0020)  
};

/// Struct /Script/GameplayAbilities.CustomCalculationBasedFloat
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 pad: 0x0000
struct FCustomCalculationBasedFloat
{ 
	class UClass*                                      CalculationClassMagnitude;                                  // 0x0000   (0x0008)  
	FScalableFloat                                     Coefficient;                                                // 0x0008   (0x0028)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0030   (0x0028)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0058   (0x0028)  
	FCurveTableRowHandle                               FinalLookupCurve;                                           // 0x0080   (0x0018)  
};

/// Struct /Script/GameplayAbilities.SetByCallerFloat
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FSetByCallerFloat
{ 
	int32_t                                            DataKey;                                                    // 0x0000   (0x0004)  
	FGameplayTag                                       DataTag;                                                    // 0x0004   (0x000C)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifierMagnitude
/// Size: 0x0208 (520 bytes) (0x000000 - 0x000208) align 8 pad: 0x0000
struct FGameplayEffectModifierMagnitude
{ 
	EGameplayEffectMagnitudeCalculation                MagnitudeCalculationType;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FScalableFloat                                     ScalableFloatMagnitude;                                     // 0x0008   (0x0028)  
	FAttributeBasedFloat                               AttributeBasedMagnitude;                                    // 0x0030   (0x0130)  
	FCustomCalculationBasedFloat                       CustomMagnitude;                                            // 0x0160   (0x0098)  
	FSetByCallerFloat                                  SetByCallerMagnitude;                                       // 0x01F8   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayModEvaluationChannelSettings
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FGameplayModEvaluationChannelSettings
{ 
	EGameplayModEvaluationChannel                      Channel;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayTagRequirements
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FGameplayTagRequirements
{ 
	FGameplayTagContainer                              RequireTags;                                                // 0x0000   (0x0020)  
	FGameplayTagContainer                              IgnoreTags;                                                 // 0x0020   (0x0020)  
	bool                                               bRequireLogicalOperator;                                    // 0x0040   (0x0001)  
	bool                                               bIgnoreLogicalOperator;                                     // 0x0041   (0x0001)  
	bool                                               bCombineLogicalOperator;                                    // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayModifierInfo
/// Size: 0x0308 (776 bytes) (0x000000 - 0x000308) align 8 pad: 0x0000
struct FGameplayModifierInfo
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FScalableFloat                                     Magnitude;                                                  // 0x0040   (0x0028)  
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0068   (0x0208)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0270   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0271   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0278   (0x0048)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x02C0   (0x0048)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
/// Size: 0x0308 (776 bytes) (0x000000 - 0x000308) align 8 pad: 0x0000
struct FGameplayEffectExecutionScopedModifierInfo
{ 
	FGameplayEffectAttributeCaptureDefinition          CapturedAttribute;                                          // 0x0000   (0x0058)  
	FGameplayTag                                       TransientAggregatorIdentifier;                              // 0x0058   (0x000C)  
	EGameplayEffectScopedModifierAggregatorType        AggregatorType;                                             // 0x0064   (0x0001)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0065   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0066   (0x0002)  MISSED
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0068   (0x0208)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0270   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0271   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0278   (0x0048)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x02C0   (0x0048)  
};

/// Struct /Script/GameplayAbilities.ConditionalGameplayEffect
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FConditionalGameplayEffect
{ 
	class UClass*                                      EffectClass;                                                // 0x0000   (0x0008)  
	FGameplayTagContainer                              RequiredSourceTags;                                         // 0x0008   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionDefinition
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FGameplayEffectExecutionDefinition
{ 
	class UClass*                                      CalculationClass;                                           // 0x0000   (0x0008)  
	FGameplayTagContainer                              PassedInTags;                                               // 0x0008   (0x0020)  
	TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                       // 0x0028   (0x0010)  
	TArray<class UClass*>                              ConditionalGameplayEffectClasses;                           // 0x0038   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x0048   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectCue
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FGameplayEffectCue
{ 
	FGameplayAttribute                                 MagnitudeAttribute;                                         // 0x0000   (0x0038)  
	float                                              MinLevel;                                                   // 0x0038   (0x0004)  
	float                                              MaxLevel;                                                   // 0x003C   (0x0004)  
	FGameplayTagContainer                              GameplayCueTags;                                            // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.InheritedTagContainer
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FInheritedTagContainer
{ 
	FGameplayTagContainer                              CombinedTags;                                               // 0x0000   (0x0020)  
	FGameplayTagContainer                              Added;                                                      // 0x0020   (0x0020)  
	FGameplayTagContainer                              Removed;                                                    // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectQuery
/// Size: 0x0158 (344 bytes) (0x000000 - 0x000158) align 8 pad: 0x0000
struct FGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	SDK_UNDEFINED(20,528) /* FDelegateProperty */      __um(CustomMatchDelegate_BP);                               // 0x0010   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FGameplayTagQuery                                  OwningTagQuery;                                             // 0x0028   (0x0048)  
	FGameplayTagQuery                                  EffectTagQuery;                                             // 0x0070   (0x0048)  
	FGameplayTagQuery                                  SourceTagQuery;                                             // 0x00B8   (0x0048)  
	FGameplayAttribute                                 ModifyingAttribute;                                         // 0x0100   (0x0038)  
	class UObject*                                     EffectSource;                                               // 0x0138   (0x0008)  
	class UClass*                                      EffectDefinition;                                           // 0x0140   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0148   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayEffect
/// Size: 0x08C8 (2248 bytes) (0x000030 - 0x0008F8) align 8 pad: 0x0000
class UGameplayEffect : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	int64_t                                            GameplayEffectId;                                           // 0x0038   (0x0008)  
	TArray<int64_t>                                    OverflowEffectIds;                                          // 0x0040   (0x0010)  
	TArray<int64_t>                                    PrematureExpirationEffectClassIds;                          // 0x0050   (0x0010)  
	TArray<int64_t>                                    RoutineExpirationEffectClassIds;                            // 0x0060   (0x0010)  
	EGameplayEffectDurationType                        DurationPolicy;                                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	FGameplayEffectModifierMagnitude                   DurationMagnitude;                                          // 0x0078   (0x0208)  
	FScalableFloat                                     Period;                                                     // 0x0280   (0x0028)  
	bool                                               bExecutePeriodicEffectOnApplication;                        // 0x02A8   (0x0001)  
	EGameplayEffectPeriodInhibitionRemovedPolicy       PeriodicInhibitionPolicy;                                   // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x02AA   (0x0006)  MISSED
	TArray<FGameplayModifierInfo>                      Modifiers;                                                  // 0x02B0   (0x0010)  
	TArray<FGameplayEffectExecutionDefinition>         Executions;                                                 // 0x02C0   (0x0010)  
	FScalableFloat                                     ChanceToApplyToTarget;                                      // 0x02D0   (0x0028)  
	TArray<class UClass*>                              ApplicationRequirements;                                    // 0x02F8   (0x0010)  
	TArray<class UClass*>                              TargetEffectClasses;                                        // 0x0308   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x0318   (0x0010)  
	TArray<class UClass*>                              OverflowEffects;                                            // 0x0328   (0x0010)  
	bool                                               bDenyOverflowApplication;                                   // 0x0338   (0x0001)  
	bool                                               bClearStackOnOverflow;                                      // 0x0339   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x033A   (0x0006)  MISSED
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                           // 0x0340   (0x0010)  
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                             // 0x0350   (0x0010)  
	bool                                               bRequireModifierSuccessToTriggerCues;                       // 0x0360   (0x0001)  
	bool                                               bSuppressStackingCues;                                      // 0x0361   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x0362   (0x0006)  MISSED
	TArray<FGameplayEffectCue>                         GameplayCues;                                               // 0x0368   (0x0010)  
	TArray<int64_t>                                    GameplayCueIds;                                             // 0x0378   (0x0010)  
	class UGameplayEffectUIData*                       UIData;                                                     // 0x0388   (0x0008)  
	FInheritedTagContainer                             InheritableGameplayEffectTags;                              // 0x0390   (0x0060)  
	FInheritedTagContainer                             InheritableOwnedTagsContainer;                              // 0x03F0   (0x0060)  
	FGameplayTagRequirements                           OngoingTagRequirements;                                     // 0x0450   (0x0048)  
	FGameplayTagRequirements                           ApplicationSourceTagRequirements;                           // 0x0498   (0x0048)  
	FGameplayTagRequirements                           ApplicationTagRequirements;                                 // 0x04E0   (0x0048)  
	FGameplayTagRequirements                           RemovalTagRequirements;                                     // 0x0528   (0x0048)  
	FInheritedTagContainer                             RemoveGameplayEffectsWithTags;                              // 0x0570   (0x0060)  
	FGameplayTagRequirements                           GrantedApplicationImmunityTags;                             // 0x05D0   (0x0048)  
	FGameplayEffectQuery                               GrantedApplicationImmunityQuery;                            // 0x0618   (0x0158)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0770   (0x0008)  MISSED
	FGameplayEffectQuery                               RemoveGameplayEffectQuery;                                  // 0x0778   (0x0158)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x08D0   (0x0001)  MISSED
	EGameplayEffectStackingType                        StackingType;                                               // 0x08D1   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x08D2   (0x0002)  MISSED
	int32_t                                            StackLimitCount;                                            // 0x08D4   (0x0004)  
	int32_t                                            StackAppendCount;                                           // 0x08D8   (0x0004)  
	EGameplayEffectStackingDurationPolicy              StackDurationRefreshPolicy;                                 // 0x08DC   (0x0001)  
	EGameplayEffectStackingPeriodPolicy                StackPeriodResetPolicy;                                     // 0x08DD   (0x0001)  
	EGameplayEffectStackingExpirationPolicy            StackExpirationPolicy;                                      // 0x08DE   (0x0001)  
	unsigned char                                      UnknownData08_6[0x1];                                       // 0x08DF   (0x0001)  MISSED
	int32_t                                            StackExpirationRemoveNumber;                                // 0x08E0   (0x0004)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x08E4   (0x0004)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilities;                                           // 0x08E8   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectCalculation
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UGameplayEffectCalculation : public UObject
{ 
public:
	TArray<FGameplayEffectAttributeCaptureDefinition>  RelevantAttributesToCapture;                                // 0x0030   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UGameplayEffectCustomApplicationRequirement : public UObject
{ 
public:
	// bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC); // [0x97dc50] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayEffectExecutionCalculation
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{ 
public:
	bool                                               bRequiresPassedInTags;                                      // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UGameplayEffectUIData : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData_TextOnly
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{ 
public:
	FText                                              Description;                                                // 0x0030   (0x0018)  
};

/// Class /Script/GameplayAbilities.GameplayModMagnitudeCalculation
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{ 
public:
	bool                                               bAllowNonNetAuthorityDependencyRegistration;                // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagReponsePair
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FGameplayTagReponsePair
{ 
	FGameplayTag                                       Tag;                                                        // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UClass*                                      ResponseGameplayEffect;                                     // 0x0010   (0x0008)  
	TArray<class UClass*>                              ResponseGameplayEffects;                                    // 0x0018   (0x0010)  
	int32_t                                            SoftCountCap;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagResponseTableEntry
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FGameplayTagResponseTableEntry
{ 
	FGameplayTagReponsePair                            Positive;                                                   // 0x0000   (0x0030)  
	FGameplayTagReponsePair                            Negative;                                                   // 0x0030   (0x0030)  
};

/// Class /Script/GameplayAbilities.GameplayTagReponseTable
/// Size: 0x01C0 (448 bytes) (0x000038 - 0x0001F8) align 8 pad: 0x0000
class UGameplayTagReponseTable : public UDataAsset
{ 
public:
	TArray<FGameplayTagResponseTableEntry>             Entries;                                                    // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x1B0];                                     // 0x0048   (0x01B0)  MISSED
	// void TagResponseEvent(FGameplayTag Tag, int32_t NewCount, class UAbilitySystemComponent* ASC, int32_t idx);              // [0x97ddb0] Final|Native|Protected 
};

/// Class /Script/GameplayAbilities.TickableAttributeSetInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UTickableAttributeSetInterface : public UInterface
{ 
public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FGameplayEffectSpecHandle
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectRemovalInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FGameplayEffectRemovalInfo
{ 
	bool                                               bPrematureRemoval;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            StackCount;                                                 // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
};

/// Struct /Script/GameplayAbilities.ServerAbilityRPCBatch
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FServerAbilityRPCBatch
{ 
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0008   (0x0010)  
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0018   (0x0028)  
	bool                                               InputPressed;                                               // 0x0040   (0x0001)  
	bool                                               Ended;                                                      // 0x0041   (0x0001)  
	bool                                               Started;                                                    // 0x0042   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Struct /Script/GameplayAbilities.AttributeMetaData
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 8 pad: 0x0000
struct FAttributeMetaData : FTableRowBase
{ 
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              MinValue;                                                   // 0x000C   (0x0004)  
	float                                              MaxValue;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            DerivedAttributeInfo;                                       // 0x0018   (0x0010)  
	bool                                               bCanStack;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAttributeData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FGameplayAttributeData
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              CurrentValue;                                               // 0x000C   (0x0004)  
	int32_t                                            AttributeType;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilter
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FGameplayTargetDataFilter
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      SelfActor;                                                  // 0x0008   (0x0008)  
	class UClass*                                      RequiredActorClass;                                         // 0x0010   (0x0008)  
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                                 // 0x0018   (0x0001)  
	bool                                               bReverseFilter;                                             // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
/// Size: 0x0098 (152 bytes) (0x000008 - 0x0000A0) align 8 pad: 0x0000
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData
{ 
	FHitResult                                         HitResult;                                                  // 0x0008   (0x0094)  
	bool                                               bHitReplaced;                                               // 0x009C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x009D   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_ActorArray
/// Size: 0x0098 (152 bytes) (0x000008 - 0x0000A0) align 16 pad: 0x0000
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x0080)  
	SDK_UNDEFINED(16,529) /* TArray<TWeakObjectPtr<AActor*>> */ __um(TargetActorArray);                            // 0x0090   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_LocationInfo
/// Size: 0x0108 (264 bytes) (0x000008 - 0x000110) align 16 pad: 0x0000
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x0080)  
	FGameplayAbilityTargetingLocationInfo              TargetLocation;                                             // 0x0090   (0x0080)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FGameplayAbilitySpecHandleAndPredictionKey
{ 
	FGameplayAbilitySpecHandle                         AbilityHandle;                                              // 0x0000   (0x0004)  
	int32_t                                            PredictionKeyAtCreation;                                    // 0x0004   (0x0004)  
};

/// Struct /Script/GameplayAbilities.AbilityTaskDebugMessage
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FAbilityTaskDebugMessage
{ 
	class UGameplayTask*                               FromTask;                                                   // 0x0000   (0x0008)  
	FString                                            Message;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/GameplayAbilities.AbilityEndedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FAbilityEndedData
{ 
	class UGameplayAbility*                            AbilityThatEnded;                                           // 0x0000   (0x0008)  
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0008   (0x0004)  
	bool                                               bReplicateEndAbility;                                       // 0x000C   (0x0001)  
	bool                                               bWasCancelled;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActorInfo
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FGameplayAbilityActorInfo
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	SDK_UNDEFINED(8,530) /* TWeakObjectPtr<AActor*> */ __um(OwnerActor);                                           // 0x0008   (0x0008)  
	SDK_UNDEFINED(8,531) /* TWeakObjectPtr<AActor*> */ __um(AvatarActor);                                          // 0x0010   (0x0008)  
	SDK_UNDEFINED(8,532) /* TWeakObjectPtr<APlayerController*> */ __um(PlayerController);                          // 0x0018   (0x0008)  
	SDK_UNDEFINED(8,533) /* TWeakObjectPtr<UAbilitySystemComponent*> */ __um(AbilitySystemComponent);              // 0x0020   (0x0008)  
	SDK_UNDEFINED(8,534) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(SkeletalMeshComponent);                // 0x0028   (0x0008)  
	SDK_UNDEFINED(8,535) /* TWeakObjectPtr<UAnimInstance*> */ __um(AnimInstance);                                  // 0x0030   (0x0008)  
	SDK_UNDEFINED(8,536) /* TWeakObjectPtr<UMovementComponent*> */ __um(MovementComponent);                        // 0x0038   (0x0008)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxy
/// Size: 0x0240 (576 bytes) (0x000000 - 0x000240) align 16 pad: 0x0000
struct FMinimalGameplayCueReplicationProxy
{ 
	unsigned char                                      UnknownData00_7[0x230];                                     // 0x0000   (0x0230)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0230   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0238   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTag
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FGameplayCueTag
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x000C)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationLink
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FGameplayCueTranslationLink
{ 
	class UGameplayCueTranslator*                      RulesCDO;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNodeIndex
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FGameplayCueTranslatorNodeIndex
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNode
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FGameplayCueTranslatorNode
{ 
	TArray<FGameplayCueTranslationLink>                Links;                                                      // 0x0000   (0x0010)  
	FGameplayCueTranslatorNodeIndex                    CachedIndex;                                                // 0x0010   (0x0004)  
	FGameplayTag                                       CachedGameplayTag;                                          // 0x0014   (0x000C)  
	FName                                              CachedGameplayTagName;                                      // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_7[0x54];                                      // 0x002C   (0x0054)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationManager
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FGameplayCueTranslationManager
{ 
	TArray<FGameplayCueTranslatorNode>                 TranslationLUT;                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,537) /* TMap<FName, FGameplayCueTranslatorNodeIndex> */ __um(TranslationNameToIndexMap);      // 0x0010   (0x0050)  
	class UGameplayTagsManager*                        TagManager;                                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectQuery
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 pad: 0x0000
struct FActiveGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayModifierEvaluatedData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FGameplayModifierEvaluatedData
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Magnitude;                                                  // 0x003C   (0x0004)  
	FActiveGameplayEffectHandle                        Handle;                                                     // 0x0040   (0x0008)  
	bool                                               IsValid;                                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionOutput
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FGameplayEffectCustomExecutionOutput
{ 
	TArray<FGameplayModifierEvaluatedData>             OutputModifiers;                                            // 0x0000   (0x0010)  
	bool                                               bTriggerConditionalGameplayEffects : 1;                     // 0x0010:0 (0x0001)  
	bool                                               bHandledStackCountManually : 1;                             // 0x0010:1 (0x0001)  
	bool                                               bHandledGameplayCuesManually : 1;                           // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionParameters
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 pad: 0x0000
struct FGameplayEffectCustomExecutionParameters
{ 
	unsigned char                                      UnknownData00_2[0xF0];                                      // 0x0000   (0x00F0)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMapping
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FGameplayTagBlueprintPropertyMapping
{ 
	FGameplayTag                                       TagToMap;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x000C   (0x0024)  MISSED
	FName                                              PropertyName;                                               // 0x0030   (0x000C)  
	FGuid                                              PropertyGuid;                                               // 0x003C   (0x0010)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x004C   (0x000C)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FGameplayTagBlueprintPropertyMap
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	TArray<FGameplayTagBlueprintPropertyMapping>       PropertyMappings;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectContext
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FGameplayEffectContext
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	SDK_UNDEFINED(8,538) /* TWeakObjectPtr<AActor*> */ __um(Instigator);                                           // 0x0008   (0x0008)  
	SDK_UNDEFINED(8,539) /* TWeakObjectPtr<AActor*> */ __um(EffectCauser);                                         // 0x0010   (0x0008)  
	SDK_UNDEFINED(8,540) /* TWeakObjectPtr<UGameplayAbility*> */ __um(AbilityCDO);                                 // 0x0018   (0x0008)  
	SDK_UNDEFINED(8,541) /* TWeakObjectPtr<UGameplayAbility*> */ __um(AbilityInstanceNotReplicated);               // 0x0020   (0x0008)  
	int32_t                                            AbilityLevel;                                               // 0x0028   (0x0004)  
	SDK_UNDEFINED(8,542) /* TWeakObjectPtr<UObject*> */ __um(SourceObject);                                        // 0x002C   (0x0008)  
	SDK_UNDEFINED(8,543) /* TWeakObjectPtr<UAbilitySystemComponent*> */ __um(InstigatorAbilitySystemComponent);    // 0x0034   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	SDK_UNDEFINED(16,544) /* TArray<TWeakObjectPtr<AActor*>> */ __um(Actors);                                      // 0x0040   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	FVector                                            WorldOrigin;                                                // 0x0060   (0x000C)  
	bool                                               bHasWorldOrigin : 1;                                        // 0x006C:0 (0x0001)  
	bool                                               bReplicateSourceObject : 1;                                 // 0x006C:1 (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

