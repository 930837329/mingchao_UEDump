
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ProceduralMeshComponent
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/SpinePlugin.SpineAtlasAsset
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000068) align 8 pad: 0x0000
class USpineAtlasAsset : public UObject
{ 
public:
	TArray<class UTexture2D*>                          atlasPages;                                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED
	FString                                            rawData;                                                    // 0x0048   (0x0010)  
	FName                                              atlasFileName;                                              // 0x0058   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/SpinePlugin.SpineBoneDriverComponent
/// Size: 0x0028 (40 bytes) (0x000218 - 0x000240) align 16 pad: 0x0000
class USpineBoneDriverComponent : public USceneComponent
{ 
public:
	class AActor*                                      Target;                                                     // 0x0218   (0x0008)  
	FString                                            BoneName;                                                   // 0x0220   (0x0010)  
	bool                                               UseComponentTransform;                                      // 0x0230   (0x0001)  
	bool                                               UsePosition;                                                // 0x0231   (0x0001)  
	bool                                               UseRotation;                                                // 0x0232   (0x0001)  
	bool                                               UseScale;                                                   // 0x0233   (0x0001)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0234   (0x000C)  MISSED
	// void BeforeUpdateWorldTransform(class USpineSkeletonComponent* Skeleton);                                                // [0x2184360] Final|Native|Protected 
};

/// Class /Script/SpinePlugin.SpineBoneFollowerComponent
/// Size: 0x0028 (40 bytes) (0x000218 - 0x000240) align 16 pad: 0x0000
class USpineBoneFollowerComponent : public USceneComponent
{ 
public:
	class AActor*                                      Target;                                                     // 0x0218   (0x0008)  
	FString                                            BoneName;                                                   // 0x0220   (0x0010)  
	bool                                               UseComponentTransform;                                      // 0x0230   (0x0001)  
	bool                                               UsePosition;                                                // 0x0231   (0x0001)  
	bool                                               UseRotation;                                                // 0x0232   (0x0001)  
	bool                                               UseScale;                                                   // 0x0233   (0x0001)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0234   (0x000C)  MISSED
};

/// Class /Script/SpinePlugin.TrackEntry
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000098) align 8 pad: 0x0000
class UTrackEntry : public UObject
{ 
public:
	SDK_UNDEFINED(16,683) /* FMulticastInlineDelegate */ __um(animationStart);                                     // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,684) /* FMulticastInlineDelegate */ __um(AnimationInterrupt);                                 // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,685) /* FMulticastInlineDelegate */ __um(AnimationEvent);                                     // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,686) /* FMulticastInlineDelegate */ __um(AnimationComplete);                                  // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,687) /* FMulticastInlineDelegate */ __um(animationEnd);                                       // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,688) /* FMulticastInlineDelegate */ __um(AnimationDispose);                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED
	// void SetTrackTime(float trackTime);                                                                                      // [0x21879f0] Final|Native|Public|BlueprintCallable 
	// void SetTrackEnd(float trackEnd);                                                                                        // [0x2187960] Final|Native|Public|BlueprintCallable 
	// void SetTimeScale(float TimeScale);                                                                                      // [0x2187890] Final|Native|Public|BlueprintCallable 
	// void SetMixTime(float mixTime);                                                                                          // [0x2186e10] Final|Native|Public|BlueprintCallable 
	// void SetMixDuration(float mixDuration);                                                                                  // [0x2186d80] Final|Native|Public|BlueprintCallable 
	// void SetLoop(bool Loop);                                                                                                 // [0x2186cf0] Final|Native|Public|BlueprintCallable 
	// void SetEventThreshold(float eventThreshold);                                                                            // [0x2186c60] Final|Native|Public|BlueprintCallable 
	// void SetDrawOrderThreshold(float drawOrderThreshold);                                                                    // [0x2186a30] Final|Native|Public|BlueprintCallable 
	// void SetDelay(float delay);                                                                                              // [0x21869a0] Final|Native|Public|BlueprintCallable 
	// void SetAttachmentThreshold(float attachmentThreshold);                                                                  // [0x21866c0] Final|Native|Public|BlueprintCallable 
	// void SetAnimationStart(float animationStart);                                                                            // [0x2186330] Final|Native|Public|BlueprintCallable 
	// void SetAnimationLast(float animationLast);                                                                              // [0x21862a0] Final|Native|Public|BlueprintCallable 
	// void SetAnimationEnd(float animationEnd);                                                                                // [0x2186210] Final|Native|Public|BlueprintCallable 
	// void SetAlpha(float ALPHA);                                                                                              // [0x2185e80] Final|Native|Public|BlueprintCallable 
	// bool isValidAnimation();                                                                                                 // [0x2187d40] Final|Native|Public|BlueprintCallable 
	// float GetTrackTime();                                                                                                    // [0x2185630] Final|Native|Public|BlueprintCallable 
	// int32_t GetTrackIndex();                                                                                                 // [0x21855e0] Final|Native|Public|BlueprintCallable 
	// float GetTrackEnd();                                                                                                     // [0x2185590] Final|Native|Public|BlueprintCallable 
	// float GetTimeScale();                                                                                                    // [0x2185540] Final|Native|Public|BlueprintCallable 
	// float GetMixTime();                                                                                                      // [0x2185090] Final|Native|Public|BlueprintCallable 
	// float GetMixDuration();                                                                                                  // [0x2185040] Final|Native|Public|BlueprintCallable 
	// bool GetLoop();                                                                                                          // [0x2184ff0] Final|Native|Public|BlueprintCallable 
	// float GetEventThreshold();                                                                                               // [0x2184fa0] Final|Native|Public|BlueprintCallable 
	// float GetDrawOrderThreshold();                                                                                           // [0x2184f50] Final|Native|Public|BlueprintCallable 
	// float GetDelay();                                                                                                        // [0x2184f00] Final|Native|Public|BlueprintCallable 
	// float GetAttachmentThreshold();                                                                                          // [0x2184a30] Final|Native|Public|BlueprintCallable 
	// float GetAnimationStart();                                                                                               // [0x2184840] Final|Native|Public|BlueprintCallable 
	// FString getAnimationName();                                                                                              // [0x2187bf0] Final|Native|Public|BlueprintCallable 
	// float GetAnimationLast();                                                                                                // [0x21847f0] Final|Native|Public|BlueprintCallable 
	// float GetAnimationEnd();                                                                                                 // [0x21847a0] Final|Native|Public|BlueprintCallable 
	// float GetAnimationDuration();                                                                                            // [0x2187ba0] Final|Native|Public|BlueprintCallable 
	// float GetAlpha();                                                                                                        // [0x2184550] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SpinePlugin.SpineSkeletonComponent
/// Size: 0x0058 (88 bytes) (0x0000C0 - 0x000118) align 8 pad: 0x0000
class USpineSkeletonComponent : public UActorComponent
{ 
public:
	class USpineAtlasAsset*                            Atlas;                                                      // 0x00C0   (0x0008)  
	class USpineSkeletonDataAsset*                     SkeletonData;                                               // 0x00C8   (0x0008)  
	SDK_UNDEFINED(16,689) /* FMulticastInlineDelegate */ __um(BeforeUpdateWorldTransform);                         // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,690) /* FMulticastInlineDelegate */ __um(AfterUpdateWorldTransform);                          // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x00F0   (0x0028)  MISSED
	// void UpdateWorldTransform();                                                                                             // [0x2187b60] Final|Native|Public|BlueprintCallable 
	// void SetToSetupPose();                                                                                                   // [0x2187920] Final|Native|Public|BlueprintCallable 
	// void SetSlotsToSetupPose();                                                                                              // [0x2187750] Final|Native|Public|BlueprintCallable 
	// void SetSlotColor(FString SlotName, FColor Color);                                                                       // [0x2187620] Final|Native|Public|HasDefaults|BlueprintCallable 
	// bool SetSkins(TArray<FString>& SkinNames);                                                                               // [0x2187460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool SetSkin(FString SkinName);                                                                                          // [0x2187260] Final|Native|Public|BlueprintCallable 
	// void SetScaleY(float ScaleY);                                                                                            // [0x2187160] Final|Native|Public|BlueprintCallable 
	// void SetScaleX(float ScaleX);                                                                                            // [0x2187060] Final|Native|Public|BlueprintCallable 
	// void SetBoneWorldPosition(FString BoneName, FVector& Position);                                                          // [0x2186870] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetBonesToSetupPose();                                                                                              // [0x2186960] Final|Native|Public|BlueprintCallable 
	// bool SetAttachment(FString SlotName, FString attachmentName);                                                            // [0x21863c0] Final|Native|Public|BlueprintCallable 
	// bool HasSlot(FString SlotName);                                                                                          // [0x2185c80] Final|Native|Public|BlueprintCallable 
	// bool HasSkin(FString SkinName);                                                                                          // [0x2185a80] Final|Native|Public|BlueprintCallable 
	// bool HasBone(FString BoneName);                                                                                          // [0x2185880] Final|Native|Public|BlueprintCallable 
	// bool HasAnimation(FString AnimationName);                                                                                // [0x2185680] Final|Native|Public|BlueprintCallable 
	// void GetSlots(TArray<FString>& Slots);                                                                                   // [0x2185340] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void GetSkins(TArray<FString>& Skins);                                                                                   // [0x21851a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float GetScaleY();                                                                                                       // [0x2185140] Final|Native|Public|BlueprintCallable 
	// float GetScaleX();                                                                                                       // [0x21850e0] Final|Native|Public|BlueprintCallable 
	// FTransform GetBoneWorldTransform(FString BoneName);                                                                      // [0x2184b50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void GetBones(TArray<FString>& Bones);                                                                                   // [0x2184c20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void GetAnimations(TArray<FString>& Animations);                                                                         // [0x2184890] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float GetAnimationDuration(FString AnimationName);                                                                       // [0x21845a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SpinePlugin.SpineSkeletonAnimationComponent
/// Size: 0x0100 (256 bytes) (0x000118 - 0x000218) align 8 pad: 0x0000
class USpineSkeletonAnimationComponent : public USpineSkeletonComponent
{ 
public:
	SDK_UNDEFINED(16,691) /* FMulticastInlineDelegate */ __um(animationStart);                                     // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,692) /* FMulticastInlineDelegate */ __um(AnimationInterrupt);                                 // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,693) /* FMulticastInlineDelegate */ __um(AnimationEvent);                                     // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,694) /* FMulticastInlineDelegate */ __um(AnimationComplete);                                  // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,695) /* FMulticastInlineDelegate */ __um(animationEnd);                                       // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,696) /* FMulticastInlineDelegate */ __um(AnimationDispose);                                   // 0x0168   (0x0010)  
	FString                                            PreviewAnimation;                                           // 0x0178   (0x0010)  
	FString                                            PreviewSkin;                                                // 0x0188   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0198   (0x0008)  MISSED
	SDK_UNDEFINED(80,697) /* TSet<UTrackEntry*> */     __um(trackEntries);                                         // 0x01A0   (0x0050)  
	bool                                               bAutoPlaying;                                               // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x27];                                      // 0x01F1   (0x0027)  MISSED
	// void SetTimeScale(float TimeScale);                                                                                      // [0x2187790] Final|Native|Public|BlueprintCallable 
	// void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);                                                         // [0x2186ea0] Final|Native|Public|BlueprintCallable 
	// class UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration);                                             // [0x2186ac0] Final|Native|Public|BlueprintCallable 
	// void SetAutoPlay(bool bInAutoPlays);                                                                                     // [0x2186750] Final|Native|Public|BlueprintCallable 
	// class UTrackEntry* SetAnimation(int32_t TrackIndex, FString AnimationName, bool Loop);                                   // [0x2185f10] Final|Native|Public|BlueprintCallable 
	// float GetTimeScale();                                                                                                    // [0x21854e0] Final|Native|Public|BlueprintCallable 
	// class UTrackEntry* GetCurrent(int32_t TrackIndex);                                                                       // [0x2184dc0] Final|Native|Public|BlueprintCallable 
	// void ClearTracks();                                                                                                      // [0x2184510] Final|Native|Public|BlueprintCallable 
	// void ClearTrack(int32_t TrackIndex);                                                                                     // [0x21843f0] Final|Native|Public|BlueprintCallable 
	// class UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float delay);                                // [0x2184140] Final|Native|Public|BlueprintCallable 
	// class UTrackEntry* AddAnimation(int32_t TrackIndex, FString AnimationName, bool Loop, float delay);                      // [0x2183dc0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SpinePlugin.SpineAnimationStateMixData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FSpineAnimationStateMixData
{ 
	FString                                            From;                                                       // 0x0000   (0x0010)  
	FString                                            To;                                                         // 0x0010   (0x0010)  
	float                                              Mix;                                                        // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/SpinePlugin.SpineSkeletonDataAsset
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x000108) align 8 pad: 0x0000
class USpineSkeletonDataAsset : public UObject
{ 
public:
	float                                              DefaultMix;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FSpineAnimationStateMixData>                MixData;                                                    // 0x0038   (0x0010)  
	TArray<FString>                                    Bones;                                                      // 0x0048   (0x0010)  
	TArray<FString>                                    Slots;                                                      // 0x0058   (0x0010)  
	TArray<FString>                                    Skins;                                                      // 0x0068   (0x0010)  
	TArray<FString>                                    Animations;                                                 // 0x0078   (0x0010)  
	TArray<FString>                                    Events;                                                     // 0x0088   (0x0010)  
	TArray<char>                                       rawData;                                                    // 0x0098   (0x0010)  
	FName                                              skeletonDataFileName;                                       // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_7[0x54];                                      // 0x00B4   (0x0054)  MISSED
};

/// Class /Script/SpinePlugin.SpineSkeletonRendererComponent
/// Size: 0x02D0 (720 bytes) (0x000570 - 0x000840) align 16 pad: 0x0000
class USpineSkeletonRendererComponent : public UProceduralMeshComponent
{ 
public:
	class UMaterialInterface*                          NormalBlendMaterial;                                        // 0x0570   (0x0008)  
	class UMaterialInterface*                          AdditiveBlendMaterial;                                      // 0x0578   (0x0008)  
	class UMaterialInterface*                          MultiplyBlendMaterial;                                      // 0x0580   (0x0008)  
	class UMaterialInterface*                          ScreenBlendMaterial;                                        // 0x0588   (0x0008)  
	TArray<class UMaterialInstanceDynamic*>            AtlasNormalBlendMaterials;                                  // 0x0590   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            AtlasAdditiveBlendMaterials;                                // 0x05A0   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            AtlasMultiplyBlendMaterials;                                // 0x05B0   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            AtlasScreenBlendMaterials;                                  // 0x05C0   (0x0010)  
	float                                              DepthOffset;                                                // 0x05D0   (0x0004)  
	FName                                              TextureParameterName;                                       // 0x05D4   (0x000C)  
	FLinearColor                                       Color;                                                      // 0x05E0   (0x0010)  
	bool                                               bCreateCollision;                                           // 0x05F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F7];                                     // 0x05F1   (0x01F7)  MISSED
	TArray<FVector>                                    Vertices;                                                   // 0x07E8   (0x0010)  
	TArray<int32_t>                                    Indices;                                                    // 0x07F8   (0x0010)  
	TArray<FVector>                                    Normals;                                                    // 0x0808   (0x0010)  
	TArray<FVector2D>                                  UVS;                                                        // 0x0818   (0x0010)  
	TArray<FColor>                                     Colors;                                                     // 0x0828   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0838   (0x0008)  MISSED
};

/// Class /Script/SpinePlugin.SpineWidget
/// Size: 0x0578 (1400 bytes) (0x000128 - 0x0006A0) align 8 pad: 0x0000
class USpineWidget : public UWidget
{ 
public:
	FString                                            InitialSkin;                                                // 0x0128   (0x0010)  
	class USpineAtlasAsset*                            Atlas;                                                      // 0x0138   (0x0008)  
	class USpineSkeletonDataAsset*                     SkeletonData;                                               // 0x0140   (0x0008)  
	class UMaterialInterface*                          NormalBlendMaterial;                                        // 0x0148   (0x0008)  
	class UMaterialInterface*                          AdditiveBlendMaterial;                                      // 0x0150   (0x0008)  
	class UMaterialInterface*                          MultiplyBlendMaterial;                                      // 0x0158   (0x0008)  
	class UMaterialInterface*                          ScreenBlendMaterial;                                        // 0x0160   (0x0008)  
	FName                                              TextureParameterName;                                       // 0x0168   (0x000C)  
	float                                              DepthOffset;                                                // 0x0174   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0178   (0x0010)  
	FSlateBrush                                        Brush;                                                      // 0x0188   (0x0090)  
	SDK_UNDEFINED(16,698) /* FMulticastInlineDelegate */ __um(BeforeUpdateWorldTransform);                         // 0x0218   (0x0010)  
	SDK_UNDEFINED(16,699) /* FMulticastInlineDelegate */ __um(AfterUpdateWorldTransform);                          // 0x0228   (0x0010)  
	SDK_UNDEFINED(16,700) /* FMulticastInlineDelegate */ __um(animationStart);                                     // 0x0238   (0x0010)  
	SDK_UNDEFINED(16,701) /* FMulticastInlineDelegate */ __um(AnimationInterrupt);                                 // 0x0248   (0x0010)  
	SDK_UNDEFINED(16,702) /* FMulticastInlineDelegate */ __um(AnimationEvent);                                     // 0x0258   (0x0010)  
	SDK_UNDEFINED(16,703) /* FMulticastInlineDelegate */ __um(AnimationComplete);                                  // 0x0268   (0x0010)  
	SDK_UNDEFINED(16,704) /* FMulticastInlineDelegate */ __um(animationEnd);                                       // 0x0278   (0x0010)  
	SDK_UNDEFINED(16,705) /* FMulticastInlineDelegate */ __um(AnimationDispose);                                   // 0x0288   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0298   (0x0040)  MISSED
	TArray<class UMaterialInstanceDynamic*>            AtlasNormalBlendMaterials;                                  // 0x02D8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x02E8   (0x0050)  MISSED
	TArray<class UMaterialInstanceDynamic*>            AtlasAdditiveBlendMaterials;                                // 0x0338   (0x0010)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0348   (0x0050)  MISSED
	TArray<class UMaterialInstanceDynamic*>            AtlasMultiplyBlendMaterials;                                // 0x0398   (0x0010)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x03A8   (0x0050)  MISSED
	TArray<class UMaterialInstanceDynamic*>            AtlasScreenBlendMaterials;                                  // 0x03F8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x240];                                     // 0x0408   (0x0240)  MISSED
	SDK_UNDEFINED(80,706) /* TSet<UTrackEntry*> */     __um(trackEntries);                                         // 0x0648   (0x0050)  
	bool                                               bAutoPlaying;                                               // 0x0698   (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x0699   (0x0007)  MISSED
	// void UpdateWorldTransform();                                                                                             // [0x2187b80] Final|Native|Public|BlueprintCallable 
	// void Tick(float DeltaTime, bool CallDelegates);                                                                          // [0x2187a80] Final|Native|Public|BlueprintCallable 
	// void SetToSetupPose();                                                                                                   // [0x2187940] Final|Native|Public|BlueprintCallable 
	// void SetTimeScale(float TimeScale);                                                                                      // [0x2187810] Final|Native|Public|BlueprintCallable 
	// void SetSlotsToSetupPose();                                                                                              // [0x2187770] Final|Native|Public|BlueprintCallable 
	// bool SetSkins(TArray<FString>& SkinNames);                                                                               // [0x2187540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool SetSkin(FString SkinName);                                                                                          // [0x2187360] Final|Native|Public|BlueprintCallable 
	// void SetScaleY(float ScaleY);                                                                                            // [0x21871e0] Final|Native|Public|BlueprintCallable 
	// void SetScaleX(float ScaleX);                                                                                            // [0x21870e0] Final|Native|Public|BlueprintCallable 
	// void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);                                                         // [0x2186f80] Final|Native|Public|BlueprintCallable 
	// class UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration);                                             // [0x2186b90] Final|Native|Public|BlueprintCallable 
	// void SetBonesToSetupPose();                                                                                              // [0x2186980] Final|Native|Public|BlueprintCallable 
	// void SetAutoPlay(bool bInAutoPlays);                                                                                     // [0x21867e0] Final|Native|Public|BlueprintCallable 
	// bool SetAttachment(FString SlotName, FString attachmentName);                                                            // [0x2186540] Final|Native|Public|BlueprintCallable 
	// class UTrackEntry* SetAnimation(int32_t TrackIndex, FString AnimationName, bool Loop);                                   // [0x2186090] Final|Native|Public|BlueprintCallable 
	// bool HasSlot(FString SlotName);                                                                                          // [0x2185d80] Final|Native|Public|BlueprintCallable 
	// bool HasSkin(FString SkinName);                                                                                          // [0x2185b80] Final|Native|Public|BlueprintCallable 
	// bool HasBone(FString BoneName);                                                                                          // [0x2185980] Final|Native|Public|BlueprintCallable 
	// bool HasAnimation(FString AnimationName);                                                                                // [0x2185780] Final|Native|Public|BlueprintCallable 
	// float GetTimeScale();                                                                                                    // [0x2185510] Final|Native|Public|BlueprintCallable 
	// void GetSlots(TArray<FString>& Slots);                                                                                   // [0x2185410] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void GetSkins(TArray<FString>& Skins);                                                                                   // [0x2185270] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float GetScaleY();                                                                                                       // [0x2185170] Final|Native|Public|BlueprintCallable 
	// float GetScaleX();                                                                                                       // [0x2185110] Final|Native|Public|BlueprintCallable 
	// class UTrackEntry* GetCurrent(int32_t TrackIndex);                                                                       // [0x2184e60] Final|Native|Public|BlueprintCallable 
	// FTransform GetBoneTransform(FString BoneName);                                                                           // [0x2184a80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void GetBones(TArray<FString>& Bones);                                                                                   // [0x2184cf0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void GetAnimations(TArray<FString>& Animations);                                                                         // [0x2184960] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float GetAnimationDuration(FString AnimationName);                                                                       // [0x21846a0] Final|Native|Public|BlueprintCallable 
	// void ClearTracks();                                                                                                      // [0x2184530] Final|Native|Public|BlueprintCallable 
	// void ClearTrack(int32_t TrackIndex);                                                                                     // [0x2184480] Final|Native|Public|BlueprintCallable 
	// class UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float delay);                                // [0x2184250] Final|Native|Public|BlueprintCallable 
	// class UTrackEntry* AddAnimation(int32_t TrackIndex, FString AnimationName, bool Loop, float delay);                      // [0x2183f80] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SpinePlugin.SpineEvent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FSpineEvent
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            StringValue;                                                // 0x0010   (0x0010)  
	int32_t                                            IntValue;                                                   // 0x0020   (0x0004)  
	float                                              FloatValue;                                                 // 0x0024   (0x0004)  
	float                                              Time;                                                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

