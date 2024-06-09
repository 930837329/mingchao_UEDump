
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/json2struct.EJson2StructFilterEnum
/// Size: 0x01 (1 bytes)
enum class EJson2StructFilterEnum : uint8_t
{
	EJson2StructFilterEnum__Skip                                                     = 0,
	EJson2StructFilterEnum__MD5                                                      = 1,
	EJson2StructFilterEnum__ToLower                                                  = 2,
	EJson2StructFilterEnum__ToUpper                                                  = 3,
	EJson2StructFilterEnum__Set                                                      = 4
};

/// Enum /Script/json2struct.EJson2structParseResult
/// Size: 0x01 (1 bytes)
enum class EJson2structParseResult : uint8_t
{
	EJson2structParseResult__Success                                                 = 0,
	EJson2structParseResult__Fail                                                    = 1
};

/// Class /Script/json2struct.json2structBPLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class Ujson2structBPLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// TEnumAsByte<EJson2structParseResult> WriteStructBP(class UStruct* inStruct, FJson2struct_filter Filter, FString& json);  // [0x988b90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// TEnumAsByte<EJson2structParseResult> json2structBP(class UStruct*& Out, FString json);                                   // [0x988d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/json2struct.JsonAsyncNode
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
class UJsonAsyncNode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1453) /* FMulticastInlineDelegate */ __um(Success);                                           // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1454) /* FMulticastInlineDelegate */ __um(fail);                                              // 0x0048   (0x0010)  
	// class UJsonAsyncNode* json2structUrl(FString URL, FString requestJson, class UObject* WC);                               // [0x988e70] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/json2struct.Json2struct_filter
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FJson2struct_filter
{ 
	SDK_UNDEFINED(80,1455) /* TMap<FString, EJson2StructFilterEnum> */ __um(fields);                               // 0x0000   (0x0050)  
};

