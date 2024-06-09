
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject

/// Class /Script/KuroAI.BTComposite_ParallelNode
/// Size: 0x0008 (8 bytes) (0x000098 - 0x0000A0) align 8 pad: 0x0000
class UBTComposite_ParallelNode : public UBTCompositeNode
{ 
public:
	bool                                               Test;                                                       // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/KuroAI.BTComposite_Random
/// Size: 0x0010 (16 bytes) (0x000098 - 0x0000A8) align 8 pad: 0x0000
class UBTComposite_Random : public UBTCompositeNode
{ 
public:
	TArray<int32_t>                                    Weights;                                                    // 0x0098   (0x0010)  
};

