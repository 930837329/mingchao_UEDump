
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

/// Class /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
/// Size: 0x008C (140 bytes) (0x0002C0 - 0x00034C) align 8 pad: 0x0004
#pragma pack(push, 0x1)
class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	class UStaticMeshComponent*                        Right;                                                      // 0x02C8   (0x0008)  
	class UStaticMeshComponent*                        Forward;                                                    // 0x02D0   (0x0008)  
	class UStaticMeshComponent*                        Up;                                                         // 0x02D8   (0x0008)  
	class USphereComponent*                            ValidRadiusVisualizer;                                      // 0x02E0   (0x0008)  
	class USceneComponent*                             AxisRoot;                                                   // 0x02E8   (0x0008)  
	class USceneComponent*                             VisualizerRoot;                                             // 0x02F0   (0x0008)  
	class UTextRenderComponent*                        TypeValue;                                                  // 0x02F8   (0x0008)  
	class UTextRenderComponent*                        TransErrValue;                                              // 0x0300   (0x0008)  
	class UTextRenderComponent*                        RotErrValue;                                                // 0x0308   (0x0008)  
	class UTextRenderComponent*                        ConfidenceValue;                                            // 0x0310   (0x0008)  
	class UTextRenderComponent*                        TransErrLabel;                                              // 0x0318   (0x0008)  
	class UTextRenderComponent*                        RotErrLabel;                                                // 0x0320   (0x0008)  
	class UTextRenderComponent*                        ConfidenceLabel;                                            // 0x0328   (0x0008)  
	class UTextRenderComponent*                        PinIDValue;                                                 // 0x0330   (0x0008)  
	class USceneComponent*                             InfoRoot;                                                   // 0x0338   (0x0008)  
	class USceneComponent*                             Root;                                                       // 0x0340   (0x0008)  
	float                                              RotationSmoothSpeed;                                        // 0x0348   (0x0004)  
	// void UpdatePinState();                                                                                                   // [0x25a7960] Public|BlueprintCallable|BlueprintEvent 
	// void UserConstructionScript();                                                                                           // [0x25a7960] Event|Public|BlueprintCallable|BlueprintEvent 
	// void OnUpdateARPinState();                                                                                               // [0x25a7960] Event|Public|BlueprintCallable|BlueprintEvent 
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x25a7960] Event|Public|BlueprintEvent 
	// void ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint);                                                       // [0x25a7960] Final|HasDefaults    
};
#pragma pack(pop)

