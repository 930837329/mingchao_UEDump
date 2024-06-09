
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CrashSight.CrashSightProxy
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UCrashSightProxy : public UBlueprintFunctionLibrary
{ 
public:
	// void TestCriticalError();                                                                                                // [0xc036d0] Final|Native|Static|Public 
	// void Test();                                                                                                             // [0x1533590] Final|Native|Static|Public 
	// void SetUserId(FString UserId);                                                                                          // [0x1533500] Final|Native|Static|Public 
	// void SetCustomDataByFName(FName& Key, FString Value);                                                                    // [0x1533410] Final|Native|Static|Public|HasOutParms 
	// void SetCustomData(FString Key, FString Value);                                                                          // [0x1533320] Final|Native|Static|Public 
	// void SetBranchInfo(FString Stream, FString Changelist);                                                                  // [0x1533230] Final|Native|Static|Public 
};

/// Class /Script/CrashSight.CrashSightSetting
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000078) align 8 pad: 0x0000
class UCrashSightSetting : public UObject
{ 
public:
	bool                                               bNeedUploadLog;                                             // 0x0030   (0x0001)  
	bool                                               bInternational;                                             // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
	FString                                            AndroidAppID;                                               // 0x0038   (0x0010)  
	FString                                            AndroidUploadURL;                                           // 0x0048   (0x0010)  
	FString                                            IOSAppID;                                                   // 0x0058   (0x0010)  
	FString                                            IOSUploadURL;                                               // 0x0068   (0x0010)  
};

