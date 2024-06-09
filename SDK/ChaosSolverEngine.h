
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
/// Size: 0x01 (1 bytes)
enum class EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit                                  = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation                          = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation     = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay      = 3,
	EClusterConnectionTypeEnum__Chaos_None                                           = 4,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max                 = 5
};

/// Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UChaosDebugDrawComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosEventListenerComponent
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UChaosEventListenerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
/// Size: 0x01B8 (440 bytes) (0x0000C8 - 0x000280) align 8 pad: 0x0000
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x110];                                     // 0x00C8   (0x0110)  MISSED
	SDK_UNDEFINED(80,1326) /* TMap<UPrimitiveComponent*, FChaosHandlerSet> */ __um(CollisionEventRegistrations);   // 0x01D8   (0x0050)  
	SDK_UNDEFINED(80,1327) /* TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> */ __um(BreakEventRegistrations); // 0x0228   (0x0050)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0278   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UChaosNotifyHandlerInterface : public UInterface
{ 
public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// FHitResult ConvertPhysicsCollisionToHitResult(FChaosPhysicsCollisionInfo& PhysicsCollision);                             // [0x4a001c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ChaosSolverEngine.ChaosSolver
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UChaosSolver : public UObject
{ 
public:
};

/// Struct /Script/ChaosSolverEngine.ChaosDebugSubstepControl
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 pad: 0x0000
struct FChaosDebugSubstepControl
{ 
	bool                                               bPause;                                                     // 0x0000   (0x0001)  
	bool                                               bSubstep;                                                   // 0x0001   (0x0001)  
	bool                                               bStep;                                                      // 0x0002   (0x0001)  
};

/// Class /Script/ChaosSolverEngine.ChaosSolverActor
/// Size: 0x00F8 (248 bytes) (0x0002A8 - 0x0003A0) align 8 pad: 0x0000
class AChaosSolverActor : public AActor
{ 
public:
	FChaosSolverConfiguration                          properties;                                                 // 0x02A8   (0x0068)  
	float                                              TimeStepMultiplier;                                         // 0x0310   (0x0004)  
	int32_t                                            CollisionIterations;                                        // 0x0314   (0x0004)  
	int32_t                                            PushOutIterations;                                          // 0x0318   (0x0004)  
	int32_t                                            PushOutPairIterations;                                      // 0x031C   (0x0004)  
	float                                              ClusterConnectionFactor;                                    // 0x0320   (0x0004)  
	EClusterConnectionTypeEnum                         ClusterUnionConnectionType;                                 // 0x0324   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x0325   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0326   (0x0002)  MISSED
	FSolverCollisionFilterSettings                     CollisionFilterSettings;                                    // 0x0328   (0x0010)  
	bool                                               DoGenerateBreakingData;                                     // 0x0338   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0339   (0x0003)  MISSED
	FSolverBreakingFilterSettings                      BreakingFilterSettings;                                     // 0x033C   (0x0010)  
	bool                                               DoGenerateTrailingData;                                     // 0x034C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x034D   (0x0003)  MISSED
	FSolverTrailingFilterSettings                      TrailingFilterSettings;                                     // 0x0350   (0x0010)  
	float                                              MassScale;                                                  // 0x0360   (0x0004)  
	bool                                               bGenerateContactGraph;                                      // 0x0364   (0x0001)  
	bool                                               bHasFloor;                                                  // 0x0365   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0366   (0x0002)  MISSED
	float                                              FloorHeight;                                                // 0x0368   (0x0004)  
	FChaosDebugSubstepControl                          ChaosDebugSubstepControl;                                   // 0x036C   (0x0003)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x036F   (0x0001)  MISSED
	class UBillboardComponent*                         SpriteComponent;                                            // 0x0370   (0x0008)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x0378   (0x0018)  MISSED
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                           // 0x0390   (0x0008)  
	unsigned char                                      UnknownData06_7[0x8];                                       // 0x0398   (0x0008)  MISSED
	// void SetSolverActive(bool bActive);                                                                                      // [0x1f80700] Native|Public|BlueprintCallable 
	// void SetAsCurrentWorldSolver();                                                                                          // [0x4a002b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosSolverEngine.ChaosSolverSettings
/// Size: 0x0028 (40 bytes) (0x000048 - 0x000070) align 8 pad: 0x0000
class UChaosSolverSettings : public UDeveloperSettings
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0048   (0x0008)  MISSED
	FSoftClassPath                                     DefaultChaosSolverActorClass;                               // 0x0050   (0x0020)  
};

/// Struct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FChaosPhysicsCollisionInfo
{ 
	class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)  
	class UPrimitiveComponent*                         OtherComponent;                                             // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	FVector                                            Normal;                                                     // 0x001C   (0x000C)  
	FVector                                            AccumulatedImpulse;                                         // 0x0028   (0x000C)  
	FVector                                            Velocity;                                                   // 0x0034   (0x000C)  
	FVector                                            OtherVelocity;                                              // 0x0040   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x004C   (0x000C)  
	FVector                                            OtherAngularVelocity;                                       // 0x0058   (0x000C)  
	float                                              Mass;                                                       // 0x0064   (0x0004)  
	float                                              OtherMass;                                                  // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosBreakEvent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FChaosBreakEvent
{ 
	class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Velocity;                                                   // 0x0014   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0020   (0x000C)  
	float                                              Mass;                                                       // 0x002C   (0x0004)  
};

/// Struct /Script/ChaosSolverEngine.ChaosHandlerSet
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FChaosHandlerSet
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	SDK_UNDEFINED(80,1328) /* TSet<UObject*> */        __um(ChaosHandlers);                                        // 0x0008   (0x0050)  
};

/// Struct /Script/ChaosSolverEngine.BreakEventCallbackWrapper
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FBreakEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

