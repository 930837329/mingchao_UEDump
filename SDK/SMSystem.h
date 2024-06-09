
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/SMSystem.ESMNetworkConfigurationType
/// Size: 0x01 (1 bytes)
enum class ESMNetworkConfigurationType : uint8_t
{
	SM_Client                                                                        = 0,
	SM_Server                                                                        = 1,
	SM_ClientAndServer                                                               = 2
};

/// Enum /Script/SMSystem.ESMConditionalEvaluationType
/// Size: 0x01 (1 bytes)
enum class ESMConditionalEvaluationType : uint8_t
{
	ESMConditionalEvaluationType__SM_Graph                                           = 0,
	ESMConditionalEvaluationType__SM_NodeInstance                                    = 1,
	ESMConditionalEvaluationType__SM_AlwaysFalse                                     = 2,
	ESMConditionalEvaluationType__SM_AlwaysTrue                                      = 3
};

/// Enum /Script/SMSystem.ESMExposedFunctionExecutionType
/// Size: 0x01 (1 bytes)
enum class ESMExposedFunctionExecutionType : uint8_t
{
	ESMExposedFunctionExecutionType__SM_Graph                                        = 0,
	ESMExposedFunctionExecutionType__SM_NodeInstance                                 = 1,
	ESMExposedFunctionExecutionType__SM_None                                         = 2
};

/// Enum /Script/SMSystem.ETransitionRule
/// Size: 0x01 (1 bytes)
enum class ETransitionRule : uint8_t
{
	TransitionRule_Priority                                                          = 0,
	TransitionRule_Weight                                                            = 1
};

/// Enum /Script/SMSystem.ETakeControlType
/// Size: 0x01 (1 bytes)
enum class ETakeControlType : uint8_t
{
	TakeControl_Default                                                              = 0,
	TakeControl_ReEnter                                                              = 1
};

/// Enum /Script/SMSystem.ESMTransactionType
/// Size: 0x01 (1 bytes)
enum class ESMTransactionType : uint8_t
{
	ESMTransactionType__SM_Unknown                                                   = 0,
	ESMTransactionType__SM_Transition                                                = 1,
	ESMTransactionType__SM_State                                                     = 2,
	ESMTransactionType__SM_FullSync                                                  = 3,
	ESMTransactionType__SM_Start                                                     = 4,
	ESMTransactionType__SM_Stop                                                      = 5,
	ESMTransactionType__SM_Initialize                                                = 6,
	ESMTransactionType__SM_Shutdown                                                  = 7
};

/// Enum /Script/SMSystem.ETransitionPredictionType
/// Size: 0x01 (1 bytes)
enum class ETransitionPredictionType : uint8_t
{
	Prediction_Server                                                                = 0,
	Prediction_Autonomous                                                            = 1,
	Prediction_Simulated                                                             = 2
};

/// Class /Script/SMSystem.SMInstanceInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class USMInstanceInterface : public UInterface
{ 
public:
};

/// Class /Script/SMSystem.SMStateMachineInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class USMStateMachineInterface : public UInterface
{ 
public:
};

/// Class /Script/SMSystem.SMStateMachineNetworkedInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class USMStateMachineNetworkedInterface : public UInterface
{ 
public:
	// bool IsSimulatedProxy();                                                                                                 // [0x17730f0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsConfiguredForNetworking();                                                                                        // [0x1773060] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool HasAuthority();                                                                                                     // [0x1772d50] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SMSystem.SMBlueprint
/// Size: 0x0008 (8 bytes) (0x0000A8 - 0x0000B0) align 8 pad: 0x0000
class USMBlueprint : public UBlueprint
{ 
public:
	int32_t                                            AssetVersion;                                               // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/SMSystem.SMNodeBlueprint
/// Size: 0x0000 (0 bytes) (0x0000A8 - 0x0000A8) align 8 pad: 0x0000
class USMNodeBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/SMSystem.SMBlueprintGeneratedClass
/// Size: 0x0020 (32 bytes) (0x000338 - 0x000358) align 8 pad: 0x0000
class USMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
	FGuid                                              RootGuid;                                                   // 0x0338   (0x0010)  
	TArray<class USMStateMachineInstance*>             AllRootInstances;                                           // 0x0348   (0x0010)  
};

/// Class /Script/SMSystem.SMNodeBlueprintGeneratedClass
/// Size: 0x0000 (0 bytes) (0x000338 - 0x000338) align 8 pad: 0x0000
class USMNodeBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
};

/// Class /Script/SMSystem.SMNodeInstance
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class USMNodeInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0030   (0x0010)  MISSED
	FGuid                                              TemplateGuid;                                               // 0x0040   (0x0010)  
	// bool IsInEndState();                                                                                                     // [0xc03d00] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsActive();                                                                                                         // [0x177a750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool HasUpdated();                                                                                                       // [0x1779ea0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetTimeInState();                                                                                                  // [0x1779d60] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMInstance* GetStateMachineInstance(bool bTopMostInstance);                                                       // [0x1779cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMStateMachineInstance* GetOwningStateMachineNodeInstance();                                                      // [0x17799f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetNodeName();                                                                                                   // [0x17798b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TScriptInterface<Class> GetNetworkInterface();                                                                           // [0x1779720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FGuid GetGuid();                                                                                                         // [0x17795d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class UObject* GetContext();                                                                                             // [0x17794e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SMSystem.SMStateInstance_Base
/// Size: 0x0098 (152 bytes) (0x000050 - 0x0000E8) align 8 pad: 0x0000
class USMStateInstance_Base : public USMNodeInstance
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0050   (0x0008)  MISSED
	SDK_UNDEFINED(16,914) /* FMulticastInlineDelegate */ __um(OnStateBeginEvent);                                  // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,915) /* FMulticastInlineDelegate */ __um(OnPostStateBeginEvent);                              // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,916) /* FMulticastInlineDelegate */ __um(OnStateUpdateEvent);                                 // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,917) /* FMulticastInlineDelegate */ __um(OnStateEndEvent);                                    // 0x0088   (0x0010)  
	TEnumAsByte<ETakeControlType>                      TakeControlType;                                            // 0x0098   (0x0001)  
	TEnumAsByte<ETransitionRule>                       TransitionRule;                                             // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x009A   (0x0006)  MISSED
	class UASMTask*                                    Task;                                                       // 0x00A0   (0x0008)  
	TArray<class UASMBindState*>                       BindStates;                                                 // 0x00A8   (0x0010)  
	TArray<class UASMAction*>                          OnEnterActions;                                             // 0x00B8   (0x0010)  
	TArray<class UASMAction*>                          OnExitActions;                                              // 0x00C8   (0x0010)  
	FString                                            NodeName;                                                   // 0x00D8   (0x0010)  
	// bool SwitchToLinkedStateByTransition(class USMTransitionInstance* TransitionInstance, bool bRequireTransitionToPass, bool bActivateNow); // [0x177b870] Final|Native|Public|BlueprintCallable 
	// bool SwitchToLinkedStateByName(FString NextStateName, bool bRequireTransitionToPass, bool bActivateNow);                 // [0x177b730] Final|Native|Public|BlueprintCallable 
	// bool SwitchToLinkedState(class USMStateInstance_Base* NextStateInstance, bool bRequireTransitionToPass, bool bActivateNow); // [0x177b610] Final|Native|Public|BlueprintCallable 
	// void SetExcludeFromAnyState(bool bValue);                                                                                // [0x177b4f0] Final|Native|Public|BlueprintCallable 
	// void SetEvalTransitionsOnStart(bool bValue);                                                                             // [0x177b460] Final|Native|Public|BlueprintCallable 
	// void SetDisableTickTransitionEvaluation(bool bValue);                                                                    // [0x177b3d0] Final|Native|Public|BlueprintCallable 
	// void SetAlwaysUpdate(bool bValue);                                                                                       // [0x177b2b0] Final|Native|Public|BlueprintCallable 
	// void SetActive(bool bValue, bool bSetAllParents, bool bActivateNow);                                                     // [0x177b180] Final|Native|Public|BlueprintCallable 
	// bool IsStateMachine();                                                                                                   // [0x177a7e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsEntryState();                                                                                                     // [0x177a780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMTransitionInstance* GetTransitionToTake();                                                                      // [0x1779e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMTransitionInstance* GetTransitionByIndex(int32_t Index);                                                        // [0x1779dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetStateInfo(FSMStateInfo& State);                                                                                  // [0x1779c00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// FDateTime GetStartTime();                                                                                                // [0x1779bd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// float GetServerTimeInState(bool& bOutUsedLocalTime);                                                                     // [0x1779b30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetPreviousStateByName(FString StateName);                                                  // [0x1779a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMTransitionInstance* GetPreviousActiveTransition();                                                              // [0x1779a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetPreviousActiveState();                                                                   // [0x1779a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetOutgoingTransitions(TArray<USMTransitionInstance*>& Transitions, bool bExcludeAlwaysFalse);                      // [0x17798f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetNextStateByTransitionIndex(int32_t Index);                                               // [0x1779810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetNextStateByName(FString StateName);                                                      // [0x1779760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetIncomingTransitions(TArray<USMTransitionInstance*>& Transitions, bool bExcludeAlwaysFalse);                      // [0x1779600] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetExcludeFromAnyState();                                                                                           // [0x17795b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetEvalTransitionsOnStart();                                                                                        // [0x1779580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetDisableTickTransitionEvaluation();                                                                               // [0x1779550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetAlwaysUpdate();                                                                                                  // [0x17794b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void EvaluateTransitions();                                                                                              // [0x1779490] Final|Native|Public|BlueprintCallable 
	// bool AreAllOutgoingTransitionsFromAnAnyState();                                                                          // [0x1779000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool AreAllIncomingTransitionsFromAnAnyState();                                                                          // [0x1778fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SMSystem.SMConduitInstance
/// Size: 0x0008 (8 bytes) (0x0000E8 - 0x0000F0) align 8 pad: 0x0000
class USMConduitInstance : public USMStateInstance_Base
{ 
public:
	bool                                               bEvalWithTransitions;                                       // 0x00E8   (0x0001)  
	bool                                               bCanEvaluate;                                               // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00EA   (0x0006)  MISSED
	// void SetEvalWithTransitions(bool bValue);                                                                                // [0x1773d20] Final|Native|Public|BlueprintCallable 
	// void SetCanEvaluate(bool bValue);                                                                                        // [0x1773ae0] Final|Native|Public|BlueprintCallable 
	// bool GetEvalWithTransitions();                                                                                           // [0x1772590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetCanEvaluate();                                                                                                   // [0x1772500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/SMSystem.SMReferenceContainer
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FSMReferenceContainer
{ 
	FGuid                                              PathGuid;                                                   // 0x0000   (0x0010)  
	class USMInstance*                                 Reference;                                                  // 0x0010   (0x0008)  
};

/// Struct /Script/SMSystem.SMExposedFunctionHandler
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FSMExposedFunctionHandler
{ 
	FName                                              BoundFunction;                                              // 0x0000   (0x000C)  
	ESMExposedFunctionExecutionType                    ExecutionType;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	class UFunction*                                   Function;                                                   // 0x0010   (0x0008)  
	class UObject*                                     OwnerObject;                                                // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/SMSystem.SMNode_Base
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 pad: 0x0000
struct FSMNode_Base
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FSMExposedFunctionHandler>                  TransitionInitializedGraphEvaluators;                       // 0x0008   (0x0010)  
	TArray<FSMExposedFunctionHandler>                  TransitionShutdownGraphEvaluators;                          // 0x0018   (0x0010)  
	TArray<FSMExposedFunctionHandler>                  OnRootStateMachineStartedGraphEvaluator;                    // 0x0028   (0x0010)  
	TArray<FSMExposedFunctionHandler>                  OnRootStateMachineStoppedGraphEvaluator;                    // 0x0038   (0x0010)  
	float                                              TimeInState;                                                // 0x0048   (0x0004)  
	bool                                               bIsInEndState;                                              // 0x004C   (0x0001)  
	bool                                               bHasUpdated;                                                // 0x004D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x004E   (0x0002)  MISSED
	int32_t                                            DuplicateId;                                                // 0x0050   (0x0004)  
	FGuid                                              Guid;                                                       // 0x0054   (0x0010)  
	FGuid                                              OwnerGuid;                                                  // 0x0064   (0x0010)  
	FGuid                                              PathGuid;                                                   // 0x0074   (0x0010)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0084   (0x000C)  MISSED
	FString                                            NodeName;                                                   // 0x0090   (0x0010)  
	FName                                              TemplateName;                                               // 0x00A0   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class USMInstance*                                 OwningInstance;                                             // 0x00B0   (0x0008)  
	class USMNodeInstance*                             NodeInstance;                                               // 0x00B8   (0x0008)  
	class UClass*                                      NodeInstanceClass;                                          // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Struct /Script/SMSystem.SMState_Base
/// Size: 0x0050 (80 bytes) (0x0000D0 - 0x000120) align 8 pad: 0x0000
struct FSMState_Base : FSMNode_Base
{ 
	bool                                               bIsRootNode : 1;                                            // 0x00D0:0 (0x0001)  
	bool                                               bAlwaysUpdate : 1;                                          // 0x00D0:1 (0x0001)  
	bool                                               bEvalTransitionsOnStart : 1;                                // 0x00D0:2 (0x0001)  
	bool                                               bDisableTickTransitionEvaluation : 1;                       // 0x00D0:3 (0x0001)  
	bool                                               bStayActiveOnStateChange : 1;                               // 0x00D0:4 (0x0001)  
	bool                                               bAllowParallelReentry : 1;                                  // 0x00D0:5 (0x0001)  
	unsigned char                                      UnknownData00_7[0x4F];                                      // 0x00D1   (0x004F)  MISSED
};

/// Struct /Script/SMSystem.SMStateMachine
/// Size: 0x0178 (376 bytes) (0x000120 - 0x000298) align 8 pad: 0x0000
struct FSMStateMachine : FSMState_Base
{ 
	bool                                               bHasAdditionalLogic;                                        // 0x0120   (0x0001)  
	bool                                               bReuseCurrentState;                                         // 0x0121   (0x0001)  
	bool                                               bOnlyReuseIfNotEndState;                                    // 0x0122   (0x0001)  
	bool                                               bAllowIndependentTick;                                      // 0x0123   (0x0001)  
	bool                                               bCallReferenceTickOnManualUpdate;                           // 0x0124   (0x0001)  
	bool                                               bWaitForEndState : 1;                                       // 0x0125:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0126   (0x0002)  MISSED
	TArray<FSMExposedFunctionHandler>                  BeginStateGraphEvaluator;                                   // 0x0128   (0x0010)  
	TArray<FSMExposedFunctionHandler>                  UpdateStateGraphEvaluator;                                  // 0x0138   (0x0010)  
	TArray<FSMExposedFunctionHandler>                  EndStateGraphEvaluator;                                     // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,918) /* TScriptInterface<Class> */ __um(NetworkedInterface);                                  // 0x0158   (0x0010)  
	unsigned char                                      UnknownData01_6[0xF0];                                      // 0x0168   (0x00F0)  MISSED
	class UClass*                                      ReferencedStateMachineClass;                                // 0x0258   (0x0008)  
	FName                                              ReferencedTemplateName;                                     // 0x0260   (0x000C)  
	FName                                              DynamicStateMachineReferenceVariable;                       // 0x026C   (0x000C)  
	class USMInstance*                                 ReferencedStateMachine;                                     // 0x0278   (0x0008)  
	class USMInstance*                                 IsReferencedByInstance;                                     // 0x0280   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0288   (0x0010)  MISSED
};

/// Struct /Script/SMSystem.SMStateHistory
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FSMStateHistory
{ 
	FGuid                                              StateGuid;                                                  // 0x0000   (0x0010)  
	FDateTime                                          StartTime;                                                  // 0x0010   (0x0008)  
	float                                              TimeInState;                                                // 0x0018   (0x0004)  
	float                                              ServerTimeInState;                                          // 0x001C   (0x0004)  
};

/// Class /Script/SMSystem.SMInstance
/// Size: 0x0580 (1408 bytes) (0x000030 - 0x0005B0) align 8 pad: 0x0000
class USMInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0030   (0x0038)  MISSED
	TArray<FSMReferenceContainer>                      ReplicatedReferences;                                       // 0x0068   (0x0010)  
	FGuid                                              RootStateMachineGuid;                                       // 0x0078   (0x0010)  
	TArray<class USMStateMachineInstance*>             AllRootNodeInstances;                                       // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,919) /* FMulticastInlineDelegate */ __um(OnPreStateMachineInitializedEvent);                  // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,920) /* FMulticastInlineDelegate */ __um(OnStateMachineInitializedEvent);                     // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,921) /* FMulticastInlineDelegate */ __um(OnStateMachineStartedEvent);                         // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,922) /* FMulticastInlineDelegate */ __um(OnStateMachineUpdatedEvent);                         // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,923) /* FMulticastInlineDelegate */ __um(OnStateMachineStoppedEvent);                         // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,924) /* FMulticastInlineDelegate */ __um(OnStateMachineTransitionTakenEvent);                 // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,925) /* FMulticastInlineDelegate */ __um(OnStateMachineStateChangedEvent);                    // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,926) /* FMulticastInlineDelegate */ __um(OnStateMachineStateStartedEvent);                    // 0x0108   (0x0010)  
	class USMStateMachineComponent*                    ComponentOwner;                                             // 0x0118   (0x0008)  
	SDK_UNDEFINED(16,927) /* TScriptInterface<Class> */ __um(NetworkInterface);                                    // 0x0120   (0x0010)  
	unsigned char                                      UnknownData01_6[0x140];                                     // 0x0130   (0x0140)  MISSED
	FSMStateMachine                                    RootStateMachine;                                           // 0x0270   (0x0298)  
	class UObject*                                     R_StateMachineContext;                                      // 0x0508   (0x0008)  
	class USMInstance*                                 ReferenceOwner;                                             // 0x0510   (0x0008)  
	class UClass*                                      StateMachineClass;                                          // 0x0518   (0x0008)  
	bool                                               bAutoManageTime : 1;                                        // 0x0520:0 (0x0001)  
	bool                                               bStopOnEndState : 1;                                        // 0x0520:1 (0x0001)  
	bool                                               bCanEverTick : 1;                                           // 0x0520:2 (0x0001)  
	bool                                               bCanTickWhenPaused : 1;                                     // 0x0520:3 (0x0001)  
	bool                                               bTickRegistered : 1;                                        // 0x0520:4 (0x0001)  
	bool                                               bTickBeforeInitialize : 1;                                  // 0x0520:5 (0x0001)  
	bool                                               bTickBeforeBeginPlay : 1;                                   // 0x0520:6 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0521   (0x0003)  MISSED
	float                                              TickInterval;                                               // 0x0524   (0x0004)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0528   (0x0010)  MISSED
	TArray<FSMStateHistory>                            StateHistory;                                               // 0x0538   (0x0010)  
	int32_t                                            StateHistoryMaxCount;                                       // 0x0548   (0x0004)  
	bool                                               bEnableLogging : 1;                                         // 0x054C:0 (0x0001)  
	bool                                               bLogStateChange : 1;                                        // 0x054C:1 (0x0001)  
	bool                                               bLogTransitionTaken : 1;                                    // 0x054C:2 (0x0001)  
	bool                                               bCanReplicateAsReference : 1;                               // 0x054C:3 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x054D   (0x0003)  MISSED
	SDK_UNDEFINED(80,928) /* TMap<FGuid, FGuid> */     __um(PathGuidRedirectMap);                                  // 0x0550   (0x0050)  
	TArray<class UObject*>                             ReferenceTemplates;                                         // 0x05A0   (0x0010)  
	// void Update(float DeltaSeconds);                                                                                         // [0x17749b0] Native|Public|BlueprintCallable 
	// void TryGetTransitionInfo(FGuid& Guid, FSMTransitionInfo& TransitionInfo, bool& bSuccess);                               // [0x1774840] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// void TryGetStateInfo(FGuid& Guid, FSMStateInfo& StateInfo, bool& bSuccess);                                              // [0x17746c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// void TryGetNestedActiveState(FSMStateInfo& FoundState, bool& bSuccess);                                                  // [0x17745a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void Tick(float DeltaTime);                                                                                              // [0x95d960] Native|Event|Public|BlueprintEvent 
	// bool TakeTransitionChain(TArray<USMTransitionInstance*>& InTransitionChain);                                             // [0x17744e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SwitchActiveStateByQualifiedName(FString InFullPath, bool bDeactivateOtherStates);                                  // [0x1774400] Final|Native|Public|BlueprintCallable 
	// void SwitchActiveState(class USMStateInstance_Base* NewStateInstance, bool bDeactivateOtherStates);                      // [0x1774330] Final|Native|Public|BlueprintCallable 
	// void Stop();                                                                                                             // [0x1774310] Native|Public|BlueprintCallable 
	// void StartWithNewContext(class UObject* Context);                                                                        // [0x1774280] Final|Native|Public|BlueprintCallable 
	// void Start();                                                                                                            // [0x1774260] Native|Public|BlueprintCallable 
	// void Shutdown();                                                                                                         // [0x1774240] Native|Public|BlueprintCallable 
	// void SetTickOnManualUpdate(bool Value);                                                                                  // [0x17741b0] Final|Native|Public|BlueprintCallable 
	// void SetTickInterval(float Value);                                                                                       // [0x1774130] Final|Native|Public|BlueprintCallable 
	// void SetTickBeforeBeginPlay(bool Value);                                                                                 // [0x17740a0] Final|Native|Public|BlueprintCallable 
	// void SetStopOnEndState(bool Value);                                                                                      // [0x1774010] Final|Native|Public|BlueprintCallable 
	// void SetStateMachineClass(class UClass* NewStateMachineClass);                                                           // [0x1773f80] Final|Native|Public|BlueprintCallable 
	// void SetStateHistoryMaxCount(int32_t newSize);                                                                           // [0x1773ef0] Final|Native|Public|BlueprintCallable 
	// void SetGuidRedirectMap(TMap<FGuid, FGuid>& InGuidMap);                                                                  // [0x1773db0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetContext(class UObject* Context);                                                                                 // [0x1773c90] Final|Native|Public|BlueprintCallable 
	// void SetCanTickWhenPaused(bool Value);                                                                                   // [0x1773c00] Final|Native|Public|BlueprintCallable 
	// void SetCanEverTick(bool Value);                                                                                         // [0x1773b70] Final|Native|Public|BlueprintCallable 
	// void SetAutoManageTime(bool Value);                                                                                      // [0x1773a50] Final|Native|Public|BlueprintCallable 
	// void RunUpdateAsReference(float DeltaSeconds);                                                                           // [0x17739d0] Final|Native|Public|BlueprintCallable 
	// void Restart();                                                                                                          // [0x17739b0] Native|Public|BlueprintCallable 
	// void ReplicatedStop();                                                                                                   // [0x1773990] Final|Native|Public|BlueprintCallable 
	// void ReplicatedStart();                                                                                                  // [0x1773970] Final|Native|Public|BlueprintCallable 
	// void ReplicatedRestart();                                                                                                // [0x1773950] Final|Native|Public|BlueprintCallable 
	// void REP_OnReplicatedReferencesLoaded();                                                                                 // [0x1773930] Final|Native|Private 
	// void PreloadAllNodeInstances();                                                                                          // [0x1773910] Final|Native|Public|BlueprintCallable 
	// void OnStateMachineUpdate(float DeltaSeconds);                                                                           // [0x1773880] Native|Event|Public|BlueprintEvent 
	// void OnStateMachineTransitionTaken(FSMTransitionInfo& Transition);                                                       // [0x17737d0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// void OnStateMachineStop();                                                                                               // [0x17737b0] Native|Event|Public|BlueprintEvent 
	// void OnStateMachineStateStarted(FSMStateInfo& State);                                                                    // [0x17736f0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// void OnStateMachineStateChanged(FSMStateInfo& ToState, FSMStateInfo& FromState);                                         // [0x17735a0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// void OnStateMachineStart();                                                                                              // [0xc4ccd0] Native|Event|Public|BlueprintEvent 
	// void OnStateMachineInitialStateLoaded(FGuid& StateGuid);                                                                 // [0x17734e0] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// void OnStateMachineInitialized();                                                                                        // [0x1773580] Native|Event|Public|BlueprintEvent 
	// void OnPreStateMachineInitialized();                                                                                     // [0x17734c0] Native|Event|Public|BlueprintEvent 
	// void OnPostCompile();                                                                                                    // [0x17734a0] Native|Event|Public|BlueprintEvent 
	// void LoadFromState(FGuid& FromGuid, bool bAllParents, bool bNotify);                                                     // [0x1773370] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LoadFromMultipleStates(TArray<FGuid>& FromGuids, bool bNotify);                                                     // [0x1773270] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void K2_TryGetNetworkInterface(TScriptInterface<Class>& Interface, bool& bIsValid);                                      // [0x1773180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool IsTickableWhenPaused();                                                                                             // [0x1773150] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsTickable();                                                                                                       // [0x1773120] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsInitialized();                                                                                                    // [0x17730c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsInEndState();                                                                                                     // [0x1773090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsActive();                                                                                                         // [0x1773030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void Internal_Update(float DeltaSeconds);                                                                                // [0x1772fb0] Final|Native|Protected|BlueprintCallable 
	// void Internal_EventUpdate();                                                                                             // [0x1772f90] Final|Native|Protected|BlueprintCallable 
	// void Internal_EventCleanup(FGuid& PathGuid);                                                                             // [0x1772ef0] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// bool Internal_EvaluateAndTakeTransitionChainByGuid(FGuid& PathGuid);                                                     // [0x1772e40] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// void Initialize(class UObject* Context);                                                                                 // [0x1772db0] Native|Public|BlueprintCallable 
	// bool HasStarted();                                                                                                       // [0x1772d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMTransitionInstance* GetTransitionInstanceByGuid(FGuid& Guid);                                                   // [0x1772ca0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// float GetTickInterval();                                                                                                 // [0x1772c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetStopOnEndState();                                                                                                // [0x1772c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UClass* GetStateMachineClass();                                                                                    // [0x1772c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetStateInstanceByQualifiedName(FString InFullPath);                                        // [0x1772b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetStateInstanceByGuid(FGuid& Guid);                                                        // [0x1772ad0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetStateHistoryMaxCount();                                                                                       // [0x1772aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<FSMStateHistory> GetStateHistory();                                                                               // [0x1772a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetSingleActiveStateInstance(bool bCheckNested);                                            // [0x1772970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FGuid GetSingleActiveStateGuid(bool bCheckNested);                                                                       // [0x17728d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class USMStateMachineInstance* GetRootStateMachineNodeInstance();                                                        // [0x17728a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMStateMachineInstance* GetRootStateMachineInstance();                                                            // [0x17728a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMInstance* GetReferenceOwner();                                                                                  // [0x17727d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMInstance* GetReferencedInstanceByGuid(FGuid& Guid);                                                             // [0x17727f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class USMInstance* GetPrimaryReferenceOwner();                                                                           // [0x17725f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// class USMNodeInstance* GetNodeInstanceByGuid(FGuid& Guid);                                                               // [0x1772720] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// TScriptInterface<Class> GetNetworkInterface();                                                                           // [0x17726e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetNestedActiveStateName();                                                                                      // [0x1772660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FGuid GetNestedActiveStateGuid();                                                                                        // [0x1772620] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class USMInstance* GetMasterReferenceOwner();                                                                            // [0x17725f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// TMap<FGuid, FGuid> GetGuidRedirectMap();                                                                                 // [0x17725c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// class UObject* GetContext();                                                                                             // [0x1772550] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMStateMachineComponent* GetComponentOwner();                                                                     // [0x1772530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetAllTransitionInstances(TArray<USMTransitionInstance*>& TransitionInstances);                                     // [0x1772450] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetAllStateInstances(TArray<USMStateInstance_Base*>& StateInstances);                                               // [0x17723a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetAllRootNodeInstance(TArray<USMStateMachineInstance*>& Nodes);                                                    // [0x17722f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// TArray<USMInstance*> GetAllReferencedInstances(bool bIncludeChildren);                                                   // [0x1772210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<FGuid> GetAllCurrentStateGuids();                                                                                 // [0x1772190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetAllActiveStateInstances(TArray<USMStateInstance_Base*>& ActiveStateInstances);                                   // [0x17720e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetAllActiveStateGuids(TArray<FGuid>& ActiveGuids);                                                                 // [0x1772030] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// FString GetActiveStateName();                                                                                            // [0x1771fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetActiveStateInstance(bool bCheckNested);                                                  // [0x1771f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FGuid GetActiveStateGuid();                                                                                              // [0x1771ed0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// void EvaluateTransitions();                                                                                              // [0x1771eb0] Final|Native|Public|BlueprintCallable 
	// bool EvaluateAndTakeTransitionChain(class USMTransitionInstance* InFirstTransitionInstance);                             // [0x1771e10] Final|Native|Public|BlueprintCallable 
	// bool EvaluateAndFindTransitionChain(class USMTransitionInstance* InFirstTransitionInstance, TArray<USMTransitionInstance*>& OutTransitionChain, class USMStateInstance_Base*& OutDestinationState, bool bRequirePreviousStateActive); // [0x1771c60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void ClearStateHistory();                                                                                                // [0x1771c40] Final|Native|Public|BlueprintCallable 
	// void ClearLoadedStates();                                                                                                // [0x1771c20] Final|Native|Public|BlueprintCallable 
	// bool CanTickOnManualUpdate();                                                                                            // [0x1771bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool CanEverTick();                                                                                                      // [0x1771bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool CanAutoManageTime();                                                                                                // [0x1771b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool AreInitialStatesSetFromLoad();                                                                                      // [0x1771b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SMSystem.SMRuntimeSettings
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class USMRuntimeSettings : public UObject
{ 
public:
	bool                                               bPreloadDefaultNodes;                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/SMSystem.ASMBindState
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UASMBindState : public UObject
{ 
public:
};

/// Class /Script/SMSystem.ASMAction
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UASMAction : public UObject
{ 
public:
};

/// Class /Script/SMSystem.ASMTask
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UASMTask : public UObject
{ 
public:
};

/// Class /Script/SMSystem.SMStateInstance
/// Size: 0x0000 (0 bytes) (0x0000E8 - 0x0000E8) align 8 pad: 0x0000
class USMStateInstance : public USMStateInstance_Base
{ 
public:
};

/// Class /Script/SMSystem.SMStateMachineComponent
/// Size: 0x0148 (328 bytes) (0x0000C0 - 0x000208) align 8 pad: 0x0000
class USMStateMachineComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00C0   (0x0010)  MISSED
	SDK_UNDEFINED(16,929) /* FMulticastInlineDelegate */ __um(OnStateMachineInitializedEvent);                     // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,930) /* FMulticastInlineDelegate */ __um(OnStateMachineStartedEvent);                         // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,931) /* FMulticastInlineDelegate */ __um(OnStateMachineUpdatedEvent);                         // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,932) /* FMulticastInlineDelegate */ __um(OnStateMachineStoppedEvent);                         // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,933) /* FMulticastInlineDelegate */ __um(OnStateMachineTransitionTakenEvent);                 // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,934) /* FMulticastInlineDelegate */ __um(OnStateMachineStateChangedEvent);                    // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,935) /* FMulticastInlineDelegate */ __um(OnStateMachineStateStartedEvent);                    // 0x0130   (0x0010)  
	SDK_UNDEFINED(80,936) /* TSet<UActorChannel*> */   __um(CurrentActorChannels);                                 // 0x0140   (0x0050)  
	unsigned char                                      UnknownData01_6[0x24];                                      // 0x0190   (0x0024)  MISSED
	bool                                               bAutomaticallyHandleNewConnections : 1;                     // 0x01B4:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01B5   (0x0003)  MISSED
	class UClass*                                      StateMachineClass;                                          // 0x01B8   (0x0008)  
	bool                                               bInitializeOnBeginPlay : 1;                                 // 0x01C0:0 (0x0001)  
	bool                                               bStartOnBeginPlay : 1;                                      // 0x01C0:1 (0x0001)  
	bool                                               bStopOnEndPlay : 1;                                         // 0x01C0:2 (0x0001)  
	bool                                               bLetInstanceManageTick : 1;                                 // 0x01C0:3 (0x0001)  
	bool                                               bReuseInstanceAfterShutdown : 1;                            // 0x01C0:4 (0x0001)  
	TEnumAsByte<ESMNetworkConfigurationType>           StateChangeAuthority;                                       // 0x01C1   (0x0001)  
	TEnumAsByte<ESMNetworkConfigurationType>           NetworkTransitionConfiguration;                             // 0x01C2   (0x0001)  
	TEnumAsByte<ESMNetworkConfigurationType>           NetworkTickConfiguration;                                   // 0x01C3   (0x0001)  
	TEnumAsByte<ESMNetworkConfigurationType>           NetworkStateExecution;                                      // 0x01C4   (0x0001)  
	TEnumAsByte<ESMNetworkConfigurationType>           NetworkStateConfiguration;                                  // 0x01C5   (0x0001)  
	bool                                               bIncludeSimulatedProxies : 1;                               // 0x01C6:0 (0x0001)  
	TEnumAsByte<ESMNetworkConfigurationType>           NetworkTransitionEnteredConfiguration;                      // 0x01C7   (0x0001)  
	bool                                               bWaitForTransactionsFromServer : 1;                         // 0x01C8:0 (0x0001)  
	bool                                               bTakeTransitionsFromServerOnly : 1;                         // 0x01C8:1 (0x0001)  
	bool                                               bCalculateServerTimeForClients : 1;                         // 0x01C8:2 (0x0001)  
	bool                                               bUseOwnerNetUpdateFrequency : 1;                            // 0x01C8:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x01C9   (0x0003)  MISSED
	float                                              ServerNetUpdateFrequency;                                   // 0x01CC   (0x0004)  
	float                                              ClientNetUpdateFrequency;                                   // 0x01D0   (0x0004)  
	bool                                               bAlwaysMulticast : 1;                                       // 0x01D4:0 (0x0001)  
	bool                                               bDiscardTransitionsBeforeInitialize : 1;                    // 0x01D4:1 (0x0001)  
	bool                                               bReplicateStatesOnLoad : 1;                                 // 0x01D4:2 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x01D5   (0x0003)  MISSED
	float                                              TransitionResetTimeSeconds;                                 // 0x01D8   (0x0004)  
	float                                              MaxTimeToWaitForTransitionUpdate;                           // 0x01DC   (0x0004)  
	class USMStateMachineComponent*                    ComponentToCopy;                                            // 0x01E0   (0x0008)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x01E8   (0x0008)  MISSED
	class USMInstance*                                 R_Instance;                                                 // 0x01F0   (0x0008)  
	class USMInstance*                                 InstanceTemplate;                                           // 0x01F8   (0x0008)  
	bool                                               bOverrideTick : 1;                                          // 0x0200:0 (0x0001)  
	bool                                               bCanEverTick : 1;                                           // 0x0200:1 (0x0001)  
	bool                                               bOverrideTickInterval : 1;                                  // 0x0200:2 (0x0001)  
	bool                                               bCanInstanceNetworkTick : 1;                                // 0x0200:3 (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0201   (0x0003)  MISSED
	float                                              TickInterval;                                               // 0x0204   (0x0004)  
	// void Update(float DeltaSeconds);                                                                                         // [0x177b990] Native|Public|BlueprintCallable 
	// void Stop();                                                                                                             // [0x177b5e0] Native|Public|BlueprintCallable 
	// void Start();                                                                                                            // [0x177b5b0] Native|Public|BlueprintCallable 
	// void Shutdown();                                                                                                         // [0x177b580] Native|Public|BlueprintCallable 
	// void SetCanInstanceNetworkTick(bool bCanEverTick);                                                                       // [0x177b340] Final|Native|Public|BlueprintCallable 
	// void SERVER_Update(float DeltaTime);                                                                                     // [0x177b0f0] Net|NetReliableNative|Event|Protected|NetServer 
	// void SERVER_TakeTransitions(TArray<FSMTransitionTransaction> TransitionTransactions);                                    // [0x177b020] Net|NetReliableNative|Event|Protected|NetServer 
	// void SERVER_Stop(FSMTransaction_Base Transaction);                                                                       // [0x177af90] Net|NetReliableNative|Event|Protected|NetServer 
	// void SERVER_Start(FSMTransaction_Base Transaction);                                                                      // [0x177af00] Net|NetReliableNative|Event|Protected|NetServer 
	// void SERVER_Shutdown(FSMTransaction_Base Transaction);                                                                   // [0x177ae70] Net|NetReliableNative|Event|Protected|NetServer 
	// void SERVER_RequestFullSync();                                                                                           // [0x177ae50] Net|NetReliableNative|Event|Protected|NetServer 
	// void SERVER_Initialize(FSMInitializeTransaction Transaction);                                                            // [0x177adb0] Net|NetReliableNative|Event|Protected|NetServer 
	// void SERVER_FullSync(FSMFullSyncTransaction FullSyncTransaction);                                                        // [0x177ad00] Net|NetReliableNative|Event|Protected|NetServer 
	// void SERVER_ActivateStates(TArray<FSMActivateStateTransaction> StateTransactions);                                       // [0x177ac60] Net|NetReliableNative|Event|Protected|NetServer 
	// void Restart();                                                                                                          // [0x177ac30] Native|Public|BlueprintCallable 
	// void REP_OnInstanceLoaded();                                                                                             // [0x177ac10] Native|Protected     
	// void OnPostInitialize();                                                                                                 // [0x25a7960] Event|Protected|BlueprintEvent 
	// void MULTICAST_TakeTransitions(TArray<FSMTransitionTransaction> Transactions);                                           // [0x177ab40] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// void MULTICAST_Stop(FSMTransaction_Base Transaction);                                                                    // [0x177aab0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// void MULTICAST_Start(FSMTransaction_Base Transaction);                                                                   // [0x177aa20] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// void MULTICAST_Shutdown(FSMTransaction_Base Transaction);                                                                // [0x177a990] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// void MULTICAST_FullSync(FSMFullSyncTransaction FullSyncTransaction);                                                     // [0x177a8e0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// void MULTICAST_ActivateStates(TArray<FSMActivateStateTransaction> StateTransactions);                                    // [0x177a840] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// bool IsStateMachineActive();                                                                                             // [0x177a810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsInitialized();                                                                                                    // [0x177a7b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void Internal_OnStateMachineUpdated(class USMInstance* Instance, float DeltaSeconds);                                    // [0x177a680] Final|Native|Protected 
	// void Internal_OnStateMachineTransitionTaken(class USMInstance* Instance, FSMTransitionInfo Transition);                  // [0x177a510] Final|Native|Protected 
	// void Internal_OnStateMachineStopped(class USMInstance* Instance);                                                        // [0x177a480] Final|Native|Protected 
	// void Internal_OnStateMachineStateStarted(class USMInstance* Instance, FSMStateInfo State);                               // [0x177a300] Final|Native|Protected 
	// void Internal_OnStateMachineStateChanged(class USMInstance* Instance, FSMStateInfo ToState, FSMStateInfo FromState);     // [0x177a080] Final|Native|Protected 
	// void Internal_OnStateMachineStarted(class USMInstance* Instance);                                                        // [0x1779ff0] Final|Native|Protected 
	// void Internal_OnReplicatedInstanceInitialized(class USMInstance* Instance);                                              // [0x1779f60] Final|Native|Protected 
	// void Initialize(class UObject* Context);                                                                                 // [0x1779ed0] Native|Public|BlueprintCallable 
	// class AActor* GetTopMostParentActor();                                                                                   // [0x1779da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMInstance* GetInstance();                                                                                        // [0x1779700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UObject* GetContextForInitialization();                                                                            // [0x1779520] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// void CopySettingsFromOtherComponent(class USMStateMachineComponent* OtherComponent);                                     // [0x1779400] Final|Native|Public|BlueprintCallable 
	// void CLIENT_TakeTransitions(TArray<FSMTransitionTransaction> Transactions);                                              // [0x1779330] Final|Net|NetReliableNative|Event|Private|NetClient 
	// void CLIENT_Stop(FSMTransaction_Base Transaction);                                                                       // [0x17792a0] Final|Net|NetReliableNative|Event|Private|NetClient 
	// void CLIENT_Start(FSMTransaction_Base Transaction);                                                                      // [0x1779210] Final|Net|NetReliableNative|Event|Private|NetClient 
	// void CLIENT_Shutdown(FSMTransaction_Base Transaction);                                                                   // [0x1779180] Final|Net|NetReliableNative|Event|Private|NetClient 
	// void CLIENT_FullSync(FSMFullSyncTransaction FullSyncTransaction);                                                        // [0x17790d0] Final|Net|NetReliableNative|Event|Private|NetClient 
	// void CLIENT_ActivateStates(TArray<FSMActivateStateTransaction> StateTransactions);                                       // [0x1779030] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/SMSystem.SMStateMachineInstance
/// Size: 0x0028 (40 bytes) (0x0000E8 - 0x000110) align 8 pad: 0x0000
class USMStateMachineInstance : public USMStateInstance_Base
{ 
public:
	TArray<class USMStateInstance_Base*>               Children;                                                   // 0x00E8   (0x0010)  
	TArray<class USMTransitionInstance*>               TransitionList;                                             // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0108   (0x0008)  MISSED
	// void SetWaitForEndState(bool bValue);                                                                                    // [0x177e1d0] Final|Native|Public|BlueprintCallable 
	// void SetReuseIfNotEndState(bool bValue);                                                                                 // [0x177e140] Final|Native|Public|BlueprintCallable 
	// void SetReuseCurrentState(bool bValue);                                                                                  // [0x177e0b0] Final|Native|Public|BlueprintCallable 
	// bool GetWaitForEndState();                                                                                               // [0x177dd10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMInstance* GetStateMachineReference();                                                                           // [0x177dc30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetReuseIfNotEndState();                                                                                            // [0x177dba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetReuseCurrentState();                                                                                             // [0x177db70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetEntryStates(TArray<USMStateInstance_Base*>& EntryStates);                                                        // [0x177da30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetContainedStateByName(FString StateName);                                                 // [0x177d950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetAllStateInstances(TArray<USMStateInstance_Base*>& StateInstances);                                               // [0x177d810] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetActiveStates(TArray<USMStateInstance_Base*>& ActiveStates);                                                      // [0x177d760] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SMSystem.ASMConditionBase
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UASMConditionBase : public UObject
{ 
public:
	bool                                               Reverse;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/SMSystem.ASMConditionAnd
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UASMConditionAnd : public UASMConditionBase
{ 
public:
	TArray<class UASMConditionBase*>                   Conditions;                                                 // 0x0038   (0x0010)  
};

/// Class /Script/SMSystem.ASMConditionOr
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UASMConditionOr : public UASMConditionBase
{ 
public:
	TArray<class UASMConditionBase*>                   Conditions;                                                 // 0x0038   (0x0010)  
};

/// Class /Script/SMSystem.SMTransitionInstance
/// Size: 0x0038 (56 bytes) (0x000050 - 0x000088) align 8 pad: 0x0000
class USMTransitionInstance : public USMNodeInstance
{ 
public:
	int32_t                                            PriorityOrder;                                              // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(16,937) /* FMulticastInlineDelegate */ __um(OnTransitionEnteredEvent);                           // 0x0058   (0x0010)  
	TEnumAsByte<ETransitionPredictionType>             TransitionPredictionType;                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	class UASMConditionBase*                           Condition;                                                  // 0x0070   (0x0008)  
	class USMStateInstance_Base*                       From;                                                       // 0x0078   (0x0008)  
	class USMStateInstance_Base*                       To;                                                         // 0x0080   (0x0008)  
	// void SetPriorityOrder(int32_t Value);                                                                                    // [0x177e020] Final|Native|Public|BlueprintCallable 
	// void SetCanEvalWithStartState(bool bValue);                                                                              // [0x177de70] Final|Native|Public|BlueprintCallable 
	// void SetCanEvaluateFromEvent(bool bValue);                                                                               // [0x177df90] Final|Native|Public|BlueprintCallable 
	// void SetCanEvaluate(bool bValue);                                                                                        // [0x177df00] Final|Native|Public|BlueprintCallable 
	// bool IsTransitionFromAnyState();                                                                                         // [0x177dd40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetTransitionInfo(FSMTransitionInfo& Transition);                                                                   // [0x177dc60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetSourceStateForActiveTransition();                                                        // [0x177dc00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FDateTime GetServerTimestamp();                                                                                          // [0x177dbd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetPriorityOrder();                                                                                              // [0x177db40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetPreviousStateInstance();                                                                 // [0x177db10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetNextStateInstance();                                                                     // [0x177dae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USMStateInstance_Base* GetDestinationStateForActiveTransition();                                                   // [0x177da00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetCanEvalWithStartState();                                                                                         // [0x177d8c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetCanEvaluateFromEvent();                                                                                          // [0x177d920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetCanEvaluate();                                                                                                   // [0x177d8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void EvaluateFromManuallyBoundEvent();                                                                                   // [0x177d740] Final|Native|Public|BlueprintCallable 
	// bool DoesTransitionPass();                                                                                               // [0x177d710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SMSystem.SMBlueprintUtils
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class USMBlueprintUtils : public UBlueprintFunctionLibrary
{ 
public:
	// class USMInstance* K2_CreateStateMachineInstancePure(class UClass* StateMachineClass, class UObject* Context, bool bInitializeNow); // [0x177dd70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class USMInstance* K2_CreateStateMachineInstance(class UClass* StateMachineClass, class UObject* Context, bool bInitializeNow); // [0x177dd70] Final|Native|Static|Public|BlueprintCallable 
	// class USMInstance* CreateStateMachineInstanceFromTemplate(class UClass* StateMachineClass, class UObject* Context, class USMInstance* Template, bool bInitializeNow); // [0x177d5c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/SMSystem.SMInfo_Base
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FSMInfo_Base
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FString                                            NodeName;                                                   // 0x0008   (0x0010)  
	FGuid                                              Guid;                                                       // 0x0018   (0x0010)  
	FGuid                                              OwnerGuid;                                                  // 0x0028   (0x0010)  
	FGuid                                              NodeGuid;                                                   // 0x0038   (0x0010)  
	FGuid                                              OwnerNodeGuid;                                              // 0x0048   (0x0010)  
	class USMNodeInstance*                             NodeInstance;                                               // 0x0058   (0x0008)  
};

/// Struct /Script/SMSystem.SMTransitionInfo
/// Size: 0x0038 (56 bytes) (0x000060 - 0x000098) align 8 pad: 0x0000
struct FSMTransitionInfo : FSMInfo_Base
{ 
	FGuid                                              FromStateGuid;                                              // 0x0060   (0x0010)  
	FGuid                                              ToStateGuid;                                                // 0x0070   (0x0010)  
	int32_t                                            Priority;                                                   // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FDateTime                                          LastNetworkTimestamp;                                       // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Struct /Script/SMSystem.SMStateInfo
/// Size: 0x0020 (32 bytes) (0x000060 - 0x000080) align 8 pad: 0x0000
struct FSMStateInfo : FSMInfo_Base
{ 
	TArray<FSMTransitionInfo>                          OutgoingTransitions;                                        // 0x0060   (0x0010)  
	bool                                               bIsEndState;                                                // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Struct /Script/SMSystem.SMConduit
/// Size: 0x0030 (48 bytes) (0x000120 - 0x000150) align 8 pad: 0x0000
struct FSMConduit : FSMState_Base
{ 
	bool                                               bCanEnterTransition : 1;                                    // 0x0120:0 (0x0001)  
	bool                                               bCanEvaluate : 1;                                           // 0x0120:1 (0x0001)  
	bool                                               bEvalWithTransitions : 1;                                   // 0x0120:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	TArray<FSMExposedFunctionHandler>                  CanEnterConduitGraphEvaluator;                              // 0x0128   (0x0010)  
	TArray<FSMExposedFunctionHandler>                  ConduitEnteredGraphEvaluator;                               // 0x0138   (0x0010)  
	ESMConditionalEvaluationType                       ConditionalEvaluationType;                                  // 0x0148   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0149   (0x0007)  MISSED
};

/// Struct /Script/SMSystem.SMDebugStateMachine
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FSMDebugStateMachine
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SMSystem.SMNodeDescription
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FSMNodeDescription
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Category;                                                   // 0x0010   (0x0018)  
	FText                                              Description;                                                // 0x0028   (0x0018)  
};

/// Struct /Script/SMSystem.SMState
/// Size: 0x0030 (48 bytes) (0x000120 - 0x000150) align 8 pad: 0x0000
struct FSMState : FSMState_Base
{ 
	TArray<FSMExposedFunctionHandler>                  BeginStateGraphEvaluator;                                   // 0x0120   (0x0010)  
	TArray<FSMExposedFunctionHandler>                  UpdateStateGraphEvaluator;                                  // 0x0130   (0x0010)  
	TArray<FSMExposedFunctionHandler>                  EndStateGraphEvaluator;                                     // 0x0140   (0x0010)  
};

/// Struct /Script/SMSystem.SMTransaction_Base
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 pad: 0x0000
struct FSMTransaction_Base
{ 
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0000   (0x0001)  MISSED
	ESMTransactionType                                 TransactionType;                                            // 0x0001   (0x0001)  
	bool                                               bOriginatedFromServer : 1;                                  // 0x0002:0 (0x0001)  
};

/// Struct /Script/SMSystem.SMFullSyncStateTransaction
/// Size: 0x0015 (21 bytes) (0x000003 - 0x000018) align 4 pad: 0x0000
struct FSMFullSyncStateTransaction : FSMTransaction_Base
{ 
	unsigned char                                      UnknownData00_3[0x1];                                       // 0x0003   (0x0001)  MISSED
	FGuid                                              BaseGuid;                                                   // 0x0004   (0x0010)  
	float                                              TimeInState;                                                // 0x0014   (0x0004)  
};

/// Struct /Script/SMSystem.SMFullSyncTransaction
/// Size: 0x001D (29 bytes) (0x000003 - 0x000020) align 8 pad: 0x0000
struct FSMFullSyncTransaction : FSMTransaction_Base
{ 
	unsigned char                                      UnknownData00_3[0x5];                                       // 0x0003   (0x0005)  MISSED
	TArray<FSMFullSyncStateTransaction>                ActiveStates;                                               // 0x0008   (0x0010)  
	bool                                               bHasStarted : 1;                                            // 0x0018:0 (0x0001)  
	bool                                               bFromUserLoad : 1;                                          // 0x0018:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/SMSystem.SMActivateStateTransaction
/// Size: 0x0019 (25 bytes) (0x000003 - 0x00001C) align 4 pad: 0x0000
struct FSMActivateStateTransaction : FSMTransaction_Base
{ 
	unsigned char                                      UnknownData00_3[0x1];                                       // 0x0003   (0x0001)  MISSED
	FGuid                                              BaseGuid;                                                   // 0x0004   (0x0010)  
	float                                              TimeInState;                                                // 0x0014   (0x0004)  
	bool                                               bIsActive : 1;                                              // 0x0018:0 (0x0001)  
	bool                                               bSetAllParents : 1;                                         // 0x0018:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/SMSystem.SMTransitionTransaction
/// Size: 0x0035 (53 bytes) (0x000003 - 0x000038) align 8 pad: 0x0000
struct FSMTransitionTransaction : FSMTransaction_Base
{ 
	unsigned char                                      UnknownData00_3[0x1];                                       // 0x0003   (0x0001)  MISSED
	FGuid                                              BaseGuid;                                                   // 0x0004   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FGuid>                                      AdditionalGuids;                                            // 0x0018   (0x0010)  
	FDateTime                                          Timestamp;                                                  // 0x0028   (0x0008)  
	float                                              ActiveTime;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/SMSystem.SMInitializeTransaction
/// Size: 0x000D (13 bytes) (0x000003 - 0x000010) align 8 pad: 0x0000
struct FSMInitializeTransaction : FSMTransaction_Base
{ 
	unsigned char                                      UnknownData00_3[0x5];                                       // 0x0003   (0x0005)  MISSED
	class UObject*                                     Context;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/SMSystem.SMTransition
/// Size: 0x0098 (152 bytes) (0x0000D0 - 0x000168) align 8 pad: 0x0000
struct FSMTransition : FSMNode_Base
{ 
	TArray<FSMExposedFunctionHandler>                  CanEnterTransitionGraphEvaluator;                           // 0x00D0   (0x0010)  
	TArray<FSMExposedFunctionHandler>                  TransitionEnteredGraphEvaluator;                            // 0x00E0   (0x0010)  
	TArray<FSMExposedFunctionHandler>                  TransitionPreEvaluateGraphEvaluator;                        // 0x00F0   (0x0010)  
	TArray<FSMExposedFunctionHandler>                  TransitionPostEvaluateGraphEvaluator;                       // 0x0100   (0x0010)  
	int32_t                                            Priority;                                                   // 0x0110   (0x0004)  
	bool                                               bCanEnterTransition : 1;                                    // 0x0114:0 (0x0001)  
	bool                                               bCanEnterTransitionFromEvent : 1;                           // 0x0114:1 (0x0001)  
	bool                                               bIsEvaluating : 1;                                          // 0x0114:2 (0x0001)  
	bool                                               bCanEvaluate : 1;                                           // 0x0114:3 (0x0001)  
	bool                                               bCanEvaluateFromEvent : 1;                                  // 0x0114:4 (0x0001)  
	bool                                               bRunParallel : 1;                                           // 0x0114:5 (0x0001)  
	bool                                               bEvalIfNextStateActive : 1;                                 // 0x0114:6 (0x0001)  
	bool                                               bCanEvalWithStartState : 1;                                 // 0x0114:7 (0x0001)  
	bool                                               bAlwaysFalse : 1;                                           // 0x0115:0 (0x0001)  
	bool                                               bFromAnyState : 1;                                          // 0x0115:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0116   (0x0002)  MISSED
	FGuid                                              FromGuid;                                                   // 0x0118   (0x0010)  
	FGuid                                              ToGuid;                                                     // 0x0128   (0x0010)  
	ESMConditionalEvaluationType                       ConditionalEvaluationType;                                  // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2F];                                      // 0x0139   (0x002F)  MISSED
};

