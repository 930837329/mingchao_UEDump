
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: JsEnv

/// Class /Script/TpSafe.TpSafeProxy
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UTpSafeProxy : public UBlueprintFunctionLibrary
{ 
public:
	// void SetUserInfo(int32_t AccountType, int32_t WorldId, FString openid, int32_t PlayerId);                                // [0x2188f60] Final|Native|Static|Public 
	// void RecvAntiData(FArrayBuffer& Data);                                                                                   // [0x2188ee0] Final|Native|Static|Public|HasOutParms 
	// void Logout();                                                                                                           // [0x2188ec0] Final|Native|Static|Public 
	// FArrayBuffer GetAntiData();                                                                                              // [0x2188e80] Final|Native|Static|Public 
	// void DelAntiData();                                                                                                      // [0xc036d0] Final|Native|Static|Public 
};

/// Class /Script/TpSafe.TpSafeSetting
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UTpSafeSetting : public UObject
{ 
public:
	bool                                               Enable;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

