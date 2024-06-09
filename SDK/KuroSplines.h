
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KuroSplines.KuroMoveSplineComponent
/// Size: 0x0058 (88 bytes) (0x0005D8 - 0x000630) align 16 pad: 0x0000
class UKuroMoveSplineComponent : public USplineComponent
{ 
public:
	TArray<int32_t>                                    MoveStates;                                                 // 0x05D8   (0x0010)  
	TArray<int32_t>                                    MoveSpeeds;                                                 // 0x05E8   (0x0010)  
	TArray<int32_t>                                    IgnorePoints;                                               // 0x05F8   (0x0010)  
	TArray<int32_t>                                    StayTimes;                                                  // 0x0608   (0x0010)  
	TArray<int32_t>                                    IsHides;                                                    // 0x0618   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0628   (0x0008)  MISSED
	// int32_t GetStayTime(int32_t Index);                                                                                      // [0xf6bbc0] Final|Native|Public|BlueprintCallable 
	// int32_t GetMoveState(int32_t Index);                                                                                     // [0xf6ba80] Final|Native|Public|BlueprintCallable 
	// int32_t GetMoveSpeed(int32_t Index);                                                                                     // [0xf6b9e0] Final|Native|Public|BlueprintCallable 
	// int32_t GetIsHide(int32_t Index);                                                                                        // [0xf6b8a0] Final|Native|Public|BlueprintCallable 
	// int32_t GetIgnorePoint(int32_t Index);                                                                                   // [0xf6b800] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroSplines.KuroParkourSplineComponent
/// Size: 0x0038 (56 bytes) (0x0005D8 - 0x000610) align 16 pad: 0x0000
class UKuroParkourSplineComponent : public USplineComponent
{ 
public:
	TArray<float>                                      RadiusGroup;                                                // 0x05D8   (0x0010)  
	TArray<float>                                      ModifiedTimes;                                              // 0x05E8   (0x0010)  
	TArray<int32_t>                                    BuffIds;                                                    // 0x05F8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0608   (0x0008)  MISSED
	// float GetRadius(int32_t Index);                                                                                          // [0xf6bb20] Final|Native|Public|BlueprintCallable 
	// float GetModifiedTime(int32_t Index);                                                                                    // [0xf6b940] Final|Native|Public|BlueprintCallable 
	// int32_t GetBuffId(int32_t Index);                                                                                        // [0xf6b800] Final|Native|Public|BlueprintCallable 
};

