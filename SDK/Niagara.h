
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: NiagaraCore
/// dependency: NiagaraShader

/// Enum /Script/Niagara.EKuroNiagaraTickTypePresets
/// Size: 0x01 (1 bytes)
enum class EKuroNiagaraTickTypePresets : uint8_t
{
	EKuroNiagaraTickTypePresets__Normal                                              = 0,
	EKuroNiagaraTickTypePresets__Slow                                                = 1,
	EKuroNiagaraTickTypePresets__Fast                                                = 2,
	EKuroNiagaraTickTypePresets__Important                                           = 3,
	EKuroNiagaraTickTypePresets__TickTypePresetsCount                                = 4
};

/// Enum /Script/Niagara.EKuroNiagaraEffectTypePresets
/// Size: 0x01 (1 bytes)
enum class EKuroNiagaraEffectTypePresets : uint8_t
{
	EKuroNiagaraEffectTypePresets__Normal                                            = 0,
	EKuroNiagaraEffectTypePresets__Scene                                             = 1,
	EKuroNiagaraEffectTypePresets__FarSkill                                          = 2,
	EKuroNiagaraEffectTypePresets__Important                                         = 3,
	EKuroNiagaraEffectTypePresets__ScalabilityPresetsCount                           = 4
};

/// Enum /Script/Niagara.EKuroNiagaraEffectRegularType
/// Size: 0x01 (1 bytes)
enum class EKuroNiagaraEffectRegularType : uint8_t
{
	EKuroNiagaraEffectRegularType__None                                              = 0,
	EKuroNiagaraEffectRegularType__Fight_L1                                          = 1,
	EKuroNiagaraEffectRegularType__Fight_L2                                          = 2,
	EKuroNiagaraEffectRegularType__Fight_L3                                          = 3,
	EKuroNiagaraEffectRegularType__Fight_L4                                          = 4,
	EKuroNiagaraEffectRegularType__Scene_L1                                          = 5,
	EKuroNiagaraEffectRegularType__Scene_L2                                          = 6,
	EKuroNiagaraEffectRegularType__Scene_L3                                          = 7,
	EKuroNiagaraEffectRegularType__SceneInteraction_L1                               = 8,
	EKuroNiagaraEffectRegularType__SceneInteraction_L2                               = 9,
	EKuroNiagaraEffectRegularType__SceneInteraction_L3                               = 10,
	EKuroNiagaraEffectRegularType__LGUI_L1                                           = 11,
	EKuroNiagaraEffectRegularType__LGUI_L2                                           = 12,
	EKuroNiagaraEffectRegularType__LGUI_L3                                           = 13,
	EKuroNiagaraEffectRegularType__Scene_LGUI_L1                                     = 14,
	EKuroNiagaraEffectRegularType__Scene_LGUI_L2                                     = 15,
	EKuroNiagaraEffectRegularType__Scene_LGUI_L3                                     = 16,
	EKuroNiagaraEffectRegularType__Movie_L1                                          = 17,
	EKuroNiagaraEffectRegularType__Movie_L2                                          = 18,
	EKuroNiagaraEffectRegularType__Movie_L3                                          = 19
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionEndBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive                         = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate                                = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None                                      = 2
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive                   = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None                                 = 1
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionStartBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate                                = 0
};

/// Enum /Script/Niagara.ENiagaraCollisionMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None                                                      = 0,
	ENiagaraCollisionMode__SceneGeometry                                             = 1,
	ENiagaraCollisionMode__DepthBuffer                                               = 2,
	ENiagaraCollisionMode__DistanceField                                             = 3
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre                                         = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst                                          = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles                                        = 0,
	ENiagaraRendererSourceDataMode__Emitter                                          = 1
};

/// Enum /Script/Niagara.ENiagaraBindingSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource                                                               = 0,
	ExplicitParticles                                                                = 1,
	ExplicitEmitter                                                                  = 2,
	ExplicitSystem                                                                   = 3,
	ExplicitUser                                                                     = 4,
	MaxBindingSource                                                                 = 5
};

/// Enum /Script/Niagara.ENiagaraIterationSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles                                               = 0,
	ENiagaraIterationSource__DataInterface                                           = 1
};

/// Enum /Script/Niagara.ENiagaraScriptGroup
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle                                                    = 0,
	ENiagaraScriptGroup__Emitter                                                     = 1,
	ENiagaraScriptGroup__System                                                      = 2,
	ENiagaraScriptGroup__Max                                                         = 3
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System                                        = 0,
	ENiagaraScriptContextStaticSwitch__Emitter                                       = 1,
	ENiagaraScriptContextStaticSwitch__Particle                                      = 2
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
/// Size: 0x01 (1 bytes)
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn                                          = 0,
	ENiagaraCompileUsageStaticSwitch__Update                                         = 1,
	ENiagaraCompileUsageStaticSwitch__Event                                          = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage                                = 3,
	ENiagaraCompileUsageStaticSwitch__Default                                        = 4
};

/// Enum /Script/Niagara.ENiagaraScriptUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function                                                    = 0,
	ENiagaraScriptUsage__Module                                                      = 1,
	ENiagaraScriptUsage__DynamicInput                                                = 2,
	ENiagaraScriptUsage__ParticleSpawnScript                                         = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated                             = 4,
	ENiagaraScriptUsage__ParticleUpdateScript                                        = 5,
	ENiagaraScriptUsage__ParticleEventScript                                         = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript                               = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript                                    = 8,
	ENiagaraScriptUsage__EmitterSpawnScript                                          = 9,
	ENiagaraScriptUsage__EmitterUpdateScript                                         = 10,
	ENiagaraScriptUsage__SystemSpawnScript                                           = 11,
	ENiagaraScriptUsage__SystemUpdateScript                                          = 12
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown                                         = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty                                           = 1,
	ENiagaraScriptCompileStatus__NCS_Error                                           = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate                                        = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated                                    = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings                            = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings                     = 6
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined                                                = 0,
	ENiagaraInputNodeUsage__Parameter                                                = 1,
	ENiagaraInputNodeUsage__Attribute                                                = 2,
	ENiagaraInputNodeUsage__SystemConstant                                           = 3,
	ENiagaraInputNodeUsage__TranslatorConstant                                       = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter                                  = 5
};

/// Enum /Script/Niagara.ENiagaraDataSetType
/// Size: 0x01 (1 bytes)
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData                                                = 0,
	ENiagaraDataSetType__Shared                                                      = 1,
	ENiagaraDataSetType__Event                                                       = 2
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent                                                 = 0,
	ENiagaraStatDisplayMode__Absolute                                                = 1
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType
/// Size: 0x01 (1 bytes)
enum class ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average                                              = 0,
	ENiagaraStatEvaluationType__Maximum                                              = 1
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime                                             = 0,
	ENiagaraAgeUpdateMode__DesiredAge                                                = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek                                          = 2
};

/// Enum /Script/Niagara.ENiagaraKuroImportance
/// Size: 0x01 (1 bytes)
enum class ENiagaraKuroImportance : uint8_t
{
	ENiagaraKuroImportance__NKI_Far                                                  = 0,
	ENiagaraKuroImportance__NKI_Middle                                               = 1,
	ENiagaraKuroImportance__NKI_Near                                                 = 2
};

/// Enum /Script/Niagara.ENiagaraSimTarget
/// Size: 0x01 (1 bytes)
enum class ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim                                                        = 0,
	ENiagaraSimTarget__GPUComputeSim                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraDefaultMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value                                                       = 0,
	ENiagaraDefaultMode__Binding                                                     = 1,
	ENiagaraDefaultMode__Custom                                                      = 2
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat
/// Size: 0x01 (1 bytes)
enum class ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float                                                   = 0,
	ENiagaraGpuBufferFormat__HalfFloat                                               = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte                                  = 2,
	ENiagaraGpuBufferFormat__Max                                                     = 3
};

/// Enum /Script/Niagara.ENiagaraTickBehavior
/// Size: 0x01 (1 bytes)
enum class ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs                                                 = 0,
	ENiagaraTickBehavior__UseComponentTickGroup                                      = 1,
	ENiagaraTickBehavior__ForceTickFirst                                             = 2,
	ENiagaraTickBehavior__ForceTickLast                                              = 3
};

/// Enum /Script/Niagara.ENCPoolMethod
/// Size: 0x01 (1 bytes)
enum class ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None                                                              = 0,
	ENCPoolMethod__AutoRelease                                                       = 1,
	ENCPoolMethod__ManualRelease                                                     = 2,
	ENCPoolMethod__ManualRelease_OnComplete                                          = 3,
	ENCPoolMethod__FreeInPool                                                        = 4
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
/// Size: 0x01 (1 bytes)
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize                                          = 0,
	ENDIExport_GPUAllocationMode__PerParticle                                        = 1
};

/// Enum /Script/Niagara.ESetResolutionMethod
/// Size: 0x04 (4 bytes)
enum class ESetResolutionMethod : uint32_t
{
	ESetResolutionMethod__Independent                                                = 0,
	ESetResolutionMethod__MaxAxis                                                    = 1,
	ESetResolutionMethod__CellSize                                                   = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
/// Size: 0x01 (1 bytes)
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid                                           = 255,
	ENDISkeletalMesh_SkinningMode__None                                              = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly                                      = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin                                           = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default                                             = 0,
	ENDISkeletalMesh_SourceMode__Source                                              = 1,
	ENDISkeletalMesh_SourceMode__AttachParent                                        = 2
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default                                               = 0,
	ENDIStaticMesh_SourceMode__Source                                                = 1,
	ENDIStaticMesh_SourceMode__AttachParent                                          = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly                                       = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHUDOverviewMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHUDOverviewMode : uint32_t
{
	ENiagaraDebugHUDOverviewMode__Overview                                           = 0,
	ENiagaraDebugHUDOverviewMode__Scalability                                        = 1,
	ENiagaraDebugHUDOverviewMode__Performance                                        = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudVerbosity
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHudVerbosity : uint32_t
{
	ENiagaraDebugHudVerbosity__None                                                  = 0,
	ENiagaraDebugHudVerbosity__Basic                                                 = 1,
	ENiagaraDebugHudVerbosity__Verbose                                               = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudFont
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHudFont : uint32_t
{
	ENiagaraDebugHudFont__Small                                                      = 0,
	ENiagaraDebugHudFont__Normal                                                     = 1
};

/// Enum /Script/Niagara.ENiagaraDebugHudVAlign
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHudVAlign : uint32_t
{
	ENiagaraDebugHudVAlign__Top                                                      = 0,
	ENiagaraDebugHudVAlign__Center                                                   = 1,
	ENiagaraDebugHudVAlign__Bottom                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudHAlign
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHudHAlign : uint32_t
{
	ENiagaraDebugHudHAlign__Left                                                     = 0,
	ENiagaraDebugHudHAlign__Center                                                   = 1,
	ENiagaraDebugHudHAlign__Right                                                    = 2
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
/// Size: 0x04 (4 bytes)
enum class ENiagaraScalabilityUpdateFrequency : uint32_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly                                    = 0,
	ENiagaraScalabilityUpdateFrequency__Low                                          = 1,
	ENiagaraScalabilityUpdateFrequency__Medium                                       = 2,
	ENiagaraScalabilityUpdateFrequency__High                                         = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous                                   = 4
};

/// Enum /Script/Niagara.ENiagaraCullReaction
/// Size: 0x04 (4 bytes)
enum class ENiagaraCullReaction : uint32_t
{
	ENiagaraCullReaction__Deactivate                                                 = 0,
	ENiagaraCullReaction__DeactivateImmediate                                        = 1,
	ENiagaraCullReaction__DeactivateResume                                           = 2,
	ENiagaraCullReaction__DeactivateImmediateResume                                  = 3
};

/// Enum /Script/Niagara.EParticleAllocationMode
/// Size: 0x01 (1 bytes)
enum class EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate                                       = 0,
	EParticleAllocationMode__ManualEstimate                                          = 1
};

/// Enum /Script/Niagara.EScriptExecutionMode
/// Size: 0x01 (1 bytes)
enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle                                              = 0,
	EScriptExecutionMode__SpawnedParticles                                           = 1,
	EScriptExecutionMode__SingleParticle                                             = 2
};

/// Enum /Script/Niagara.ENiagaraSortMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None                                                           = 0,
	ENiagaraSortMode__ViewDepth                                                      = 1,
	ENiagaraSortMode__ViewDistance                                                   = 2,
	ENiagaraSortMode__CustomAscending                                                = 3,
	ENiagaraSortMode__CustomDecending                                                = 4
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation                                          = 0,
	ENiagaraMeshLockedAxisSpace__World                                               = 1,
	ENiagaraMeshLockedAxisSpace__Local                                               = 2
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh                                               = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation                                         = 1,
	ENiagaraMeshPivotOffsetSpace__World                                              = 2,
	ENiagaraMeshPivotOffsetSpace__Local                                              = 3
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default                                                  = 0,
	ENiagaraMeshFacingMode__Velocity                                                 = 1,
	ENiagaraMeshFacingMode__CameraPosition                                           = 2,
	ENiagaraMeshFacingMode__CameraPlane                                              = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState
/// Size: 0x01 (1 bytes)
enum class ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled                                               = 0,
	ENiagaraPlatformSetState__Enabled                                                = 1,
	ENiagaraPlatformSetState__Active                                                 = 2,
	ENiagaraPlatformSetState__Unknown                                                = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState
/// Size: 0x01 (1 bytes)
enum class ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default                                          = 0,
	ENiagaraPlatformSelectionState__Enabled                                          = 1,
	ENiagaraPlatformSelectionState__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never                                              = 0,
	ENiagaraPreviewGridResetMode__Individual                                         = 1,
	ENiagaraPreviewGridResetMode__All                                                = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraRibbonUVDistributionMode : uint32_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly                                = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength                 = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength                          = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraRibbonUVEdgeMode : uint32_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition                                       = 0,
	ENiagaraRibbonUVEdgeMode__Locked                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic                                        = 0,
	ENiagaraRibbonTessellationMode__Custom                                           = 1,
	ENiagaraRibbonTessellationMode__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack                                         = 0,
	ENiagaraRibbonDrawDirection__BackToFront                                         = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale                                               = 0,
	ENiagaraRibbonAgeOffsetMode__Clip                                                = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen                                                 = 0,
	ENiagaraRibbonFacingMode__Custom                                                 = 1,
	ENiagaraRibbonFacingMode__CustomSideVector                                       = 2
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid                                         = 0,
	ENiagaraScriptLibraryVisibility__Unexposed                                       = 1,
	ENiagaraScriptLibraryVisibility__Library                                         = 2,
	ENiagaraScriptLibraryVisibility__Hidden                                          = 3
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
/// Size: 0x01 (1 bytes)
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript                             = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts                             = 1
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType
/// Size: 0x01 (1 bytes)
enum class ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency                                      = 0,
	ENiagaraModuleDependencyType__PostDependency                                     = 1
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour
/// Size: 0x01 (1 bytes)
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy                                                  = 0,
	EUnusedAttributeBehaviour__Zero                                                  = 1,
	EUnusedAttributeBehaviour__None                                                  = 2,
	EUnusedAttributeBehaviour__MarkInvalid                                           = 3,
	EUnusedAttributeBehaviour__PassThrough                                           = 4
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera                                             = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane                                        = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector                                     = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition                                     = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend                                = 4
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment
/// Size: 0x01 (1 bytes)
enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned                                               = 0,
	ENiagaraSpriteAlignment__VelocityAligned                                         = 1,
	ENiagaraSpriteAlignment__CustomAlignment                                         = 2
};

/// Enum /Script/Niagara.ENiagaraParameterPanelCategory
/// Size: 0x01 (1 bytes)
enum class ENiagaraParameterPanelCategory : uint8_t
{
	ENiagaraParameterPanelCategory__Input                                            = 0,
	ENiagaraParameterPanelCategory__Attributes                                       = 1,
	ENiagaraParameterPanelCategory__Output                                           = 2,
	ENiagaraParameterPanelCategory__Local                                            = 3,
	ENiagaraParameterPanelCategory__User                                             = 4,
	ENiagaraParameterPanelCategory__Engine                                           = 5,
	ENiagaraParameterPanelCategory__Owner                                            = 6,
	ENiagaraParameterPanelCategory__System                                           = 7,
	ENiagaraParameterPanelCategory__Emitter                                          = 8,
	ENiagaraParameterPanelCategory__Particles                                        = 9,
	ENiagaraParameterPanelCategory__ScriptTransient                                  = 10,
	ENiagaraParameterPanelCategory__StaticSwitch                                     = 11,
	ENiagaraParameterPanelCategory__None                                             = 12,
	ENiagaraParameterPanelCategory__Num                                              = 13
};

/// Enum /Script/Niagara.ENiagaraScriptParameterUsage
/// Size: 0x04 (4 bytes)
enum class ENiagaraScriptParameterUsage : uint32_t
{
	ENiagaraScriptParameterUsage__Input                                              = 0,
	ENiagaraScriptParameterUsage__Output                                             = 1,
	ENiagaraScriptParameterUsage__Local                                              = 2,
	ENiagaraScriptParameterUsage__InputOutput                                        = 3,
	ENiagaraScriptParameterUsage__InitialValueInput                                  = 4,
	ENiagaraScriptParameterUsage__None                                               = 5,
	ENiagaraScriptParameterUsage__Num                                                = 6
};

/// Enum /Script/Niagara.ENiagaraParameterScope
/// Size: 0x04 (4 bytes)
enum class ENiagaraParameterScope : uint32_t
{
	ENiagaraParameterScope__Input                                                    = 0,
	ENiagaraParameterScope__User                                                     = 1,
	ENiagaraParameterScope__Engine                                                   = 2,
	ENiagaraParameterScope__Owner                                                    = 3,
	ENiagaraParameterScope__System                                                   = 4,
	ENiagaraParameterScope__Emitter                                                  = 5,
	ENiagaraParameterScope__Particles                                                = 6,
	ENiagaraParameterScope__ScriptPersistent                                         = 7,
	ENiagaraParameterScope__ScriptTransient                                          = 8,
	ENiagaraParameterScope__Local                                                    = 9,
	ENiagaraParameterScope__Custom                                                   = 10,
	ENiagaraParameterScope__DISPLAY_ONLY_StaticSwitch                                = 11,
	ENiagaraParameterScope__Output                                                   = 12,
	ENiagaraParameterScope__None                                                     = 13,
	ENiagaraParameterScope__Num                                                      = 14
};

/// Enum /Script/Niagara.ENiagaraExecutionState
/// Size: 0x01 (1 bytes)
enum class ENiagaraExecutionState : uint8_t
{
	ENiagaraExecutionState__Active                                                   = 0,
	ENiagaraExecutionState__Inactive                                                 = 1,
	ENiagaraExecutionState__InactiveClear                                            = 2,
	ENiagaraExecutionState__Complete                                                 = 3,
	ENiagaraExecutionState__Disabled                                                 = 4,
	ENiagaraExecutionState__Num                                                      = 5
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability                                        = 0,
	ENiagaraExecutionStateSource__Internal                                           = 1,
	ENiagaraExecutionStateSource__Owner                                              = 2,
	ENiagaraExecutionStateSource__InternalCompletion                                 = 3
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None                                     = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest                                  = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest                                 = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar                                   = 3
};

/// Enum /Script/Niagara.ENiagaraVariantMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraVariantMode : uint32_t
{
	ENiagaraVariantMode__None                                                        = 0,
	ENiagaraVariantMode__Object                                                      = 1,
	ENiagaraVariantMode__DataInterface                                               = 2,
	ENiagaraVariantMode__Bytes                                                       = 3
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FNiagaraTypeDefinitionHandle
{ 
	int32_t                                            RegisteredTypeIndex;                                        // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FNiagaraVariableBase
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	FNiagaraTypeDefinitionHandle                       TypeDefHandle;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0004 (4 bytes) (0x000010 - 0x000014) align 4 pad: 0x0000
struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{ 
	int32_t                                            Offset;                                                     // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 pad: 0x0000
struct FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UObject*                                     Owner;                                                      // 0x0008   (0x0008)  
	TArray<FNiagaraVariableWithOffset>                 SortedParameterOffsets;                                     // 0x0010   (0x0010)  
	TArray<char>                                       ParameterData;                                              // 0x0020   (0x0010)  
	TArray<class UNiagaraDataInterface*>               DataInterfaces;                                             // 0x0030   (0x0010)  
	TArray<class UObject*>                             UObjects;                                                   // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0050   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x0050 (80 bytes) (0x000078 - 0x0000C8) align 8 pad: 0x0000
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{ 
	SDK_UNDEFINED(80,583) /* TMap<FNiagaraVariable, FNiagaraVariable> */ __um(UserParameterRedirects);             // 0x0078   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraMaterialOverride
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNiagaraMaterialOverride
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	uint32_t                                           MaterialSubIndex;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UNiagaraRendererProperties*                  EmitterRendererProperty;                                    // 0x0010   (0x0008)  
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x01C0 (448 bytes) (0x0004E0 - 0x0006A0) align 16 pad: 0x0000
class UNiagaraComponent : public UFXSystemComponent
{ 
public:
	class UNiagaraSystem*                              Asset;                                                      // 0x04E0   (0x0008)  
	ENiagaraTickBehavior                               TickBehavior;                                               // 0x04E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x04E9   (0x0007)  MISSED
	FNiagaraUserRedirectionParameterStore              overrideParameters;                                         // 0x04F0   (0x00C8)  
	bool                                               bForceSolo : 1;                                             // 0x05B8:0 (0x0001)  
	bool                                               bEnableGpuComputeDebug : 1;                                 // 0x05B8:1 (0x0001)  
	unsigned char                                      UnknownData01_3[0x2B];                                      // 0x05B9   (0x002B)  MISSED
	bool                                               bAutoDestroy : 1;                                           // 0x05E4:0 (0x0001)  
	bool                                               bRenderingEnabled : 1;                                      // 0x05E4:1 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x05E5   (0x0003)  MISSED
	class UNiagaraEffectType*                          RuntimeEffectType;                                          // 0x05E8   (0x0008)  
	bool                                               bAutoManageAttachment : 1;                                  // 0x05F0:0 (0x0001)  
	bool                                               bAutoAttachWeldSimulatedBodies : 1;                         // 0x05F0:1 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x05F1   (0x0003)  MISSED
	float                                              MaxTimeBeforeForceUpdateTransform;                          // 0x05F4   (0x0004)  
	TArray<FNiagaraMaterialOverride>                   EmitterMaterials;                                           // 0x05F8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0608   (0x0008)  MISSED
	SDK_UNDEFINED(16,584) /* FMulticastInlineDelegate */ __um(OnSystemInstancePausedDelegate);                     // 0x0610   (0x0010)  
	SDK_UNDEFINED(16,585) /* FMulticastInlineDelegate */ __um(OnSystemFinished);                                   // 0x0620   (0x0010)  
	SDK_UNDEFINED(8,586) /* TWeakObjectPtr<USceneComponent*> */ __um(AutoAttachParent);                            // 0x0630   (0x0008)  
	FName                                              AutoAttachSocketName;                                       // 0x0638   (0x000C)  
	EAttachmentRule                                    AutoAttachLocationRule;                                     // 0x0644   (0x0001)  
	EAttachmentRule                                    AutoAttachRotationRule;                                     // 0x0645   (0x0001)  
	EAttachmentRule                                    AutoAttachScaleRule;                                        // 0x0646   (0x0001)  
	unsigned char                                      UnknownData05_7[0x59];                                      // 0x0647   (0x0059)  MISSED
	// void SetVariableVec4(FName InVariableName, FVector4& InValue);                                                           // [0xe91490] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetVariableVec3(FName InVariableName, FVector InValue);                                                             // [0xe913a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetVariableVec2(FName InVariableName, FVector2D InValue);                                                           // [0xe912c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);              // [0xe911d0] Final|Native|Public|BlueprintCallable 
	// void SetVariableQuat(FName InVariableName, FQuat& InValue);                                                              // [0xe910e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetVariableObject(FName InVariableName, class UObject* Object);                                                     // [0xe90b50] Final|Native|Public|BlueprintCallable 
	// void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);                                        // [0xe90ff0] Final|Native|Public|BlueprintCallable 
	// void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);                                                // [0xe90f00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetVariableInt(FName InVariableName, int32_t InValue);                                                              // [0xe90e20] Final|Native|Public|BlueprintCallable 
	// void SetVariableFloat(FName InVariableName, float InValue);                                                              // [0xe90d30] Final|Native|Public|BlueprintCallable 
	// void SetVariableBool(FName InVariableName, bool InValue);                                                                // [0xe90c40] Final|Native|Public|BlueprintCallable 
	// void SetVariableActor(FName InVariableName, class AActor* Actor);                                                        // [0xe90b50] Final|Native|Public|BlueprintCallable 
	// void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);                                                              // [0xe90ad0] Final|Native|Public|BlueprintCallable 
	// void SetSeekDelta(float InSeekDelta);                                                                                    // [0xe90a50] Final|Native|Public|BlueprintCallable 
	// void SetRuntimeEffectType(class UNiagaraEffectType* EffectType);                                                         // [0xe909c0] Final|Native|Public|BlueprintCallable 
	// void SetRenderingEnabled(bool bInRenderingEnabled);                                                                      // [0xe90930] Final|Native|Public|BlueprintCallable 
	// void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);                                    // [0xe90860] Final|Native|Public|BlueprintCallable 
	// void SetPaused(bool bInPaused, bool bNotify);                                                                            // [0xe90790] Final|Native|Public|BlueprintCallable 
	// void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);                                                  // [0xe906a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);                                                    // [0xe905b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);                                                  // [0xe904d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);                                                     // [0xe903e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);                                            // [0xe8ff60] Final|Native|Public|BlueprintCallable 
	// void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);                                       // [0xe902f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);                                                     // [0xe90210] Final|Native|Public|BlueprintCallable 
	// void SetNiagaraVariableFloat(FString InVariableName, float InValue);                                                     // [0xe90120] Final|Native|Public|BlueprintCallable 
	// void SetNiagaraVariableBool(FString InVariableName, bool InValue);                                                       // [0xe90040] Final|Native|Public|BlueprintCallable 
	// void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);                                               // [0xe8ff60] Final|Native|Public|BlueprintCallable 
	// void SetMaxSimTime(float InMaxTime);                                                                                     // [0xe8fee0] Final|Native|Public|BlueprintCallable 
	// void SetKuroNiagaraEmitterVectorParam(FString InEmitterName, FString InVariableName, FVector4 InVector);                 // [0xe8fd10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetKuroNiagaraEmitterFloatParam(FString InEmitterName, FString InVariableName, float Value);                        // [0xe8fb50] Final|Native|Public|BlueprintCallable 
	// void SetKuroNiagaraEmitterCustomTexture(FString InEmitterName, FString InVariableName, class UTexture* Texture);         // [0xe8f990] Final|Native|Public|BlueprintCallable 
	// void SetKuroMaterialVectorParametre(FName InVariableName, FLinearColor& vec);                                            // [0xe8f8a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetKuroMaterialScalarParametre(FName InVariableName, float Val);                                                    // [0xe8f7b0] Final|Native|Public|BlueprintCallable 
	// void SetKuroCustomTexture(FName InVariableName, class UTexture* Texture);                                                // [0xe8f6c0] Final|Native|Public|BlueprintCallable 
	// void SetGpuComputeDebug(bool bEnableDebug);                                                                              // [0xe8f630] Final|Native|Public|BlueprintCallable 
	// void SetForceSolo(bool bInForceSolo);                                                                                    // [0xe8f5a0] Final|Native|Public|BlueprintCallable 
	// void SetEmitterQualityLevelBias(int32_t InBias);                                                                         // [0xe8f510] Final|Native|Public|BlueprintCallable 
	// void SetDesiredAge(float InDesiredAge);                                                                                  // [0xe8f490] Final|Native|Public|BlueprintCallable 
	// void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                                                            // [0xe8f400] Final|Native|Public|BlueprintCallable 
	// void SetAutoDestroy(bool bInAutoDestroy);                                                                                // [0xe8f370] Final|Native|Public|BlueprintCallable 
	// void SetAsset(class UNiagaraSystem* InAsset);                                                                            // [0xe8f2e0] Final|Native|Public|BlueprintCallable 
	// void SetAllowScalability(bool bAllow);                                                                                   // [0xe8f250] Final|Native|Public|BlueprintCallable 
	// void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);                                                            // [0xe8f1d0] Final|Native|Public|BlueprintCallable 
	// void SeekToDesiredAge(float InDesiredAge);                                                                               // [0xe8f150] Final|Native|Public|BlueprintCallable 
	// void ResetSystem();                                                                                                      // [0xe8f130] Final|Native|Public|BlueprintCallable 
	// bool ResetOverrideParametersAndActivate(bool bReset, FString ExceptOverrideName);                                        // [0xe8f040] Final|Native|Public|BlueprintCallable 
	// void ReinitializeSystem();                                                                                               // [0xe8f020] Final|Native|Public|BlueprintCallable 
	// bool IsPaused();                                                                                                         // [0xe8eff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool HasSkeletalMeshDataInterface();                                                                                     // [0xe8efc0] Final|Native|Public|BlueprintCallable 
	// bool HasAnyEmittersComplete();                                                                                           // [0xe8ef90] Final|Native|Public|BlueprintCallable 
	// ENiagaraTickBehavior GetTickBehavior();                                                                                  // [0xe8ef70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetSeekDelta();                                                                                                    // [0xe8ef40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UNiagaraEffectType* GetRuntimeEffectType();                                                                        // [0xe8ef10] Final|Native|Public|BlueprintCallable 
	// bool GetPreviewLODDistanceEnabled();                                                                                     // [0xbf7d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetPreviewLODDistance();                                                                                         // [0xe8eef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);                       // [0xe8ec50] Final|Native|Public|BlueprintCallable 
	// TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);                            // [0xe8eda0] Final|Native|Public|BlueprintCallable 
	// TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);                                            // [0xe8eb60] Final|Native|Public|BlueprintCallable 
	// float GetMaxSimTime();                                                                                                   // [0xe8eb30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetForceSolo();                                                                                                     // [0xe8eb00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetDesiredAge();                                                                                                   // [0xe8ead0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UNiagaraDataInterface* GetDataInterface(FString Name);                                                             // [0xe8ea20] Final|Native|Public|BlueprintCallable 
	// class UNiagaraSystem* GetAsset();                                                                                        // [0xe8ea00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// ENiagaraAgeUpdateMode GetAgeUpdateMode();                                                                                // [0xe8e9d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UNiagaraEffectType* GetActualEffectType();                                                                         // [0xe8e9a0] Final|Native|Public|BlueprintCallable 
	// void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                                                // [0xe8e8d0] Final|Native|Public|BlueprintCallable 
	// void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);                                                       // [0xe8e800] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FNiagaraDeviceProfileStateEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x000C)  
	uint32_t                                           QualityLevelMask;                                           // 0x000C   (0x0004)  
	uint32_t                                           SetQualityLevelMask;                                        // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FNiagaraPlatformSetCVarCondition
{ 
	FName                                              CVarName;                                                   // 0x0000   (0x000C)  
	bool                                               Value;                                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            MinInt;                                                     // 0x0010   (0x0004)  
	int32_t                                            MaxInt;                                                     // 0x0014   (0x0004)  
	float                                              MinFloat;                                                   // 0x0018   (0x0004)  
	float                                              MaxFloat;                                                   // 0x001C   (0x0004)  
	bool                                               bUseMinInt : 1;                                             // 0x0020:0 (0x0001)  
	bool                                               bUseMaxInt : 1;                                             // 0x0020:1 (0x0001)  
	bool                                               bUseMinFloat : 1;                                           // 0x0020:2 (0x0001)  
	bool                                               bUseMaxFloat : 1;                                           // 0x0020:3 (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0021   (0x000F)  MISSED
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FNiagaraPlatformSet
{ 
	int32_t                                            QualityLevelMask;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FNiagaraDeviceProfileStateEntry>            DeviceProfileStates;                                        // 0x0008   (0x0010)  
	TArray<FNiagaraPlatformSetCVarCondition>           CVarConditions;                                             // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/Niagara.KuroTickByDistance
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FKuroTickByDistance
{ 
	float                                              Distance;                                                   // 0x0000   (0x0004)  
	float                                              TickInterval;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.KuroTickByDistanceSetting
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FKuroTickByDistanceSetting
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	float                                              MaxTickDeltaSeconds;                                        // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FKuroTickByDistance>                        TickByDistanceArray;                                        // 0x0038   (0x0010)  
};

/// Class /Script/Niagara.KuroNiagaraTickType
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UKuroNiagaraTickType : public UObject
{ 
public:
	TArray<FKuroTickByDistanceSetting>                 Settings;                                                   // 0x0030   (0x0010)  
};

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x0010 (16 bytes) (0x000080 - 0x000090) align 8 pad: 0x0000
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0080   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000020) align 8 pad: 0x0000
struct FNiagaraVariable : FNiagaraVariableBase
{ 
	TArray<char>                                       VarData;                                                    // 0x0010   (0x0010)  
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x0020 (32 bytes) (0x000090 - 0x0000B0) align 8 pad: 0x0000
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{ 
public:
	FNiagaraVariable                                   Parameter;                                                  // 0x0090   (0x0020)  
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x0008 (8 bytes) (0x0000B0 - 0x0000B8) align 8 pad: 0x0000
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x0008 (8 bytes) (0x0000B0 - 0x0000B8) align 8 pad: 0x0000
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x0008 (8 bytes) (0x0000B0 - 0x0000B8) align 8 pad: 0x0000
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x0008 (8 bytes) (0x0000B0 - 0x0000B8) align 8 pad: 0x0000
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x0010 (16 bytes) (0x0000F0 - 0x000100) align 8 pad: 0x0000
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
public:
	ENiagaraSystemSpawnSectionStartBehavior            SectionStartBehavior;                                       // 0x00F0   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SectionEvaluateBehavior;                                    // 0x00F4   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SectionEndBehavior;                                         // 0x00F8   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00FD   (0x0003)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x0008 (8 bytes) (0x000090 - 0x000098) align 8 pad: 0x0000
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x0010 (16 bytes) (0x0000B0 - 0x0000C0) align 8 pad: 0x0000
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00B0   (0x0008)  MISSED
	int32_t                                            ChannelsUsed;                                               // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x0010 (16 bytes) (0x0002A8 - 0x0002B8) align 8 pad: 0x0000
class ANiagaraActor : public AActor
{ 
public:
	class UNiagaraComponent*                           NiagaraComponent;                                           // 0x02A8   (0x0008)  
	bool                                               bDestroyOnSystemFinish : 1;                                 // 0x02B0:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02B1   (0x0007)  MISSED
	// void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);                                                        // [0xe8cb70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);                                                // [0xe8cae0] Final|Native|Private 
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000088) align 8 pad: 0x0000
class UNiagaraComponentPool : public UObject
{ 
public:
	SDK_UNDEFINED(80,587) /* TMap<UNiagaraSystem*, FNCPool> */ __um(WorldParticleSystemPools);                     // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000088) align 8 pad: 0x0000
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0030   (0x0030)  
	int32_t                                            SortOrderHint;                                              // 0x0060   (0x0004)  
	bool                                               bIsEnabled;                                                 // 0x0064   (0x0001)  
	bool                                               bMotionBlurEnabled;                                         // 0x0065   (0x0001)  
	unsigned char                                      UnknownData00_7[0x22];                                      // 0x0066   (0x0022)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FNiagaraVariableAttributeBinding
{ 
	FNiagaraVariableBase                               ParamMapVariable;                                           // 0x0000   (0x0010)  
	FNiagaraVariable                                   DataSetVariable;                                            // 0x0010   (0x0020)  
	FNiagaraVariable                                   RootVariable;                                               // 0x0030   (0x0020)  
	TEnumAsByte<ENiagaraBindingSource>                 BindingSourceMode;                                          // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	bool                                               bBindingExistsOnSource : 1;                                 // 0x0054:0 (0x0001)  
	bool                                               bIsCachedParticleValue : 1;                                 // 0x0054:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraTypeDefinition
{ 
	class UObject*                                     ClassStructOrEnum;                                          // 0x0000   (0x0008)  
	uint16_t                                           UnderlyingType;                                             // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 pad: 0x0000
struct FNiagaraComponentPropertyBinding
{ 
	FNiagaraVariableAttributeBinding                   AttributeBinding;                                           // 0x0000   (0x0058)  
	FName                                              PropertyName;                                               // 0x0058   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FNiagaraTypeDefinition                             PropertyType;                                               // 0x0068   (0x0010)  
	FName                                              MetadataSetterName;                                         // 0x0078   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FNiagaraVariable                                   WritableValue;                                              // 0x0088   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x00E0 (224 bytes) (0x000088 - 0x000168) align 8 pad: 0x0000
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UClass*                                      ComponentType;                                              // 0x0088   (0x0008)  
	uint32_t                                           ComponentCountLimit;                                        // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x0098   (0x0058)  
	bool                                               bAssignComponentsOnParticleID;                              // 0x00F0   (0x0001)  
	bool                                               bOnlyCreateComponentsOnParticleSpawn;                       // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00F2   (0x0006)  MISSED
	class USceneComponent*                             TemplateComponent;                                          // 0x00F8   (0x0008)  
	TArray<FNiagaraComponentPropertyBinding>           PropertyBindings;                                           // 0x0100   (0x0010)  
	unsigned char                                      UnknownData02_7[0x58];                                      // 0x0110   (0x0058)  MISSED
};

/// Class /Script/Niagara.NiagaraComponentSettings
/// Size: 0x00F0 (240 bytes) (0x000030 - 0x000120) align 8 pad: 0x0000
class UNiagaraComponentSettings : public UObject
{ 
public:
	SDK_UNDEFINED(80,588) /* TSet<FName> */            __um(SuppressActivationList);                               // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,589) /* TSet<FName> */            __um(ForceAutoPooolingList);                                // 0x0080   (0x0050)  
	SDK_UNDEFINED(80,590) /* TSet<FNiagaraEmitterNameSettingsRef> */ __um(SuppressEmitterList);                    // 0x00D0   (0x0050)  
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNiagaraConvertInPlaceUtilityBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture2DArray*                             Texture;                                                    // 0x0040   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0018 (24 bytes) (0x000040 - 0x000058) align 8 pad: 0x0000
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	int32_t                                            MaxElements;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x004C   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0010 (16 bytes) (0x000058 - 0x000068) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<float>                                      FloatData;                                                  // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0010 (16 bytes) (0x000058 - 0x000068) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector2D>                                  FloatData;                                                  // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0010 (16 bytes) (0x000058 - 0x000068) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector>                                    FloatData;                                                  // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0010 (16 bytes) (0x000058 - 0x000068) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector4>                                   FloatData;                                                  // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0010 (16 bytes) (0x000058 - 0x000068) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FLinearColor>                               ColorData;                                                  // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0010 (16 bytes) (0x000058 - 0x000068) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FQuat>                                      QuatData;                                                   // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector4>& ArrayData);    // [0xe95ba0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector2D>& ArrayData);  // [0xe95a60] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);      // [0xe95ce0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FQuat>& ArrayData);          // [0xe95920] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);       // [0xe957e0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<float>& ArrayData);         // [0xe956a0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FLinearColor>& ArrayData);  // [0xe95560] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<bool>& ArrayData);           // [0xe95420] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// TArray<FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                     // [0xe94b60] Final|Native|Static|Private|BlueprintCallable 
	// TArray<FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0xe94a30] Final|Native|Static|Private|BlueprintCallable 
	// TArray<FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                       // [0xe94c90] Final|Native|Static|Private|BlueprintCallable 
	// TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                           // [0xe94900] Final|Native|Static|Private|BlueprintCallable 
	// TArray<int32_t> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                        // [0xe947d0] Final|Native|Static|Private|BlueprintCallable 
	// TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                          // [0xe946a0] Final|Native|Static|Private|BlueprintCallable 
	// TArray<FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0xe94570] Final|Native|Static|Private|BlueprintCallable 
	// TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                            // [0xe94440] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0010 (16 bytes) (0x000058 - 0x000068) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<int32_t>                                    IntData;                                                    // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0010 (16 bytes) (0x000058 - 0x000068) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<bool>                                       BoolData;                                                   // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
public:
	class USoundSubmix*                                Submix;                                                     // 0x0040   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
public:
	class USoundSubmix*                                Submix;                                                     // 0x0040   (0x0008)  
	int32_t                                            Resolution;                                                 // 0x0048   (0x0004)  
	float                                              ScopeInMilliseconds;                                        // 0x004C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0038 (56 bytes) (0x000040 - 0x000078) align 8 pad: 0x0000
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
public:
	class USoundBase*                                  SoundToPlay;                                                // 0x0040   (0x0008)  
	class USoundAttenuation*                           Attenuation;                                                // 0x0048   (0x0008)  
	class USoundConcurrency*                           Concurrency;                                                // 0x0050   (0x0008)  
	TArray<FName>                                      ParameterNames;                                             // 0x0058   (0x0010)  
	bool                                               bLimitPlaysPerTick;                                         // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            MaxPlaysPerTick;                                            // 0x006C   (0x0004)  
	bool                                               bStopWhenComponentIsDestroyed;                              // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0010 (16 bytes) (0x000048 - 0x000058) align 8 pad: 0x0000
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0048   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x004C   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0050   (0x0004)  
	float                                              NoiseFloorDb;                                               // 0x0054   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
public:
	int32_t                                            PlayerControllerIndex;                                      // 0x0040   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0038 (56 bytes) (0x000040 - 0x000078) align 8 pad: 0x0000
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{ 
public:
	TArray<float>                                      ShaderLUT;                                                  // 0x0040   (0x0010)  
	float                                              LUTMinTime;                                                 // 0x0050   (0x0004)  
	float                                              LUTMaxTime;                                                 // 0x0054   (0x0004)  
	float                                              LUTInvTimeRange;                                            // 0x0058   (0x0004)  
	float                                              LUTNumSamplesMinusOne;                                      // 0x005C   (0x0004)  
	bool                                               bUseLUT : 1;                                                // 0x0060:0 (0x0001)  
	bool                                               bExposeCurve : 1;                                           // 0x0060:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	FName                                              ExposedName;                                                // 0x0064   (0x000C)  
	class UTexture2D*                                  ExposedTexture;                                             // 0x0070   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0200 (512 bytes) (0x000078 - 0x000278) align 8 pad: 0x0000
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         RedCurve;                                                   // 0x0078   (0x0080)  
	FRichCurve                                         GreenCurve;                                                 // 0x00F8   (0x0080)  
	FRichCurve                                         BlueCurve;                                                  // 0x0178   (0x0080)  
	FRichCurve                                         AlphaCurve;                                                 // 0x01F8   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
public:
	uint32_t                                           Seed;                                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x0080 (128 bytes) (0x000078 - 0x0000F8) align 8 pad: 0x0000
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         Curve;                                                      // 0x0078   (0x0080)  
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNiagaraParticleCallbackHandler : public UInterface
{ 
public:
	// void ReceiveParticleData(TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);                         // [0xe95320] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNiagaraUserParameterBinding
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0030 (48 bytes) (0x000040 - 0x000070) align 8 pad: 0x0000
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       CallbackHandlerParameter;                                   // 0x0040   (0x0020)  
	ENDIExport_GPUAllocationMode                       GPUAllocationMode;                                          // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            GPUAllocationFixedSize;                                     // 0x0064   (0x0004)  
	float                                              GPUAllocationPerParticleSize;                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0000 (0 bytes) (0x000040 - 0x000040) align 8 pad: 0x0000
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x00A0 (160 bytes) (0x000040 - 0x0000E0) align 8 pad: 0x0000
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{ 
public:
	SDK_UNDEFINED(80,591) /* TSet<int32_t> */          __um(OutputShaderStages);                                   // 0x0040   (0x0050)  
	SDK_UNDEFINED(80,592) /* TSet<int32_t> */          __um(IterationShaderStages);                                // 0x0090   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x0020 (32 bytes) (0x0000E0 - 0x000100) align 8 pad: 0x0000
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	int32_t                                            NumCellsX;                                                  // 0x00E0   (0x0004)  
	int32_t                                            NumCellsY;                                                  // 0x00E4   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x00E8   (0x0004)  
	int32_t                                            NumAttributes;                                              // 0x00EC   (0x0004)  
	bool                                               SetGridFromMaxAxis;                                         // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	FVector2D                                          WorldBBoxSize;                                              // 0x00F4   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x00C8 (200 bytes) (0x000100 - 0x0001C8) align 8 pad: 0x0000
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
public:
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0100   (0x0020)  
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0120   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0121:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x56];                                      // 0x0122   (0x0056)  MISSED
	SDK_UNDEFINED(80,593) /* TMap<uint64_t, UTextureRenderTarget2DArray*> */ __um(ManagedRenderTargets);           // 0x0178   (0x0050)  
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                 // [0xe95070] Native|Public|HasOutParms|BlueprintCallable 
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                              // [0xe94dc0] Native|Public|HasOutParms|BlueprintCallable 
	// bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex);      // [0xe94320] Native|Public|BlueprintCallable 
	// bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // [0xe93fb0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0070 (112 bytes) (0x000100 - 0x000170) align 8 pad: 0x0000
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{ 
public:
	FString                                            EmitterName;                                                // 0x0100   (0x0010)  
	FString                                            DIName;                                                     // 0x0110   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0120   (0x0050)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0028 (40 bytes) (0x0000E0 - 0x000108) align 8 pad: 0x0000
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         NumCells;                                                   // 0x00E0   (0x000C)  
	float                                              CellSize;                                                   // 0x00EC   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x00F0   (0x0004)  
	ESetResolutionMethod                               SetResolutionMethod;                                        // 0x00F4   (0x0004)  
	FVector                                            WorldBBoxSize;                                              // 0x00F8   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x0080 (128 bytes) (0x000108 - 0x000188) align 8 pad: 0x0000
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
public:
	int32_t                                            NumAttributes;                                              // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0110   (0x0020)  
	ENiagaraGpuBufferFormat                            BufferFormat;                                               // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_7[0x57];                                      // 0x0131   (0x0057)  MISSED
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                 // [0xe951a0] Native|Public|HasOutParms|BlueprintCallable 
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);              // [0xe94ef0] Native|Public|HasOutParms|BlueprintCallable 
	// bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex);          // [0xe94320] Native|Public|BlueprintCallable 
	// bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // [0xe94120] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
public:
	class AActor*                                      SourceLandscape;                                            // 0x0040   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0008 (8 bytes) (0x000108 - 0x000110) align 8 pad: 0x0000
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
public:
	uint32_t                                           MaxNeighborsPerCell;                                        // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0000 (0 bytes) (0x000040 - 0x000040) align 8 pad: 0x0000
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x0010 (16 bytes) (0x0000E0 - 0x0000F0) align 8 pad: 0x0000
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{ 
public:
	FString                                            EmitterName;                                                // 0x00E0   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0030 (48 bytes) (0x000040 - 0x000070) align 8 pad: 0x0000
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0040   (0x0030)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x0080 (128 bytes) (0x0000E0 - 0x000160) align 8 pad: 0x0000
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntPoint                                          Size;                                                       // 0x00E0   (0x0008)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00E8   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00E9:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00EA   (0x0006)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00F0   (0x0020)  
	SDK_UNDEFINED(80,594) /* TMap<uint64_t, UTextureRenderTarget2D*> */ __um(ManagedRenderTargets);                // 0x0110   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0080 (128 bytes) (0x0000E0 - 0x000160) align 8 pad: 0x0000
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x00E0   (0x000C)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00EC   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00ED:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00EE   (0x0002)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00F0   (0x0020)  
	SDK_UNDEFINED(80,595) /* TMap<uint64_t, UTextureRenderTarget2DArray*> */ __um(ManagedRenderTargets);           // 0x0110   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0080 (128 bytes) (0x0000E0 - 0x000160) align 8 pad: 0x0000
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x00E0   (0x000C)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00EC   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00ED:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00EE   (0x0002)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00F0   (0x0020)  
	SDK_UNDEFINED(80,596) /* TMap<uint64_t, UTextureRenderTargetVolume*> */ __um(ManagedRenderTargets);            // 0x0110   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0000 (0 bytes) (0x000040 - 0x000040) align 8 pad: 0x0000
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x0090 (144 bytes) (0x000040 - 0x0000D0) align 8 pad: 0x0000
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{ 
public:
	ENDISkeletalMesh_SourceMode                        SourceMode;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	class AActor*                                      Source;                                                     // 0x0048   (0x0008)  
	FNiagaraUserParameterBinding                       MeshUserParameter;                                          // 0x0050   (0x0020)  
	class USkeletalMeshComponent*                      SourceComponent;                                            // 0x0070   (0x0008)  
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FName>                                      SamplingRegions;                                            // 0x0080   (0x0010)  
	int32_t                                            WholeMeshLOD;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<FName>                                      FilteredBones;                                              // 0x0098   (0x0010)  
	TArray<FName>                                      FilteredSockets;                                            // 0x00A8   (0x0010)  
	FName                                              ExcludeBoneName;                                            // 0x00B8   (0x000C)  
	bool                                               bExcludeBone : 1;                                           // 0x00C4:0 (0x0001)  
	bool                                               bRequireCurrentFrameData;                                   // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData03_7[0xA];                                       // 0x00C6   (0x000A)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
public:
	class AActor*                                      Source;                                                     // 0x0040   (0x0008)  
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNDIStaticMeshSectionFilter
{ 
	TArray<int32_t>                                    AllowedMaterialSlots;                                       // 0x0000   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000090) align 8 pad: 0x0000
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
public:
	ENDIStaticMesh_SourceMode                          SourceMode;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	class UStaticMesh*                                 DefaultMesh;                                                // 0x0048   (0x0008)  
	class AActor*                                      Source;                                                     // 0x0050   (0x0008)  
	class UStaticMeshComponent*                        SourceComponent;                                            // 0x0058   (0x0008)  
	FNDIStaticMeshSectionFilter                        SectionFilter;                                              // 0x0060   (0x0010)  
	bool                                               bUsePhysicsBodyVelocity;                                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<FName>                                      FilteredSockets;                                            // 0x0078   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0040   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0100 (256 bytes) (0x000078 - 0x000178) align 8 pad: 0x0000
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0078   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F8   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0200 (512 bytes) (0x000078 - 0x000278) align 8 pad: 0x0000
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0078   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F8   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0178   (0x0080)  
	FRichCurve                                         WCurve;                                                     // 0x01F8   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x0180 (384 bytes) (0x000078 - 0x0001F8) align 8 pad: 0x0000
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0078   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F8   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0178   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
public:
	class UVectorField*                                Field;                                                      // 0x0040   (0x0008)  
	bool                                               bTileX;                                                     // 0x0048   (0x0001)  
	bool                                               bTileY;                                                     // 0x0049   (0x0001)  
	bool                                               bTileZ;                                                     // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x004B   (0x0005)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
public:
	class UVolumeTexture*                              Texture;                                                    // 0x0040   (0x0008)  
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNiagaraEditorDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNiagaraSignificanceHandler : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{ 
public:
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FNiagaraSystemScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bCullByDistance : 1;                                        // 0x0030:0 (0x0001)  
	bool                                               bCullMaxInstanceCount : 1;                                  // 0x0030:1 (0x0001)  
	bool                                               bCullPerSystemMaxInstanceCount : 1;                         // 0x0030:2 (0x0001)  
	bool                                               bCullByMaxTimeWithoutRender : 1;                            // 0x0030:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MaxDistance;                                                // 0x0034   (0x0004)  
	int32_t                                            MaxInstances;                                               // 0x0038   (0x0004)  
	int32_t                                            MaxSystemInstances;                                         // 0x003C   (0x0004)  
	float                                              MaxTimeWithoutRender;                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraSystemScalabilitySettingsArray
{ 
	TArray<FNiagaraSystemScalabilitySettings>          Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemSpawnScaleSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FNiagaraSystemSpawnScaleSettings
{ 
	float                                              Distance;                                                   // 0x0000   (0x0004)  
	float                                              SpawnScale;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 pad: 0x0000
struct FNiagaraEmitterScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bScaleSpawnCount : 1;                                       // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              SpawnCountScale;                                            // 0x0034   (0x0004)  
	bool                                               bSpawnScaleByLodDistance : 1;                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FNiagaraSystemSpawnScaleSettings>           SpawnScaleByDistance;                                       // 0x0040   (0x0010)  
	bool                                               bCullFarImpotantEmitter : 1;                                // 0x0050:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              FarImpotantEmitterCullDistance;                             // 0x0054   (0x0004)  
	bool                                               bCullMiddleImpotantEmitter : 1;                             // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              MiddleImpotantEmitterCullDistance;                          // 0x005C   (0x0004)  
	bool                                               bCullNearImpotantEmitter : 1;                               // 0x0060:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              NearImpotantEmitterCullDistance;                            // 0x0064   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraEmitterScalabilitySettingsArray
{ 
	TArray<FNiagaraEmitterScalabilitySettings>         Settings;                                                   // 0x0000   (0x0010)  
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x00E8 (232 bytes) (0x000030 - 0x000118) align 8 pad: 0x0000
class UNiagaraEffectType : public UObject
{ 
public:
	ENiagaraScalabilityUpdateFrequency                 UpdateFrequency;                                            // 0x0030   (0x0004)  
	ENiagaraCullReaction                               CullReaction;                                               // 0x0034   (0x0004)  
	class UNiagaraSignificanceHandler*                 SignificanceHandler;                                        // 0x0038   (0x0008)  
	TArray<FNiagaraSystemScalabilitySettings>          DetailLevelScalabilitySettings;                             // 0x0040   (0x0010)  
	FNiagaraSystemScalabilitySettingsArray             SystemScalabilitySettings;                                  // 0x0050   (0x0010)  
	FNiagaraEmitterScalabilitySettingsArray            EmitterScalabilitySettings;                                 // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA8];                                      // 0x0070   (0x00A8)  MISSED
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FNiagaraEventReceiverProperties
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	FName                                              SourceEventGenerator;                                       // 0x000C   (0x000C)  
	FName                                              SourceEmitter;                                              // 0x0018   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FNiagaraTypeLayoutInfo
{ 
	TArray<uint32_t>                                   FloatComponentByteOffsets;                                  // 0x0000   (0x0010)  
	TArray<uint32_t>                                   FloatComponentRegisterOffsets;                              // 0x0010   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentByteOffsets;                                  // 0x0020   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentRegisterOffsets;                              // 0x0030   (0x0010)  
	TArray<uint32_t>                                   HalfComponentByteOffsets;                                   // 0x0040   (0x0010)  
	TArray<uint32_t>                                   HalfComponentRegisterOffsets;                               // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FNiagaraVariableLayoutInfo
{ 
	uint32_t                                           FloatComponentStart;                                        // 0x0000   (0x0004)  
	uint32_t                                           Int32ComponentStart;                                        // 0x0004   (0x0004)  
	uint32_t                                           HalfComponentStart;                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeLayoutInfo                             LayoutInfo;                                                 // 0x0010   (0x0060)  
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FNiagaraDataSetID
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	ENiagaraDataSetType                                Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FNiagaraDataSetCompiledData
{ 
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0000   (0x0010)  
	TArray<FNiagaraVariableLayoutInfo>                 VariableLayouts;                                            // 0x0010   (0x0010)  
	FNiagaraDataSetID                                  ID;                                                         // 0x0020   (0x0010)  
	uint32_t                                           TotalFloatComponents;                                       // 0x0030   (0x0004)  
	uint32_t                                           TotalInt32Components;                                       // 0x0034   (0x0004)  
	uint32_t                                           TotalHalfComponents;                                        // 0x0038   (0x0004)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x003C:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FNiagaraEventGeneratorProperties
{ 
	int32_t                                            MaxEventsPerFrame;                                          // 0x0000   (0x0004)  
	FName                                              ID;                                                         // 0x0004   (0x000C)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0010   (0x0048)  
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraEmitterScriptProperties
{ 
	class UNiagaraScript*                              Script;                                                     // 0x0000   (0x0008)  
	TArray<FNiagaraEventReceiverProperties>            EventReceivers;                                             // 0x0008   (0x0010)  
	TArray<FNiagaraEventGeneratorProperties>           EventGenerators;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FNiagaraDetailsLevelScaleOverrides
{ 
	float                                              Low;                                                        // 0x0000   (0x0004)  
	float                                              Medium;                                                     // 0x0004   (0x0004)  
	float                                              High;                                                       // 0x0008   (0x0004)  
	float                                              Epic;                                                       // 0x000C   (0x0004)  
	float                                              Cine;                                                       // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0008 (8 bytes) (0x000068 - 0x000070) align 8 pad: 0x0000
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{ 
	bool                                               bOverrideSpawnCountScale : 1;                               // 0x0068:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraEmitterScalabilityOverrides
{ 
	TArray<FNiagaraEmitterScalabilityOverride>         Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000058) align 8 pad: 0x0000
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{ 
	EScriptExecutionMode                               ExecutionMode;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	uint32_t                                           SpawnNumber;                                                // 0x002C   (0x0004)  
	uint32_t                                           MaxEventsPerFrame;                                          // 0x0030   (0x0004)  
	FGuid                                              SourceEmitterID;                                            // 0x0034   (0x0010)  
	FName                                              SourceEventName;                                            // 0x0044   (0x000C)  
	bool                                               bRandomSpawnNumber;                                         // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	uint32_t                                           MinSpawnNumber;                                             // 0x0054   (0x0004)  
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x02A8 (680 bytes) (0x000030 - 0x0002D8) align 8 pad: 0x0000
class UNiagaraEmitter : public UObject
{ 
public:
	bool                                               bLocalSpace;                                                // 0x0030   (0x0001)  
	bool                                               bDeterminism;                                               // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x0034   (0x0004)  
	EParticleAllocationMode                            AllocationMode;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            PreAllocationCount;                                         // 0x003C   (0x0004)  
	FNiagaraEmitterScriptProperties                    UpdateScriptProps;                                          // 0x0040   (0x0028)  
	FNiagaraEmitterScriptProperties                    SpawnScriptProps;                                           // 0x0068   (0x0028)  
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0090   (0x0001)  
	bool                                               KuroNoGPUOnly;                                              // 0x0091   (0x0001)  
	bool                                               bOverrideKuroImportance : 1;                                // 0x0092:0 (0x0001)  
	ENiagaraKuroImportance                             KuroImportance;                                             // 0x0093   (0x0001)  
	FBox                                               FixedBounds;                                                // 0x0094   (0x001C)  
	int32_t                                            MinDetailLevel;                                             // 0x00B0   (0x0004)  
	int32_t                                            MaxDetailLevel;                                             // 0x00B4   (0x0004)  
	FNiagaraDetailsLevelScaleOverrides                 GlobalSpawnCountScaleOverrides;                             // 0x00B8   (0x0014)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FNiagaraPlatformSet                                Platforms;                                                  // 0x00D0   (0x0030)  
	FNiagaraEmitterScalabilityOverrides                ScalabilityOverrides;                                       // 0x0100   (0x0010)  
	bool                                               bInterpolatedSpawning : 1;                                  // 0x0110:0 (0x0001)  
	bool                                               bFixedBounds : 1;                                           // 0x0110:1 (0x0001)  
	bool                                               bUseMinDetailLevel : 1;                                     // 0x0110:2 (0x0001)  
	bool                                               bUseMaxDetailLevel : 1;                                     // 0x0110:3 (0x0001)  
	bool                                               bOverrideGlobalSpawnCountScale : 1;                         // 0x0110:4 (0x0001)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0110:5 (0x0001)  
	bool                                               bCombineEventSpawn : 1;                                     // 0x0110:6 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              MaxDeltaTimePerTick;                                        // 0x0114   (0x0004)  
	uint32_t                                           DefaultShaderStageIndex;                                    // 0x0118   (0x0004)  
	uint32_t                                           MaxUpdateIterations;                                        // 0x011C   (0x0004)  
	SDK_UNDEFINED(80,597) /* TSet<uint32_t> */         __um(SpawnStages);                                          // 0x0120   (0x0050)  
	bool                                               bSimulationStagesEnabled : 1;                               // 0x0170:0 (0x0001)  
	bool                                               bDeprecatedShaderStagesEnabled : 1;                         // 0x0170:1 (0x0001)  
	bool                                               bLimitDeltaTime : 1;                                        // 0x0170:2 (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0171   (0x0007)  MISSED
	FString                                            UniqueEmitterName;                                          // 0x0178   (0x0010)  
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                         // 0x0188   (0x0010)  
	TArray<FNiagaraEventScriptProperties>              EventHandlerScriptProps;                                    // 0x0198   (0x0010)  
	TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                           // 0x01A8   (0x0010)  
	class UNiagaraScript*                              GPUComputeScript;                                           // 0x01B8   (0x0008)  
	TArray<FName>                                      SharedEventGeneratorIds;                                    // 0x01C0   (0x0010)  
	unsigned char                                      UnknownData05_7[0x108];                                     // 0x01D0   (0x0108)  MISSED
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNiagaraEventReceiverEmitterAction : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{ 
public:
	uint32_t                                           NumParticles;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0xe9dd80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0xe9daa0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture); // [0xe9d980] Final|Native|Static|Public|BlueprintCallable 
	// void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);            // [0xe9d5a0] Final|Native|Static|Public|BlueprintCallable 
	// void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& SamplingRegions); // [0xe9d470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent); // [0xe9cec0] Final|Native|Static|Public|BlueprintCallable 
	// void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh); // [0xe9cda0] Final|Native|Static|Public|BlueprintCallable 
	// void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent); // [0xe9cc80] Final|Native|Static|Public|BlueprintCallable 
	// class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection); // [0xe9c8b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x0258 (600 bytes) (0x000088 - 0x0002E0) align 8 pad: 0x0000
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
public:
	bool                                               bUseInverseSquaredFalloff : 1;                              // 0x0088:0 (0x0001)  
	bool                                               bAffectsTranslucency : 1;                                   // 0x0088:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              RadiusScale;                                                // 0x008C   (0x0004)  
	FVector                                            ColorAdd;                                                   // 0x0090   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   LightRenderingEnabledBinding;                               // 0x00A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   LightExponentBinding;                                       // 0x00F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0150   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x01A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RadiusBinding;                                              // 0x0200   (0x0058)  
	FNiagaraVariableAttributeBinding                   VolumetricScatteringBinding;                                // 0x0258   (0x0058)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x02B0   (0x0030)  MISSED
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraMeshMaterialOverride
{ 
	class UMaterialInterface*                          ExplicitMat;                                                // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       UserParamBinding;                                           // 0x0008   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 pad: 0x0000
struct FNiagaraMaterialAttributeBinding
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x000C)  
	FNiagaraVariableBase                               NiagaraVariable;                                            // 0x000C   (0x0010)  
	FNiagaraVariableBase                               ResolvedNiagaraVariable;                                    // 0x001C   (0x0010)  
	FNiagaraVariableBase                               NiagaraChildVariable;                                       // 0x002C   (0x0010)  
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x0618 (1560 bytes) (0x000088 - 0x0006A0) align 8 pad: 0x0000
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UStaticMesh*                                 ParticleMesh;                                               // 0x0088   (0x0008)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	bool                                               bOverrideMaterials : 1;                                     // 0x0094:0 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	TArray<FNiagaraMeshMaterialOverride>               OverrideMaterials;                                          // 0x0098   (0x0010)  
	FVector2D                                          SubImageSize;                                               // 0x00A8   (0x0008)  
	bool                                               bSubImageBlend : 1;                                         // 0x00B0:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	ENiagaraMeshFacingMode                             FacingMode;                                                 // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	bool                                               bLockedAxisEnable : 1;                                      // 0x00B8:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	FVector                                            LockedAxis;                                                 // 0x00BC   (0x000C)  
	ENiagaraMeshLockedAxisSpace                        LockedAxisSpace;                                            // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	FVector                                            PivotOffset;                                                // 0x00CC   (0x000C)  
	ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                           // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x00D9   (0x0003)  MISSED
	bool                                               bEnableFrustumCulling : 1;                                  // 0x00DC:0 (0x0001)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x00DC:1 (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x00E0   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x00E4   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0148   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x01A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   MeshOrientationBinding;                                     // 0x01F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x0250   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x02A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x0300   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0358   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x03B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0408   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0460   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x04B8   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0510   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0568   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x05C0   (0x0058)  
	TArray<FNiagaraMaterialAttributeBinding>           MaterialParameterBindings;                                  // 0x0618   (0x0010)  
	unsigned char                                      UnknownData09_7[0x78];                                      // 0x0628   (0x0078)  MISSED
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNiagaraMessageDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x0098 (152 bytes) (0x000030 - 0x0000C8) align 8 pad: 0x0000
class UNiagaraParameterCollectionInstance : public UObject
{ 
public:
	class UNiagaraParameterCollection*                 Collection;                                                 // 0x0030   (0x0008)  
	TArray<FNiagaraVariable>                           OverridenParameters;                                        // 0x0038   (0x0010)  
	FNiagaraParameterStore                             ParameterStorage;                                           // 0x0048   (0x0078)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00C0   (0x0008)  MISSED
	// void SetVectorParameter(FString InVariableName, FVector InValue);                                                        // [0xe9d890] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetVector4Parameter(FString InVariableName, FVector4& InValue);                                                     // [0xe9d7a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetVector2DParameter(FString InVariableName, FVector2D InValue);                                                    // [0xe9d6c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetQuatParameter(FString InVariableName, FQuat& InValue);                                                           // [0xe9d380] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetIntParameter(FString InVariableName, int32_t InValue);                                                           // [0xe9d2a0] Final|Native|Public|BlueprintCallable 
	// void SetFloatParameter(FString InVariableName, float InValue);                                                           // [0xe9d1b0] Final|Native|Public|BlueprintCallable 
	// void SetColorParameter(FString InVariableName, FLinearColor InValue);                                                    // [0xe9d0c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetBoolParameter(FString InVariableName, bool InValue);                                                             // [0xe9cfe0] Final|Native|Public|BlueprintCallable 
	// FVector GetVectorParameter(FString InVariableName);                                                                      // [0xe9cbc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector4 GetVector4Parameter(FString InVariableName);                                                                    // [0xe9cb00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector2D GetVector2DParameter(FString InVariableName);                                                                  // [0xe9ca40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FQuat GetQuatParameter(FString InVariableName);                                                                          // [0xe9c980] Final|Native|Public|HasDefaults|BlueprintCallable 
	// int32_t GetIntParameter(FString InVariableName);                                                                         // [0xe9c800] Final|Native|Public|BlueprintCallable 
	// float GetFloatParameter(FString InVariableName);                                                                         // [0xe9c750] Final|Native|Public|BlueprintCallable 
	// FLinearColor GetColorParameter(FString InVariableName);                                                                  // [0xe9c690] Final|Native|Public|HasDefaults|BlueprintCallable 
	// bool GetBoolParameter(FString InVariableName);                                                                           // [0xe9c5e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 8 pad: 0x0000
class UNiagaraParameterCollection : public UObject
{ 
public:
	FName                                              Namespace;                                                  // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0040   (0x0010)  
	class UMaterialParameterCollection*                SourceMaterialCollection;                                   // 0x0050   (0x0008)  
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                            // 0x0058   (0x0008)  
	FGuid                                              CompileId;                                                  // 0x0060   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UNiagaraPrecompileContainer : public UObject
{ 
public:
	TArray<class UNiagaraScript*>                      Scripts;                                                    // 0x0030   (0x0010)  
	class UNiagaraSystem*                              System;                                                     // 0x0040   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class ANiagaraPreviewBase : public AActor
{ 
public:
	// void SetSystem(class UNiagaraSystem* InSystem);                                                                          // [0x25a7960] Event|Public|BlueprintCallable|BlueprintEvent 
	// void SetLabelText(FText& InXAxisText, FText& InYAxisText);                                                               // [0x25a7960] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNiagaraPreviewAxis : public UObject
{ 
public:
	// int32_t Num();                                                                                                           // [0xea1e10] Native|Event|Public|BlueprintEvent 
	// void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText); // [0xea1bc0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{ 
public:
	FName                                              Param;                                                      // 0x0030   (0x000C)  
	int32_t                                            Count;                                                      // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	int32_t                                            Min;                                                        // 0x0040   (0x0004)  
	int32_t                                            Max;                                                        // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	float                                              Min;                                                        // 0x0040   (0x0004)  
	float                                              Max;                                                        // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector2D                                          Min;                                                        // 0x0040   (0x0008)  
	FVector2D                                          Max;                                                        // 0x0048   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0018 (24 bytes) (0x000040 - 0x000058) align 8 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector                                            Min;                                                        // 0x0040   (0x000C)  
	FVector                                            Max;                                                        // 0x004C   (0x000C)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0020 (32 bytes) (0x000040 - 0x000060) align 16 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector4                                           Min;                                                        // 0x0040   (0x0010)  
	FVector4                                           Max;                                                        // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0020 (32 bytes) (0x000040 - 0x000060) align 8 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FLinearColor                                       Min;                                                        // 0x0040   (0x0010)  
	FLinearColor                                       Max;                                                        // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x0050 (80 bytes) (0x0002A8 - 0x0002F8) align 8 pad: 0x0000
class ANiagaraPreviewGrid : public AActor
{ 
public:
	class UNiagaraSystem*                              System;                                                     // 0x02A8   (0x0008)  
	ENiagaraPreviewGridResetMode                       ResetMode;                                                  // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02B1   (0x0007)  MISSED
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                               // 0x02B8   (0x0008)  
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                               // 0x02C0   (0x0008)  
	class UClass*                                      PreviewClass;                                               // 0x02C8   (0x0008)  
	float                                              SpacingX;                                                   // 0x02D0   (0x0004)  
	float                                              SpacingY;                                                   // 0x02D4   (0x0004)  
	int32_t                                            NumX;                                                       // 0x02D8   (0x0004)  
	int32_t                                            NumY;                                                       // 0x02DC   (0x0004)  
	TArray<class UChildActorComponent*>                PreviewComponents;                                          // 0x02E0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x02F0   (0x0008)  MISSED
	// void SetPaused(bool bPaused);                                                                                            // [0xea1e40] Final|Native|Public|BlueprintCallable 
	// void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);                                                               // [0xea1d60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void DeactivatePreviews();                                                                                               // [0xea1d40] Final|Native|Public|BlueprintCallable 
	// void ActivatePreviews(bool bReset);                                                                                      // [0xea1b30] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FNiagaraRibbonUVSettings
{ 
	ENiagaraRibbonUVEdgeMode                           LeadingEdgeMode;                                            // 0x0000   (0x0004)  
	ENiagaraRibbonUVEdgeMode                           TrailingEdgeMode;                                           // 0x0004   (0x0004)  
	ENiagaraRibbonUVDistributionMode                   DistributionMode;                                           // 0x0008   (0x0004)  
	float                                              TilingLength;                                               // 0x000C   (0x0004)  
	FVector2D                                          Offset;                                                     // 0x0010   (0x0008)  
	FVector2D                                          Scale;                                                      // 0x0018   (0x0008)  
	bool                                               bEnablePerParticleUOverride;                                // 0x0020   (0x0001)  
	bool                                               bEnablePerParticleVRangeOverride;                           // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x0770 (1904 bytes) (0x000088 - 0x0007F8) align 8 pad: 0x0000
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x0088   (0x0008)  
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0090   (0x0020)  
	ENiagaraRibbonFacingMode                           FacingMode;                                                 // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FNiagaraRibbonUVSettings                           UV0Settings;                                                // 0x00B4   (0x0024)  
	FNiagaraRibbonUVSettings                           UV1Settings;                                                // 0x00D8   (0x0024)  
	ENiagaraRibbonDrawDirection                        DrawDirection;                                              // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	float                                              CurveTension;                                               // 0x0100   (0x0004)  
	ENiagaraRibbonTessellationMode                     TessellationMode;                                           // 0x0104   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0105   (0x0003)  MISSED
	int32_t                                            TessellationFactor;                                         // 0x0108   (0x0004)  
	bool                                               bUseConstantFactor;                                         // 0x010C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	float                                              TessellationAngle;                                          // 0x0110   (0x0004)  
	bool                                               bScreenSpaceTessellation;                                   // 0x0114   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0115   (0x0003)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0118   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0170   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x01C8   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0220   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonTwistBinding;                                         // 0x0278   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonWidthBinding;                                         // 0x02D0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonFacingBinding;                                        // 0x0328   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonIdBinding;                                            // 0x0380   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonLinkOrderBinding;                                     // 0x03D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0430   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x0488   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x04E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0538   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0590   (0x0058)  
	FNiagaraVariableAttributeBinding                   U0OverrideBinding;                                          // 0x05E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   V0RangeOverrideBinding;                                     // 0x0640   (0x0058)  
	FNiagaraVariableAttributeBinding                   U1OverrideBinding;                                          // 0x0698   (0x0058)  
	FNiagaraVariableAttributeBinding                   V1RangeOverrideBinding;                                     // 0x06F0   (0x0058)  
	TArray<FNiagaraMaterialAttributeBinding>           MaterialParameterBindings;                                  // 0x0748   (0x0010)  
	unsigned char                                      UnknownData05_7[0xA0];                                      // 0x0758   (0x00A0)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 pad: 0x0000
struct FNiagaraScriptExecutionPaddingInfo
{ 
	uint16_t                                           SrcOffset;                                                  // 0x0000   (0x0002)  
	uint16_t                                           DestOffset;                                                 // 0x0002   (0x0002)  
	uint16_t                                           SrcSize;                                                    // 0x0004   (0x0002)  
	uint16_t                                           DestSize;                                                   // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0020 (32 bytes) (0x000078 - 0x000098) align 8 pad: 0x0000
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{ 
	int32_t                                            ParameterSize;                                              // 0x0078   (0x0004)  
	uint32_t                                           PaddedParameterSize;                                        // 0x007C   (0x0004)  
	TArray<FNiagaraScriptExecutionPaddingInfo>         PaddingInfo;                                                // 0x0080   (0x0010)  
	bool                                               bInitialized : 1;                                           // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraBoundParameter
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
	int32_t                                            SrcOffset;                                                  // 0x0020   (0x0004)  
	int32_t                                            DestOffset;                                                 // 0x0024   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FNiagaraVMExecutableDataId
{ 
	FGuid                                              CompilerVersionID;                                          // 0x0000   (0x0010)  
	ENiagaraScriptUsage                                ScriptUsageType;                                            // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FGuid                                              ScriptUsageTypeID;                                          // 0x0014   (0x0010)  
	bool                                               bUsesRapidIterationParams : 1;                              // 0x0024:0 (0x0001)  
	bool                                               bInterpolatedSpawn : 1;                                     // 0x0024:1 (0x0001)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0024:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FGuid                                              BaseScriptID;                                               // 0x0028   (0x0010)  
	FNiagaraCompileHash                                BaseScriptCompileHash;                                      // 0x0038   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FNiagaraScriptDataUsageInfo
{ 
	bool                                               bReadsAttributeData;                                        // 0x0000   (0x0001)  
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FNiagaraScriptDataInterfaceCompileInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	int32_t                                            UserPtrIdx;                                                 // 0x000C   (0x0004)  
	FNiagaraTypeDefinition                             Type;                                                       // 0x0010   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0020   (0x000C)  
	FName                                              RegisteredParameterMapWrite;                                // 0x002C   (0x000C)  
	bool                                               bIsPlaceholder;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FVMFunctionSpecifier
{ 
	FName                                              Key;                                                        // 0x0000   (0x000C)  
	FName                                              Value;                                                      // 0x000C   (0x000C)  
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FVMExternalFunctionBindingInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	FName                                              OwnerName;                                                  // 0x000C   (0x000C)  
	TArray<bool>                                       InputParamLocations;                                        // 0x0018   (0x0010)  
	int32_t                                            NumOutputs;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FVMFunctionSpecifier>                       FunctionSpecifiers;                                         // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNiagaraDataSetProperties
{ 
	FNiagaraDataSetID                                  ID;                                                         // 0x0000   (0x0010)  
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FNiagaraStatScope
{ 
	FName                                              FullName;                                                   // 0x0000   (0x000C)  
	FName                                              FriendlyName;                                               // 0x000C   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 pad: 0x0000
struct FNiagaraVMExecutableData
{ 
	TArray<char>                                       ByteCode;                                                   // 0x0000   (0x0010)  
	TArray<char>                                       OptimizedByteCode;                                          // 0x0010   (0x0010)  
	int32_t                                            NumTempRegisters;                                           // 0x0020   (0x0004)  
	int32_t                                            NumUserPtrs;                                                // 0x0024   (0x0004)  
	TArray<char>                                       ScriptLiterals;                                             // 0x0028   (0x0010)  
	TArray<FNiagaraVariable>                           Attributes;                                                 // 0x0038   (0x0010)  
	FNiagaraScriptDataUsageInfo                        DataUsage;                                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<FNiagaraScriptDataInterfaceCompileInfo>     DataInterfaceInfo;                                          // 0x0050   (0x0010)  
	TArray<FVMExternalFunctionBindingInfo>             CalledVMExternalFunctions;                                  // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0070   (0x0010)  MISSED
	TArray<FNiagaraDataSetID>                          ReadDataSets;                                               // 0x0080   (0x0010)  
	TArray<FNiagaraDataSetProperties>                  WriteDataSets;                                              // 0x0090   (0x0010)  
	TArray<FNiagaraStatScope>                          StatScopes;                                                 // 0x00A0   (0x0010)  
	TArray<FNiagaraDataInterfaceGPUParamInfo>          DIParamInfo;                                                // 0x00B0   (0x0010)  
	ENiagaraScriptCompileStatus                        LastCompileStatus;                                          // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
	TArray<FSimulationStageMetaData>                   SimulationStageMetaData;                                    // 0x00C8   (0x0010)  
	TArray<char>                                       ExperimentalContextData;                                    // 0x00D8   (0x0010)  
	bool                                               bReadsSignificanceIndex : 1;                                // 0x00E8:0 (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FNiagaraScriptDataInterfaceInfo
{ 
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x000C)  
	int32_t                                            UserPtrIdx;                                                 // 0x0014   (0x0004)  
	FNiagaraTypeDefinition                             Type;                                                       // 0x0018   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0028   (0x000C)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0034   (0x000C)  
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x02A8 (680 bytes) (0x000030 - 0x0002D8) align 8 pad: 0x0000
class UNiagaraScript : public UNiagaraScriptBase
{ 
public:
	ENiagaraScriptUsage                                Usage;                                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            UsageIndex;                                                 // 0x0034   (0x0004)  
	FGuid                                              UsageId;                                                    // 0x0038   (0x0010)  
	FNiagaraParameterStore                             RapidIterationParameters;                                   // 0x0048   (0x0078)  
	FNiagaraScriptExecutionParameterStore              ScriptExecutionParamStore;                                  // 0x00C0   (0x0098)  
	TArray<FNiagaraBoundParameter>                     ScriptExecutionBoundParameters;                             // 0x0158   (0x0010)  
	FNiagaraVMExecutableDataId                         CachedScriptVMId;                                           // 0x0168   (0x0048)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01B0   (0x0010)  MISSED
	FNiagaraVMExecutableData                           CachedScriptVM;                                             // 0x01C0   (0x00F0)  
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                        // 0x02B0   (0x0010)  
	TArray<FNiagaraScriptDataInterfaceInfo>            CachedDefaultDataInterfaces;                                // 0x02C0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x02D0   (0x0008)  MISSED
	// void RaiseOnGPUCompilationComplete();                                                                                    // [0x95a130] Final|Native|Public  
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UNiagaraScriptSourceBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x0288 (648 bytes) (0x000048 - 0x0002D0) align 8 pad: 0x0000
class UNiagaraSettings : public UDeveloperSettings
{ 
public:
	bool                                               bExperimentalVMEnabled;                                     // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	FSoftObjectPath                                    DefaultEffectType;                                          // 0x0050   (0x0020)  
	SDK_UNDEFINED(80,598) /* TMap<EKuroNiagaraEffectTypePresets, FSoftObjectPath> */ __um(EffectTypePresets);      // 0x0070   (0x0050)  
	SDK_UNDEFINED(80,599) /* TMap<EKuroNiagaraEffectRegularType, FSoftObjectPath> */ __um(EffectTypePresetsByEffectRegularType); // 0x00C0   (0x0050)  
	SDK_UNDEFINED(80,600) /* TMap<EKuroNiagaraEffectRegularType, FSoftObjectPath> */ __um(TickTypePresetsByEffectRegularType); // 0x0110   (0x0050)  
	SDK_UNDEFINED(80,601) /* TMap<EKuroNiagaraTickTypePresets, FSoftObjectPath> */ __um(TickTypePresets);          // 0x0160   (0x0050)  
	TArray<FString>                                    SubStringsForImportantNiagaraSystemNames;                   // 0x01B0   (0x0010)  
	TArray<FText>                                      QualityLevels;                                              // 0x01C0   (0x0010)  
	SDK_UNDEFINED(80,602) /* TMap<FString, FText> */   __um(ComponentRendererWarningsPerClass);                    // 0x01D0   (0x0050)  
	TEnumAsByte<ETextureRenderTargetFormat>            DefaultRenderTargetFormat;                                  // 0x0220   (0x0001)  
	ENiagaraGpuBufferFormat                            DefaultGridFormat;                                          // 0x0221   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0222   (0x0006)  MISSED
	class UNiagaraEffectType*                          DefaultEffectTypePtr;                                       // 0x0228   (0x0008)  
	SDK_UNDEFINED(80,603) /* TMap<EKuroNiagaraEffectRegularType, UNiagaraEffectType*> */ __um(EffectTypePresetsPtr); // 0x0230   (0x0050)  
	SDK_UNDEFINED(80,604) /* TMap<EKuroNiagaraEffectRegularType, UKuroNiagaraTickType*> */ __um(TickTypePresetsPtr); // 0x0280   (0x0050)  
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{ 
public:
	class UNiagaraScript*                              Script;                                                     // 0x0030   (0x0008)  
	FName                                              SimulationStageName;                                        // 0x0038   (0x000C)  
	bool                                               bEnabled : 1;                                               // 0x0044:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNiagaraVariableDataInterfaceBinding
{ 
	FNiagaraVariable                                   BoundVariable;                                              // 0x0000   (0x0020)  
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x0030 (48 bytes) (0x000048 - 0x000078) align 8 pad: 0x0000
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
public:
	ENiagaraIterationSource                            IterationSource;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x004C   (0x0004)  
	bool                                               bSpawnOnly : 1;                                             // 0x0050:0 (0x0001)  
	bool                                               bDisablePartialParticleUpdate : 1;                          // 0x0050:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	FNiagaraVariableDataInterfaceBinding               DataInterface;                                              // 0x0058   (0x0020)  
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x0730 (1840 bytes) (0x000088 - 0x0007B8) align 8 pad: 0x0000
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x0088   (0x0008)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0098   (0x0020)  
	ENiagaraSpriteAlignment                            Alignment;                                                  // 0x00B8   (0x0001)  
	ENiagaraSpriteFacingMode                           FacingMode;                                                 // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00BA   (0x0002)  MISSED
	FVector2D                                          PivotInUVSpace;                                             // 0x00BC   (0x0008)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
	FVector2D                                          SubImageSize;                                               // 0x00C8   (0x0008)  
	bool                                               bSubImageBlend : 1;                                         // 0x00D0:0 (0x0001)  
	bool                                               bRemoveHMDRollInVR : 1;                                     // 0x00D0:1 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x00D0:2 (0x0001)  
	bool                                               bGpuLowLatencyTranslucency : 1;                             // 0x00D0:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              MinFacingCameraBlendDistance;                               // 0x00D4   (0x0004)  
	float                                              MaxFacingCameraBlendDistance;                               // 0x00D8   (0x0004)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x00DC:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x00E0   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x00E4   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0148   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x01A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteRotationBinding;                                      // 0x01F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteSizeBinding;                                          // 0x0250   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteFacingBinding;                                        // 0x02A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteAlignmentBinding;                                     // 0x0300   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x0358   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x03B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0408   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0460   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x04B8   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0510   (0x0058)  
	FNiagaraVariableAttributeBinding                   UVScaleBinding;                                             // 0x0568   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x05C0   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x0618   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0670   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x06C8   (0x0058)  
	TArray<FNiagaraMaterialAttributeBinding>           MaterialParameterBindings;                                  // 0x0720   (0x0010)  
	unsigned char                                      UnknownData06_7[0x88];                                      // 0x0730   (0x0088)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x0008 (8 bytes) (0x000048 - 0x000050) align 8 pad: 0x0000
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{ 
	bool                                               bOverrideDistanceSettings : 1;                              // 0x0048:0 (0x0001)  
	bool                                               bOverrideInstanceCountSettings : 1;                         // 0x0048:1 (0x0001)  
	bool                                               bOverridePerSystemInstanceCountSettings : 1;                // 0x0048:2 (0x0001)  
	bool                                               bOverrideTimeSinceRendererSettings : 1;                     // 0x0048:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraSystemScalabilityOverrides
{ 
	TArray<FNiagaraSystemScalabilityOverride>          Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FNiagaraEmitterHandle
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FName                                              IdName;                                                     // 0x0010   (0x000C)  
	bool                                               bIsEnabled;                                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UNiagaraEmitter*                             Instance;                                                   // 0x0030   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FNiagaraParameterDataSetBinding
{ 
	int32_t                                            ParameterOffset;                                            // 0x0000   (0x0004)  
	int32_t                                            DataSetComponentOffset;                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNiagaraParameterDataSetBindingCollection
{ 
	TArray<FNiagaraParameterDataSetBinding>            FloatOffsets;                                               // 0x0000   (0x0010)  
	TArray<FNiagaraParameterDataSetBinding>            Int32Offsets;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0230 (560 bytes) (0x000000 - 0x000230) align 8 pad: 0x0000
struct FNiagaraSystemCompiledData
{ 
	FNiagaraParameterStore                             InstanceParamStore;                                         // 0x0000   (0x0078)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0078   (0x0048)  
	FNiagaraDataSetCompiledData                        SpawnInstanceParamsDataSetCompiledData;                     // 0x00C0   (0x0048)  
	FNiagaraDataSetCompiledData                        UpdateInstanceParamsDataSetCompiledData;                    // 0x0108   (0x0048)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceGlobalBinding;                                 // 0x0150   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceSystemBinding;                                 // 0x0170   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceOwnerBinding;                                  // 0x0190   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  SpawnInstanceEmitterBindings;                               // 0x01B0   (0x0010)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceGlobalBinding;                                // 0x01C0   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceSystemBinding;                                // 0x01E0   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceOwnerBinding;                                 // 0x0200   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  UpdateInstanceEmitterBindings;                              // 0x0220   (0x0010)  
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x0498 (1176 bytes) (0x000038 - 0x0004D0) align 8 pad: 0x0000
class UNiagaraSystem : public UFXSystemAsset
{ 
public:
	bool                                               bDumpDebugSystemInfo;                                       // 0x0038   (0x0001)  
	bool                                               bDumpDebugEmitterInfo;                                      // 0x0039   (0x0001)  
	bool                                               bRequireCurrentFrameData;                                   // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x003B   (0x0001)  MISSED
	bool                                               bEvenTickWhenPaused : 1;                                    // 0x003C:0 (0x0001)  
	bool                                               bFixedBounds : 1;                                           // 0x003C:1 (0x0001)  
	unsigned char                                      UnknownData01_3[0x3];                                       // 0x003D   (0x0003)  MISSED
	bool                                               bDisableExperimentalVM : 1;                                 // 0x0040:0 (0x0001)  
	EKuroNiagaraEffectRegularType                      EffectRegularType;                                          // 0x0041   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0042   (0x0006)  MISSED
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0048   (0x0008)  
	EKuroNiagaraEffectTypePresets                      EffectTypePreset;                                           // 0x0050   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	class UNiagaraEffectType*                          EffectType_Override;                                        // 0x0058   (0x0008)  
	EKuroNiagaraTickTypePresets                        TickTypePreset;                                             // 0x0060   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	class UKuroNiagaraTickType*                        TickType_Override;                                          // 0x0068   (0x0008)  
	bool                                               bOverrideScreenSizeCullRatio;                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              ScreenSizeCullRatio;                                        // 0x0074   (0x0004)  
	bool                                               bOverrideScalabilitySettings;                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FNiagaraSystemScalabilityOverride>          ScalabilityOverrides;                                       // 0x0080   (0x0010)  
	FNiagaraSystemScalabilityOverrides                 SystemScalabilityOverrides;                                 // 0x0090   (0x0010)  
	TArray<FNiagaraEmitterHandle>                      EmitterHandles;                                             // 0x00A0   (0x0010)  
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                               // 0x00B0   (0x0010)  
	class UNiagaraScript*                              SystemSpawnScript;                                          // 0x00C0   (0x0008)  
	class UNiagaraScript*                              SystemUpdateScript;                                         // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData07_6[0x10];                                      // 0x00D0   (0x0010)  MISSED
	FNiagaraSystemCompiledData                         SystemCompiledData;                                         // 0x00E0   (0x0230)  
	FNiagaraUserRedirectionParameterStore              ExposedParameters;                                          // 0x0310   (0x00C8)  
	FBox                                               FixedBounds;                                                // 0x03D8   (0x001C)  
	bool                                               bAutoDeactivate;                                            // 0x03F4   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x03F5   (0x0003)  MISSED
	float                                              WarmupTime;                                                 // 0x03F8   (0x0004)  
	int32_t                                            WarmupTickCount;                                            // 0x03FC   (0x0004)  
	float                                              WarmupTickDelta;                                            // 0x0400   (0x0004)  
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                     // 0x0404   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x0405   (0x0003)  MISSED
	TArray<FName>                                      UserDINamesReadInSystemScripts;                             // 0x0408   (0x0010)  
	unsigned char                                      UnknownData10_7[0xB8];                                      // 0x0418   (0x00B8)  MISSED
};

/// Struct /Script/Niagara.KuroNiagaraTickManager
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FKuroNiagaraTickManager
{ 
	class UKuroNiagaraTickType*                        TickType;                                                   // 0x0000   (0x0008)  
	TArray<class UNiagaraComponent*>                   ManagedComponents;                                          // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000040) align 8 pad: 0x0000
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0020   (0x0020)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x0090 (144 bytes) (0x000040 - 0x0000D0) align 8 pad: 0x0000
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneBoolChannel                             BoolChannel;                                                // 0x0040   (0x0090)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x0280 (640 bytes) (0x000040 - 0x0002C0) align 8 pad: 0x0000
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            RedChannel;                                                 // 0x0040   (0x00A0)  
	FMovieSceneFloatChannel                            GreenChannel;                                               // 0x00E0   (0x00A0)  
	FMovieSceneFloatChannel                            BlueChannel;                                                // 0x0180   (0x00A0)  
	FMovieSceneFloatChannel                            AlphaChannel;                                               // 0x0220   (0x00A0)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x00A0 (160 bytes) (0x000040 - 0x0000E0) align 8 pad: 0x0000
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0040   (0x00A0)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x0090 (144 bytes) (0x000040 - 0x0000D0) align 8 pad: 0x0000
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneIntegerChannel                          IntegerChannel;                                             // 0x0040   (0x0090)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0018 (24 bytes) (0x000010 - 0x000028) align 8 pad: 0x0000
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{ 
	FFrameNumber                                       SpawnSectionStartFrame;                                     // 0x0010   (0x0004)  
	FFrameNumber                                       SpawnSectionEndFrame;                                       // 0x0014   (0x0004)  
	ENiagaraSystemSpawnSectionStartBehavior            SpawnSectionStartBehavior;                                  // 0x0018   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SpawnSectionEvaluateBehavior;                               // 0x001C   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SpawnSectionEndBehavior;                                    // 0x0020   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x0288 (648 bytes) (0x000040 - 0x0002C8) align 8 pad: 0x0000
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            VectorChannels[4];                                          // 0x0040   (0x0280)  
	int32_t                                            ChannelsUsed;                                               // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02C4   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FNiagaraRandInfo
{ 
	int32_t                                            Seed1;                                                      // 0x0000   (0x0004)  
	int32_t                                            Seed2;                                                      // 0x0004   (0x0004)  
	int32_t                                            Seed3;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FNiagaraScriptVariableBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FNiagaraVariableInfo
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	FText                                              Definition;                                                 // 0x0020   (0x0018)  
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0038   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FNiagaraSystemUpdateContext
{ 
	TArray<class UNiagaraComponent*>                   ComponentsToReset;                                          // 0x0000   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToReInit;                                         // 0x0010   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToNotifySimDestroy;                               // 0x0020   (0x0010)  
	TArray<class UNiagaraSystem*>                      SystemSimsToDestroy;                                        // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 pad: 0x0000
struct FNiagaraFunctionSignature
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FNiagaraVariable>                           Inputs;                                                     // 0x0010   (0x0010)  
	TArray<FNiagaraVariable>                           Outputs;                                                    // 0x0020   (0x0010)  
	FName                                              OwnerName;                                                  // 0x0030   (0x000C)  
	bool                                               bRequiresContext : 1;                                       // 0x003C:0 (0x0001)  
	bool                                               bRequiresExecPin : 1;                                       // 0x003C:1 (0x0001)  
	bool                                               bMemberFunction : 1;                                        // 0x003C:2 (0x0001)  
	bool                                               bExperimental : 1;                                          // 0x003C:3 (0x0001)  
	bool                                               bSupportsCPU : 1;                                           // 0x003C:4 (0x0001)  
	bool                                               bSupportsGPU : 1;                                           // 0x003C:5 (0x0001)  
	bool                                               bWriteFunction : 1;                                         // 0x003C:6 (0x0001)  
	bool                                               bSoftDeprecatedFunction : 1;                                // 0x003C:7 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            ModuleUsageBitmask;                                         // 0x0040   (0x0004)  
	int32_t                                            ContextStageMinIndex;                                       // 0x0044   (0x0004)  
	int32_t                                            ContextStageMaxIndex;                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	SDK_UNDEFINED(80,605) /* TMap<FName, FName> */     __um(FunctionSpecifiers);                                   // 0x0050   (0x0050)  
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNCPoolElement
{ 
	class UNiagaraComponent*                           Component;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FNCPool
{ 
	TArray<FNCPoolElement>                             FreeElements;                                               // 0x0000   (0x0010)  
	TArray<class UNiagaraComponent*>                   InUseComponents_Auto;                                       // 0x0010   (0x0010)  
	TArray<class UNiagaraComponent*>                   InUseComponents_Manual;                                     // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterNameSettingsRef
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNiagaraEmitterNameSettingsRef
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            EmitterName;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FBasicParticleData
{ 
	FVector                                            Position;                                                   // 0x0000   (0x000C)  
	float                                              Size;                                                       // 0x000C   (0x0004)  
	FVector                                            Velocity;                                                   // 0x0010   (0x000C)  
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FMeshTriCoordinate
{ 
	int32_t                                            Tri;                                                        // 0x0000   (0x0004)  
	FVector                                            BaryCoord;                                                  // 0x0004   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraDebugHudTextOptions
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FNiagaraDebugHudTextOptions
{ 
	ENiagaraDebugHudFont                               Font;                                                       // 0x0000   (0x0004)  
	ENiagaraDebugHudHAlign                             HorizontalAlignment;                                        // 0x0004   (0x0004)  
	ENiagaraDebugHudVAlign                             VerticalAlignment;                                          // 0x0008   (0x0004)  
	FVector2D                                          ScreenOffset;                                               // 0x000C   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraDebugHUDSettingsData
/// Size: 0x00E8 (232 bytes) (0x000000 - 0x0000E8) align 8 pad: 0x0000
struct FNiagaraDebugHUDSettingsData
{ 
	bool                                               bHudEnabled;                                                // 0x0000   (0x0001)  
	bool                                               bActorFilterEnabled;                                        // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            ActorFilter;                                                // 0x0008   (0x0010)  
	bool                                               bComponentFilterEnabled;                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	FString                                            ComponentFilter;                                            // 0x0020   (0x0010)  
	bool                                               bSystemFilterEnabled;                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FString                                            SystemFilter;                                               // 0x0038   (0x0010)  
	bool                                               bOverviewEnabled;                                           // 0x0048   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	ENiagaraDebugHUDOverviewMode                       OverviewMode;                                               // 0x004C   (0x0004)  
	bool                                               bShowRegisteredComponents;                                  // 0x0050   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	int32_t                                            TolerantSecondsSinceAnyActive;                              // 0x0054   (0x0004)  
	bool                                               bOverviewShowFilteredSystemOnly;                            // 0x0058   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	FVector2D                                          OverviewLocation;                                           // 0x005C   (0x0008)  
	bool                                               bDebugComponentsEnabled;                                    // 0x0064   (0x0001)  
	bool                                               bShowDistanceEnabled;                                       // 0x0065   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x0066   (0x0002)  MISSED
	float                                              ShowDistance;                                               // 0x0068   (0x0004)  
	ENiagaraDebugHudVerbosity                          SystemDebugVerbosity;                                       // 0x006C   (0x0004)  
	ENiagaraDebugHudVerbosity                          SystemEmitterVerbosity;                                     // 0x0070   (0x0004)  
	bool                                               bSystemShowBounds;                                          // 0x0074   (0x0001)  
	bool                                               bShowOnlyActiveComponents;                                  // 0x0075   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x0076   (0x0002)  MISSED
	FColor                                             BgColor;                                                    // 0x0078   (0x0004)  
	ENiagaraDebugHudFont                               OverviewFont;                                               // 0x007C   (0x0004)  
	FLinearColor                                       OverviewHeadingColor;                                       // 0x0080   (0x0010)  
	FLinearColor                                       OverviewDetailColor;                                        // 0x0090   (0x0010)  
	FLinearColor                                       OverviewDetailHighlightColor;                               // 0x00A0   (0x0010)  
	FColor                                             ComponentsTextColor;                                        // 0x00B0   (0x0004)  
	float                                              SystemColorTableOpacity;                                    // 0x00B4   (0x0004)  
	uint32_t                                           SystemColorSeed;                                            // 0x00B8   (0x0004)  
	FVector                                            SystemColorHSVMin;                                          // 0x00BC   (0x000C)  
	FVector                                            SystemColorHSVMax;                                          // 0x00C8   (0x000C)  
	FNiagaraDebugHudTextOptions                        SystemTextOptions;                                          // 0x00D4   (0x0014)  
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FNiagaraGraphViewSettings
{ 
	FVector2D                                          Location;                                                   // 0x0000   (0x0008)  
	float                                              Zoom;                                                       // 0x0008   (0x0004)  
	bool                                               bIsValid;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FNiagaraCollisionEventPayload
{ 
	FVector                                            CollisionPos;                                               // 0x0000   (0x000C)  
	FVector                                            CollisionNormal;                                            // 0x000C   (0x000C)  
	FVector                                            CollisionVelocity;                                          // 0x0018   (0x000C)  
	int32_t                                            ParticleIndex;                                              // 0x0024   (0x0004)  
	int32_t                                            PhysicalMaterialIndex;                                      // 0x0028   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraParameters
{ 
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FNiagaraPlatformSetConflictEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x000C)  
	int32_t                                            QualityLevelMask;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNiagaraPlatformSetConflictInfo
{ 
	int32_t                                            SetAIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            SetBIndex;                                                  // 0x0004   (0x0004)  
	TArray<FNiagaraPlatformSetConflictEntry>           Conflicts;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FNiagaraScalabilityManager
{ 
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0000   (0x0008)  
	TArray<class UNiagaraComponent*>                   ManagedComponents;                                          // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraModuleDependency
{ 
	FName                                              ID;                                                         // 0x0000   (0x000C)  
	ENiagaraModuleDependencyType                       Type;                                                       // 0x000C   (0x0001)  
	ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                           // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	FText                                              Description;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0010 (16 bytes) (0x000078 - 0x000088) align 8 pad: 0x0000
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraScriptHighlight
{ 
	FLinearColor                                       Color;                                                      // 0x0000   (0x0010)  
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraSystemCompileRequest
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FNiagaraSystemCompileRequest
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<class UObject*>                             RootObjects;                                                // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x0018   (0x0068)  MISSED
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 pad: 0x0000
struct FEmitterCompiledScriptPair
{ 
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x0000   (0x0078)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x0138 (312 bytes) (0x000000 - 0x000138) align 8 pad: 0x0000
struct FNiagaraEmitterCompiledData
{ 
	TArray<FName>                                      SpawnAttributes;                                            // 0x0000   (0x0010)  
	FNiagaraVariable                                   EmitterSpawnIntervalVar;                                    // 0x0010   (0x0020)  
	FNiagaraVariable                                   EmitterInterpSpawnStartDTVar;                               // 0x0030   (0x0020)  
	FNiagaraVariable                                   EmitterSpawnGroupVar;                                       // 0x0050   (0x0020)  
	FNiagaraVariable                                   EmitterAgeVar;                                              // 0x0070   (0x0020)  
	FNiagaraVariable                                   EmitterRandomSeedVar;                                       // 0x0090   (0x0020)  
	FNiagaraVariable                                   EmitterInstanceSeedVar;                                     // 0x00B0   (0x0020)  
	FNiagaraVariable                                   EmitterTotalSpawnedParticlesVar;                            // 0x00D0   (0x0020)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x00F0   (0x0048)  
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNiagaraInputConditionMetadata
{ 
	FName                                              InputName;                                                  // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FString>                                    TargetValues;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 pad: 0x0000
struct FNiagaraVariableMetaData
{ 
	FText                                              Description;                                                // 0x0000   (0x0018)  
	FText                                              CategoryName;                                               // 0x0018   (0x0018)  
	bool                                               bAdvancedDisplay;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            EditorSortPriority;                                         // 0x0034   (0x0004)  
	bool                                               bInlineEditConditionToggle;                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FNiagaraInputConditionMetadata                     EditCondition;                                              // 0x0040   (0x0020)  
	FNiagaraInputConditionMetadata                     VisibleCondition;                                           // 0x0060   (0x0020)  
	SDK_UNDEFINED(80,606) /* TMap<FName, FString> */   __um(PropertyMetaData);                                     // 0x0080   (0x0050)  
	FName                                              ParentAttribute;                                            // 0x00D0   (0x000C)  
	FName                                              ScopeName;                                                  // 0x00DC   (0x000C)  
	ENiagaraScriptParameterUsage                       Usage;                                                      // 0x00E8   (0x0004)  
	bool                                               bIsStaticSwitch;                                            // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00ED   (0x0003)  MISSED
	int32_t                                            StaticSwitchDefaultValue;                                   // 0x00F0   (0x0004)  
	bool                                               bAddedToNodeGraphDeepCopy;                                  // 0x00F4   (0x0001)  
	bool                                               bOutputIsPersistent;                                        // 0x00F5   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x00F6   (0x0002)  MISSED
	FName                                              CachedNamespacelessVariableName;                            // 0x00F8   (0x000C)  
	bool                                               bCreatedInSystemEditor;                                     // 0x0104   (0x0001)  
	bool                                               bUseLegacyNameString;                                       // 0x0105   (0x0001)  
	unsigned char                                      UnknownData04_7[0x2];                                       // 0x0106   (0x0002)  MISSED
};

/// Struct /Script/Niagara.NiagaraParameterScopeInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNiagaraParameterScopeInfo
{ 
	ENiagaraParameterScope                             Scope;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            NamespaceString;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FNiagaraCompileHashVisitorDebugInfo
{ 
	FString                                            Object;                                                     // 0x0000   (0x0010)  
	TArray<FString>                                    PropertyKeys;                                               // 0x0010   (0x0010)  
	TArray<FString>                                    PropertyValues;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FNiagaraID
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	int32_t                                            AcquireTag;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FNiagaraSpawnInfo
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	float                                              InterpStartDt;                                              // 0x0004   (0x0004)  
	float                                              IntervalDt;                                                 // 0x0008   (0x0004)  
	int32_t                                            SpawnGroup;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FNiagaraMatrix
{ 
	FVector4                                           Row0;                                                       // 0x0000   (0x0010)  
	FVector4                                           Row1;                                                       // 0x0010   (0x0010)  
	FVector4                                           Row2;                                                       // 0x0020   (0x0010)  
	FVector4                                           Row3;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FNiagaraParameterMap
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FNiagaraNumeric
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 pad: 0x0000
struct FNiagaraHalfVector4
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
	uint16_t                                           W;                                                          // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 2 pad: 0x0000
struct FNiagaraHalfVector3
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 pad: 0x0000
struct FNiagaraHalfVector2
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 pad: 0x0000
struct FNiagaraHalf
{ 
	uint16_t                                           Value;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FNiagaraBool
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FNiagaraInt32
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FNiagaraFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraVariant
{ 
	class UObject*                                     Object;                                                     // 0x0000   (0x0008)  
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0008   (0x0008)  
	TArray<char>                                       Bytes;                                                      // 0x0010   (0x0010)  
	ENiagaraVariantMode                                CurrentMode;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
struct FNiagaraWorldManagerTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

