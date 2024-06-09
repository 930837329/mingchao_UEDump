
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MIDIDevice.EMIDIEventType
/// Size: 0x01 (1 bytes)
enum class EMIDIEventType : uint8_t
{
	EMIDIEventType__Unknown                                                          = 0,
	EMIDIEventType__NoteOff                                                          = 8,
	EMIDIEventType__NoteOn                                                           = 9,
	EMIDIEventType__NoteAfterTouch                                                   = 10,
	EMIDIEventType__ControlChange                                                    = 11,
	EMIDIEventType__ProgramChange                                                    = 12,
	EMIDIEventType__ChannelAfterTouch                                                = 13,
	EMIDIEventType__PitchBend                                                        = 14
};

/// Class /Script/MIDIDevice.MIDIDeviceController
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000068) align 8 pad: 0x0000
class UMIDIDeviceController : public UObject
{ 
public:
	SDK_UNDEFINED(16,1557) /* FMulticastInlineDelegate */ __um(OnMIDIEvent);                                       // 0x0030   (0x0010)  
	int32_t                                            DeviceID;                                                   // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            DeviceName;                                                 // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/MIDIDevice.MIDIDeviceInputController
/// Size: 0x0098 (152 bytes) (0x000030 - 0x0000C8) align 8 pad: 0x0000
class UMIDIDeviceInputController : public UObject
{ 
public:
	SDK_UNDEFINED(16,1558) /* FMulticastInlineDelegate */ __um(OnMIDINoteOn);                                      // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1559) /* FMulticastInlineDelegate */ __um(OnMIDINoteOff);                                     // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1560) /* FMulticastInlineDelegate */ __um(OnMIDIPitchBend);                                   // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1561) /* FMulticastInlineDelegate */ __um(OnMIDIAftertouch);                                  // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,1562) /* FMulticastInlineDelegate */ __um(OnMIDIControlChange);                               // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,1563) /* FMulticastInlineDelegate */ __um(OnMIDIProgramChange);                               // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,1564) /* FMulticastInlineDelegate */ __um(OnMIDIChannelAftertouch);                           // 0x0090   (0x0010)  
	int32_t                                            DeviceID;                                                   // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FString                                            DeviceName;                                                 // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Class /Script/MIDIDevice.MIDIDeviceManager
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{ 
public:
	// void GetMIDIOutputDeviceIDByName(FString DeviceName, int32_t& DeviceID);                                                 // [0x222be80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetMIDIInputDeviceIDByName(FString DeviceName, int32_t& DeviceID);                                                  // [0x222bd50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetDefaultIMIDIOutputDeviceID(int32_t& DeviceID);                                                                   // [0x222bcd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetDefaultIMIDIInputDeviceID(int32_t& DeviceID);                                                                    // [0x222bc50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void FindMIDIDevices(TArray<FFoundMIDIDevice>& OutMIDIDevices);                                                          // [0x222bb90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void FindAllMIDIDeviceInfo(TArray<FMIDIDeviceInfo>& OutMIDIInputDevices, TArray<FMIDIDeviceInfo>& OutMIDIOutputDevices); // [0x222ba30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class UMIDIDeviceOutputController* CreateMIDIDeviceOutputController(int32_t DeviceID);                                   // [0x222b9a0] Final|Native|Static|Public|BlueprintCallable 
	// class UMIDIDeviceInputController* CreateMIDIDeviceInputController(int32_t DeviceID, int32_t MIDIBufferSize);             // [0x222b8d0] Final|Native|Static|Public|BlueprintCallable 
	// class UMIDIDeviceController* CreateMIDIDeviceController(int32_t DeviceID, int32_t MIDIBufferSize);                       // [0x222b800] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MIDIDevice.MIDIDeviceOutputController
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UMIDIDeviceOutputController : public UObject
{ 
public:
	int32_t                                            DeviceID;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            DeviceName;                                                 // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0048   (0x0008)  MISSED
	// void SendMIDIProgramChange(int32_t Channel, int32_t ProgramNumber);                                                      // [0x222c6f0] Final|Native|Public|BlueprintCallable 
	// void SendMIDIPitchBend(int32_t Channel, int32_t Pitch);                                                                  // [0x222c620] Final|Native|Public|BlueprintCallable 
	// void SendMIDINoteOn(int32_t Channel, int32_t Note, int32_t Velocity);                                                    // [0x222c510] Final|Native|Public|BlueprintCallable 
	// void SendMIDINoteOff(int32_t Channel, int32_t Note, int32_t Velocity);                                                   // [0x222c400] Final|Native|Public|BlueprintCallable 
	// void SendMIDINoteAftertouch(int32_t Channel, int32_t Note, float Amount);                                                // [0x222c2f0] Final|Native|Public|BlueprintCallable 
	// void SendMIDIEvent(EMIDIEventType EventType, int32_t Channel, int32_t data1, int32_t data2);                             // [0x222c190] Final|Native|Public|BlueprintCallable 
	// void SendMIDIControlChange(int32_t Channel, int32_t Type, int32_t Value);                                                // [0x222c080] Final|Native|Public|BlueprintCallable 
	// void SendMIDIChannelAftertouch(int32_t Channel, float Amount);                                                           // [0x222bfb0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MIDIDevice.MIDIDeviceInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FMIDIDeviceInfo
{ 
	int32_t                                            DeviceID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            DeviceName;                                                 // 0x0008   (0x0010)  
	bool                                               bIsAlreadyInUse;                                            // 0x0018   (0x0001)  
	bool                                               bIsDefaultDevice;                                           // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/MIDIDevice.FoundMIDIDevice
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FFoundMIDIDevice
{ 
	int32_t                                            DeviceID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            DeviceName;                                                 // 0x0008   (0x0010)  
	bool                                               bCanReceiveFrom;                                            // 0x0018   (0x0001)  
	bool                                               bCanSendTo;                                                 // 0x0019   (0x0001)  
	bool                                               bIsAlreadyInUse;                                            // 0x001A   (0x0001)  
	bool                                               bIsDefaultInputDevice;                                      // 0x001B   (0x0001)  
	bool                                               bIsDefaultOutputDevice;                                     // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

