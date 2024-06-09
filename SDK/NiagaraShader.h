
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
/// Size: 0x01 (1 bytes)
enum class FNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log                                                = 0,
	FNiagaraCompileEventSeverity__Warning                                            = 1,
	FNiagaraCompileEventSeverity__Error                                              = 2
};

/// Class /Script/NiagaraShader.NiagaraScriptBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNiagaraScriptBase : public UObject
{ 
public:
};

/// Struct /Script/NiagaraShader.SimulationStageMetaData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FSimulationStageMetaData
{ 
	FName                                              SimulationStageName;                                        // 0x0000   (0x000C)  
	FName                                              IterationSource;                                            // 0x000C   (0x000C)  
	bool                                               bSpawnOnly : 1;                                             // 0x0018:0 (0x0001)  
	bool                                               bWritesParticles : 1;                                       // 0x0018:1 (0x0001)  
	bool                                               bPartialParticleUpdate : 1;                                 // 0x0018:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	TArray<FName>                                      OutputDestinations;                                         // 0x0020   (0x0010)  
	int32_t                                            MinStage;                                                   // 0x0030   (0x0004)  
	int32_t                                            MaxStage;                                                   // 0x0034   (0x0004)  
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FNiagaraDataInterfaceGeneratedFunction
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FNiagaraDataInterfaceGPUParamInfo
{ 
	FString                                            DataInterfaceHLSLSymbol;                                    // 0x0000   (0x0010)  
	FString                                            DIClassName;                                                // 0x0010   (0x0010)  
	TArray<FNiagaraDataInterfaceGeneratedFunction>     GeneratedFunctions;                                         // 0x0020   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraCompileEvent
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FNiagaraCompileEvent
{ 
	FNiagaraCompileEventSeverity                       Severity;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0008   (0x0010)  
	FGuid                                              NodeGuid;                                                   // 0x0018   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x0028   (0x0010)  
	TArray<FGuid>                                      StackGuids;                                                 // 0x0038   (0x0010)  
};

