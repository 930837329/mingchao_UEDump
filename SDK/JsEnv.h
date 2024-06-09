
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Aki
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Enum /Script/JsEnv.EV8GCType
/// Size: 0x01 (1 bytes)
enum class EV8GCType : uint8_t
{
	EV8GCType__DoNothing                                                             = 0,
	EV8GCType__CallV8LowMemory                                                       = 1,
	EV8GCType__CallMinorGC                                                           = 2,
	EV8GCType__CallFullGC                                                            = 3,
	EV8GCType__CallMemoryPressureNone                                                = 4,
	EV8GCType__CallMemoryPressureModerate                                            = 5,
	EV8GCType__CallMemoryPressureCritical                                            = 6
};

/// Class /Script/JsEnv.DynamicDelegateProxy
/// Size: 0x0028 (40 bytes) (0x000030 - 0x000058) align 8 pad: 0x0000
class UDynamicDelegateProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0030   (0x0028)  MISSED
	// void Fire();                                                                                                             // [0x95a130] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JsEnv.ExtensionMethods
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UExtensionMethods : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/JsEnv.JSAnimGeneratedClass
/// Size: 0x0020 (32 bytes) (0x0005D0 - 0x0005F0) align 8 pad: 0x0000
class UJSAnimGeneratedClass : public UAnimBlueprintGeneratedClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x05D0   (0x0020)  MISSED
};

/// Class /Script/JsEnv.JsEnvSetting
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000090) align 8 pad: 0x0000
class UJsEnvSetting : public UObject
{ 
public:
	FString                                            JsRootPath;                                                 // 0x0030   (0x0010)  
	FString                                            RawJsRootPath;                                              // 0x0040   (0x0010)  
	FString                                            V8Flags;                                                    // 0x0050   (0x0010)  
	EV8GCType                                          MemoryWaringBehavior;                                       // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	uint32_t                                           MaxYoungGenerationSizeInMB;                                 // 0x0064   (0x0004)  
	uint32_t                                           EditorMaxOldGenerationSizeInMB;                             // 0x0068   (0x0004)  
	uint32_t                                           MinorGCIdleBudgetInMicroSec;                                // 0x006C   (0x0004)  
	uint32_t                                           V8IdleMinTimeInMicroSec;                                    // 0x0070   (0x0004)  
	uint32_t                                           V8EditorTickIdleMinTimeInMicroSec;                          // 0x0074   (0x0004)  
	uint32_t                                           MinorGCIdleIntervalInMilliSec;                              // 0x0078   (0x0004)  
	int32_t                                            MaxPumpMessageLoopCountPerFrame;                            // 0x007C   (0x0004)  
	uint32_t                                           StackTraceOption;                                           // 0x0080   (0x0004)  
	bool                                               EnableMinorGCInTick;                                        // 0x0084   (0x0001)  
	bool                                               EnablePreloadJS;                                            // 0x0085   (0x0001)  
	bool                                               EnableCheckLauncherJs;                                      // 0x0086   (0x0001)  
	bool                                               EnableV8Print;                                              // 0x0087   (0x0001)  
	bool                                               EnableGCHeapLayoutTrace;                                    // 0x0088   (0x0001)  
	bool                                               EnableGCHeapStatsTrace;                                     // 0x0089   (0x0001)  
	bool                                               UseRelativeScriptOrigin;                                    // 0x008A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x008B   (0x0005)  MISSED
};

/// Class /Script/JsEnv.JSGeneratedClass
/// Size: 0x0020 (32 bytes) (0x000338 - 0x000358) align 8 pad: 0x0000
class UJSGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0338   (0x0020)  MISSED
};

/// Class /Script/JsEnv.JSGeneratedFunction
/// Size: 0x0020 (32 bytes) (0x0000E8 - 0x000108) align 8 pad: 0x0000
class UJSGeneratedFunction : public UFunction
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x00E8   (0x0020)  MISSED
};

/// Class /Script/JsEnv.JSWidgetGeneratedClass
/// Size: 0x0020 (32 bytes) (0x000378 - 0x000398) align 8 pad: 0x0000
class UJSWidgetGeneratedClass : public UWidgetBlueprintGeneratedClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0378   (0x0020)  MISSED
};

/// Class /Script/JsEnv.KuroPreloadJSCallback
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UKuroPreloadJSCallback : public UObject
{ 
public:
	SDK_UNDEFINED(20,1452) /* FDelegateProperty */     __um(CompletedDelegate);                                    // 0x0030   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/JsEnv.TypeScriptBlueprint
/// Size: 0x0000 (0 bytes) (0x0000A8 - 0x0000A8) align 8 pad: 0x0000
class UTypeScriptBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/JsEnv.TypeScriptGeneratedClass
/// Size: 0x0070 (112 bytes) (0x000338 - 0x0003A8) align 8 pad: 0x0000
class UTypeScriptGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
	unsigned char                                      UnknownData00_3[0x69];                                      // 0x0338   (0x0069)  MISSED
	bool                                               HasConstructor;                                             // 0x03A1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x03A2   (0x0006)  MISSED
};

/// Class /Script/JsEnv.TypeScriptObject
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UTypeScriptObject : public UInterface
{ 
public:
};

/// Struct /Script/JsEnv.PropertyMetaRoot
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FPropertyMetaRoot
{ 
	FSNavigationGroup                                  None;                                                       // 0x0000   (0x00C1)  
	class UItemMaterialControllerActorData_C*          None0;                                                      // 0x0000   (0x0008)  
	FSplinePoint                                       None1;                                                      // 0x0000   (0x0044)  
	char                                               None2;                                                      // 0x0000   (0x0001)  
	float                                              None3;                                                      // 0x0000   (0x0004)  
	FWorldPartitionStreamingQuerySource                None4;                                                      // 0x0000   (0x0030)  
	FVector                                            None5;                                                      // 0x0000   (0x000C)  
	FSCameraConfig                                     None6;                                                      // 0x0000   (0x0731)  
	class AActor*                                      None7;                                                      // 0x0000   (0x0008)  
	FIntPoint                                          None8;                                                      // 0x0000   (0x0008)  
	int32_t                                            None9;                                                      // 0x0000   (0x0004)  
	FGuid                                              None10;                                                     // 0x0000   (0x0010)  
	FName                                              None11;                                                     // 0x0000   (0x000C)  
	class UClass*                                      None12;                                                     // 0x0000   (0x0008)  
	class UAnimationAsset*                             None13;                                                     // 0x0000   (0x0008)  
	FAnimNotifyEvent                                   None14;                                                     // 0x0000   (0x00C8)  
	class UAnimSequenceBase*                           None15;                                                     // 0x0000   (0x0008)  
	FString                                            None16;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/JsEnv.ArrayBuffer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FArrayBuffer
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/JsEnv.JsObject
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FJsObject
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

