
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

/// Enum /Script/KuroNetwork.ECompressMethod
/// Size: 0x01 (1 bytes)
enum class ECompressMethod : uint8_t
{
	ECompressMethod__Zlib                                                            = 0,
	ECompressMethod__GZip                                                            = 1,
	ECompressMethod__LZ4                                                             = 2
};

/// Enum /Script/KuroNetwork.EHttpMethod
/// Size: 0x01 (1 bytes)
enum class EHttpMethod : uint8_t
{
	EHttpMethod__GET                                                                 = 0,
	EHttpMethod__POST                                                                = 1
};

/// Class /Script/KuroNetwork.KuroHttp
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroHttp : public UBlueprintFunctionLibrary
{ 
public:
	// void UnCompressDataToStringAsync(TArray<char>& Data, ECompressMethod CompressMethod, int32_t PresumedUnCompressedSize, FDelegateProperty OnDecompressed); // [0xf65ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void PostWithFile(FString URL, TMap<FString, FString>& HeaderParam, FString FilePath, FDelegateProperty Handle, float InTimeout); // [0xf65570] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void PostWithData(FString URL, TMap<FString, FString>& HeaderParam, TArray<char>& Content, FDelegateProperty Handle, float InTimeout); // [0xf65300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void Post(FString URL, TMap<FString, FString>& HeaderParam, FString Content, FDelegateProperty Handle, float InTimeout); // [0xf650a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// TMap<FString, FString> GetDefaultHeader();                                                                               // [0xf64b00] Final|Native|Static|Public|BlueprintCallable 
	// void Get(FString URL, TMap<FString, FString>& HeaderParam, FDelegateProperty Handle, float InTimeout);                   // [0xf648f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CompressStringAsync(FString InString, ECompressMethod CompressMethod, FDelegateProperty& OnCompressed);             // [0xf64720] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CompressDataAsync(FArrayBuffer& InBuffer, ECompressMethod CompressMethod, FDelegateProperty& OnCompressed);         // [0xf645e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CompressAndPostDataAsync(FString URL, TMap<FString, FString>& HeaderParam, ECompressMethod CompressMethod, FArrayBuffer& Buffer, FDelegateProperty PostHandle, float InTimeout); // [0xf64340] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KuroNetwork.KuroHttpServerRequestProxy
/// Size: 0x0080 (128 bytes) (0x000030 - 0x0000B0) align 16 pad: 0x0000
class UKuroHttpServerRequestProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0030   (0x0080)  MISSED
	// void Response(FString json, bool bSuccess);                                                                              // [0xf657d0] Final|Native|Public|BlueprintCallable 
	// FString GetRequest();                                                                                                    // [0xf64d50] Final|Native|Public|BlueprintCallable 
	// bool GetHeader(FString Key, TArray<FString>& OutHeader);                                                                 // [0xf64bf0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KuroNetwork.KuroHttpServerRouterProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x0000A8) align 8 pad: 0x0000
class UKuroHttpServerRouterProxy : public UObject
{ 
public:
	SDK_UNDEFINED(20,1466) /* FDelegateProperty */     __um(HttpRequestDelegate);                                  // 0x0030   (0x0014)  
	unsigned char                                      UnknownData00_7[0x64];                                      // 0x0044   (0x0064)  MISSED
	// void StartServer();                                                                                                      // [0xf65e30] Final|Native|Public|BlueprintCallable 
	// void CreateRouter(int32_t Port);                                                                                         // [0xf64860] Final|Native|Public|BlueprintCallable 
	// void BindRoute(FString ModuleName);                                                                                      // [0xf642a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroNetwork.KuroKcpClient
/// Size: 0x01D8 (472 bytes) (0x000030 - 0x000208) align 8 pad: 0x0000
class UKuroKcpClient : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,1467) /* FMulticastInlineDelegate */ __um(OnConnectSuccess);                                  // 0x0038   (0x0010)  
	SDK_UNDEFINED(20,1468) /* FDelegateProperty */     __um(OnRecResp);                                            // 0x0048   (0x0014)  
	SDK_UNDEFINED(20,1469) /* FDelegateProperty */     __um(OnRecException);                                       // 0x005C   (0x0014)  
	SDK_UNDEFINED(20,1470) /* FDelegateProperty */     __um(OnRecPush);                                            // 0x0070   (0x0014)  
	SDK_UNDEFINED(20,1471) /* FDelegateProperty */     __um(OnError);                                              // 0x0084   (0x0014)  
	bool                                               IsMultiThreaded;                                            // 0x0098   (0x0001)  
	bool                                               IsTickDrivenOutside;                                        // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_7[0x16E];                                     // 0x009A   (0x016E)  MISSED
	// void TickOutside(float DeltaSeconds);                                                                                    // [0xf65e50] Final|Native|Public  
	// void SetKcpWndSize(int32_t SndWnd, int32_t RcvWnd);                                                                      // [0xf65d60] Final|Native|Public  
	// void SetKcpStream(bool bStream);                                                                                         // [0xf65cd0] Final|Native|Public  
	// void SetKcpSegmentSize(int32_t SegmentSize);                                                                             // [0xf65c40] Final|Native|Public  
	// void SetKcpNoDelay(int32_t NoDelay, int32_t interval, int32_t Resend, int32_t Nc);                                       // [0xf65af0] Final|Native|Public  
	// void SetKcpMtu(int32_t Mtu);                                                                                             // [0xf65a60] Final|Native|Public  
	// bool SetK(char Type, FArrayBuffer& KeyBuffer);                                                                           // [0xf65980] Final|Native|Public|HasOutParms 
	// void SetEnType(char Type, int16_t MsgId);                                                                                // [0xf658b0] Final|Native|Public  
};

/// Class /Script/KuroNetwork.KuroNetworkChange
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UKuroNetworkChange : public UObject
{ 
public:
	SDK_UNDEFINED(16,1472) /* FMulticastInlineDelegate */ __um(NetworkChangeDelegate);                             // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
	// char GetNetworkType();                                                                                                   // [0xf64d20] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/KuroNetwork.KuroPublicKey
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FKuroPublicKey
{ 
	FString                                            Modulus;                                                    // 0x0000   (0x0010)  
	FString                                            Exponent;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/KuroNetwork.KuroPrivateKey
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FKuroPrivateKey
{ 
	FString                                            Modulus;                                                    // 0x0000   (0x0010)  
	FString                                            Exponent;                                                   // 0x0010   (0x0010)  
	FString                                            PrivateExponent;                                            // 0x0020   (0x0010)  
};

/// Class /Script/KuroNetwork.KuroNetworkSetting
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000088) align 8 pad: 0x0000
class UKuroNetworkSetting : public UObject
{ 
public:
	FKuroPublicKey                                     ServerPublicKey;                                            // 0x0030   (0x0020)  
	FKuroPrivateKey                                    ClientPrivateKey;                                           // 0x0050   (0x0030)  
	bool                                               EnableDump;                                                 // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Class /Script/KuroNetwork.SendHttpRequest
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
class USendHttpRequest : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1473) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1474) /* FMulticastInlineDelegate */ __um(OnFail);                                            // 0x0048   (0x0010)  
	// class USendHttpRequest* HttpRequestEx(FString URL, EHttpMethod method, FString PostBody, FString HeaderParam);           // [0xf64f10] Final|Native|Static|Public|BlueprintCallable 
	// class USendHttpRequest* HttpRequest(FString URL, EHttpMethod method, FString PostBody);                                  // [0xf64dd0] Final|Native|Static|Public|BlueprintCallable 
};

