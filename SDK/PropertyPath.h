
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/PropertyPath.PropertyPathSegment
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FPropertyPathSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	int32_t                                            ArrayIndex;                                                 // 0x000C   (0x0004)  
	class UStruct*                                     Struct;                                                     // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/PropertyPath.CachedPropertyPath
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FCachedPropertyPath
{ 
	TArray<FPropertyPathSegment>                       Segments;                                                   // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
	class UFunction*                                   CachedFunction;                                             // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

