
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

/// Class /Script/KuroSqliteBpLib.KuroPrepareStatementLib
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroPrepareStatementLib : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/KuroSqliteBpLib.KuroQueryStatLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroQueryStatLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void SetTestSqliteAction(FJsObject& Action);                                                                             // [0xf76310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetTestDataSavePath(FString Path);                                                                                  // [0xf75540] Final|Native|Static|Public|BlueprintCallable 
	// void SetCloseSaveQueryArgsFileAction(FJsObject& Action);                                                                 // [0xf76310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void InvokeTestSqliteAction();                                                                                           // [0xc036d0] Final|Native|Static|Public|BlueprintCallable 
	// void InvokeCloseSaveQueryArgsFileAction();                                                                               // [0xc036d0] Final|Native|Static|Public|BlueprintCallable 
	// void CloseTestDataFile();                                                                                                // [0xc036d0] Final|Native|Static|Public|BlueprintCallable 
	// void AppendString(FString Content);                                                                                      // [0xf75540] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroSqliteBpLib.KuroSqliteLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroSqliteLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// int32_t SqliteStatusGetHighWater(int32_t StatusOp, bool ResetHighWater);                                                 // [0xf76530] Final|Native|Static|Public|BlueprintCallable 
	// int32_t SqliteStatusGetCurrent(int32_t StatusOp);                                                                        // [0xf764a0] Final|Native|Static|Public|BlueprintCallable 
	// void SetDBKey(FString DBKey);                                                                                            // [0xf763c0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t QueryValue(FString DBPath, FString Sql, FString& OutValue);                                                      // [0xf76190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void QueryAsync(FString DBPath, FString Sql, class UKuroSqliteResultSet* ResultSet);                                     // [0xf76060] Final|Native|Static|Public|BlueprintCallable 
	// bool Query(FString DBPath, FString Sql, class UKuroSqliteResultSet* ResultSet);                                          // [0xf75f20] Final|Native|Static|Public|BlueprintCallable 
	// bool OpenCreateDB(FString DBPath, bool bUseThread);                                                                      // [0xf75e40] Final|Native|Static|Public|BlueprintCallable 
	// void ExecuteAsync(FString DBPath, FString Sql);                                                                          // [0xf756e0] Final|Native|Static|Public|BlueprintCallable 
	// bool Execute(FString DBPath, FString Sql);                                                                               // [0xf755f0] Final|Native|Static|Public|BlueprintCallable 
	// void CloseAllConnections();                                                                                              // [0xf755d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroSqliteBpLib.KuroSqliteResultSet
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000068) align 8 pad: 0x0000
class UKuroSqliteResultSet : public UObject
{ 
public:
	SDK_UNDEFINED(20,1502) /* FDelegateProperty */     __um(QueriedCallback);                                      // 0x0030   (0x0014)  
	unsigned char                                      UnknownData00_7[0x24];                                      // 0x0044   (0x0024)  MISSED
	// void Release();                                                                                                          // [0xf762f0] Final|Native|Public  
	// bool MoveToNext();                                                                                                       // [0xf75e10] Final|Native|Public|Const 
	// bool HasValue();                                                                                                         // [0xf75de0] Final|Native|Public|Const 
	// bool GetString(FString Column, FString& Value);                                                                          // [0xf75cd0] Final|Native|Public|HasOutParms|Const 
	// bool GetInt(FString Column, int32_t& Value);                                                                             // [0xf75bd0] Final|Native|Public|HasOutParms|Const 
	// bool GetFloat(FString Column, float& Value);                                                                             // [0xf75ad0] Final|Native|Public|HasOutParms|Const 
	// bool GetBytes(FString Column, FArrayBuffer& Value);                                                                      // [0xf759d0] Final|Native|Public|HasOutParms|Const 
	// bool GetBool(FString Column, bool& Value);                                                                               // [0xf758d0] Final|Native|Public|HasOutParms|Const 
	// bool GetBigInt(FString Column, int64_t& Value);                                                                          // [0xf757d0] Final|Native|Public|HasOutParms|Const 
};

