
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/LTween.LTweenLoop
/// Size: 0x01 (1 bytes)
enum class LTweenLoop : uint8_t
{
	LTweenLoop__Once                                                                 = 0,
	LTweenLoop__Restart                                                              = 1,
	LTweenLoop__Yoyo                                                                 = 2,
	LTweenLoop__Incremental                                                          = 3
};

/// Enum /Script/LTween.LTweenEase
/// Size: 0x01 (1 bytes)
enum class LTweenEase : uint8_t
{
	LTweenEase__Linear                                                               = 0,
	LTweenEase__InQuad                                                               = 1,
	LTweenEase__OutQuad                                                              = 2,
	LTweenEase__InOutQuad                                                            = 3,
	LTweenEase__InCubic                                                              = 4,
	LTweenEase__OutCubic                                                             = 5,
	LTweenEase__InOutCubic                                                           = 6,
	LTweenEase__InQuart                                                              = 7,
	LTweenEase__OutQuart                                                             = 8,
	LTweenEase__InOutQuart                                                           = 9,
	LTweenEase__InSine                                                               = 10,
	LTweenEase__OutSine                                                              = 11,
	LTweenEase__InOutSine                                                            = 12,
	LTweenEase__InExpo                                                               = 13,
	LTweenEase__OutExpo                                                              = 14,
	LTweenEase__InOutExpo                                                            = 15,
	LTweenEase__InCirc                                                               = 16,
	LTweenEase__OutCirc                                                              = 17,
	LTweenEase__InOutCirc                                                            = 18,
	LTweenEase__InElastic                                                            = 19,
	LTweenEase__OutElastic                                                           = 20,
	LTweenEase__InOutElastic                                                         = 21,
	LTweenEase__InBack                                                               = 22,
	LTweenEase__OutBack                                                              = 23,
	LTweenEase__InOutBack                                                            = 24,
	LTweenEase__InBounce                                                             = 25,
	LTweenEase__OutBounce                                                            = 26,
	LTweenEase__InOutBounce                                                          = 27,
	LTweenEase__CurveFloat                                                           = 28
};

/// Class /Script/LTween.LTweenActor
/// Size: 0x0038 (56 bytes) (0x0002A8 - 0x0002E0) align 8 pad: 0x0000
class ALTweenActor : public AActor
{ 
public:
	TArray<class ULTweener*>                           tweenerList;                                                // 0x02A8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x02B8   (0x0028)  MISSED
	// void KillAllTweens(bool callComplete);                                                                                   // [0xc4d140] Final|Native|Public|BlueprintCallable 
	// class ALTweenActor* GetLTweenInstance(class UObject* WorldContextObject);                                                // [0xc4ccf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void EnableTick();                                                                                                       // [0xc4ca70] Final|Native|Public|BlueprintCallable 
	// void DisableTick();                                                                                                      // [0xc4ca50] Final|Native|Public|BlueprintCallable 
	// void CustomTick(float DeltaTime);                                                                                        // [0xc4c730] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LTween.LTweenBPLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULTweenBPLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// class ULTweener* WorldRotatorTo_Sweep(class USceneComponent* Target, FRotator endValue, bool shortestPath, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc533c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class ULTweener* WorldRotatorTo(class USceneComponent* Target, FRotator endValue, bool shortestPath, float Duration, float delay, LTweenEase Ease); // [0xc531e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* WorldRotationQuaternionTo_Sweep(class USceneComponent* Target, FQuat& endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc52f00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class ULTweener* WorldRotationQuaternionTo(class USceneComponent* Target, FQuat& endValue, float Duration, float delay, LTweenEase Ease); // [0xc52d40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class ULTweener* WorldRotateEulerAngleTo_Sweep(class USceneComponent* Target, FVector eulerAngle, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc52a70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class ULTweener* WorldRotateEulerAngleTo(class USceneComponent* Target, FVector eulerAngle, float Duration, float delay, LTweenEase Ease); // [0xc528b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* WorldPositionZTo_Sweep(class USceneComponent* Target, float endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc525f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class ULTweener* WorldPositionZTo(class USceneComponent* Target, float endValue, float Duration, float delay, LTweenEase Ease); // [0xc52460] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* WorldPositionYTo_Sweep(class USceneComponent* Target, float endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc521a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class ULTweener* WorldPositionYTo(class USceneComponent* Target, float endValue, float Duration, float delay, LTweenEase Ease); // [0xc52010] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* WorldPositionXTo_Sweep(class USceneComponent* Target, float endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc51d50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class ULTweener* WorldPositionXTo(class USceneComponent* Target, float endValue, float Duration, float delay, LTweenEase Ease); // [0xc51bc0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* WorldPositionTo_Sweep(class USceneComponent* Target, FVector endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc518f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class ULTweener* WorldPositionTo(class USceneComponent* Target, FVector endValue, float Duration, float delay, LTweenEase Ease); // [0xc51730] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* VirtualCall(class UObject* WorldContextObject, float Duration, float delay, FDelegateProperty Start, FDelegateProperty Update, FDelegateProperty complete); // [0xc514d0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* Vector4To(class UObject* WorldContextObject, FDelegateProperty setter, FVector4 startValue, FVector4 endValue, float Duration, float delay, LTweenEase Ease); // [0xc51270] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* Vector3To(class UObject* WorldContextObject, FDelegateProperty setter, FVector startValue, FVector endValue, float Duration, float delay, LTweenEase Ease); // [0xc51020] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* Vector2To(class UObject* WorldContextObject, FDelegateProperty setter, FVector2D startValue, FVector2D endValue, float Duration, float delay, LTweenEase Ease); // [0xc50df0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void UnregisterUpdateEvent(class UObject* WorldContextObject, FLTweenDelegateHandleWrapper& delegateHandle);             // [0xc50d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class ULTweener* RotatorTo(class UObject* WorldContextObject, FDelegateProperty setter, FRotator startValue, FRotator endValue, float Duration, float delay, LTweenEase Ease); // [0xc50700] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// FLTweenDelegateHandleWrapper RegisterUpdateEvent(class UObject* WorldContextObject, FDelegateProperty& Update);          // [0xc50520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class ULTweener* QuaternionTo(class UObject* WorldContextObject, FDelegateProperty setter, FQuat startValue, FQuat endValue, float Duration, float delay, LTweenEase Ease); // [0xc502e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* MeshMaterialVectorParameterTo(class UMeshComponent* Target, int32_t MaterialIndex, FName ParameterName, FLinearColor endValue, float Duration, float delay, LTweenEase Ease); // [0xc4fca0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* MeshMaterialScalarParameterTo(class UMeshComponent* Target, int32_t MaterialIndex, FName ParameterName, float endValue, float Duration, float delay, LTweenEase Ease); // [0xc4fa70] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* MaterialVectorParameterTo(class UMaterialInstanceDynamic* Target, FName ParameterName, FLinearColor endValue, float Duration, float delay, LTweenEase Ease); // [0xc4f880] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* MaterialScalarParameterTo(class UMaterialInstanceDynamic* Target, FName ParameterName, float endValue, float Duration, float delay, LTweenEase Ease); // [0xc4f6a0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* LocalScaleTo(class USceneComponent* Target, FVector endValue, float Duration, float delay, LTweenEase Ease); // [0xc4f4e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* LocalRotatorTo_Sweep(class USceneComponent* Target, FRotator endValue, bool shortestPath, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc4f1a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class ULTweener* LocalRotatorTo(class USceneComponent* Target, FRotator endValue, bool shortestPath, float Duration, float delay, LTweenEase Ease); // [0xc4efc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* LocalRotationQuaternionTo_Sweep(class USceneComponent* Target, FQuat& endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc4ece0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class ULTweener* LocalRotationQuaternionTo(class USceneComponent* Target, FQuat& endValue, float Duration, float delay, LTweenEase Ease); // [0xc4eb20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class ULTweener* LocalRotateEulerAngleTo_Sweep(class USceneComponent* Target, FVector eulerAngle, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc4e850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class ULTweener* LocalRotateEulerAngleTo(class USceneComponent* Target, FVector eulerAngle, float Duration, float delay, LTweenEase Ease); // [0xc4e690] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* LocalPositionZTo_Sweep(class USceneComponent* Target, float endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc4e3d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class ULTweener* LocalPositionZTo(class USceneComponent* Target, float endValue, float Duration, float delay, LTweenEase Ease); // [0xc4e240] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* LocalPositionYTo_Sweep(class USceneComponent* Target, float endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc4df80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class ULTweener* LocalPositionYTo(class USceneComponent* Target, float endValue, float Duration, float delay, LTweenEase Ease); // [0xc4ddf0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* LocalPositionXTo_Sweep(class USceneComponent* Target, float endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc4db30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class ULTweener* LocalPositionXTo(class USceneComponent* Target, float endValue, float Duration, float delay, LTweenEase Ease); // [0xc4d9a0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* LocalPositionTo_Sweep(class USceneComponent* Target, FVector endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float delay, LTweenEase Ease); // [0xc4d6d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class ULTweener* LocalPositionTo(class USceneComponent* Target, FVector endValue, float Duration, float delay, LTweenEase Ease); // [0xc4d510] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* LinearColorTo(class UObject* WorldContextObject, FDelegateProperty setter, FLinearColor startValue, FLinearColor endValue, float Duration, float delay, LTweenEase Ease); // [0xc4d2d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void KillIfIsTweening(class UObject* WorldContextObject, class ULTweener* inTweener, bool callComplete);                 // [0xc4d1d0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsTweening(class UObject* WorldContextObject, class ULTweener* inTweener);                                          // [0xc4cfe0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* IntTo(class UObject* WorldContextObject, FDelegateProperty setter, int32_t startValue, int32_t endValue, float Duration, float delay, LTweenEase Ease); // [0xc4cda0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* FloatTo(class UObject* WorldContextObject, FDelegateProperty setter, float startValue, float endValue, float Duration, float delay, LTweenEase Ease); // [0xc4ca90] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* DelayFrameCall(class UObject* WorldContextObject, int32_t FrameCount, FDelegateProperty delayComplete); // [0xc4c900] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* DelayCall(class UObject* WorldContextObject, float delayTime, FDelegateProperty delayComplete);         // [0xc4c7b0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* ColorTo(class UObject* WorldContextObject, FDelegateProperty setter, FColor startValue, FColor endValue, float Duration, float delay, LTweenEase Ease); // [0xc4c500] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void ArrayKillIfIsTweening(class UObject* WorldContextObject, TArray<ULTweener*>& inTweenerArray, bool callComplete);    // [0xc4c350] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LTween.LTweener
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000F0) align 8 pad: 0x0000
class ULTweener : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x70];                                      // 0x0030   (0x0070)  MISSED
	SDK_UNDEFINED(20,675) /* FDelegateProperty */      __um(OnStartCallBack);                                      // 0x00A0   (0x0014)  
	SDK_UNDEFINED(20,676) /* FDelegateProperty */      __um(OnUpdateCallBack);                                     // 0x00B4   (0x0014)  
	SDK_UNDEFINED(20,677) /* FDelegateProperty */      __um(OnCompleteCallBack);                                   // 0x00C8   (0x0014)  
	unsigned char                                      UnknownData01_7[0x14];                                      // 0x00DC   (0x0014)  MISSED
	// class ULTweener* SetLoopType(LTweenLoop newLoopType);                                                                    // [0xc50c90] Native|Public|BlueprintCallable 
	// class ULTweener* SetLoop(LTweenLoop newLoopType, int32_t newLoopCount);                                                  // [0xc50bc0] Native|Public|BlueprintCallable 
	// class ULTweener* SetEaseCurve(class UCurveFloat* newCurve);                                                              // [0xc50b20] Final|Native|Public|BlueprintCallable 
	// class ULTweener* SetEase(LTweenEase easeType);                                                                           // [0xc50a90] Final|Native|Public|BlueprintCallable 
	// class ULTweener* SetDelay(float newDelay);                                                                               // [0xc509f0] Native|Public|BlueprintCallable 
	// class ULTweener* SetCurveFloat(class UCurveFloat* newCurveFloat);                                                        // [0xc50950] Final|Native|Public|BlueprintCallable 
	// void Resume();                                                                                                           // [0xc506e0] Final|Native|Public|BlueprintCallable 
	// void Pause();                                                                                                            // [0xc502c0] Final|Native|Public|BlueprintCallable 
	// class ULTweener* OnUpdate(FDelegateProperty& newUpdate);                                                                 // [0xc501f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// class ULTweener* OnStart(FDelegateProperty& newStart);                                                                   // [0xc50120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// class ULTweener* OnCycleComplete(FDelegateProperty& newCycleComplete);                                                   // [0xc4ffa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// class ULTweener* OnComplete(FDelegateProperty& newComplete);                                                             // [0xc4fed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void Kill(bool callComplete);                                                                                            // [0xc4d0b0] Native|Public|BlueprintCallable 
	// int32_t GetLoopCycleCount();                                                                                             // [0xc4cd80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetLoopCount();                                                                                                  // [0xc4cd80] Final|Native|Public|BlueprintCallable 
	// void ForceComplete();                                                                                                    // [0xc4ccd0] Native|Public|BlueprintCallable 
};

/// Class /Script/LTween.LTweenerColor
/// Size: 0x0030 (48 bytes) (0x0000F0 - 0x000120) align 8 pad: 0x0000
class ULTweenerColor : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00F0   (0x0030)  MISSED
};

/// Class /Script/LTween.LTweenerFloat
/// Size: 0x0030 (48 bytes) (0x0000F0 - 0x000120) align 8 pad: 0x0000
class ULTweenerFloat : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00F0   (0x0030)  MISSED
};

/// Class /Script/LTween.LTweenerFrame
/// Size: 0x0008 (8 bytes) (0x0000F0 - 0x0000F8) align 8 pad: 0x0000
class ULTweenerFrame : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/LTween.LTweenerInteger
/// Size: 0x0030 (48 bytes) (0x0000F0 - 0x000120) align 8 pad: 0x0000
class ULTweenerInteger : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00F0   (0x0030)  MISSED
};

/// Class /Script/LTween.LTweenerLinearColor
/// Size: 0x0048 (72 bytes) (0x0000F0 - 0x000138) align 8 pad: 0x0000
class ULTweenerLinearColor : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x00F0   (0x0048)  MISSED
};

/// Class /Script/LTween.LTweenerMaterialScalar
/// Size: 0x0030 (48 bytes) (0x0000F0 - 0x000120) align 8 pad: 0x0000
class ULTweenerMaterialScalar : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00F0   (0x0030)  MISSED
};

/// Class /Script/LTween.LTweenerMaterialVector
/// Size: 0x0050 (80 bytes) (0x0000F0 - 0x000140) align 8 pad: 0x0000
class ULTweenerMaterialVector : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00F0   (0x0050)  MISSED
};

/// Class /Script/LTween.LTweenerPosition
/// Size: 0x0058 (88 bytes) (0x0000F0 - 0x000148) align 8 pad: 0x0000
class ULTweenerPosition : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x00F0   (0x0058)  MISSED
};

/// Class /Script/LTween.LTweenerQuaternion
/// Size: 0x0050 (80 bytes) (0x0000F0 - 0x000140) align 16 pad: 0x0000
class ULTweenerQuaternion : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00F0   (0x0050)  MISSED
};

/// Class /Script/LTween.LTweenerRotationEuler
/// Size: 0x0060 (96 bytes) (0x0000F0 - 0x000150) align 16 pad: 0x0000
class ULTweenerRotationEuler : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x00F0   (0x0060)  MISSED
};

/// Class /Script/LTween.LTweenerRotationQuat
/// Size: 0x0070 (112 bytes) (0x0000F0 - 0x000160) align 16 pad: 0x0000
class ULTweenerRotationQuat : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x00F0   (0x0070)  MISSED
};

/// Class /Script/LTween.LTweenerRotator
/// Size: 0x0040 (64 bytes) (0x0000F0 - 0x000130) align 8 pad: 0x0000
class ULTweenerRotator : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x00F0   (0x0040)  MISSED
};

/// Class /Script/LTween.LTweenerScale
/// Size: 0x0040 (64 bytes) (0x0000F0 - 0x000130) align 8 pad: 0x0000
class ULTweenerScale : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x00F0   (0x0040)  MISSED
};

/// Class /Script/LTween.LTweenerVector
/// Size: 0x0040 (64 bytes) (0x0000F0 - 0x000130) align 8 pad: 0x0000
class ULTweenerVector : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x00F0   (0x0040)  MISSED
};

/// Class /Script/LTween.LTweenerVector2D
/// Size: 0x0038 (56 bytes) (0x0000F0 - 0x000128) align 8 pad: 0x0000
class ULTweenerVector2D : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x00F0   (0x0038)  MISSED
};

/// Class /Script/LTween.LTweenerVector4
/// Size: 0x0050 (80 bytes) (0x0000F0 - 0x000140) align 16 pad: 0x0000
class ULTweenerVector4 : public ULTweener
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00F0   (0x0050)  MISSED
};

/// Class /Script/LTween.LTweenerVirtual
/// Size: 0x0000 (0 bytes) (0x0000F0 - 0x0000F0) align 8 pad: 0x0000
class ULTweenerVirtual : public ULTweener
{ 
public:
};

/// Struct /Script/LTween.LTweenDelegateHandleWrapper
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FLTweenDelegateHandleWrapper
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

