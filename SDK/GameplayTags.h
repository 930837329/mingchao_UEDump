
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

/// Enum /Script/GameplayTags.EGameplayTagQueryExprType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined                                             = 0,
	EGameplayTagQueryExprType__AnyTagsMatch                                          = 1,
	EGameplayTagQueryExprType__AllTagsMatch                                          = 2,
	EGameplayTagQueryExprType__NoTagsMatch                                           = 3,
	EGameplayTagQueryExprType__AnyExprMatch                                          = 4,
	EGameplayTagQueryExprType__AllExprMatch                                          = 5,
	EGameplayTagQueryExprType__NoExprMatch                                           = 6
};

/// Enum /Script/GameplayTags.EGameplayContainerMatchType
/// Size: 0x01 (1 bytes)
enum class EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any                                                 = 0,
	EGameplayContainerMatchType__All                                                 = 1
};

/// Enum /Script/GameplayTags.EGameplayTagMatchType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit                                                  = 0,
	EGameplayTagMatchType__IncludeParentTags                                         = 1
};

/// Enum /Script/GameplayTags.EGameplayTagSelectionType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagSelectionType : uint8_t
{
	EGameplayTagSelectionType__None                                                  = 0,
	EGameplayTagSelectionType__NonRestrictedOnly                                     = 1,
	EGameplayTagSelectionType__RestrictedOnly                                        = 2,
	EGameplayTagSelectionType__All                                                   = 3
};

/// Enum /Script/GameplayTags.EGameplayTagSourceType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native                                                   = 0,
	EGameplayTagSourceType__DefaultTagList                                           = 1,
	EGameplayTagSourceType__TagList                                                  = 2,
	EGameplayTagSourceType__RestrictedTagList                                        = 3,
	EGameplayTagSourceType__DataTable                                                = 4,
	EGameplayTagSourceType__Invalid                                                  = 5
};

/// Class /Script/GameplayTags.BlueprintGameplayTagLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);                                           // [0x3c9a770] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool NotEqual_TagTag(FGameplayTag A, FString B);                                                                         // [0x3c9a630] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B);                                              // [0x3c9a4c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool NotEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B);                                  // [0x3c9a370] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B);                                                               // [0x3c9a270] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch);                                             // [0x3c9a130] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool MatchesAnyTags(FGameplayTag TagOne, FGameplayTagContainer& OtherContainer, bool bExactMatch);                       // [0x3c99fd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value);                                      // [0x3c99ec0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value);                                                                 // [0x3c99e10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery TagQuery);                                                      // [0x3c99ce0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag);                                           // [0x3c99c10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<FGameplayTag>& GameplayTags);                             // [0x3c99b40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool IsTagQueryEmpty(FGameplayTagQuery& TagQuery);                                                                       // [0x3c99a60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool IsGameplayTagValid(FGameplayTag GameplayTag);                                                                       // [0x3c999c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool HasTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch);                                    // [0x3c99860] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool HasAnyTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch);           // [0x3c99610] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool HasAllTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch);           // [0x3c993b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool HasAllMatchingGameplayTags(TScriptInterface<Class> TagContainerInterface, FGameplayTagContainer& OtherContainer);   // [0x3c99290] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FName GetTagName(FGameplayTag& GameplayTag);                                                                             // [0x3c99110] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// int32_t GetNumGameplayTagsInContainer(FGameplayTagContainer& TagContainer);                                              // [0x3c98f90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FString GetDebugStringFromGameplayTagContainer(FGameplayTagContainer& TagContainer);                                     // [0x3c98e90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);                                                         // [0x3c98db0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors); // [0x3c98bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool EqualEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B);                                // [0x3c98a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);                                                             // [0x3c98980] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool DoesTagAssetInterfaceHaveTag(TScriptInterface<Class> TagContainerInterface, FGameplayTag Tag);                      // [0x3c98880] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool DoesContainerMatchTagQuery(FGameplayTagContainer& TagContainer, FGameplayTagQuery& TagQuery);                       // [0x3c98720] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void BreakGameplayTagContainer(FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);         // [0x3c98600] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, FGameplayTagContainer& InTagContainer);       // [0x3c984d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);                                              // [0x3c983b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTags.GameplayTagAssetInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UGameplayTagAssetInterface : public UInterface
{ 
public:
	// bool HasMatchingGameplayTag(FGameplayTag TagToCheck);                                                                    // [0x3c997a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool HasAnyMatchingGameplayTags(FGameplayTagContainer& TagContainer);                                                    // [0x3c99540] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool HasAllMatchingGameplayTags(FGameplayTagContainer& TagContainer);                                                    // [0x3c991c0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer);                                                          // [0x3c99050] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/GameplayTags.GameplayTag
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FGameplayTag
{ 
	FName                                              TagName;                                                    // 0x0000   (0x000C)  
};

/// Struct /Script/GameplayTags.GameplayTagQuery
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FGameplayTagQuery
{ 
	int32_t                                            TokenStreamVersion;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FGameplayTag>                               TagDictionary;                                              // 0x0008   (0x0010)  
	TArray<char>                                       QueryTokenStream;                                           // 0x0018   (0x0010)  
	FString                                            UserDescription;                                            // 0x0028   (0x0010)  
	FString                                            AutoDescription;                                            // 0x0038   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQuery
/// Size: 0x0070 (112 bytes) (0x000030 - 0x0000A0) align 8 pad: 0x0000
class UEditableGameplayTagQuery : public UObject
{ 
public:
	FString                                            UserDescription;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
	class UEditableGameplayTagQueryExpression*         RootExpression;                                             // 0x0050   (0x0008)  
	FGameplayTagQuery                                  TagQueryExportText_Helper;                                  // 0x0058   (0x0048)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UEditableGameplayTagQueryExpression : public UObject
{ 
public:
};

/// Struct /Script/GameplayTags.GameplayTagContainer
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FGameplayTagContainer
{ 
	TArray<FGameplayTag>                               GameplayTags;                                               // 0x0000   (0x0010)  
	TArray<FGameplayTag>                               ParentTags;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0030   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0030   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0030   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0030   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0030   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0030   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagSource
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FGameplayTagSource
{ 
	FName                                              SourceName;                                                 // 0x0000   (0x000C)  
	EGameplayTagSourceType                             SourceType;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	class UGameplayTagsList*                           SourceTagList;                                              // 0x0010   (0x0008)  
	class URestrictedGameplayTagsList*                 SourceRestrictedTagList;                                    // 0x0018   (0x0008)  
};

/// Class /Script/GameplayTags.GameplayTagsManager
/// Size: 0x01E8 (488 bytes) (0x000030 - 0x000218) align 8 pad: 0x0000
class UGameplayTagsManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x98];                                      // 0x0030   (0x0098)  MISSED
	TArray<FGameplayTagSource>                         TagSources;                                                 // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData01_6[0xE0];                                      // 0x00D8   (0x00E0)  MISSED
	TArray<class UDataTable*>                          GameplayTagTables;                                          // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x01C8   (0x0050)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FGameplayTagTableRow : FTableRowBase
{ 
	FName                                              Tag;                                                        // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            DevComment;                                                 // 0x0018   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsList
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UGameplayTagsList : public UObject
{ 
public:
	FString                                            ConfigFileName;                                             // 0x0030   (0x0010)  
	TArray<FGameplayTagTableRow>                       GameplayTagList;                                            // 0x0040   (0x0010)  
};

/// Struct /Script/GameplayTags.RestrictedGameplayTagTableRow
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow
{ 
	bool                                               bAllowNonRestrictedChildren;                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/GameplayTags.RestrictedGameplayTagsList
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class URestrictedGameplayTagsList : public UObject
{ 
public:
	FString                                            ConfigFileName;                                             // 0x0030   (0x0010)  
	TArray<FRestrictedGameplayTagTableRow>             RestrictedGameplayTagList;                                  // 0x0040   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagCategoryRemap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FGameplayTagCategoryRemap
{ 
	FString                                            BaseCategory;                                               // 0x0000   (0x0010)  
	TArray<FString>                                    RemapCategories;                                            // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagRedirect
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FGameplayTagRedirect
{ 
	FName                                              OldTagName;                                                 // 0x0000   (0x000C)  
	FName                                              NewTagName;                                                 // 0x000C   (0x000C)  
};

/// Struct /Script/GameplayTags.RestrictedConfigInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FRestrictedConfigInfo
{ 
	FString                                            RestrictedConfigName;                                       // 0x0000   (0x0010)  
	TArray<FString>                                    Owners;                                                     // 0x0010   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsSettings
/// Size: 0x0070 (112 bytes) (0x000050 - 0x0000C0) align 8 pad: 0x0000
class UGameplayTagsSettings : public UGameplayTagsList
{ 
public:
	bool                                               ImportTagsFromConfig;                                       // 0x0050   (0x0001)  
	bool                                               WarnOnInvalidTags;                                          // 0x0051   (0x0001)  
	bool                                               FastReplication;                                            // 0x0052   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0053   (0x0005)  MISSED
	FString                                            InvalidTagCharacters;                                       // 0x0058   (0x0010)  
	TArray<FGameplayTagCategoryRemap>                  CategoryRemapping;                                          // 0x0068   (0x0010)  
	TArray<FSoftObjectPath>                            GameplayTagTableList;                                       // 0x0078   (0x0010)  
	TArray<FGameplayTagRedirect>                       GameplayTagRedirects;                                       // 0x0088   (0x0010)  
	TArray<FName>                                      CommonlyReplicatedTags;                                     // 0x0098   (0x0010)  
	int32_t                                            NumBitsForContainerSize;                                    // 0x00A8   (0x0004)  
	int32_t                                            NetIndexFirstBitSegment;                                    // 0x00AC   (0x0004)  
	TArray<FRestrictedConfigInfo>                      RestrictedConfigFiles;                                      // 0x00B0   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsDeveloperSettings
/// Size: 0x0020 (32 bytes) (0x000048 - 0x000068) align 8 pad: 0x0000
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{ 
public:
	FString                                            DeveloperConfigName;                                        // 0x0048   (0x0010)  
	FName                                              FavoriteTagSource;                                          // 0x0058   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagCreationWidgetHelper
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FGameplayTagCreationWidgetHelper
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagReferenceHelper
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FGameplayTagReferenceHelper
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagNode
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FGameplayTagNode
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

