
/********************************************************
*                                                       *
*     SDK generated using UEDumper by Spuckwaffel.		*
*                                                       *
********************************************************/

/// Include this file into your project.
/// If there are still structs missing, read the Engine/Generation/BasicType file.
/// All manual defined structs are in BasicType.h

#include <string>

#define SDK_UNDEFINED(__ssize__, __cnt__, ...) char undefined##__cnt__[__ssize__]; //
#define __um(...) // x

#include "SDK/BasicType.h"
#include "SDK/CoreUObject.h"
#include "SDK/AudioExtensions.h"
#include "SDK/AudioPlatformConfiguration.h"
#include "SDK/Chaos.h"
#include "SDK/ClothingSystemRuntimeInterface.h"
#include "SDK/DeveloperSettings.h"
#include "SDK/InputCore.h"
#include "SDK/PacketHandler.h"
#include "SDK/PhysicsCore.h"
#include "SDK/PropertyAccess.h"
#include "SDK/PropertyPath.h"
#include "SDK/SlateCore.h"
#include "SDK/Slate.h"
#include "SDK/MeshDescription.h"
#include "SDK/StaticMeshDescription.h"
#include "SDK/merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "SDK/ActorSequence.h"
#include "SDK/GameplayTags.h"
#include "SDK/GameplayTasks.h"
#include "SDK/NavigationSystem.h"
#include "SDK/AIModule.h"
#include "SDK/WwiseObjectUtils.h"
#include "SDK/WwiseFileHandler.h"
#include "SDK/WwiseResourceLoader.h"
#include "SDK/AkAudio.h"
#include "SDK/AnimationCore.h"
#include "SDK/AnimGraphRuntime.h"
#include "SDK/ApexDestruction.h"
#include "SDK/AudioAnalyzer.h"
#include "SDK/AudioSynesthesia.h"
#include "SDK/CinematicCamera.h"
#include "SDK/Foliage.h"
#include "SDK/GameplayAbilities.h"
#include "SDK/KawaiiPhysics.h"
#include "SDK/KuroGAS.h"
#include "SDK/MediaUtils.h"
#include "SDK/MediaAssets.h"
#include "SDK/LevelSequence.h"
#include "SDK/KuroAnim.h"
#include "SDK/KuroAudio.h"
#include "SDK/NiagaraCore.h"
#include "SDK/NiagaraShader.h"
#include "SDK/Niagara.h"
#include "SDK/KuroComponent.h"
#include "SDK/KuroCurve.h"
#include "SDK/KuroPointCloud.h"
#include "SDK/ProceduralMeshComponent.h"
#include "SDK/Renderer.h"
#include "SDK/KuroRenderingRuntimeBPPlugin.h"
#include "SDK/KuroGameplay.h"
#include "SDK/KuroInput.h"
#include "SDK/KuroSplines.h"
#include "SDK/KuroData.h"
#include "SDK/KuroUtility.h"
#include "SDK/KuroDynamicAtlas.h"
#include "SDK/LTween.h"
#include "SDK/PrefabSystem.h"
#include "SDK/SpinePlugin.h"
#include "SDK/LGUI.h"
#include "SDK/SMSystem.h"
#include "SDK/Aki.h"
#include "SDK/AndroidPermission.h"
#include "SDK/AssetRegistry.h"
#include "SDK/KuroWorldPartition.h"
#include "SDK/NavmeshPartition.h"
#include "SDK/AudioMaterialPlugin.h"
#include "SDK/MRMesh.h"
#include "SDK/AugmentedReality.h"
#include "SDK/AutomationMessages.h"
#include "SDK/AvfMediaFactory.h"
#include "SDK/BuildPatchServices.h"
#include "SDK/ClothingSystemRuntimeCommon.h"
#include "SDK/ChaosCloth.h"
#include "SDK/ChaosNiagara.h"
#include "SDK/ChaosSolverEngine.h"
#include "SDK/ClothingSystemRuntimeNv.h"
#include "SDK/RigVM.h"
#include "SDK/ControlRig.h"
#include "SDK/CrashSight.h"
#include "SDK/DLSS.h"
#include "SDK/DLSSBlueprint.h"
#include "SDK/EngineDamageTypes.h"
#include "SDK/EngineMessages.h"
#include "SDK/EngineSettings.h"
#include "SDK/EyeTracker.h"
#include "SDK/FieldSystemEngine.h"
#include "SDK/GeometryCache.h"
#include "SDK/GeometryCacheTracks.h"
#include "SDK/GeometryCollectionEngine.h"
#include "SDK/GooglePAD.h"
#include "SDK/HeadMountedDisplay.h"
#include "SDK/HoudiniEngineRuntime.h"
#include "SDK/HoudiniNiagara.h"
#include "SDK/ImageWrapper.h"
#include "SDK/ImageWriteQueue.h"
#include "SDK/ImgMedia.h"
#include "SDK/ImgMediaFactory.h"
#include "SDK/InteractiveToolsFramework.h"
#include "SDK/JsEnv.h"
#include "SDK/json2struct.h"
#include "SDK/JsonUtilities.h"
#include "SDK/KuroAI.h"
#include "SDK/KuroBackgroundDownload.h"
#include "SDK/KuroDevice.h"
#include "SDK/KuroEditorRuntime.h"
#include "SDK/KuroEffectMakerRuntime.h"
#include "SDK/KuroGameScreenshot.h"
#include "SDK/KuroHotPatch.h"
#include "SDK/KuroImposter.h"
#include "SDK/KuroiOSDelegate.h"
#include "SDK/KuroLogAnalyzer.h"
#include "SDK/KuroMovement.h"
#include "SDK/KuroNetwork.h"
#include "SDK/KuroPakKey.h"
#include "SDK/KuroPhysicsSplit.h"
#include "SDK/KuroPuertsWrapper.h"
#include "SDK/KuroPushSdk.h"
#include "SDK/KuroRenderingShadingModule.h"
#include "SDK/KuroSDK.h"
#include "SDK/KuroSqliteBpLib.h"
#include "SDK/KuroVoxelRuntime.h"
#include "SDK/Landscape.h"
#include "SDK/LGUI_BMFGenImporter.h"
#include "SDK/LGUI_TexturePackerImporter.h"
#include "SDK/LightPropagationVolumeRuntime.h"
#include "SDK/LiveLinkInterface.h"
#include "SDK/LuminRuntimeSettings.h"
#include "SDK/MagicLeap.h"
#include "SDK/MagicLeapImageTracker.h"
#include "SDK/MagicLeapPlanes.h"
#include "SDK/MagicLeapAR.h"
#include "SDK/MagicLeapARPin.h"
#include "SDK/MagicLeapARPinInfoActor.h"
#include "SDK/MagicLeapAudio.h"
#include "SDK/MagicLeapController.h"
#include "SDK/MagicLeapEyeTracker.h"
#include "SDK/MagicLeapHandMeshing.h"
#include "SDK/MagicLeapHandTracking.h"
#include "SDK/MagicLeapIdentity.h"
#include "SDK/MagicLeapLightEstimation.h"
#include "SDK/MagicLeapPrivileges.h"
#include "SDK/MagicLeapSecureStorage.h"
#include "SDK/MagicLeapSharedWorld.h"
#include "SDK/MaterialShaderQualitySettings.h"
#include "SDK/MediaCompositing.h"
#include "SDK/MIDIDevice.h"
#include "SDK/MobilePatchingUtils.h"
#include "SDK/MoviePlayer.h"
#include "SDK/MovieSceneCapture.h"
#include "SDK/NetCore.h"
#include "SDK/NiagaraAnimNotifies.h"
#include "SDK/Overlay.h"
#include "SDK/PathFindModule.h"
#include "SDK/Puerts.h"
#include "SDK/RawInput.h"
#include "SDK/ReactUMG.h"
#include "SDK/RoadNetNavigationRuntime.h"
#include "SDK/RoadNetRuntime.h"
#include "SDK/SequenceDialogue.h"
#include "SDK/Serialization.h"
#include "SDK/SessionMessages.h"
#include "SDK/SQLiteCore.h"
#include "SDK/StreamlineBlueprint.h"
#include "SDK/Synthesis.h"
#include "SDK/T4MRuntime.h"
#include "SDK/TapCommon.h"
#include "SDK/TapLogin.h"
#include "SDK/TapUpdate.h"
#include "SDK/TASdkPlugin.h"
#include "SDK/TemplateSequence.h"
#include "SDK/TimeManagement.h"
#include "SDK/TpSafe.h"
#include "SDK/VectorVM.h"
#include "SDK/VolumeGIRender.h"
#include "SDK/WebBrowser.h"
#include "SDK/WindowsDeviceProfileSelector.h"
#include "SDK/WmfMediaFactory.h"
#include "SDK/WwiseSimpleExternalSource.h"