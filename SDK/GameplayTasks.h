
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/GameplayTasks.ETaskResourceOverlapPolicy
/// Size: 0x01 (1 bytes)
enum class ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop                                           = 0,
	ETaskResourceOverlapPolicy__StartAtEnd                                           = 1
};

/// Enum /Script/GameplayTasks.EGameplayTaskRunResult
/// Size: 0x01 (1 bytes)
enum class EGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult__Error                                                    = 0,
	EGameplayTaskRunResult__Failed                                                   = 1,
	EGameplayTaskRunResult__Success_Paused                                           = 2,
	EGameplayTaskRunResult__Success_Active                                           = 3,
	EGameplayTaskRunResult__Success_Finished                                         = 4
};

/// Enum /Script/GameplayTasks.EGameplayTaskState
/// Size: 0x01 (1 bytes)
enum class EGameplayTaskState : uint8_t
{
	EGameplayTaskState__Uninitialized                                                = 0,
	EGameplayTaskState__AwaitingActivation                                           = 1,
	EGameplayTaskState__Paused                                                       = 2,
	EGameplayTaskState__Active                                                       = 3,
	EGameplayTaskState__Finished                                                     = 4
};

/// Class /Script/GameplayTasks.GameplayTasksComponent
/// Size: 0x0070 (112 bytes) (0x0000C0 - 0x000130) align 8 pad: 0x0000
class UGameplayTasksComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0xC];                                       // 0x00C0   (0x000C)  MISSED
	bool                                               bIsNetDirty : 1;                                            // 0x00CC:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	TArray<class UGameplayTask*>                       SimulatedTasks;                                             // 0x00D0   (0x0010)  
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                          // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00F0   (0x0010)  MISSED
	TArray<class UGameplayTask*>                       TickingTasks;                                               // 0x0100   (0x0010)  
	TArray<class UGameplayTask*>                       KnownTasks;                                                 // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,393) /* FMulticastInlineDelegate */ __um(OnClaimedResourcesChange);                           // 0x0120   (0x0010)  
	// void OnRep_SimulatedTasks();                                                                                             // [0x47be330] Final|Native|Public  
	// EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<Class> TaskOwner, class UGameplayTask* Task, char Priority, TArray<UClass*> AdditionalRequiredResources, TArray<UClass*> AdditionalClaimedResources); // [0x47be0e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 8 pad: 0x0000
class UGameplayTask : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	FName                                              InstanceName;                                               // 0x0038   (0x000C)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0044   (0x0002)  MISSED
	ETaskResourceOverlapPolicy                         ResourceOverlapPolicy;                                      // 0x0046   (0x0001)  
	unsigned char                                      UnknownData02_6[0x21];                                      // 0x0047   (0x0021)  MISSED
	class UGameplayTask*                               ChildTask;                                                  // 0x0068   (0x0008)  
	// void ReadyForActivation();                                                                                               // [0x47be350] Final|Native|Public|BlueprintCallable 
	// void GenericGameplayTaskDelegate__DelegateSignature();                                                                   // [0x25a7960] MulticastDelegate|Public|Delegate 
	// void EndTask();                                                                                                          // [0x47bdff0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_ClaimResource
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UGameplayTask_ClaimResource : public UGameplayTask
{ 
public:
	// class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<Class> InTaskOwner, TArray<UClass*> ResourceClasses, char Priority, FName TaskInstanceName); // [0x47bde00] Final|Native|Static|Public|BlueprintCallable 
	// class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<Class> InTaskOwner, class UClass* ResourceClass, char Priority, FName TaskInstanceName); // [0x47bdc90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_SpawnActor
/// Size: 0x0040 (64 bytes) (0x000070 - 0x0000B0) align 8 pad: 0x0000
class UGameplayTask_SpawnActor : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,394) /* FMulticastInlineDelegate */ __um(Success);                                            // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,395) /* FMulticastInlineDelegate */ __um(DidNotSpawn);                                        // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0090   (0x0018)  MISSED
	class UClass*                                      ClassToSpawn;                                               // 0x00A8   (0x0008)  
	// class UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<Class> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority); // [0x47be370] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);                                 // [0x47be010] Native|Public|BlueprintCallable 
	// bool BeginSpawningActor(class UObject* WorldContextObject, class AActor*& SpawnedActor);                                 // [0x47bdbb0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
/// Size: 0x0030 (48 bytes) (0x000070 - 0x0000A0) align 8 pad: 0x0000
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,396) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,397) /* FMulticastInlineDelegate */ __um(OnTimeExpired);                                      // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Class /Script/GameplayTasks.GameplayTask_WaitDelay
/// Size: 0x0028 (40 bytes) (0x000070 - 0x000098) align 8 pad: 0x0000
class UGameplayTask_WaitDelay : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,398) /* FMulticastInlineDelegate */ __um(OnTick);                                             // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,399) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED
	// void TickTask(float DeltaTime);                                                                                          // [0x95d960] Final|Native|Public  
	// class UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<Class> TaskOwner, float Time, char Priority, bool NeedTick); // [0x47be540] Final|Native|Static|Public|BlueprintCallable 
	// void TaskDelayDelegate__DelegateSignature();                                                                             // [0x25a7960] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayTasks.GameplayTaskOwnerInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UGameplayTaskOwnerInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayTasks.GameplayTaskResource
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UGameplayTaskResource : public UObject
{ 
public:
	int32_t                                            ManualResourceID;                                           // 0x0030   (0x0004)  
	int8_t                                             AutoResourceID;                                             // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	bool                                               bManuallySetID : 1;                                         // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/GameplayTasks.GameplayResourceSet
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 pad: 0x0000
struct FGameplayResourceSet
{ 
	unsigned char                                      UnknownData00_2[0x2];                                       // 0x0000   (0x0002)  MISSED
};

