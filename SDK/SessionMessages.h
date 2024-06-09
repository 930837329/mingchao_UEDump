
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/SessionMessages.SessionServiceLogUnsubscribe
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FSessionServiceLogUnsubscribe
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLogSubscribe
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FSessionServiceLogSubscribe
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLog
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FSessionServiceLog
{ 
	FName                                              Category;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Data;                                                       // 0x0010   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0020   (0x0010)  
	double                                             TimeSeconds;                                                // 0x0030   (0x0008)  
	char                                               Verbosity;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/SessionMessages.SessionServicePong
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FSessionServicePong
{ 
	bool                                               Authorized;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            BuildDate;                                                  // 0x0008   (0x0010)  
	FString                                            DeviceName;                                                 // 0x0018   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0028   (0x0010)  
	FString                                            InstanceName;                                               // 0x0038   (0x0010)  
	FString                                            PlatformName;                                               // 0x0048   (0x0010)  
	FGuid                                              SessionId;                                                  // 0x0058   (0x0010)  
	FString                                            SessionName;                                                // 0x0068   (0x0010)  
	FString                                            SessionOwner;                                               // 0x0078   (0x0010)  
	bool                                               Standalone;                                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/SessionMessages.SessionServicePing
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FSessionServicePing
{ 
	FString                                            UserName;                                                   // 0x0000   (0x0010)  
};

