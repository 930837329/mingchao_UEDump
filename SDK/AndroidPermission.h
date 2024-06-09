
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AndroidPermission.AndroidPermissionCallbackProxy
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UAndroidPermissionCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1285) /* FMulticastInlineDelegate */ __um(OnPermissionsGrantedDynamicDelegate);               // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/AndroidPermission.AndroidPermissionFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool CheckPermission(FString permission);                                                                                // [0x2227710] Final|Native|Static|Public|BlueprintCallable 
	// class UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<FString>& Permissions);                                 // [0x2227640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

