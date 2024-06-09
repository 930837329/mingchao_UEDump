
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: ChaosSolverEngine
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FieldSystemEngine
/// dependency: PhysicsCore

/// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone                                               = 0,
	EChaosBreakingSortMethod__SortByHighestMass                                      = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosBreakingSortMethod__SortByNearestFirst                                     = 3,
	EChaosBreakingSortMethod__Count                                                  = 4
};

/// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone                                              = 0,
	EChaosCollisionSortMethod__SortByHighestMass                                     = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed                                    = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse                                  = 3,
	EChaosCollisionSortMethod__SortByNearestFirst                                    = 4,
	EChaosCollisionSortMethod__Count                                                 = 5
};

/// Enum /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone                                               = 0,
	EChaosTrailingSortMethod__SortByHighestMass                                      = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosTrailingSortMethod__SortByNearestFirst                                     = 3,
	EChaosTrailingSortMethod__Count                                                  = 4
};

/// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
/// Size: 0x01 (1 bytes)
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone                          = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision                 = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected                      = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection               = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll                           = 4
};

/// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
/// Size: 0x01 (1 bytes)
enum class ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform                                           = 0,
	ECollectionGroupEnum__Chaos_Max                                                  = 1,
	ECollectionGroupEnum__Chaos_Max3                                                 = 2
};

/// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
/// Size: 0x01 (1 bytes)
enum class ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active                                           = 0,
	ECollectionAttributeEnum__Chaos_DynamicState                                     = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup                                   = 2,
	ECollectionAttributeEnum__Chaos_Max                                              = 3,
	ECollectionAttributeEnum__Chaos_Max5                                             = 4
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FChaosCollisionEventRequestSettings
{ 
	int32_t                                            MaxNumberResults;                                           // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinImpulse;                                                 // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosCollisionSortMethod                          SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FChaosBreakingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinRadius;                                                  // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinMass;                                                    // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosBreakingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FChaosTrailingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinAngularSpeed;                                            // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosTrailingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
/// Size: 0x0228 (552 bytes) (0x000218 - 0x000440) align 16 pad: 0x0000
class UChaosDestructionListener : public USceneComponent
{ 
public:
	bool                                               bIsCollisionEventListeningEnabled : 1;                      // 0x0218:0 (0x0001)  
	bool                                               bIsBreakingEventListeningEnabled : 1;                       // 0x0218:1 (0x0001)  
	bool                                               bIsTrailingEventListeningEnabled : 1;                       // 0x0218:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0219   (0x0003)  MISSED
	FChaosCollisionEventRequestSettings                CollisionEventRequestSettings;                              // 0x021C   (0x0018)  
	FChaosBreakingEventRequestSettings                 BreakingEventRequestSettings;                               // 0x0234   (0x0018)  
	FChaosTrailingEventRequestSettings                 TrailingEventRequestSettings;                               // 0x024C   (0x0018)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0264   (0x0004)  MISSED
	SDK_UNDEFINED(80,1360) /* TSet<AChaosSolverActor*> */ __um(ChaosSolverActors);                                 // 0x0268   (0x0050)  
	SDK_UNDEFINED(80,1361) /* TSet<AGeometryCollectionActor*> */ __um(GeometryCollectionActors);                   // 0x02B8   (0x0050)  
	SDK_UNDEFINED(16,1362) /* FMulticastInlineDelegate */ __um(OnCollisionEvents);                                 // 0x0308   (0x0010)  
	SDK_UNDEFINED(16,1363) /* FMulticastInlineDelegate */ __um(OnBreakingEvents);                                  // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,1364) /* FMulticastInlineDelegate */ __um(OnTrailingEvents);                                  // 0x0328   (0x0010)  
	unsigned char                                      UnknownData02_7[0x108];                                     // 0x0338   (0x0108)  MISSED
	// void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);           // [0x4a26410] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);       // [0x4a26310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);           // [0x4a26210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings);                                    // [0x4a26170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetTrailingEventEnabled(bool bIsEnabled);                                                                           // [0x4a260e0] Final|Native|Public|BlueprintCallable 
	// void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings);                                  // [0x4a25fb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetCollisionEventEnabled(bool bIsEnabled);                                                                          // [0x4a25f20] Final|Native|Public|BlueprintCallable 
	// void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings);                                    // [0x4a25e80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetBreakingEventEnabled(bool bIsEnabled);                                                                           // [0x4a25df0] Final|Native|Public|BlueprintCallable 
	// void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                             // [0x4a25d60] Final|Native|Public|BlueprintCallable 
	// void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                  // [0xbf3a00] Final|Native|Public|BlueprintCallable 
	// bool IsEventListening();                                                                                                 // [0x4a25a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                                // [0x4a256f0] Final|Native|Public|BlueprintCallable 
	// void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                     // [0xbf3a00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
/// Size: 0x0010 (16 bytes) (0x0002A8 - 0x0002B8) align 8 pad: 0x0000
class AGeometryCollectionActor : public AActor
{ 
public:
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                                // 0x02A8   (0x0008)  
	class UGeometryCollectionDebugDrawComponent*       GeometryCollectionDebugDrawComponent;                       // 0x02B0   (0x0008)  
	// bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);                                                      // [0x4a25bd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// void ChangeObjectTypeRuntime(EObjectStateTypeEnum Type);                                                                 // [0x4a259c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionCache
/// Size: 0x0028 (40 bytes) (0x000030 - 0x000058) align 8 pad: 0x0000
class UGeometryCollectionCache : public UObject
{ 
public:
	FRecordedTransformTrack                            RecordedData;                                               // 0x0030   (0x0010)  
	class UGeometryCollection*                         SupportedCollection;                                        // 0x0040   (0x0008)  
	FGuid                                              CompatibleCollectionState;                                  // 0x0048   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeomComponentCacheParameters
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FGeomComponentCacheParameters
{ 
	EGeometryCollectionCacheType                       CacheMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UGeometryCollectionCache*                    TargetCache;                                                // 0x0008   (0x0008)  
	float                                              ReverseCacheBeginTime;                                      // 0x0010   (0x0004)  
	bool                                               SaveCollisionData;                                          // 0x0014   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	int32_t                                            CollisionDataSizeMax;                                       // 0x0018   (0x0004)  
	bool                                               DoCollisionDataSpatialHash;                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              CollisionDataSpatialHashRadius;                             // 0x0020   (0x0004)  
	int32_t                                            MaxCollisionPerCell;                                        // 0x0024   (0x0004)  
	bool                                               SaveBreakingData;                                           // 0x0028   (0x0001)  
	bool                                               DoGenerateBreakingData;                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            BreakingDataSizeMax;                                        // 0x002C   (0x0004)  
	bool                                               DoBreakingDataSpatialHash;                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              BreakingDataSpatialHashRadius;                              // 0x0034   (0x0004)  
	int32_t                                            MaxBreakingPerCell;                                         // 0x0038   (0x0004)  
	bool                                               SaveTrailingData;                                           // 0x003C   (0x0001)  
	bool                                               DoGenerateTrailingData;                                     // 0x003D   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	int32_t                                            TrailingDataSizeMax;                                        // 0x0040   (0x0004)  
	float                                              TrailingMinSpeedThreshold;                                  // 0x0044   (0x0004)  
	float                                              TrailingMinVolumeThreshold;                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData06_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FGeometryCollectionRepData
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
/// Size: 0x0498 (1176 bytes) (0x000508 - 0x0009A0) align 16 pad: 0x0000
class UGeometryCollectionComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0508   (0x0008)  MISSED
	class AChaosSolverActor*                           ChaosSolverActor;                                           // 0x0510   (0x0008)  
	unsigned char                                      UnknownData01_6[0xE0];                                      // 0x0518   (0x00E0)  MISSED
	class UGeometryCollection*                         RestCollection;                                             // 0x05F8   (0x0008)  
	TArray<class AFieldSystemActor*>                   InitializationFields;                                       // 0x0600   (0x0010)  
	bool                                               Simulating;                                                 // 0x0610   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0611   (0x0007)  MISSED
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x0618   (0x0001)  
	bool                                               EnableClustering;                                           // 0x0619   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x061A   (0x0002)  MISSED
	int32_t                                            ClusterGroupIndex;                                          // 0x061C   (0x0004)  
	int32_t                                            MaxClusterLevel;                                            // 0x0620   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0624   (0x0004)  MISSED
	TArray<float>                                      DamageThreshold;                                            // 0x0628   (0x0010)  
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                      // 0x0638   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0639   (0x0003)  MISSED
	int32_t                                            CollisionGroup;                                             // 0x063C   (0x0004)  
	float                                              CollisionSampleFraction;                                    // 0x0640   (0x0004)  
	float                                              LinearEtherDrag;                                            // 0x0644   (0x0004)  
	float                                              AngularEtherDrag;                                           // 0x0648   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x064C   (0x0004)  MISSED
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                           // 0x0650   (0x0008)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x0658   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x0659   (0x0003)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x065C   (0x000C)  
	FVector                                            InitialAngularVelocity;                                     // 0x0668   (0x000C)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x0674   (0x0004)  MISSED
	class UPhysicalMaterial*                           PhysicalMaterialOverride;                                   // 0x0678   (0x0008)  
	FGeomComponentCacheParameters                      CacheParameters;                                            // 0x0680   (0x0050)  
	SDK_UNDEFINED(16,1365) /* FMulticastInlineDelegate */ __um(NotifyGeometryCollectionPhysicsStateChange);        // 0x06D0   (0x0010)  
	SDK_UNDEFINED(16,1366) /* FMulticastInlineDelegate */ __um(NotifyGeometryCollectionPhysicsLoadingStateChange); // 0x06E0   (0x0010)  
	unsigned char                                      UnknownData09_6[0x18];                                      // 0x06F0   (0x0018)  MISSED
	SDK_UNDEFINED(16,1367) /* FMulticastInlineDelegate */ __um(OnChaosBreakEvent);                                 // 0x0708   (0x0010)  
	float                                              DesiredCacheTime;                                           // 0x0718   (0x0004)  
	bool                                               CachePlayback;                                              // 0x071C   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x071D   (0x0003)  MISSED
	SDK_UNDEFINED(16,1368) /* FMulticastInlineDelegate */ __um(OnChaosPhysicsCollision);                           // 0x0720   (0x0010)  
	bool                                               bNotifyBreaks;                                              // 0x0730   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x0731   (0x0001)  
	bool                                               bEnableReplication;                                         // 0x0732   (0x0001)  
	bool                                               bEnableAbandonAfterLevel;                                   // 0x0733   (0x0001)  
	int32_t                                            ReplicationAbandonClusterLevel;                             // 0x0734   (0x0004)  
	FGeometryCollectionRepData                         RepData;                                                    // 0x0738   (0x0018)  
	unsigned char                                      UnknownData11_6[0x220];                                     // 0x0750   (0x0220)  MISSED
	class UBodySetup*                                  DummyBodySetup;                                             // 0x0970   (0x0008)  
	unsigned char                                      UnknownData12_7[0x28];                                      // 0x0978   (0x0028)  MISSED
	// void SetNotifyBreaks(bool bNewNotifyBreaks);                                                                             // [0x4a26050] Final|Native|Public|BlueprintCallable 
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                                 // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void OnRep_RepData(FGeometryCollectionRepData& OldData);                                                                 // [0x4a25b20] Final|Native|Protected|HasOutParms 
	// void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x25a7960] MulticastDelegate|Public|Delegate 
	// void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x25a7960] MulticastDelegate|Public|Delegate 
	// void NetAbandonCluster(int32_t TransformIndex);                                                                          // [0x4a25a90] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x4a25860] Final|Native|Public|BlueprintCallable 
	// void ApplyKinematicField(float Radius, FVector Position);                                                                // [0x4a25780] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FGeometryCollectionDebugDrawWarningMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AChaosSolverActor*                           Solver;                                                     // 0x0008   (0x0008)  
	class AGeometryCollectionActor*                    GeometryCollection;                                         // 0x0010   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
/// Size: 0x00E8 (232 bytes) (0x0002A8 - 0x000390) align 8 pad: 0x0000
class AGeometryCollectionDebugDrawActor : public AActor
{ 
public:
	FGeometryCollectionDebugDrawWarningMessage         WarningMessage;                                             // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02A9   (0x0007)  MISSED
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                          // 0x02B0   (0x0018)  
	bool                                               bDebugDrawWholeCollection;                                  // 0x02C8   (0x0001)  
	bool                                               bDebugDrawHierarchy;                                        // 0x02C9   (0x0001)  
	bool                                               bDebugDrawClustering;                                       // 0x02CA   (0x0001)  
	EGeometryCollectionDebugDrawActorHideGeometry      HideGeometry;                                               // 0x02CB   (0x0001)  
	bool                                               bShowRigidBodyId;                                           // 0x02CC   (0x0001)  
	bool                                               bShowRigidBodyCollision;                                    // 0x02CD   (0x0001)  
	bool                                               bCollisionAtOrigin;                                         // 0x02CE   (0x0001)  
	bool                                               bShowRigidBodyTransform;                                    // 0x02CF   (0x0001)  
	bool                                               bShowRigidBodyInertia;                                      // 0x02D0   (0x0001)  
	bool                                               bShowRigidBodyVelocity;                                     // 0x02D1   (0x0001)  
	bool                                               bShowRigidBodyForce;                                        // 0x02D2   (0x0001)  
	bool                                               bShowRigidBodyInfos;                                        // 0x02D3   (0x0001)  
	bool                                               bShowTransformIndex;                                        // 0x02D4   (0x0001)  
	bool                                               bShowTransform;                                             // 0x02D5   (0x0001)  
	bool                                               bShowParent;                                                // 0x02D6   (0x0001)  
	bool                                               bShowLevel;                                                 // 0x02D7   (0x0001)  
	bool                                               bShowConnectivityEdges;                                     // 0x02D8   (0x0001)  
	bool                                               bShowGeometryIndex;                                         // 0x02D9   (0x0001)  
	bool                                               bShowGeometryTransform;                                     // 0x02DA   (0x0001)  
	bool                                               bShowBoundingBox;                                           // 0x02DB   (0x0001)  
	bool                                               bShowFaces;                                                 // 0x02DC   (0x0001)  
	bool                                               bShowFaceIndices;                                           // 0x02DD   (0x0001)  
	bool                                               bShowFaceNormals;                                           // 0x02DE   (0x0001)  
	bool                                               bShowSingleFace;                                            // 0x02DF   (0x0001)  
	int32_t                                            SingleFaceIndex;                                            // 0x02E0   (0x0004)  
	bool                                               bShowVertices;                                              // 0x02E4   (0x0001)  
	bool                                               bShowVertexIndices;                                         // 0x02E5   (0x0001)  
	bool                                               bShowVertexNormals;                                         // 0x02E6   (0x0001)  
	bool                                               bUseActiveVisualization;                                    // 0x02E7   (0x0001)  
	float                                              PointThickness;                                             // 0x02E8   (0x0004)  
	float                                              LineThickness;                                              // 0x02EC   (0x0004)  
	bool                                               bTextShadow;                                                // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02F1   (0x0003)  MISSED
	float                                              TextScale;                                                  // 0x02F4   (0x0004)  
	float                                              NormalScale;                                                // 0x02F8   (0x0004)  
	float                                              AxisScale;                                                  // 0x02FC   (0x0004)  
	float                                              ArrowScale;                                                 // 0x0300   (0x0004)  
	FColor                                             RigidBodyIdColor;                                           // 0x0304   (0x0004)  
	float                                              RigidBodyTransformScale;                                    // 0x0308   (0x0004)  
	FColor                                             RigidBodyCollisionColor;                                    // 0x030C   (0x0004)  
	FColor                                             RigidBodyInertiaColor;                                      // 0x0310   (0x0004)  
	FColor                                             RigidBodyVelocityColor;                                     // 0x0314   (0x0004)  
	FColor                                             RigidBodyForceColor;                                        // 0x0318   (0x0004)  
	FColor                                             RigidBodyInfoColor;                                         // 0x031C   (0x0004)  
	FColor                                             TransformIndexColor;                                        // 0x0320   (0x0004)  
	float                                              TransformScale;                                             // 0x0324   (0x0004)  
	FColor                                             LevelColor;                                                 // 0x0328   (0x0004)  
	FColor                                             ParentColor;                                                // 0x032C   (0x0004)  
	float                                              ConnectivityEdgeThickness;                                  // 0x0330   (0x0004)  
	FColor                                             GeometryIndexColor;                                         // 0x0334   (0x0004)  
	float                                              GeometryTransformScale;                                     // 0x0338   (0x0004)  
	FColor                                             BoundingBoxColor;                                           // 0x033C   (0x0004)  
	FColor                                             FaceColor;                                                  // 0x0340   (0x0004)  
	FColor                                             FaceIndexColor;                                             // 0x0344   (0x0004)  
	FColor                                             FaceNormalColor;                                            // 0x0348   (0x0004)  
	FColor                                             SingleFaceColor;                                            // 0x034C   (0x0004)  
	FColor                                             VertexColor;                                                // 0x0350   (0x0004)  
	FColor                                             VertexIndexColor;                                           // 0x0354   (0x0004)  
	FColor                                             VertexNormalColor;                                          // 0x0358   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x035C   (0x0004)  MISSED
	class UBillboardComponent*                         SpriteComponent;                                            // 0x0360   (0x0008)  
	unsigned char                                      UnknownData03_7[0x28];                                      // 0x0368   (0x0028)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
/// Size: 0x0018 (24 bytes) (0x0000C0 - 0x0000D8) align 8 pad: 0x0000
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{ 
public:
	class AGeometryCollectionDebugDrawActor*           GeometryCollectionDebugDrawActor;                           // 0x00C0   (0x0008)  
	class AGeometryCollectionRenderLevelSetActor*      GeometryCollectionRenderLevelSetActor;                      // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSource
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 pad: 0x0000
struct FGeometryCollectionSource
{ 
	FSoftObjectPath                                    SourceGeometryObject;                                       // 0x0000   (0x0020)  
	FTransform                                         LocalTransform;                                             // 0x0020   (0x0030)  
	TArray<class UMaterialInterface*>                  SourceMaterial;                                             // 0x0050   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FGeometryCollectionSizeSpecificData
{ 
	float                                              MaxSize;                                                    // 0x0000   (0x0004)  
	ECollisionTypeEnum                                 CollisionType;                                              // 0x0004   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	int32_t                                            MinLevelSetResolution;                                      // 0x0008   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x000C   (0x0004)  
	int32_t                                            MinClusterLevelSetResolution;                               // 0x0010   (0x0004)  
	int32_t                                            MaxClusterLevelSetResolution;                               // 0x0014   (0x0004)  
	int32_t                                            CollisionObjectReductionPercentage;                         // 0x0018   (0x0004)  
	float                                              CollisionParticlesFraction;                                 // 0x001C   (0x0004)  
	int32_t                                            MaximumCollisionParticles;                                  // 0x0020   (0x0004)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollection
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000E8) align 8 pad: 0x0000
class UGeometryCollection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<FGeometryCollectionSource>                  GeometrySource;                                             // 0x0038   (0x0010)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0048   (0x0010)  
	ECollisionTypeEnum                                 CollisionType;                                              // 0x0058   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x005A   (0x0002)  MISSED
	int32_t                                            MinLevelSetResolution;                                      // 0x005C   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x0060   (0x0004)  
	int32_t                                            MinClusterLevelSetResolution;                               // 0x0064   (0x0004)  
	int32_t                                            MaxClusterLevelSetResolution;                               // 0x0068   (0x0004)  
	float                                              CollisionObjectReductionPercentage;                         // 0x006C   (0x0004)  
	bool                                               bMassAsDensity;                                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              Mass;                                                       // 0x0074   (0x0004)  
	float                                              MinimumMassClamp;                                           // 0x0078   (0x0004)  
	float                                              CollisionParticlesFraction;                                 // 0x007C   (0x0004)  
	int32_t                                            MaximumCollisionParticles;                                  // 0x0080   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	TArray<FGeometryCollectionSizeSpecificData>        SizeSpecificData;                                           // 0x0088   (0x0010)  
	bool                                               EnableRemovePiecesOnFracture;                               // 0x0098   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0099   (0x0007)  MISSED
	TArray<class UMaterialInterface*>                  RemoveOnFractureMaterials;                                  // 0x00A0   (0x0010)  
	FGuid                                              PersistentGuid;                                             // 0x00B0   (0x0010)  
	FGuid                                              StateGuid;                                                  // 0x00C0   (0x0010)  
	int32_t                                            BoneSelectedMaterialIndex;                                  // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData05_7[0x14];                                      // 0x00D4   (0x0014)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
/// Size: 0x0098 (152 bytes) (0x0002A8 - 0x000340) align 16 pad: 0x0000
class AGeometryCollectionRenderLevelSetActor : public AActor
{ 
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                        // 0x02A8   (0x0008)  
	class UMaterial*                                   RayMarchMaterial;                                           // 0x02B0   (0x0008)  
	float                                              SurfaceTolerance;                                           // 0x02B8   (0x0004)  
	float                                              Isovalue;                                                   // 0x02BC   (0x0004)  
	bool                                               Enabled;                                                    // 0x02C0   (0x0001)  
	bool                                               RenderVolumeBoundingBox;                                    // 0x02C1   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7E];                                      // 0x02C2   (0x007E)  MISSED
};

/// Class /Script/GeometryCollectionEngine.SkeletalMeshSimulationComponent
/// Size: 0x0088 (136 bytes) (0x0000C0 - 0x000148) align 8 pad: 0x0000
class USkeletalMeshSimulationComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                           // 0x00C8   (0x0008)  
	class AChaosSolverActor*                           ChaosSolverActor;                                           // 0x00D0   (0x0008)  
	class UPhysicsAsset*                               OverridePhysicsAsset;                                       // 0x00D8   (0x0008)  
	bool                                               bSimulating;                                                // 0x00E0   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x00E1   (0x0001)  
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x00E2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00E3   (0x0001)  MISSED
	float                                              Density;                                                    // 0x00E4   (0x0004)  
	float                                              MinMass;                                                    // 0x00E8   (0x0004)  
	float                                              MaxMass;                                                    // 0x00EC   (0x0004)  
	ECollisionTypeEnum                                 CollisionType;                                              // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              ImplicitShapeParticlesPerUnitArea;                          // 0x00F4   (0x0004)  
	int32_t                                            ImplicitShapeMinNumParticles;                               // 0x00F8   (0x0004)  
	int32_t                                            ImplicitShapeMaxNumParticles;                               // 0x00FC   (0x0004)  
	int32_t                                            MinLevelSetResolution;                                      // 0x0100   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x0104   (0x0004)  
	int32_t                                            CollisionGroup;                                             // 0x0108   (0x0004)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x010C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x0110   (0x000C)  
	FVector                                            InitialAngularVelocity;                                     // 0x011C   (0x000C)  
	SDK_UNDEFINED(16,1369) /* FMulticastInlineDelegate */ __um(OnChaosPhysicsCollision);                           // 0x0128   (0x0010)  
	unsigned char                                      UnknownData04_7[0x10];                                      // 0x0138   (0x0010)  MISSED
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                                 // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GeometryCollectionEngine.StaticMeshSimulationComponent
/// Size: 0x0088 (136 bytes) (0x0000C0 - 0x000148) align 8 pad: 0x0000
class UStaticMeshSimulationComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	bool                                               Simulating;                                                 // 0x00C8   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x00C9   (0x0001)  
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00CB   (0x0001)  MISSED
	float                                              Mass;                                                       // 0x00CC   (0x0004)  
	ECollisionTypeEnum                                 CollisionType;                                              // 0x00D0   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00D2   (0x0002)  MISSED
	int32_t                                            MinLevelSetResolution;                                      // 0x00D4   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x00D8   (0x0004)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x00E0   (0x000C)  
	FVector                                            InitialAngularVelocity;                                     // 0x00EC   (0x000C)  
	float                                              DamageThreshold;                                            // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                           // 0x0100   (0x0008)  
	class AChaosSolverActor*                           ChaosSolverActor;                                           // 0x0108   (0x0008)  
	SDK_UNDEFINED(16,1370) /* FMulticastInlineDelegate */ __um(OnChaosPhysicsCollision);                           // 0x0110   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x0120   (0x0010)  MISSED
	TArray<class UPrimitiveComponent*>                 SimulatedComponents;                                        // 0x0130   (0x0010)  
	unsigned char                                      UnknownData06_7[0x8];                                       // 0x0140   (0x0008)  MISSED
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                                 // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void ForceRecreatePhysicsState();                                                                                        // [0x4a25a40] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FChaosCollisionEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Normal;                                                     // 0x000C   (0x000C)  
	FVector                                            Velocity1;                                                  // 0x0018   (0x000C)  
	FVector                                            Velocity2;                                                  // 0x0024   (0x000C)  
	float                                              Mass1;                                                      // 0x0030   (0x0004)  
	float                                              Mass2;                                                      // 0x0034   (0x0004)  
	FVector                                            Impulse;                                                    // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_7[0x14];                                      // 0x0044   (0x0014)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventData
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FChaosBreakingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Velocity;                                                   // 0x000C   (0x000C)  
	float                                              Mass;                                                       // 0x0018   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventData
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FChaosTrailingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Velocity;                                                   // 0x000C   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0018   (0x000C)  
	float                                              Mass;                                                       // 0x0024   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x0028   (0x0004)  
};

