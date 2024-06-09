
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/AutomationMessages.AutomationWorkerPerformanceDataResponse
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FAutomationWorkerPerformanceDataResponse
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            ErrorMessage;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/AutomationMessages.AutomationWorkerPerformanceDataRequest
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FAutomationWorkerPerformanceDataRequest
{ 
	FString                                            platform;                                                   // 0x0000   (0x0010)  
	FString                                            Hardware;                                                   // 0x0010   (0x0010)  
	FString                                            TestName;                                                   // 0x0020   (0x0010)  
	TArray<double>                                     DataPoints;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/AutomationMessages.AutomationWorkerTestDataResponse
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FAutomationWorkerTestDataResponse
{ 
	FString                                            JsonData;                                                   // 0x0000   (0x0010)  
	bool                                               bIsNew;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/AutomationMessages.AutomationWorkerTestDataRequest
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FAutomationWorkerTestDataRequest
{ 
	FString                                            DataType;                                                   // 0x0000   (0x0010)  
	FString                                            DataPlatform;                                               // 0x0010   (0x0010)  
	FString                                            DataTestName;                                               // 0x0020   (0x0010)  
	FString                                            DataName;                                                   // 0x0030   (0x0010)  
	FString                                            JsonData;                                                   // 0x0040   (0x0010)  
};

/// Struct /Script/AutomationMessages.AutomationWorkerImageComparisonResults
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FAutomationWorkerImageComparisonResults
{ 
	FGuid                                              UniqueId;                                                   // 0x0000   (0x0010)  
	bool                                               bNew;                                                       // 0x0010   (0x0001)  
	bool                                               bSimilar;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
	double                                             MaxLocalDifference;                                         // 0x0018   (0x0008)  
	double                                             GlobalDifference;                                           // 0x0020   (0x0008)  
	FString                                            ErrorMessage;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/AutomationMessages.AutomationScreenshotMetadata
/// Size: 0x0128 (296 bytes) (0x000000 - 0x000128) align 8 pad: 0x0000
struct FAutomationScreenshotMetadata
{ 
	FString                                            ScreenShotName;                                             // 0x0000   (0x0010)  
	FString                                            Context;                                                    // 0x0010   (0x0010)  
	FString                                            TestName;                                                   // 0x0020   (0x0010)  
	FString                                            Notes;                                                      // 0x0030   (0x0010)  
	FGuid                                              ID;                                                         // 0x0040   (0x0010)  
	FString                                            Commit;                                                     // 0x0050   (0x0010)  
	int32_t                                            Width;                                                      // 0x0060   (0x0004)  
	int32_t                                            Height;                                                     // 0x0064   (0x0004)  
	FString                                            RHI;                                                        // 0x0068   (0x0010)  
	FString                                            platform;                                                   // 0x0078   (0x0010)  
	FString                                            FeatureLevel;                                               // 0x0088   (0x0010)  
	bool                                               bIsStereo;                                                  // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
	FString                                            Vendor;                                                     // 0x00A0   (0x0010)  
	FString                                            AdapterName;                                                // 0x00B0   (0x0010)  
	FString                                            AdapterInternalDriverVersion;                               // 0x00C0   (0x0010)  
	FString                                            AdapterUserDriverVersion;                                   // 0x00D0   (0x0010)  
	FString                                            UniqueDeviceId;                                             // 0x00E0   (0x0010)  
	float                                              ResolutionQuality;                                          // 0x00F0   (0x0004)  
	int32_t                                            ViewDistanceQuality;                                        // 0x00F4   (0x0004)  
	int32_t                                            AntiAliasingQuality;                                        // 0x00F8   (0x0004)  
	int32_t                                            ShadowQuality;                                              // 0x00FC   (0x0004)  
	int32_t                                            PostProcessQuality;                                         // 0x0100   (0x0004)  
	int32_t                                            TextureQuality;                                             // 0x0104   (0x0004)  
	int32_t                                            EffectsQuality;                                             // 0x0108   (0x0004)  
	int32_t                                            FoliageQuality;                                             // 0x010C   (0x0004)  
	int32_t                                            ShadingQuality;                                             // 0x0110   (0x0004)  
	bool                                               bHasComparisonRules;                                        // 0x0114   (0x0001)  
	char                                               ToleranceRed;                                               // 0x0115   (0x0001)  
	char                                               ToleranceGreen;                                             // 0x0116   (0x0001)  
	char                                               ToleranceBlue;                                              // 0x0117   (0x0001)  
	char                                               ToleranceAlpha;                                             // 0x0118   (0x0001)  
	char                                               ToleranceMinBrightness;                                     // 0x0119   (0x0001)  
	char                                               ToleranceMaxBrightness;                                     // 0x011A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x011B   (0x0001)  MISSED
	float                                              MaximumLocalError;                                          // 0x011C   (0x0004)  
	float                                              MaximumGlobalError;                                         // 0x0120   (0x0004)  
	bool                                               bIgnoreAntiAliasing;                                        // 0x0124   (0x0001)  
	bool                                               bIgnoreColors;                                              // 0x0125   (0x0001)  
	unsigned char                                      UnknownData02_7[0x2];                                       // 0x0126   (0x0002)  MISSED
};

/// Struct /Script/AutomationMessages.AutomationWorkerScreenImage
/// Size: 0x0158 (344 bytes) (0x000000 - 0x000158) align 8 pad: 0x0000
struct FAutomationWorkerScreenImage
{ 
	TArray<char>                                       ScreenImage;                                                // 0x0000   (0x0010)  
	TArray<char>                                       FrameTrace;                                                 // 0x0010   (0x0010)  
	FString                                            ScreenShotName;                                             // 0x0020   (0x0010)  
	FAutomationScreenshotMetadata                      MetaData;                                                   // 0x0030   (0x0128)  
};

/// Struct /Script/AutomationMessages.AutomationWorkerNextNetworkCommandReply
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FAutomationWorkerNextNetworkCommandReply
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AutomationMessages.AutomationWorkerRequestNextNetworkCommand
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FAutomationWorkerRequestNextNetworkCommand
{ 
	uint32_t                                           ExecutionCount;                                             // 0x0000   (0x0004)  
};

/// Struct /Script/AutomationMessages.AutomationWorkerRunTestsReply
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FAutomationWorkerRunTestsReply
{ 
	FString                                            TestName;                                                   // 0x0000   (0x0010)  
	TArray<FAutomationExecutionEntry>                  Entries;                                                    // 0x0010   (0x0010)  
	int32_t                                            WarningTotal;                                               // 0x0020   (0x0004)  
	int32_t                                            ErrorTotal;                                                 // 0x0024   (0x0004)  
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	uint32_t                                           ExecutionCount;                                             // 0x002C   (0x0004)  
	bool                                               Success;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AutomationMessages.AutomationWorkerRunTests
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FAutomationWorkerRunTests
{ 
	uint32_t                                           ExecutionCount;                                             // 0x0000   (0x0004)  
	int32_t                                            RoleIndex;                                                  // 0x0004   (0x0004)  
	FString                                            TestName;                                                   // 0x0008   (0x0010)  
	FString                                            BeautifiedTestName;                                         // 0x0018   (0x0010)  
	bool                                               bSendAnalytics;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/AutomationMessages.AutomationWorkerSingleTestReply
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FAutomationWorkerSingleTestReply
{ 
	FString                                            DisplayName;                                                // 0x0000   (0x0010)  
	FString                                            FullTestPath;                                               // 0x0010   (0x0010)  
	FString                                            TestName;                                                   // 0x0020   (0x0010)  
	FString                                            TestParameter;                                              // 0x0030   (0x0010)  
	FString                                            SourceFile;                                                 // 0x0040   (0x0010)  
	int32_t                                            SourceFileLine;                                             // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            AssetPath;                                                  // 0x0058   (0x0010)  
	FString                                            OpenCommand;                                                // 0x0068   (0x0010)  
	uint32_t                                           TestFlags;                                                  // 0x0078   (0x0004)  
	uint32_t                                           NumParticipantsRequired;                                    // 0x007C   (0x0004)  
};

/// Struct /Script/AutomationMessages.AutomationWorkerRequestTestsReplyComplete
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FAutomationWorkerRequestTestsReplyComplete
{ 
	TArray<FAutomationWorkerSingleTestReply>           Tests;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/AutomationMessages.AutomationWorkerRequestTests
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FAutomationWorkerRequestTests
{ 
	bool                                               DeveloperDirectoryIncluded;                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           RequestedTestFlags;                                         // 0x0004   (0x0004)  
};

/// Struct /Script/AutomationMessages.AutomationWorkerPong
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FAutomationWorkerPong
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AutomationMessages.AutomationWorkerStopTests
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FAutomationWorkerStopTests
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AutomationMessages.AutomationWorkerResetTests
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FAutomationWorkerResetTests
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AutomationMessages.AutomationWorkerPing
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FAutomationWorkerPing
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AutomationMessages.AutomationWorkerWorkerOffline
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FAutomationWorkerWorkerOffline
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AutomationMessages.AutomationWorkerFindWorkersResponse
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 pad: 0x0000
struct FAutomationWorkerFindWorkersResponse
{ 
	FString                                            DeviceName;                                                 // 0x0000   (0x0010)  
	FString                                            InstanceName;                                               // 0x0010   (0x0010)  
	FString                                            platform;                                                   // 0x0020   (0x0010)  
	FString                                            OSVersionName;                                              // 0x0030   (0x0010)  
	FString                                            ModelName;                                                  // 0x0040   (0x0010)  
	FString                                            GPUName;                                                    // 0x0050   (0x0010)  
	FString                                            CPUModelName;                                               // 0x0060   (0x0010)  
	uint32_t                                           RAMInGB;                                                    // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FString                                            RenderModeName;                                             // 0x0078   (0x0010)  
	FGuid                                              SessionId;                                                  // 0x0088   (0x0010)  
};

/// Struct /Script/AutomationMessages.AutomationWorkerFindWorkers
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FAutomationWorkerFindWorkers
{ 
	int32_t                                            Changelist;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            GameName;                                                   // 0x0008   (0x0010)  
	FString                                            ProcessName;                                                // 0x0018   (0x0010)  
	FGuid                                              SessionId;                                                  // 0x0028   (0x0010)  
};

