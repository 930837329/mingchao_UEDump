
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Niagara
/// dependency: NiagaraCore

/// Enum /Script/HoudiniNiagara.EHoudiniPointCacheFileType
/// Size: 0x01 (1 bytes)
enum class EHoudiniPointCacheFileType : uint8_t
{
	EHoudiniPointCacheFileType__Invalid                                              = 0,
	EHoudiniPointCacheFileType__CSV                                                  = 1,
	EHoudiniPointCacheFileType__JSON                                                 = 2,
	EHoudiniPointCacheFileType__BJSON                                                = 3
};

/// Enum /Script/HoudiniNiagara.EHoudiniAttributes
/// Size: 0x01 (1 bytes)
enum class EHoudiniAttributes : uint8_t
{
	HOUDINI_ATTR_BEGIN                                                               = 0,
	Position                                                                         = 0,
	Normal                                                                           = 1,
	Time                                                                             = 2,
	POINTID                                                                          = 3,
	LIFE                                                                             = 4,
	Color                                                                            = 5,
	ALPHA                                                                            = 6,
	Velocity                                                                         = 7,
	Type                                                                             = 8,
	Impulse                                                                          = 9,
	AGE                                                                              = 10,
	HOUDINI_ATTR_SIZE                                                                = 11,
	HOUDINI_ATTR_END                                                                 = 10
};

/// Struct /Script/HoudiniNiagara.PointIndexes
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FPointIndexes
{ 
	TArray<int32_t>                                    SampleIndexes;                                              // 0x0000   (0x0010)  
};

/// Class /Script/HoudiniNiagara.HoudiniPointCache
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000F0) align 8 pad: 0x0000
class UHoudiniPointCache : public UObject
{ 
public:
	FString                                            Filename;                                                   // 0x0030   (0x0010)  
	int32_t                                            NumberOfSamples;                                            // 0x0040   (0x0004)  
	int32_t                                            NumberOfAttributes;                                         // 0x0044   (0x0004)  
	int32_t                                            NumberOfPoints;                                             // 0x0048   (0x0004)  
	int32_t                                            NumberOfFrames;                                             // 0x004C   (0x0004)  
	float                                              FirstFrame;                                                 // 0x0050   (0x0004)  
	float                                              LastFrame;                                                  // 0x0054   (0x0004)  
	float                                              MinSampleTime;                                              // 0x0058   (0x0004)  
	float                                              MaxSampleTime;                                              // 0x005C   (0x0004)  
	FString                                            SourceCSVTitleRow;                                          // 0x0060   (0x0010)  
	TArray<FString>                                    AttributeArray;                                             // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0080   (0x0008)  MISSED
	TArray<float>                                      FloatSampleData;                                            // 0x0088   (0x0010)  
	TArray<float>                                      SpawnTimes;                                                 // 0x0098   (0x0010)  
	TArray<float>                                      LifeValues;                                                 // 0x00A8   (0x0010)  
	TArray<int32_t>                                    PointTypes;                                                 // 0x00B8   (0x0010)  
	TArray<int32_t>                                    SpecialAttributeIndexes;                                    // 0x00C8   (0x0010)  
	TArray<FPointIndexes>                              PointValueIndexes;                                          // 0x00D8   (0x0010)  
	bool                                               UseCustomCSVTitleRow;                                       // 0x00E8   (0x0001)  
	EHoudiniPointCacheFileType                         FileType;                                                   // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x00EA   (0x0006)  MISSED
	// void SetUseCustomCSVTitleRow(bool bInUseCustomCSVTitleRow);                                                              // [0x1751d60] Final|Native|Public|BlueprintCallable 
	// bool GetVelocityValue(int32_t& sampleIndex, FVector& Value);                                                             // [0x1751c70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetVectorValueForString(int32_t& sampleIndex, FString Attribute, FVector& Value, bool& DoSwap, bool& DoScale);      // [0x1751a70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetVectorValue(int32_t& sampleIndex, int32_t& attrIndex, FVector& Value, bool& DoSwap, bool& DoScale);              // [0x1751860] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetVector4ValueForString(int32_t& sampleIndex, FString Attribute, FVector4& Value);                                 // [0x1751710] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetVector4Value(int32_t& sampleIndex, int32_t& attrIndex, FVector4& Value);                                         // [0x17515d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetUseCustomCSVTitleRow();                                                                                          // [0xc0c060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetTimeValue(int32_t& sampleIndex, float& Value);                                                                   // [0x17514e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// TArray<int32_t> GetSpecialAttributeIndexes();                                                                            // [0x17514b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<float> GetSpawnTimes();                                                                                           // [0x1751480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetSampleIndexesForPointAtTime(int32_t& POINTID, float& desiredTime, int32_t& PrevSampleIndex, int32_t& NextSampleIndex, float& PrevWeight); // [0x1751270] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetQuatValueForString(int32_t& sampleIndex, FString Attribute, FQuat& Value, bool& DoHoudiniToUnrealConversion);    // [0x17510c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetQuatValue(int32_t& sampleIndex, int32_t& attrIndex, FQuat& Value, bool& DoHoudiniToUnrealConversion);            // [0x1750f10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetPositionValue(int32_t& sampleIndex, FVector& Value);                                                             // [0x1750e20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointVectorValueAtTimeForString(int32_t POINTID, FString Attribute, float desiredTime, FVector& Vector, bool DoSwap, bool DoScale); // [0x1750c20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointVectorValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, FVector& Vector, bool DoSwap, bool DoScale); // [0x1750a00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointVector4ValueAtTimeForString(int32_t POINTID, FString Attribute, float desiredTime, FVector4& Vector);       // [0x1750870] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointVector4ValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, FVector4& Vector);           // [0x1750700] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// TArray<FPointIndexes> GetPointValueIndexes();                                                                            // [0x1750600] Final|Native|Public|Const 
	// bool GetPointValueAtTimeForString(int32_t& POINTID, FString Attribute, float& desiredTime, float& Value);                // [0x1750450] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointValueAtTime(int32_t& POINTID, int32_t& AttributeIndex, float& desiredTime, float& Value);                   // [0x17502a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// TArray<int32_t> GetPointTypes();                                                                                         // [0x1750270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointType(int32_t& POINTID, int32_t& Value);                                                                     // [0x1750180] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointQuatValueAtTimeForString(int32_t POINTID, FString Attribute, float desiredTime, FQuat& Quat, bool DoHoudiniToUnrealConversion); // [0x174ffa0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointQuatValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, FQuat& Quat, bool DoHoudiniToUnrealConversion); // [0x174fdd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointPositionAtTime(int32_t& POINTID, float& desiredTime, FVector& Vector);                                      // [0x174fc90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointLifeAtTime(int32_t& POINTID, float& desiredTime, float& Value);                                             // [0x174fb50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointLife(int32_t& POINTID, float& Value);                                                                       // [0x174fa60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointInt32ValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, int32_t& Value);               // [0x174f900] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointIDsToSpawnAtTime(float& desiredTime, int32_t& MinID, int32_t& MaxID, int32_t& Count, int32_t& LastSpawnedPointID, float& LastSpawnTime, float& LastSpawnTimeRequest); // [0x174f680] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetPointFloatValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, float& Value);                 // [0x174f520] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumberOfSamples();                                                                                            // [0x174f4f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumberOfPoints();                                                                                             // [0x174f4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumberOfAttributes();                                                                                         // [0x174f490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetNormalValue(int32_t& sampleIndex, FVector& Value);                                                               // [0x174f3a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// TArray<float> GetLifeValues();                                                                                           // [0x174f370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetLastSampleIndexAtTime(float& desiredTime, int32_t& lastSampleIndex);                                             // [0x174f280] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetLastPointIDToSpawnAtTime(float& Time, int32_t& lastID);                                                          // [0x174f190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetImpulseValue(int32_t& sampleIndex, float& Value);                                                                // [0x174f0a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetFloatValueForString(int32_t& sampleIndex, FString Attribute, float& Value);                                      // [0x174ef50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetFloatValue(int32_t& sampleIndex, int32_t& attrIndex, float& Value);                                              // [0x174ee10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// TArray<float> GetFloatSampleData();                                                                                      // [0x174ede0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetColorValue(int32_t& sampleIndex, FLinearColor& Value);                                                           // [0x174ecf0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetAttributeIndexInArrayFromString(FString InAttribute, TArray<FString>& InAttributeArray, int32_t& OutAttributeIndex); // [0x174eb70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetAttributeIndexFromString(FString Attribute, int32_t& AttributeIndex);                                            // [0x174ea70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HoudiniNiagara.NiagaraDataInterfaceHoudini
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceHoudini : public UNiagaraDataInterface
{ 
public:
	class UHoudiniPointCache*                          HoudiniPointCacheAsset;                                     // 0x0040   (0x0008)  
};

/// Struct /Script/HoudiniNiagara.HoudiniEvent
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 4 pad: 0x0000
struct FHoudiniEvent
{ 
	FVector                                            Position;                                                   // 0x0000   (0x000C)  
	FVector                                            Normal;                                                     // 0x000C   (0x000C)  
	float                                              Impulse;                                                    // 0x0018   (0x0004)  
	FVector                                            Velocity;                                                   // 0x001C   (0x000C)  
	int32_t                                            POINTID;                                                    // 0x0028   (0x0004)  
	float                                              Time;                                                       // 0x002C   (0x0004)  
	float                                              LIFE;                                                       // 0x0030   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0034   (0x0010)  
	int32_t                                            Type;                                                       // 0x0044   (0x0004)  
};

