
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FieldSystemEngine.FieldSystemActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AFieldSystemActor : public AActor
{ 
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                       // 0x02A8   (0x0008)  
};

/// Class /Script/FieldSystemEngine.FieldSystem
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UFieldSystem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/FieldSystemEngine.FieldSystemComponent
/// Size: 0x0040 (64 bytes) (0x0004E0 - 0x000520) align 16 pad: 0x0000
class UFieldSystemComponent : public UPrimitiveComponent
{ 
public:
	class UFieldSystem*                                FieldSystem;                                                // 0x04E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x04E8   (0x0010)  MISSED
	SDK_UNDEFINED(16,1359) /* TArray<TWeakObjectPtr<AChaosSolverActor*>> */ __um(SupportedSolvers);                // 0x04F8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0508   (0x0018)  MISSED
	// void ResetFieldSystem();                                                                                                 // [0x4a07e30] Final|Native|Public|BlueprintCallable 
	// void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);   // [0x4a07c70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32_t Iterations);                // [0x4a07aa0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);                                                // [0x4a07970] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);                       // [0x4a077e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);                                                  // [0x4a076b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x4a07550] Final|Native|Public|BlueprintCallable 
	// void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);                                                 // [0x4a07420] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x4a072c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaData
/// Size: 0x0000 (0 bytes) (0x0000C0 - 0x0000C0) align 8 pad: 0x0000
class UFieldSystemMetaData : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataIteration
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{ 
public:
	int32_t                                            Iterations;                                                 // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00C4   (0x0004)  MISSED
	// class UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations);                                           // [0x4a081b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{ 
public:
	TEnumAsByte<EFieldResolutionType>                  ResolutionType;                                             // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00C1   (0x0007)  MISSED
	// class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType); // [0x4a08250] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldNodeBase
/// Size: 0x0000 (0 bytes) (0x0000C0 - 0x0000C0) align 8 pad: 0x0000
class UFieldNodeBase : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeInt
/// Size: 0x0000 (0 bytes) (0x0000C0 - 0x0000C0) align 8 pad: 0x0000
class UFieldNodeInt : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeFloat
/// Size: 0x0000 (0 bytes) (0x0000C0 - 0x0000C0) align 8 pad: 0x0000
class UFieldNodeFloat : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeVector
/// Size: 0x0000 (0 bytes) (0x0000C0 - 0x0000C0) align 8 pad: 0x0000
class UFieldNodeVector : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.UniformInteger
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UUniformInteger : public UFieldNodeInt
{ 
public:
	int32_t                                            Magnitude;                                                  // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00C4   (0x0004)  MISSED
	// class UUniformInteger* SetUniformInteger(int32_t Magnitude);                                                             // [0x4a081b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialIntMask
/// Size: 0x0020 (32 bytes) (0x0000C0 - 0x0000E0) align 8 pad: 0x0000
class URadialIntMask : public UFieldNodeInt
{ 
public:
	float                                              Radius;                                                     // 0x00C0   (0x0004)  
	FVector                                            Position;                                                   // 0x00C4   (0x000C)  
	int32_t                                            InteriorValue;                                              // 0x00D0   (0x0004)  
	int32_t                                            ExteriorValue;                                              // 0x00D4   (0x0004)  
	TEnumAsByte<ESetMaskConditionType>                 SetMaskCondition;                                           // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D9   (0x0007)  MISSED
	// class URadialIntMask* SetRadialIntMask(float Radius, FVector Position, int32_t InteriorValue, int32_t ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn); // [0x4a08ac0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformScalar
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UUniformScalar : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00C4   (0x0004)  MISSED
	// class UUniformScalar* SetUniformScalar(float Magnitude);                                                                 // [0x4a08d90] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialFalloff
/// Size: 0x0028 (40 bytes) (0x0000C0 - 0x0000E8) align 8 pad: 0x0000
class URadialFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	float                                              MinRange;                                                   // 0x00C4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00C8   (0x0004)  
	float                                              Default;                                                    // 0x00CC   (0x0004)  
	float                                              Radius;                                                     // 0x00D0   (0x0004)  
	FVector                                            Position;                                                   // 0x00D4   (0x000C)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00E1   (0x0007)  MISSED
	// class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, TEnumAsByte<EFieldFalloffType> Falloff); // [0x4a08870] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.PlaneFalloff
/// Size: 0x0030 (48 bytes) (0x0000C0 - 0x0000F0) align 8 pad: 0x0000
class UPlaneFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	float                                              MinRange;                                                   // 0x00C4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00C8   (0x0004)  
	float                                              Default;                                                    // 0x00CC   (0x0004)  
	float                                              Distance;                                                   // 0x00D0   (0x0004)  
	FVector                                            Position;                                                   // 0x00D4   (0x000C)  
	FVector                                            Normal;                                                     // 0x00E0   (0x000C)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00ED   (0x0003)  MISSED
	// class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, TEnumAsByte<EFieldFalloffType> Falloff); // [0x4a085d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.BoxFalloff
/// Size: 0x0050 (80 bytes) (0x0000C0 - 0x000110) align 16 pad: 0x0000
class UBoxFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	float                                              MinRange;                                                   // 0x00C4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00C8   (0x0004)  
	float                                              Default;                                                    // 0x00CC   (0x0004)  
	FTransform                                         Transform;                                                  // 0x00D0   (0x0030)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0101   (0x000F)  MISSED
	// class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte<EFieldFalloffType> Falloff); // [0x4a07e50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.NoiseField
/// Size: 0x0040 (64 bytes) (0x0000C0 - 0x000100) align 16 pad: 0x0000
class UNoiseField : public UFieldNodeFloat
{ 
public:
	float                                              MinRange;                                                   // 0x00C0   (0x0004)  
	float                                              MaxRange;                                                   // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x00D0   (0x0030)  
	// class UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);                                  // [0x4a082e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformVector
/// Size: 0x0010 (16 bytes) (0x0000C0 - 0x0000D0) align 8 pad: 0x0000
class UUniformVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	FVector                                            Direction;                                                  // 0x00C4   (0x000C)  
	// class UUniformVector* SetUniformVector(float Magnitude, FVector Direction);                                              // [0x4a08ca0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialVector
/// Size: 0x0010 (16 bytes) (0x0000C0 - 0x0000D0) align 8 pad: 0x0000
class URadialVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	FVector                                            Position;                                                   // 0x00C4   (0x000C)  
	// class URadialVector* SetRadialVector(float Magnitude, FVector Position);                                                 // [0x4a08ca0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RandomVector
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class URandomVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00C4   (0x0004)  MISSED
	// class URandomVector* SetRandomVector(float Magnitude);                                                                   // [0x4a08d90] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.OperatorField
/// Size: 0x0020 (32 bytes) (0x0000C0 - 0x0000E0) align 8 pad: 0x0000
class UOperatorField : public UFieldNodeBase
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	class UFieldNodeBase*                              RightField;                                                 // 0x00C8   (0x0008)  
	class UFieldNodeBase*                              LeftField;                                                  // 0x00D0   (0x0008)  
	TEnumAsByte<EFieldOperationType>                   Operation;                                                  // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00D9   (0x0007)  MISSED
	// class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* RightField, class UFieldNodeBase* LeftField, TEnumAsByte<EFieldOperationType> Operation); // [0x4a08470] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToIntegerField
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UToIntegerField : public UFieldNodeInt
{ 
public:
	class UFieldNodeFloat*                             FloatField;                                                 // 0x00C0   (0x0008)  
	// class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField);                                             // [0x4a08e50] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToFloatField
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UToFloatField : public UFieldNodeFloat
{ 
public:
	class UFieldNodeInt*                               IntField;                                                   // 0x00C0   (0x0008)  
	// class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField);                                                 // [0x4a08e50] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.CullingField
/// Size: 0x0018 (24 bytes) (0x0000C0 - 0x0000D8) align 8 pad: 0x0000
class UCullingField : public UFieldNodeBase
{ 
public:
	class UFieldNodeBase*                              Culling;                                                    // 0x00C0   (0x0008)  
	class UFieldNodeBase*                              Field;                                                      // 0x00C8   (0x0008)  
	TEnumAsByte<EFieldCullingOperationType>            Operation;                                                  // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D1   (0x0007)  MISSED
	// class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation); // [0x4a080a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ReturnResultsTerminal
/// Size: 0x0000 (0 bytes) (0x0000C0 - 0x0000C0) align 8 pad: 0x0000
class UReturnResultsTerminal : public UFieldNodeBase
{ 
public:
	// class UReturnResultsTerminal* SetReturnResultsTerminal();                                                                // [0x4a08e20] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

