
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
/// dependency: InputCore

/// Class /Script/RawInput.RawInputFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// TArray<FRegisteredDeviceInfo> GetRegisteredDevices();                                                                    // [0x212b820] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/RawInput.RawInputDeviceAxisProperties
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FRawInputDeviceAxisProperties
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FKey                                               Key;                                                        // 0x0008   (0x0020)  
	bool                                               bInverted : 1;                                              // 0x0028:0 (0x0001)  
	bool                                               bGamepadStick : 1;                                          // 0x0028:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              Offset;                                                     // 0x002C   (0x0004)  
};

/// Struct /Script/RawInput.RawInputDeviceButtonProperties
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FRawInputDeviceButtonProperties
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FKey                                               Key;                                                        // 0x0008   (0x0020)  
};

/// Struct /Script/RawInput.RawInputDeviceAxisButtonProperties
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FRawInputDeviceAxisButtonProperties
{ 
	int32_t                                            AnalogIndex;                                                // 0x0000   (0x0004)  
	float                                              AnalogValue;                                                // 0x0004   (0x0004)  
	float                                              MaxAnalogValue;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FKey                                               Key;                                                        // 0x0010   (0x0020)  
};

/// Struct /Script/RawInput.RawInputDeviceConfiguration
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FRawInputDeviceConfiguration
{ 
	FString                                            VendorID;                                                   // 0x0000   (0x0010)  
	FString                                            ProductID;                                                  // 0x0010   (0x0010)  
	TArray<FRawInputDeviceAxisProperties>              AxisProperties;                                             // 0x0020   (0x0010)  
	TArray<FRawInputDeviceButtonProperties>            ButtonProperties;                                           // 0x0030   (0x0010)  
	TArray<FRawInputDeviceAxisButtonProperties>        AxisButtonProperties;                                       // 0x0040   (0x0010)  
	TArray<FRawInputDeviceAxisProperties>              BluetoothAxisProperties;                                    // 0x0050   (0x0010)  
	TArray<FRawInputDeviceButtonProperties>            BluetoothButtonProperties;                                  // 0x0060   (0x0010)  
	TArray<FRawInputDeviceAxisButtonProperties>        BluetoothAxisButtonProperties;                              // 0x0070   (0x0010)  
};

/// Class /Script/RawInput.RawInputSettings
/// Size: 0x0020 (32 bytes) (0x000048 - 0x000068) align 8 pad: 0x0000
class URawInputSettings : public UDeveloperSettings
{ 
public:
	TArray<FRawInputDeviceConfiguration>               DeviceConfigurations;                                       // 0x0048   (0x0010)  
	bool                                               bRegisterDefaultDevice;                                     // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              AxisTolerance;                                              // 0x005C   (0x0004)  
	bool                                               bPrintButtonLog;                                            // 0x0060   (0x0001)  
	bool                                               bPrintAxisLog;                                              // 0x0061   (0x0001)  
	bool                                               bPrintAxisButtonLog;                                        // 0x0062   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x0063   (0x0005)  MISSED
};

/// Struct /Script/RawInput.RegisteredDeviceInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FRegisteredDeviceInfo
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
	int32_t                                            VendorID;                                                   // 0x0004   (0x0004)  
	int32_t                                            ProductID;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            DeviceName;                                                 // 0x0010   (0x0010)  
};

