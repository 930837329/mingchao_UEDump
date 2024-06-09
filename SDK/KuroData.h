
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KuroData.KuroHitResult
/// Size: 0x0218 (536 bytes) (0x000030 - 0x000248) align 8 pad: 0x0000
class UKuroHitResult : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0xA8];                                      // 0x0030   (0x00A8)  MISSED
	bool                                               bBlockingHit;                                               // 0x00D8   (0x0001)  
	bool                                               bStartPenetrating;                                          // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00DA   (0x0006)  MISSED
	SDK_UNDEFINED(16,661) /* TArray<TWeakObjectPtr<AActor*>> */ __um(Actors);                                      // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,662) /* TArray<TWeakObjectPtr<UPrimitiveComponent*>> */ __um(Components);                     // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,663) /* TArray<TWeakObjectPtr<UPhysicalMaterial*>> */ __um(PhysMaterials);                    // 0x0100   (0x0010)  
	TArray<FString>                                    BoneNameArray;                                              // 0x0110   (0x0010)  
	TArray<char>                                       ElementIndexArray;                                          // 0x0120   (0x0010)  
	TArray<int32_t>                                    FaceIndexArray;                                             // 0x0130   (0x0010)  
	TArray<int32_t>                                    ItemArray;                                                  // 0x0140   (0x0010)  
	TArray<float>                                      DistanceArray;                                              // 0x0150   (0x0010)  
	TArray<float>                                      PenetrationDepthArray;                                      // 0x0160   (0x0010)  
	TArray<float>                                      TimeArray;                                                  // 0x0170   (0x0010)  
	TArray<float>                                      ImpactNormalX_Array;                                        // 0x0180   (0x0010)  
	TArray<float>                                      ImpactNormalY_Array;                                        // 0x0190   (0x0010)  
	TArray<float>                                      ImpactNormalZ_Array;                                        // 0x01A0   (0x0010)  
	TArray<float>                                      ImpactPointX_Array;                                         // 0x01B0   (0x0010)  
	TArray<float>                                      ImpactPointY_Array;                                         // 0x01C0   (0x0010)  
	TArray<float>                                      ImpactPointZ_Array;                                         // 0x01D0   (0x0010)  
	TArray<float>                                      LocationX_Array;                                            // 0x01E0   (0x0010)  
	TArray<float>                                      LocationY_Array;                                            // 0x01F0   (0x0010)  
	TArray<float>                                      LocationZ_Array;                                            // 0x0200   (0x0010)  
	TArray<float>                                      NormalX_Array;                                              // 0x0210   (0x0010)  
	TArray<float>                                      NormalY_Array;                                              // 0x0220   (0x0010)  
	TArray<float>                                      NormalZ_Array;                                              // 0x0230   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0240   (0x0008)  MISSED
	// int32_t GetHitCount();                                                                                                   // [0xf1ca70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void Clear();                                                                                                            // [0xf1c9a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroData.KuroTraceLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroTraceLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool SphereTrace(class UTraceSphereElement* Element, FString ProfileKey);                                                // [0xf1d600] Final|Native|Static|Public|BlueprintCallable 
	// bool ShapeTrace(class UShapeComponent* InShapeComp, class UTraceBaseElement* Element, FName& TraceTagName, FString ProfileKey); // [0xf1d480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool LineTrace(class UTraceLineElement* Element, FString ProfileKey);                                                    // [0xf1caa0] Final|Native|Static|Public|BlueprintCallable 
	// bool CapsuleTrace(class UTraceCapsuleElement* Element, FString ProfileKey);                                              // [0xf1c8b0] Final|Native|Static|Public|BlueprintCallable 
	// bool BoxTrace(class UTraceBoxElement* Element, FString ProfileKey);                                                      // [0xf1c7c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroData.TraceBaseElement
/// Size: 0x0098 (152 bytes) (0x000030 - 0x0000C8) align 8 pad: 0x0000
class UTraceBaseElement : public UObject
{ 
public:
	class UObject*                                     WorldContextObject;                                         // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0038   (0x0028)  MISSED
	TArray<class AActor*>                              ActorsToIgnore;                                             // 0x0060   (0x0010)  
	class UKuroHitResult*                              HitResult;                                                  // 0x0070   (0x0008)  
	float                                              StartX;                                                     // 0x0078   (0x0004)  
	float                                              StartY;                                                     // 0x007C   (0x0004)  
	float                                              StartZ;                                                     // 0x0080   (0x0004)  
	float                                              EndX;                                                       // 0x0084   (0x0004)  
	float                                              EndY;                                                       // 0x0088   (0x0004)  
	float                                              EndZ;                                                       // 0x008C   (0x0004)  
	float                                              TraceColor_R;                                               // 0x0090   (0x0004)  
	float                                              TraceColor_G;                                               // 0x0094   (0x0004)  
	float                                              TraceColor_B;                                               // 0x0098   (0x0004)  
	float                                              TraceColor_A;                                               // 0x009C   (0x0004)  
	float                                              TraceHitColor_R;                                            // 0x00A0   (0x0004)  
	float                                              TraceHitColor_G;                                            // 0x00A4   (0x0004)  
	float                                              TraceHitColor_B;                                            // 0x00A8   (0x0004)  
	float                                              TraceHitColor_A;                                            // 0x00AC   (0x0004)  
	float                                              DrawTime;                                                   // 0x00B0   (0x0004)  
	bool                                               bTraceComplex;                                              // 0x00B4   (0x0001)  
	bool                                               bIgnoreSelf;                                                // 0x00B5   (0x0001)  
	bool                                               bIsSingle;                                                  // 0x00B6   (0x0001)  
	bool                                               bIsProfile;                                                 // 0x00B7   (0x0001)  
	FName                                              ProfileName;                                                // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00C4   (0x0004)  MISSED
	// void SetTraceTypeQuery(TEnumAsByte<ETraceTypeQuery> Type);                                                               // [0xf1d400] Final|Native|Public|BlueprintCallable 
	// void SetTraceHitColor(float R, float G, float B, float A);                                                               // [0xf1d2a0] Final|Native|Public|BlueprintCallable 
	// void SetTraceColor(float R, float G, float B, float A);                                                                  // [0xf1d140] Final|Native|Public|BlueprintCallable 
	// void SetStartLocation(float X, float Y, float Z);                                                                        // [0xf1d020] Final|Native|Public|BlueprintCallable 
	// void SetObjectTypesQuery(TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes);                                            // [0xf1cf70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetEndLocation(float X, float Y, float Z);                                                                          // [0xf1ce50] Final|Native|Public|BlueprintCallable 
	// void SetDrawDebugTrace(TEnumAsByte<EDrawDebugTrace> Type);                                                               // [0xf1cdd0] Final|Native|Public|BlueprintCallable 
	// void Dispose();                                                                                                          // [0xf1ca50] Final|Native|Public|BlueprintCallable 
	// void ClearCacheData(bool bClearWorld);                                                                                   // [0xf1c9c0] Final|Native|Public|BlueprintCallable 
	// void AddObjectTypeQuery(TEnumAsByte<EObjectTypeQuery> ObjectType);                                                       // [0xf1c740] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroData.TraceLineElement
/// Size: 0x0000 (0 bytes) (0x0000C8 - 0x0000C8) align 8 pad: 0x0000
class UTraceLineElement : public UTraceBaseElement
{ 
public:
};

/// Class /Script/KuroData.TraceBoxElement
/// Size: 0x0018 (24 bytes) (0x0000C8 - 0x0000E0) align 8 pad: 0x0000
class UTraceBoxElement : public UTraceBaseElement
{ 
public:
	float                                              HalfSizeX;                                                  // 0x00C8   (0x0004)  
	float                                              HalfSizeY;                                                  // 0x00CC   (0x0004)  
	float                                              HalfSizeZ;                                                  // 0x00D0   (0x0004)  
	float                                              OrientationPitch;                                           // 0x00D4   (0x0004)  
	float                                              OrientationYaw;                                             // 0x00D8   (0x0004)  
	float                                              OrientationRoll;                                            // 0x00DC   (0x0004)  
	// void SetBoxOrientation(float Pitch, float Yaw, float Roll);                                                              // [0xf1ccb0] Final|Native|Public|BlueprintCallable 
	// void SetBoxHalfSize(float X, float Y, float Z);                                                                          // [0xf1cb90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroData.TraceCapsuleElement
/// Size: 0x0008 (8 bytes) (0x0000C8 - 0x0000D0) align 8 pad: 0x0000
class UTraceCapsuleElement : public UTraceBaseElement
{ 
public:
	float                                              Radius;                                                     // 0x00C8   (0x0004)  
	float                                              HalfHeight;                                                 // 0x00CC   (0x0004)  
};

/// Class /Script/KuroData.TraceSphereElement
/// Size: 0x0008 (8 bytes) (0x0000C8 - 0x0000D0) align 8 pad: 0x0000
class UTraceSphereElement : public UTraceBaseElement
{ 
public:
	float                                              Radius;                                                     // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

