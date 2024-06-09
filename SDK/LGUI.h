
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: KuroCurve
/// dependency: KuroDynamicAtlas
/// dependency: LevelSequence
/// dependency: LTween
/// dependency: MovieScene
/// dependency: Niagara
/// dependency: PrefabSystem
/// dependency: Slate
/// dependency: SlateCore
/// dependency: SpinePlugin

/// Enum /Script/LGUI.EButtonAudioStateTransferType
/// Size: 0x01 (1 bytes)
enum class EButtonAudioStateTransferType : uint8_t
{
	EButtonAudioStateTransferType__None                                              = 0,
	EButtonAudioStateTransferType__NormalToHighLight                                 = 1,
	EButtonAudioStateTransferType__HighlightToNormal                                 = 2,
	EButtonAudioStateTransferType__HighLightToPress                                  = 3,
	EButtonAudioStateTransferType__PressToRelease                                    = 4,
	EButtonAudioStateTransferType__DisabledPress                                     = 5
};

/// Enum /Script/LGUI.EToggleState
/// Size: 0x01 (1 bytes)
enum class EToggleState : uint8_t
{
	EToggleState__ETT_UnChecked                                                      = 0,
	EToggleState__ETT_Checked                                                        = 1,
	EToggleState__ETT_UnDetermined                                                   = 2
};

/// Enum /Script/LGUI.EToggleAudioTransitionState
/// Size: 0x01 (1 bytes)
enum class EToggleAudioTransitionState : uint8_t
{
	EToggleAudioTransitionState__ETT_None                                            = 0,
	EToggleAudioTransitionState__ETT_NormalToHighLight                               = 1,
	EToggleAudioTransitionState__ETT_HighlightedPress                                = 2,
	EToggleAudioTransitionState__ETT_UncheckedClick                                  = 3,
	EToggleAudioTransitionState__ETT_CheckedClick                                    = 4,
	EToggleAudioTransitionState__ETT_DisabledPress                                   = 5
};

/// Enum /Script/LGUI.ELGUIPointerInputType
/// Size: 0x01 (1 bytes)
enum class ELGUIPointerInputType : uint8_t
{
	ELGUIPointerInputType__Pointer                                                   = 0,
	ELGUIPointerInputType__Navigation                                                = 1,
	ELGUIPointerInputType__None                                                      = 2
};

/// Enum /Script/LGUI.ELGUINavigationDirection
/// Size: 0x01 (1 bytes)
enum class ELGUINavigationDirection : uint8_t
{
	ELGUINavigationDirection__None                                                   = 0,
	ELGUINavigationDirection__Left                                                   = 1,
	ELGUINavigationDirection__Right                                                  = 2,
	ELGUINavigationDirection__Up                                                     = 3,
	ELGUINavigationDirection__Down                                                   = 4,
	ELGUINavigationDirection__Next                                                   = 5,
	ELGUINavigationDirection__Prev                                                   = 6
};

/// Enum /Script/LGUI.NavigationComponentState
/// Size: 0x01 (1 bytes)
enum class NavigationComponentState : uint8_t
{
	NavigationComponentState__Select                                                 = 0,
	NavigationComponentState__NoSelect                                               = 1,
	NavigationComponentState__Hide                                                   = 2,
	NavigationComponentState__Show                                                   = 3
};

/// Enum /Script/LGUI.UINavigationGroupMode
/// Size: 0x01 (1 bytes)
enum class UINavigationGroupMode : uint8_t
{
	UINavigationGroupMode__Awake                                                     = 0,
	UINavigationGroupMode__Destroy                                                   = 1,
	UINavigationGroupMode__Active                                                    = 2,
	UINavigationGroupMode__Hide                                                      = 3,
	UINavigationGroupMode__Navigation                                                = 4
};

/// Enum /Script/LGUI.ESceneComponentRayDirection
/// Size: 0x01 (1 bytes)
enum class ESceneComponentRayDirection : uint8_t
{
	ESceneComponentRayDirection__PositiveX                                           = 0,
	ESceneComponentRayDirection__NagtiveX                                            = 1,
	ESceneComponentRayDirection__PositiveY                                           = 2,
	ESceneComponentRayDirection__NagtiveY                                            = 3,
	ESceneComponentRayDirection__PositiveZ                                           = 4,
	ESceneComponentRayDirection__NagtiveZ                                            = 5
};

/// Enum /Script/LGUI.EUIRaycastSortType
/// Size: 0x01 (1 bytes)
enum class EUIRaycastSortType : uint8_t
{
	EUIRaycastSortType__DependOnUIDepth                                              = 0,
	EUIRaycastSortType__DependOnDistance                                             = 1
};

/// Enum /Script/LGUI.EMouseButtonType
/// Size: 0x01 (1 bytes)
enum class EMouseButtonType : uint8_t
{
	EMouseButtonType__Left                                                           = 0,
	EMouseButtonType__Middle                                                         = 1,
	EMouseButtonType__Right                                                          = 2,
	EMouseButtonType__UserDefined1                                                   = 3,
	EMouseButtonType__UserDefined2                                                   = 4,
	EMouseButtonType__UserDefined3                                                   = 5,
	EMouseButtonType__UserDefined4                                                   = 6,
	EMouseButtonType__UserDefined5                                                   = 7,
	EMouseButtonType__UserDefined6                                                   = 8,
	EMouseButtonType__UserDefined7                                                   = 9,
	EMouseButtonType__UserDefined8                                                   = 10,
	EMouseButtonType__NavigationChange                                               = 11
};

/// Enum /Script/LGUI.EPointerEventType
/// Size: 0x01 (1 bytes)
enum class EPointerEventType : uint8_t
{
	EPointerEventType__Click                                                         = 0,
	EPointerEventType__Enter                                                         = 1,
	EPointerEventType__Exit                                                          = 2,
	EPointerEventType__Down                                                          = 3,
	EPointerEventType__Up                                                            = 4,
	EPointerEventType__BeginDrag                                                     = 5,
	EPointerEventType__Drag                                                          = 6,
	EPointerEventType__EndDrag                                                       = 7,
	EPointerEventType__Scroll                                                        = 8,
	EPointerEventType__DragEnter_DEPRECATED                                          = 9,
	EPointerEventType__DragExit_DEPRECATED                                           = 10,
	EPointerEventType__DragDrop                                                      = 11,
	EPointerEventType__Select                                                        = 12,
	EPointerEventType__Deselect                                                      = 13,
	EPointerEventType__Navigate                                                      = 14
};

/// Enum /Script/LGUI.ELGUIEventFireType
/// Size: 0x01 (1 bytes)
enum class ELGUIEventFireType : uint8_t
{
	ELGUIEventFireType__TargetActorAndAllItsComponents                               = 0,
	ELGUIEventFireType__OnlyTargetComponent                                          = 1,
	ELGUIEventFireType__OnlyTargetActor                                              = 2
};

/// Enum /Script/LGUI.ELGUICanvasOverrideParameters
/// Size: 0x01 (1 bytes)
enum class ELGUICanvasOverrideParameters : uint8_t
{
	ELGUICanvasOverrideParameters__DefaltMaterials                                   = 0,
	ELGUICanvasOverrideParameters__PixelPerfect                                      = 1,
	ELGUICanvasOverrideParameters__DynamicPixelsPerUnit                              = 2,
	ELGUICanvasOverrideParameters__ClipType                                          = 3,
	ELGUICanvasOverrideParameters__AdditionalShaderChannels                          = 4,
	ELGUICanvasOverrideParameters__OnlyOwnerSee                                      = 5,
	ELGUICanvasOverrideParameters__OwnerNoSee                                        = 6,
	ELGUICanvasOverrideParameters__TextRGBSplitGlitch                                = 7
};

/// Enum /Script/LGUI.ELGUICanvasAdditionalChannelType
/// Size: 0x01 (1 bytes)
enum class ELGUICanvasAdditionalChannelType : uint8_t
{
	ELGUICanvasAdditionalChannelType__Normal                                         = 0,
	ELGUICanvasAdditionalChannelType__Tangent                                        = 1,
	ELGUICanvasAdditionalChannelType__UV1                                            = 2,
	ELGUICanvasAdditionalChannelType__UV2                                            = 3,
	ELGUICanvasAdditionalChannelType__UV3                                            = 4
};

/// Enum /Script/LGUI.ELGUICanvasClipType
/// Size: 0x01 (1 bytes)
enum class ELGUICanvasClipType : uint8_t
{
	ELGUICanvasClipType__None                                                        = 0,
	ELGUICanvasClipType__Rect                                                        = 1,
	ELGUICanvasClipType__Texture                                                     = 2
};

/// Enum /Script/LGUI.ELGUIRenderMode
/// Size: 0x01 (1 bytes)
enum class ELGUIRenderMode : uint8_t
{
	ELGUIRenderMode__ScreenSpaceOverlay                                              = 0,
	ELGUIRenderMode__WorldSpace                                                      = 1
};

/// Enum /Script/LGUI.LGUIScreenMatchMode
/// Size: 0x01 (1 bytes)
enum class LGUIScreenMatchMode : uint8_t
{
	LGUIScreenMatchMode__MatchWidthOrHeight                                          = 0,
	LGUIScreenMatchMode__Expand                                                      = 1,
	LGUIScreenMatchMode__Shrink                                                      = 2
};

/// Enum /Script/LGUI.LGUIScaleMode
/// Size: 0x01 (1 bytes)
enum class LGUIScaleMode : uint8_t
{
	LGUIScaleMode__ConstantPixelSize                                                 = 0,
	LGUIScaleMode__ScaleWithScreenSize                                               = 1
};

/// Enum /Script/LGUI.LGUIDrawableEventParameterType
/// Size: 0x01 (1 bytes)
enum class LGUIDrawableEventParameterType : uint8_t
{
	LGUIDrawableEventParameterType__None                                             = 0,
	LGUIDrawableEventParameterType__Empty                                            = 1,
	LGUIDrawableEventParameterType__Bool                                             = 2,
	LGUIDrawableEventParameterType__Float                                            = 3,
	LGUIDrawableEventParameterType__Double                                           = 4,
	LGUIDrawableEventParameterType__Int8                                             = 5,
	LGUIDrawableEventParameterType__UInt8                                            = 6,
	LGUIDrawableEventParameterType__Int16                                            = 7,
	LGUIDrawableEventParameterType__UInt16                                           = 8,
	LGUIDrawableEventParameterType__Int32                                            = 9,
	LGUIDrawableEventParameterType__UInt32                                           = 10,
	LGUIDrawableEventParameterType__Int64                                            = 11,
	LGUIDrawableEventParameterType__UInt64                                           = 12,
	LGUIDrawableEventParameterType__Vector2                                          = 13,
	LGUIDrawableEventParameterType__Vector3                                          = 14,
	LGUIDrawableEventParameterType__Vector4                                          = 15,
	LGUIDrawableEventParameterType__Color                                            = 16,
	LGUIDrawableEventParameterType__LinearColor                                      = 17,
	LGUIDrawableEventParameterType__Quaternion                                       = 18,
	LGUIDrawableEventParameterType__String                                           = 19,
	LGUIDrawableEventParameterType__Object                                           = 20,
	LGUIDrawableEventParameterType__Actor                                            = 21,
	LGUIDrawableEventParameterType__PointerEvent                                     = 22,
	LGUIDrawableEventParameterType__Class                                            = 23,
	LGUIDrawableEventParameterType__Rotator                                          = 24
};

/// Enum /Script/LGUI.Culture
/// Size: 0x01 (1 bytes)
enum class Culture : uint8_t
{
	Culture__en                                                                      = 0,
	Culture__fr                                                                      = 1,
	Culture__it                                                                      = 2,
	Culture__de                                                                      = 3,
	Culture__es                                                                      = 4,
	Culture__es6                                                                     = 5,
	Culture__ru                                                                      = 6,
	Culture__pl                                                                      = 7,
	Culture__ar                                                                      = 8,
	Culture__ko                                                                      = 9,
	Culture__ja                                                                      = 10,
	Culture__zh_Hans                                                                 = 11,
	Culture__zh_Hant                                                                 = 12,
	Culture__tr                                                                      = 13,
	Culture__pt                                                                      = 14,
	Culture__pt_BR                                                                   = 15
};

/// Enum /Script/LGUI.ELGUIDynamicFontDataType
/// Size: 0x01 (1 bytes)
enum class ELGUIDynamicFontDataType : uint8_t
{
	ELGUIDynamicFontDataType__CustomFontFile                                         = 0,
	ELGUIDynamicFontDataType__UnrealFont                                             = 1
};

/// Enum /Script/LGUI.EPrefabVersion
/// Size: 0x01 (1 bytes)
enum class EPrefabVersion : uint8_t
{
	EPrefabVersion__EPV_NoneVersion                                                  = 0,
	EPrefabVersion__EPV_BasicVersion                                                 = 1,
	EPrefabVersion__EPV_NestPrefab                                                   = 2,
	EPrefabVersion__EPV_OtherPrefabActorReference                                    = 3,
	EPrefabVersion__EPV_LastVersionPlusOne                                           = 4,
	EPrefabVersion__EPV_LastVersion                                                  = 3
};

/// Enum /Script/LGUI.ELGUIScreenSpaceUIAntiAliasing
/// Size: 0x01 (1 bytes)
enum class ELGUIScreenSpaceUIAntiAliasing : uint8_t
{
	ELGUIScreenSpaceUIAntiAliasing__Hidden                                           = 0,
	ELGUIScreenSpaceUIAntiAliasing__Disabled                                         = 1,
	ELGUIScreenSpaceUIAntiAliasing__SampleCount_2x                                   = 2,
	ELGUIScreenSpaceUIAntiAliasing__SampleCount_4x                                   = 4,
	ELGUIScreenSpaceUIAntiAliasing__SampleCount_8x                                   = 8
};

/// Enum /Script/LGUI.ELGUIAtlasPackingType
/// Size: 0x01 (1 bytes)
enum class ELGUIAtlasPackingType : uint8_t
{
	ELGUIAtlasPackingType__Dynamic                                                   = 0,
	ELGUIAtlasPackingType__Static                                                    = 1
};

/// Enum /Script/LGUI.ELGUIAtlasTextureSizeType
/// Size: 0x01 (1 bytes)
enum class ELGUIAtlasTextureSizeType : uint8_t
{
	ELGUIAtlasTextureSizeType__SIZE_256x256                                          = 0,
	ELGUIAtlasTextureSizeType__SIZE_512x512                                          = 1,
	ELGUIAtlasTextureSizeType__SIZE_1024x1024                                        = 2,
	ELGUIAtlasTextureSizeType__SIZE_2048x2048                                        = 3,
	ELGUIAtlasTextureSizeType__SIZE_4096x4096                                        = 4,
	ELGUIAtlasTextureSizeType__SIZE_8192x8192                                        = 5
};

/// Enum /Script/LGUI.UITextOverflowType
/// Size: 0x01 (1 bytes)
enum class UITextOverflowType : uint8_t
{
	UITextOverflowType__HorizontalOverflow                                           = 0,
	UITextOverflowType__VerticalOverflow                                             = 1,
	UITextOverflowType__ClampContent                                                 = 2,
	UITextOverflowType__HorizontalMinMax                                             = 3,
	UITextOverflowType__MaxHeightWidth                                               = 4
};

/// Enum /Script/LGUI.UITextFontStyle
/// Size: 0x01 (1 bytes)
enum class UITextFontStyle : uint8_t
{
	UITextFontStyle__None                                                            = 0,
	UITextFontStyle__Bold                                                            = 1,
	UITextFontStyle__Italic                                                          = 2,
	UITextFontStyle__BoldAndItalic                                                   = 3
};

/// Enum /Script/LGUI.UITextParagraphVerticalAlign
/// Size: 0x01 (1 bytes)
enum class UITextParagraphVerticalAlign : uint8_t
{
	UITextParagraphVerticalAlign__Top                                                = 0,
	UITextParagraphVerticalAlign__Middle                                             = 1,
	UITextParagraphVerticalAlign__Bottom                                             = 2
};

/// Enum /Script/LGUI.UITextParagraphHorizontalAlign
/// Size: 0x01 (1 bytes)
enum class UITextParagraphHorizontalAlign : uint8_t
{
	UITextParagraphHorizontalAlign__Left                                             = 0,
	UITextParagraphHorizontalAlign__Center                                           = 1,
	UITextParagraphHorizontalAlign__Right                                            = 2
};

/// Enum /Script/LGUI.ELGUIWorldSpaceInteractionSource
/// Size: 0x01 (1 bytes)
enum class ELGUIWorldSpaceInteractionSource : uint8_t
{
	ELGUIWorldSpaceInteractionSource__World                                          = 0,
	ELGUIWorldSpaceInteractionSource__Mouse                                          = 1,
	ELGUIWorldSpaceInteractionSource__CenterScreen                                   = 2
};

/// Enum /Script/LGUI.ESequenceLoadState
/// Size: 0x01 (1 bytes)
enum class ESequenceLoadState : uint8_t
{
	ESequenceLoadState__SLS_None                                                     = 0,
	ESequenceLoadState__SLS_Loading                                                  = 1,
	ESequenceLoadState__SLS_Loaded                                                   = 2
};

/// Enum /Script/LGUI.EUI2DLineRenderer_EndType
/// Size: 0x01 (1 bytes)
enum class EUI2DLineRenderer_EndType : uint8_t
{
	EUI2DLineRenderer_EndType__None                                                  = 0,
	EUI2DLineRenderer_EndType__Cap                                                   = 1,
	EUI2DLineRenderer_EndType__ConnectStartAndEnd                                    = 2
};

/// Enum /Script/LGUI.EUIRenderableType
/// Size: 0x01 (1 bytes)
enum class EUIRenderableType : uint8_t
{
	EUIRenderableType__None                                                          = 0,
	EUIRenderableType__UIBatchGeometryRenderable                                     = 1,
	EUIRenderableType__UIPostProcessRenderable                                       = 2,
	EUIRenderableType__UIDirectMeshRenderable                                        = 3,
	EUIRenderableType__UINiagaraRenderable                                           = 4,
	EUIRenderableType__UISpineRenderable                                             = 5
};

/// Enum /Script/LGUI.EComboBoxPosition
/// Size: 0x01 (1 bytes)
enum class EComboBoxPosition : uint8_t
{
	EComboBoxPosition__Top                                                           = 0,
	EComboBoxPosition__Middle                                                        = 1,
	EComboBoxPosition__Bottom                                                        = 2
};

/// Enum /Script/LGUI.EUICustomDepthStencilMaskSourceType
/// Size: 0x01 (1 bytes)
enum class EUICustomDepthStencilMaskSourceType : uint8_t
{
	EUICustomDepthStencilMaskSourceType__CustomDepth                                 = 0,
	EUICustomDepthStencilMaskSourceType__CustomStencil                               = 1
};

/// Enum /Script/LGUI.EUIDropdownHorizontalPosition
/// Size: 0x01 (1 bytes)
enum class EUIDropdownHorizontalPosition : uint8_t
{
	EUIDropdownHorizontalPosition__Left                                              = 0,
	EUIDropdownHorizontalPosition__Center                                            = 1,
	EUIDropdownHorizontalPosition__Right                                             = 2,
	EUIDropdownHorizontalPosition__Automatic                                         = 3
};

/// Enum /Script/LGUI.EUIDropdownVerticalPosition
/// Size: 0x01 (1 bytes)
enum class EUIDropdownVerticalPosition : uint8_t
{
	EUIDropdownVerticalPosition__Bottom                                              = 0,
	EUIDropdownVerticalPosition__Middle                                              = 1,
	EUIDropdownVerticalPosition__Top                                                 = 2,
	EUIDropdownVerticalPosition__Automatic                                           = 3
};

/// Enum /Script/LGUI.EUIEffectGradientColorDirection
/// Size: 0x01 (1 bytes)
enum class EUIEffectGradientColorDirection : uint8_t
{
	EUIEffectGradientColorDirection__BottomToTop                                     = 0,
	EUIEffectGradientColorDirection__TopToBottom                                     = 1,
	EUIEffectGradientColorDirection__LeftToRight                                     = 2,
	EUIEffectGradientColorDirection__RightToLeft                                     = 3,
	EUIEffectGradientColorDirection__FourCornor                                      = 4
};

/// Enum /Script/LGUI.EToggleStateSwitch
/// Size: 0x01 (1 bytes)
enum class EToggleStateSwitch : uint8_t
{
	EToggleStateSwitch__None                                                         = 0,
	EToggleStateSwitch__CheckedToUnChecked                                           = 1,
	EToggleStateSwitch__UnCheckedToChecked                                           = 2,
	EToggleStateSwitch__AnyToUnDetermined                                            = 3
};

/// Enum /Script/LGUI.EToggleAnimationType
/// Size: 0x01 (1 bytes)
enum class EToggleAnimationType : uint8_t
{
	EToggleAnimationType__ETT_None                                                   = 0,
	EToggleAnimationType__ETT_UnCheckedHover                                         = 1,
	EToggleAnimationType__ETT_UnCheckedClick                                         = 2,
	EToggleAnimationType__ETT_UnCheckedExit                                          = 3,
	EToggleAnimationType__ETT_CheckedHover                                           = 4,
	EToggleAnimationType__ETT_CheckedClick                                           = 5,
	EToggleAnimationType__ETT_CheckedExit                                            = 6,
	EToggleAnimationType__ETT_UnDeterminedHover                                      = 7,
	EToggleAnimationType__ETT_UnDeterminedClick                                      = 8,
	EToggleAnimationType__ETT_UnDeterminedExit                                       = 9,
	EToggleAnimationType__ETT_SwitchToUnChecked                                      = 10,
	EToggleAnimationType__ETT_SwitchToChecked                                        = 11,
	EToggleAnimationType__ETT_AfterCheckedLoop                                       = 12,
	EToggleAnimationType__ETT_SwitchToUndetermined                                   = 13,
	EToggleAnimationType__ETT_HoverOtherOnChecked                                    = 14,
	EToggleAnimationType__ETT_ExitHoverOtherOnChecked                                = 15,
	EToggleAnimationType__ETT_CheckedDown                                            = 16,
	EToggleAnimationType__ETT_UnCheckedDown                                          = 17,
	EToggleAnimationType__ETT_UnDeterminedDown                                       = 18
};

/// Enum /Script/LGUI.EToggleChangeStateResult
/// Size: 0x01 (1 bytes)
enum class EToggleChangeStateResult : uint8_t
{
	EToggleChangeStateResult__ECS_Success                                            = 0,
	EToggleChangeStateResult__ECS_FailBySameResult                                   = 1,
	EToggleChangeStateResult__ECS_FailByCanExecuteChange                             = 2
};

/// Enum /Script/LGUI.EToggleStateInAnimation
/// Size: 0x01 (1 bytes)
enum class EToggleStateInAnimation : uint8_t
{
	EToggleStateInAnimation__None                                                    = 0,
	EToggleStateInAnimation__UnChecked                                               = 1,
	EToggleStateInAnimation__Checked                                                 = 2,
	EToggleStateInAnimation__UnDetermined                                            = 3
};

/// Enum /Script/LGUI.EToggleTransitionState
/// Size: 0x01 (1 bytes)
enum class EToggleTransitionState : uint8_t
{
	EToggleTransitionState__ETT_UnCheckedUnHover                                     = 0,
	EToggleTransitionState__ETT_UnCheckedHover                                       = 1,
	EToggleTransitionState__ETT_UnCheckedPressed                                     = 2,
	EToggleTransitionState__ETT_CheckedUnHover                                       = 3,
	EToggleTransitionState__ETT_CheckedHover                                         = 4,
	EToggleTransitionState__ETT_CheckedPressed                                       = 5,
	EToggleTransitionState__ETT_UnDeterminedUnHover                                  = 6,
	EToggleTransitionState__ETT_UnDeterminedHover                                    = 7,
	EToggleTransitionState__ETT_UnDeterminedPressed                                  = 8
};

/// Enum /Script/LGUI.ESpriteTransitionType
/// Size: 0x01 (1 bytes)
enum class ESpriteTransitionType : uint8_t
{
	ESpriteTransitionType__ESTT_ColorOnly                                            = 0,
	ESpriteTransitionType__ESTT_ColorAndSprite                                       = 1
};

/// Enum /Script/LGUI.ETextureTransitionType
/// Size: 0x01 (1 bytes)
enum class ETextureTransitionType : uint8_t
{
	ETextureTransitionType__ESTT_ColorOnly                                           = 0,
	ETextureTransitionType__ESTT_ColorAndTexture                                     = 1
};

/// Enum /Script/LGUI.EFlyoutMenuHorizontalAlignment
/// Size: 0x01 (1 bytes)
enum class EFlyoutMenuHorizontalAlignment : uint8_t
{
	EFlyoutMenuHorizontalAlignment__Left                                             = 0,
	EFlyoutMenuHorizontalAlignment__Center                                           = 1,
	EFlyoutMenuHorizontalAlignment__Right                                            = 2
};

/// Enum /Script/LGUI.EFlyoutMenuVerticalPosition
/// Size: 0x01 (1 bytes)
enum class EFlyoutMenuVerticalPosition : uint8_t
{
	EFlyoutMenuVerticalPosition__Top                                                 = 0,
	EFlyoutMenuVerticalPosition__Bottom                                              = 1
};

/// Enum /Script/LGUI.EGridFitType
/// Size: 0x01 (1 bytes)
enum class EGridFitType : uint8_t
{
	EGridFitType__EFT_None                                                           = 0,
	EGridFitType__EFT_HeightWidthFit                                                 = 1,
	EGridFitType__EFT_HeightFit                                                      = 2,
	EGridFitType__EFT_WidthFit                                                       = 3,
	EGridFitType__EFT_FillByLast                                                     = 4
};

/// Enum /Script/LGUI.UiItemCornerType
/// Size: 0x01 (1 bytes)
enum class UiItemCornerType : uint8_t
{
	UiItemCornerType__BottomLeft                                                     = 0,
	UiItemCornerType__TopLeft                                                        = 1,
	UiItemCornerType__TopRight                                                       = 2,
	UiItemCornerType__BottomRight                                                    = 3
};

/// Enum /Script/LGUI.UIItemType
/// Size: 0x01 (1 bytes)
enum class UIItemType : uint8_t
{
	UIItemType__None                                                                 = 0,
	UIItemType__UIItem                                                               = 1,
	UIItemType__UIBatchGeometryRenderable                                            = 2
};

/// Enum /Script/LGUI.ELGUILayoutAlignmentType
/// Size: 0x01 (1 bytes)
enum class ELGUILayoutAlignmentType : uint8_t
{
	ELGUILayoutAlignmentType__UpperLeft                                              = 0,
	ELGUILayoutAlignmentType__UpperCenter                                            = 1,
	ELGUILayoutAlignmentType__UpperRight                                             = 2,
	ELGUILayoutAlignmentType__MiddleLeft                                             = 3,
	ELGUILayoutAlignmentType__MiddleCenter                                           = 4,
	ELGUILayoutAlignmentType__MiddleRight                                            = 5,
	ELGUILayoutAlignmentType__LowerLeft                                              = 6,
	ELGUILayoutAlignmentType__LowerCenter                                            = 7,
	ELGUILayoutAlignmentType__LowerRight                                             = 8
};

/// Enum /Script/LGUI.ELayoutElementType
/// Size: 0x01 (1 bytes)
enum class ELayoutElementType : uint8_t
{
	ELayoutElementType__AutoSize                                                     = 0,
	ELayoutElementType__IgnoreLayout                                                 = 1,
	ELayoutElementType__ConstantSize                                                 = 2,
	ELayoutElementType__RatioSize                                                    = 3,
	ELayoutElementType__IgnoreControlSize                                            = 4,
	ELayoutElementType__ControlTextMaxWidthHeight                                    = 5
};

/// Enum /Script/LGUI.EUILayoutChangePositionAnimationType
/// Size: 0x01 (1 bytes)
enum class EUILayoutChangePositionAnimationType : uint8_t
{
	EUILayoutChangePositionAnimationType__Immediately                                = 0,
	EUILayoutChangePositionAnimationType__EaseAnimation                              = 1
};

/// Enum /Script/LGUI.UINavigationPriorityMode
/// Size: 0x01 (1 bytes)
enum class UINavigationPriorityMode : uint8_t
{
	UINavigationPriorityMode__Distance                                               = 0,
	UINavigationPriorityMode__Direction                                              = 1,
	UINavigationPriorityMode__DistanceDirection                                      = 2
};

/// Enum /Script/LGUI.UINavigationWrapMode
/// Size: 0x01 (1 bytes)
enum class UINavigationWrapMode : uint8_t
{
	UINavigationWrapMode__None                                                       = 0,
	UINavigationWrapMode__Wrap                                                       = 1,
	UINavigationWrapMode__Next                                                       = 2
};

/// Enum /Script/LGUI.UIPolygonUVType
/// Size: 0x01 (1 bytes)
enum class UIPolygonUVType : uint8_t
{
	UIPolygonUVType__SpriteRect                                                      = 0,
	UIPolygonUVType__HeightCenter                                                    = 1,
	UIPolygonUVType__StretchSpriteHeight                                             = 2
};

/// Enum /Script/LGUI.ESafeZoneAdaptionStrategy
/// Size: 0x01 (1 bytes)
enum class ESafeZoneAdaptionStrategy : uint8_t
{
	ESafeZoneAdaptionStrategy__ESZAS_NoPadding                                       = 0,
	ESafeZoneAdaptionStrategy__ESZAS_SettledPadding                                  = 1,
	ESafeZoneAdaptionStrategy__ESZAS_SymSettledPadding                               = 2,
	ESafeZoneAdaptionStrategy__ESZAS_CustomPadding                                   = 3
};

/// Enum /Script/LGUI.UIScrollbarDirectionType
/// Size: 0x01 (1 bytes)
enum class UIScrollbarDirectionType : uint8_t
{
	UIScrollbarDirectionType__LeftToRight                                            = 0,
	UIScrollbarDirectionType__RightToLeft                                            = 1,
	UIScrollbarDirectionType__BottomToTop                                            = 2,
	UIScrollbarDirectionType__TopToBottom                                            = 3
};

/// Enum /Script/LGUI.EOutOfBoundsType
/// Size: 0x01 (1 bytes)
enum class EOutOfBoundsType : uint8_t
{
	EOutOfBoundsType__NotOut                                                         = 0,
	EOutOfBoundsType__OutOfBegin                                                     = 1,
	EOutOfBoundsType__OutOfEnd                                                       = 2
};

/// Enum /Script/LGUI.EScrollViewScrollbarVisibility
/// Size: 0x01 (1 bytes)
enum class EScrollViewScrollbarVisibility : uint8_t
{
	EScrollViewScrollbarVisibility__Permanent                                        = 0,
	EScrollViewScrollbarVisibility__AutoHide                                         = 1,
	EScrollViewScrollbarVisibility__AutoHideAndExpandViewport                        = 2
};

/// Enum /Script/LGUI.EStateTransferType
/// Size: 0x01 (1 bytes)
enum class EStateTransferType : uint8_t
{
	EStateTransferType__ESTTT_None                                                   = 0,
	EStateTransferType__ESTTT_NormalToHighLight                                      = 1,
	EStateTransferType__ESTTT_HighlightToNormal                                      = 2,
	EStateTransferType__ESTTT_HighLightToPress                                       = 3,
	EStateTransferType__ESTTT_PressToHighLight                                       = 4,
	EStateTransferType__ESTTT_HighLightToSelect                                      = 5,
	EStateTransferType__ESTTT_SelectToNormal                                         = 6,
	EStateTransferType__ESTTT_PressToNormal                                          = 7,
	EStateTransferType__ESTTT_NormalToPress                                          = 8
};

/// Enum /Script/LGUI.EAnimationPlayMode
/// Size: 0x01 (1 bytes)
enum class EAnimationPlayMode : uint8_t
{
	EAnimationPlayMode__EMOM_None                                                    = 0,
	EAnimationPlayMode__EMOM_ReverseAnimation                                        = 1,
	EAnimationPlayMode__EMOM_CustomAnimation                                         = 2
};

/// Enum /Script/LGUI.EUISelectableInteractionState
/// Size: 0x01 (1 bytes)
enum class EUISelectableInteractionState : uint8_t
{
	EUISelectableInteractionState__None                                              = 0,
	EUISelectableInteractionState__PointerEnter                                      = 1,
	EUISelectableInteractionState__PointerExit                                       = 2,
	EUISelectableInteractionState__PointerDown                                       = 3,
	EUISelectableInteractionState__PointerUp                                         = 4
};

/// Enum /Script/LGUI.EUISelectableNavigationMode
/// Size: 0x01 (1 bytes)
enum class EUISelectableNavigationMode : uint8_t
{
	EUISelectableNavigationMode__None                                                = 0,
	EUISelectableNavigationMode__Auto                                                = 1,
	EUISelectableNavigationMode__Explicit                                            = 2
};

/// Enum /Script/LGUI.EUISelectableSelectionState
/// Size: 0x01 (1 bytes)
enum class EUISelectableSelectionState : uint8_t
{
	EUISelectableSelectionState__Normal                                              = 0,
	EUISelectableSelectionState__Highlighted                                         = 1,
	EUISelectableSelectionState__Pressed                                             = 2,
	EUISelectableSelectionState__Disabled                                            = 3,
	EUISelectableSelectionState__Selected                                            = 4
};

/// Enum /Script/LGUI.UISelectableTransitionType
/// Size: 0x01 (1 bytes)
enum class UISelectableTransitionType : uint8_t
{
	UISelectableTransitionType__None                                                 = 0,
	UISelectableTransitionType__ColorTint                                            = 1,
	UISelectableTransitionType__SpriteSwap                                           = 2,
	UISelectableTransitionType__TransitionComponent                                  = 3,
	UISelectableTransitionType__ChangeActor                                          = 4
};

/// Enum /Script/LGUI.EStateTransitionType
/// Size: 0x01 (1 bytes)
enum class EStateTransitionType : uint8_t
{
	EStateTransitionType__ImmediateSet                                               = 0,
	EStateTransitionType__Gradually                                                  = 1
};

/// Enum /Script/LGUI.EUISizeControlByAspectRatioMode
/// Size: 0x01 (1 bytes)
enum class EUISizeControlByAspectRatioMode : uint8_t
{
	EUISizeControlByAspectRatioMode__None                                            = 0,
	EUISizeControlByAspectRatioMode__WidthControlHeight                              = 1,
	EUISizeControlByAspectRatioMode__HeightControlWidth                              = 2,
	EUISizeControlByAspectRatioMode__FitInParent                                     = 3,
	EUISizeControlByAspectRatioMode__EnvelopeParent                                  = 4,
	EUISizeControlByAspectRatioMode__EnvelopeParentMin                               = 5
};

/// Enum /Script/LGUI.UISliderDirectionType
/// Size: 0x01 (1 bytes)
enum class UISliderDirectionType : uint8_t
{
	UISliderDirectionType__LeftToRight                                               = 0,
	UISliderDirectionType__RightToLeft                                               = 1,
	UISliderDirectionType__BottomToTop                                               = 2,
	UISliderDirectionType__TopToBottom                                               = 3
};

/// Enum /Script/LGUI.UISpriteFillOriginType_Radial360
/// Size: 0x01 (1 bytes)
enum class UISpriteFillOriginType_Radial360 : uint8_t
{
	UISpriteFillOriginType_Radial360__Bottom                                         = 0,
	UISpriteFillOriginType_Radial360__Right                                          = 1,
	UISpriteFillOriginType_Radial360__Top                                            = 2,
	UISpriteFillOriginType_Radial360__Left                                           = 3
};

/// Enum /Script/LGUI.UISpriteFillOriginType_Radial180
/// Size: 0x01 (1 bytes)
enum class UISpriteFillOriginType_Radial180 : uint8_t
{
	UISpriteFillOriginType_Radial180__Bottom                                         = 0,
	UISpriteFillOriginType_Radial180__Left                                           = 1,
	UISpriteFillOriginType_Radial180__Top                                            = 2,
	UISpriteFillOriginType_Radial180__Right                                          = 3
};

/// Enum /Script/LGUI.UISpriteFillOriginType_Radial90
/// Size: 0x01 (1 bytes)
enum class UISpriteFillOriginType_Radial90 : uint8_t
{
	UISpriteFillOriginType_Radial90__BottomLeft                                      = 0,
	UISpriteFillOriginType_Radial90__TopLeft                                         = 1,
	UISpriteFillOriginType_Radial90__TopRight                                        = 2,
	UISpriteFillOriginType_Radial90__BottomRight                                     = 3
};

/// Enum /Script/LGUI.UISpriteFillMethod
/// Size: 0x01 (1 bytes)
enum class UISpriteFillMethod : uint8_t
{
	UISpriteFillMethod__Horizontal                                                   = 0,
	UISpriteFillMethod__Vertical                                                     = 1,
	UISpriteFillMethod__Radial90                                                     = 2,
	UISpriteFillMethod__Radial180                                                    = 3,
	UISpriteFillMethod__Radial360                                                    = 4
};

/// Enum /Script/LGUI.UISpriteType
/// Size: 0x01 (1 bytes)
enum class UISpriteType : uint8_t
{
	UISpriteType__Normal                                                             = 0,
	UISpriteType__Sliced                                                             = 1,
	UISpriteType__SlicedFrame                                                        = 2,
	UISpriteType__Tiled                                                              = 3,
	UISpriteType__Filled                                                             = 4,
	UISpriteType__FilledSliced                                                       = 5,
	UISpriteType__FilledSlicedFrame                                                  = 6
};

/// Enum /Script/LGUI.UIStaticMeshVertexColorType
/// Size: 0x01 (1 bytes)
enum class UIStaticMeshVertexColorType : uint8_t
{
	UIStaticMeshVertexColorType__MultiplyWithUIColor                                 = 0,
	UIStaticMeshVertexColorType__ReplaceByUIColor                                    = 1,
	UIStaticMeshVertexColorType__NotAffectByUIColor                                  = 2
};

/// Enum /Script/LGUI.ELGUITextInputType
/// Size: 0x01 (1 bytes)
enum class ELGUITextInputType : uint8_t
{
	ELGUITextInputType__Standard                                                     = 0,
	ELGUITextInputType__IntegerNumber                                                = 1,
	ELGUITextInputType__DecimalNumber                                                = 2,
	ELGUITextInputType__Password                                                     = 3,
	ELGUITextInputType__CustomFunction                                               = 4
};

/// Enum /Script/LGUI.UITextureType
/// Size: 0x01 (1 bytes)
enum class UITextureType : uint8_t
{
	UITextureType__Normal                                                            = 0,
	UITextureType__Sliced                                                            = 1,
	UITextureType__SlicedFrame                                                       = 2,
	UITextureType__Tiled                                                             = 3,
	UITextureType__Filled                                                            = 4
};

/// Enum /Script/LGUI.UIToggleTransitionType
/// Size: 0x01 (1 bytes)
enum class UIToggleTransitionType : uint8_t
{
	UIToggleTransitionType__None                                                     = 0,
	UIToggleTransitionType__Fade                                                     = 1,
	UIToggleTransitionType__ColorTint                                                = 2,
	UIToggleTransitionType__TransitionComponent                                      = 3,
	UIToggleTransitionType__ActiveActor                                              = 4
};

/// Enum /Script/LGUI.UIAnchorVerticalAlign
/// Size: 0x01 (1 bytes)
enum class UIAnchorVerticalAlign : uint8_t
{
	UIAnchorVerticalAlign__None                                                      = 0,
	UIAnchorVerticalAlign__Top                                                       = 1,
	UIAnchorVerticalAlign__Middle                                                    = 2,
	UIAnchorVerticalAlign__Bottom                                                    = 3,
	UIAnchorVerticalAlign__Stretch                                                   = 4
};

/// Enum /Script/LGUI.UIAnchorHorizontalAlign
/// Size: 0x01 (1 bytes)
enum class UIAnchorHorizontalAlign : uint8_t
{
	UIAnchorHorizontalAlign__None                                                    = 0,
	UIAnchorHorizontalAlign__Left                                                    = 1,
	UIAnchorHorizontalAlign__Center                                                  = 2,
	UIAnchorHorizontalAlign__Right                                                   = 3,
	UIAnchorHorizontalAlign__Stretch                                                 = 4
};

/// Class /Script/LGUI.GuideHookRegistry
/// Size: 0x0050 (80 bytes) (0x0000C0 - 0x000110) align 8 pad: 0x0000
class UGuideHookRegistry : public UActorComponent
{ 
public:
	SDK_UNDEFINED(80,707) /* TMap<FString, TWeakObjectPtr<AActor*>> */ __um(GuideHookComponents);                  // 0x00C0   (0x0050)  
};

/// Class /Script/LGUI.KuroWorldMapUIParams
/// Size: 0x0020 (32 bytes) (0x0000C0 - 0x0000E0) align 8 pad: 0x0000
class UKuroWorldMapUIParams : public UActorComponent
{ 
public:
	int32_t                                            MarkMenuRectSize;                                           // 0x00C0   (0x0004)  
	FVector2D                                          FocusMark_AnchoredPosition;                                 // 0x00C4   (0x0008)  
	float                                              TweenTime;                                                  // 0x00CC   (0x0004)  
	LTweenEase                                         TweenTypeEase;                                              // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              GamePadTweenTime;                                           // 0x00D4   (0x0004)  
	float                                              GamePadMoveSpeed;                                           // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/LGUI.LGUIBaseRayEmitter
/// Size: 0x0030 (48 bytes) (0x0000C0 - 0x0000F0) align 8 pad: 0x0000
class ULGUIBaseRayEmitter : public UActorComponent
{ 
public:
	float                                              clickThreshold;                                             // 0x00C0   (0x0004)  
	bool                                               holdToDrag;                                                 // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
	float                                              holdToDragTime;                                             // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x24];                                      // 0x00CC   (0x0024)  MISSED
	// void SetInitialValue(float InClickThreshold, bool InHoldToDrag, float InHoldToDragTime);                                 // [0xbe1cb0] Final|Native|Public|BlueprintCallable 
	// void SetClickThreshold(float Value);                                                                                     // [0xbe1b90] Final|Native|Public|BlueprintCallable 
	// void GetInitialValue(float& OutClickThreshold, bool& OutHoldToDrag, float& OutHoldToDragTime);                           // [0xbe0cf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// float GetClickThreshold();                                                                                               // [0xbe0cb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUI_CenterScreenRayemitter
/// Size: 0x0008 (8 bytes) (0x0000F0 - 0x0000F8) align 8 pad: 0x0000
class ULGUI_CenterScreenRayemitter : public ULGUIBaseRayEmitter
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/LGUI.LGUI_MainViewportMouseRayEmitter
/// Size: 0x0008 (8 bytes) (0x0000F0 - 0x0000F8) align 8 pad: 0x0000
class ULGUI_MainViewportMouseRayEmitter : public ULGUIBaseRayEmitter
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/LGUI.LGUIBaseInputModule
/// Size: 0x0000 (0 bytes) (0x0000C0 - 0x0000C0) align 8 pad: 0x0000
class ULGUIBaseInputModule : public UActorComponent
{ 
public:
	// void clearEvent();                                                                                                       // [0xbe0a80] Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUI_PointerInputModule
/// Size: 0x0040 (64 bytes) (0x0000C0 - 0x000100) align 8 pad: 0x0000
class ULGUI_PointerInputModule : public ULGUIBaseInputModule
{ 
public:
	class ULGUIEventSystem*                            eventSystem;                                                // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x00C8   (0x0038)  MISSED
	// void UpdateNavigation(class USceneComponent* NewSelectable);                                                             // [0xbe23a0] Final|Native|Public|BlueprintCallable 
	// void UnregisterInputChangeEvent(FLGUIDelegateHandleWrapper delegateHandle);                                              // [0xbe2310] Final|Native|Public|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterInputChangeEvent(FDelegateProperty& pointerInputChange);                              // [0xbe1aa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool IsPointerEventDataLineTrace(class ULGUIPointerEventData* InPointerEventData);                                       // [0xbe18e0] Final|Native|Public|BlueprintCallable 
	// void InputTriggerForNavigation(bool triggerPress);                                                                       // [0xbe14e0] Final|Native|Public|BlueprintCallable 
	// void InputNavigation(ELGUINavigationDirection Direction, bool pressOrRelease);                                           // [0xbe1020] Final|Native|Public|BlueprintCallable 
	// class ULGUIPointerEventData* GetPointerEventData(int32_t PointerId, bool CreateIfNotExist);                              // [0xbe0e80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// class UUIItem* GetNowHitComponent();                                                                                     // [0xbe0e60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUI_SceneCapture2DMouseRayEmitter
/// Size: 0x0018 (24 bytes) (0x0000F0 - 0x000108) align 8 pad: 0x0000
class ULGUI_SceneCapture2DMouseRayEmitter : public ULGUIBaseRayEmitter
{ 
public:
	class ASceneCapture2D*                             SceneCaptureActor;                                          // 0x00F0   (0x0008)  
	class USceneCaptureComponent2D*                    sceneCaptureComp;                                           // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0100   (0x0008)  MISSED
	// void SetSceneCapture2DComponent(class USceneCaptureComponent2D* InComp);                                                 // [0xbe1ef0] Final|Native|Public|BlueprintCallable 
	// bool ProjectWorldToViewPointForSceneCapture2D(class USceneCaptureComponent2D* InSceneCapture2D, FVector& InWorldPosition, FVector2D& OutViewPoint); // [0xbe1980] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class USceneCaptureComponent2D* GetSceneCapture2DComponent();                                                            // [0xbe0fb0] Final|Native|Public|BlueprintCallable 
	// void DeprojectViewPointToWorldForSceneCapture2D(class USceneCaptureComponent2D* InSceneCapture2D, FVector2D& InViewPoint01, FVector& OutRayOrigin, FVector& OutRayDirection); // [0xbe0ac0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/LGUI.LGUI_SceneComponentRayEmitter
/// Size: 0x0018 (24 bytes) (0x0000F0 - 0x000108) align 8 pad: 0x0000
class ULGUI_SceneComponentRayEmitter : public ULGUIBaseRayEmitter
{ 
public:
	class AActor*                                      TargetActor;                                                // 0x00F0   (0x0008)  
	ESceneComponentRayDirection                        RayDirectionType;                                           // 0x00F8   (0x0001)  
	bool                                               clickThresholdRelateToRayDistance;                          // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00FA   (0x0006)  MISSED
	class USceneComponent*                             CacheTargetSceneComponent;                                  // 0x0100   (0x0008)  
	// void SetTargetSceneComponent(class USceneComponent* InSceneComp);                                                        // [0xbe2010] Final|Native|Public|BlueprintCallable 
	// void SetTargetActor(class AActor* InActor);                                                                              // [0xbe1f80] Final|Native|Public|BlueprintCallable 
	// class USceneComponent* GetTargetSceneComponent();                                                                        // [0xbe1000] Final|Native|Public|BlueprintCallable 
	// class AActor* GetTargetActor();                                                                                          // [0xbe0fe0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUI_ScreenSpaceUIMouseRayemitter
/// Size: 0x0010 (16 bytes) (0x0000F0 - 0x000100) align 8 pad: 0x0000
class ULGUI_ScreenSpaceUIMouseRayemitter : public ULGUIBaseRayEmitter
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00F0   (0x0008)  MISSED
	class ULGUICanvas*                                 RenderCanvas;                                               // 0x00F8   (0x0008)  
};

/// Class /Script/LGUI.LGUI_StandaloneInputModule
/// Size: 0x0008 (8 bytes) (0x000100 - 0x000108) align 8 pad: 0x0000
class ULGUI_StandaloneInputModule : public ULGUI_PointerInputModule
{ 
public:
	bool                                               bOverrideMousePosition;                                     // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0101   (0x0007)  MISSED
	// bool SimulationPointerDownUp(class UUIItem* UIItem, bool IsPressed, FVector2D& ClickPivot);                              // [0xbe2170] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool SimulationLineTrace(class UUIItem* UIItem, FVector2D& ClickPivot);                                                  // [0xbe20a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetIsUseMouse(bool Value);                                                                                          // [0xbe1e60] Final|Native|Public|BlueprintCallable 
	// void SetIsForceChange(bool Value);                                                                                       // [0xbe1dd0] Final|Native|Public|BlueprintCallable 
	// void ResetNowIsTriggerPressed();                                                                                         // [0xbe1b70] Final|Native|Public|BlueprintCallable 
	// void InputTrigger(bool inTriggerPress, EMouseButtonType inMouseButtonType);                                              // [0xbe1410] Final|Native|Public|BlueprintCallable 
	// void InputScroll(float& inAxisValue);                                                                                    // [0xbe1180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void InputOverrideMousePosition(FVector2D& inMousePosition);                                                             // [0xbe10f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/LGUI.LGUI_TouchInputModule
/// Size: 0x0000 (0 bytes) (0x000100 - 0x000100) align 8 pad: 0x0000
class ULGUI_TouchInputModule : public ULGUI_PointerInputModule
{ 
public:
	// void InputTouchTrigger(bool inTouchPress, int32_t inTouchID, FVector& inTouchPointPosition);                             // [0xbe12f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void InputTouchMoved(int32_t inTouchID, FVector& inTouchPointPosition);                                                  // [0xbe1220] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void InputScroll(float& inAxisValue);                                                                                    // [0xbe1180] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LGUI.LGUIBaseRaycaster
/// Size: 0x0038 (56 bytes) (0x000218 - 0x000250) align 16 pad: 0x0000
class ULGUIBaseRaycaster : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0218   (0x0020)  MISSED
	int32_t                                            Depth;                                                      // 0x0238   (0x0004)  
	float                                              rayLength;                                                  // 0x023C   (0x0004)  
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                               // 0x0240   (0x0001)  
	ELGUIEventFireType                                 eventFireType;                                              // 0x0241   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0242   (0x0006)  MISSED
	class ULGUIBaseRayEmitter*                         rayEmitter;                                                 // 0x0248   (0x0008)  
	// void DeactivateRaycaster();                                                                                              // [0xbe0aa0] Final|Native|Public|BlueprintCallable 
	// void ActivateRaycaster();                                                                                                // [0xbe0a30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUI_UIRaycaster
/// Size: 0x0020 (32 bytes) (0x000250 - 0x000270) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class ULGUI_UIRaycaster : public ULGUIBaseRaycaster
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0250   (0x0010)  MISSED
	EUIRaycastSortType                                 uiSortType;                                                 // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              uiSortDependOnDistanceThreshold;                            // 0x0264   (0x0004)  
};
#pragma pack(pop)

/// Class /Script/LGUI.LGUI_WorldRaycaster
/// Size: 0x0010 (16 bytes) (0x000250 - 0x000260) align 16 pad: 0x0000
class ULGUI_WorldRaycaster : public ULGUIBaseRaycaster
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED
};

/// Class /Script/LGUI.LGUIAtlasManager
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000088) align 8 pad: 0x0000
class ULGUIAtlasManager : public UObject
{ 
public:
	SDK_UNDEFINED(80,708) /* TMap<FName, FLGUIAtlasData> */ __um(atlasMap);                                        // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0080   (0x0008)  MISSED
	// void DisposeAtlasByPackingTag(FName inPackingTag);                                                                       // [0xbe0c20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUIBaseEventData
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class ULGUIBaseEventData : public UObject
{ 
public:
	class USceneComponent*                             selectedComponent;                                          // 0x0030   (0x0008)  
	EPointerEventType                                  EventType;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
	// FString ToString();                                                                                                      // [0xbe2290] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.LGUIBehaviour
/// Size: 0x0028 (40 bytes) (0x0000C0 - 0x0000E8) align 8 pad: 0x0000
class ULGUIBehaviour : public UActorComponent
{ 
public:
	bool                                               Enable;                                                     // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C1   (0x0003)  MISSED
	SDK_UNDEFINED(20,709) /* FDelegateProperty */      __um(OnLateUpdate);                                         // 0x00C4   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D8   (0x0004)  MISSED
	SDK_UNDEFINED(8,710) /* TWeakObjectPtr<UUIItem*> */ __um(RootUIComp);                                          // 0x00DC   (0x0008)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00E4   (0x0004)  MISSED
	// void UpdateBP(float DeltaTime);                                                                                          // [0x25a7960] Event|Protected|BlueprintEvent 
	// void StartBP();                                                                                                          // [0x25a7960] Event|Protected|BlueprintEvent 
	// void SetEnable(bool Value);                                                                                              // [0xbe1c20] Final|Native|Public|BlueprintCallable 
	// void OnUIInteractionStateChangedBP(bool interactableOrNot);                                                              // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnUIDimensionsChangedBP(bool PositionChanged, bool SizeChanged);                                                    // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnUIChildHierarchyIndexChangedBP(class UUIItem* Child);                                                             // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnUIChildAttachmentChangedBP(class UUIItem* Child, bool attachOrDetach);                                            // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnUIChildAcitveInHierarchyBP(class UUIItem* Child, bool ativeOrInactive);                                           // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnUIAttachmentChangedBP();                                                                                          // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnUIActiveInHierarchyBP(bool activeOrInactive);                                                                     // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnEnableBP();                                                                                                       // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnDisableBP();                                                                                                      // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnDestroyBP();                                                                                                      // [0x25a7960] Event|Protected|BlueprintEvent 
	// void LateUpdateBP(float DeltaTime);                                                                                      // [0x25a7960] Event|Protected|BlueprintEvent 
	// class AActor* InstantiatePrefabWithTransform(class ULGUIPrefab* OriginObject, class USceneComponent* Parent, FVector Location, FRotator Rotation, FVector Scale); // [0xbe1710] Final|Native|Public|HasDefaults|BlueprintCallable 
	// class AActor* InstantiatePrefab(class ULGUIPrefab* OriginObject, class USceneComponent* Parent);                         // [0xbe1640] Final|Native|Public|BlueprintCallable 
	// class AActor* InstantiateActor(class AActor* OriginObject, class USceneComponent* Parent);                               // [0xbe1570] Final|Native|Public|BlueprintCallable 
	// class USceneComponent* GetRootSceneComponent();                                                                          // [0xbe0f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUIItem* GetRootComponent();                                                                                       // [0xbe0f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetIsActiveAndEnable();                                                                                             // [0xbe0e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetEnable();                                                                                                        // [0xbe0cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool CheckRootUIComponent();                                                                                             // [0xbe0a50] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// void AwakeBP();                                                                                                          // [0x25a7960] Event|Protected|BlueprintEvent 
};

/// Class /Script/LGUI.LGUIBPLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIBPLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// class ULTweener* WidthTo(class UUIItem* Target, float endValue, float Duration, float delay, LTweenEase Ease);           // [0xbeffa0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* UILocalPositionTo(class UUIItem* Target, FVector endValue, float Duration, float delay, LTweenEase Ease); // [0xbefde0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* StretchTopTo(class UUIItem* Target, float endValue, float Duration, float delay, LTweenEase Ease);      // [0xbefc50] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* StretchRightTo(class UUIItem* Target, float endValue, float Duration, float delay, LTweenEase Ease);    // [0xbefac0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* StretchLeftTo(class UUIItem* Target, float endValue, float Duration, float delay, LTweenEase Ease);     // [0xbef930] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* StretchBottomTo(class UUIItem* Target, float endValue, float Duration, float delay, LTweenEase Ease);   // [0xbef7a0] Final|Native|Static|Public|BlueprintCallable 
	// void SetWorldUISceneRendering(bool Value);                                                                               // [0xbef710] Final|Native|Public|BlueprintCallable 
	// void SetUIHierarchyIndex(class AActor* Target, int32_t Index);                                                           // [0xbef650] Final|Native|Static|Public|BlueprintCallable 
	// void SetUIAlpha(class AActor* Target, float InAlpha);                                                                    // [0xbef590] Final|Native|Static|Public|BlueprintCallable 
	// void SetUIActive(class AActor* Target, bool Acitve);                                                                     // [0xbef4d0] Final|Native|Static|Public|BlueprintCallable 
	// void SetLGUIUISceneRendering(class AActor* Actor, bool IsUISceneRendering);                                              // [0xbef410] Final|Native|Static|Public|BlueprintCallable 
	// void SetIsFullScreenUIRendering(class UObject* WorldContextObject, bool Value);                                          // [0xbef350] Final|Native|Static|Public|BlueprintCallable 
	// void SetGlobalBlurUIItem(class UUIItem* UIItem, class UWorld* World);                                                    // [0xbef290] Final|Native|Static|Public|BlueprintCallable 
	// void ResetGlobalBlurUIItem(class UWorld* World);                                                                         // [0xbef210] Final|Native|Static|Public|BlueprintCallable 
	// void PrintUIItemLog(FString Content, class UUIItem* UIItem, int32_t LogDepth);                                           // [0xbef0a0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* PivotTo(class UUIItem* Target, FVector2D endValue, float Duration, float delay, LTweenEase Ease);       // [0xbeef10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class AActor* LoadPrefabWithAsset(class UObject* WorldContextObject, class UPrefabAsset* PrefabAsset, class USceneComponent* InParent); // [0xbeee10] Final|Native|Static|Public|BlueprintCallable 
	// void LoadImageToTexture2D(FString ImagePath, class UTexture2D* Texture);                                                 // [0xbeed40] Final|Native|Static|Public|BlueprintCallable 
	// void LGUIExecuteInputAxis(FKey InputKey, float Value);                                                                   // [0xbeebb0] Final|Native|Static|Public|BlueprintCallable 
	// void LGUIExecuteInputAction(FKey InputKey, bool pressOrRelease);                                                         // [0xbeea20] Final|Native|Static|Public|BlueprintCallable 
	// void LGUIExecuteControllerInputAxis(FKey InputKey, float Value);                                                         // [0xbee8e0] Final|Native|Static|Public|BlueprintCallable 
	// void LGUIExecuteControllerInputAction(FKey InputKey, bool pressOrRelease);                                               // [0xbee7b0] Final|Native|Static|Public|BlueprintCallable 
	// void LGUIDrawableEventExecuteVector4(FLGUIDrawableEvent& InEvent, FVector4& InParameter);                                // [0xbe7ba0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEventExecuteVector3(FLGUIDrawableEvent& InEvent, FVector& InParameter);                                 // [0xbe7a60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEventExecuteVector2(FLGUIDrawableEvent& InEvent, FVector2D& InParameter);                               // [0xbe7930] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEventExecuteUInt8(FLGUIDrawableEvent& InEvent, char& InParameter);                                      // [0xbe7800] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEventExecuteString(FLGUIDrawableEvent& InEvent, FString InParameter);                                   // [0xbe7680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEventExecuteRotator(FLGUIDrawableEvent& InEvent, FRotator& InParameter);                                // [0xbe7540] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEventExecuteQuaternion(FLGUIDrawableEvent& InEvent, FQuat& InParameter);                                // [0xbe7400] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEventExecutePointerEvent(FLGUIDrawableEvent& InEvent, class ULGUIPointerEventData* InParameter);        // [0xbe72e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEventExecuteObject(FLGUIDrawableEvent& InEvent, class UObject* InParameter);                            // [0xbe6c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEventExecuteLinearColor(FLGUIDrawableEvent& InEvent, FLinearColor& InParameter);                        // [0xbe71a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEventExecuteInt32(FLGUIDrawableEvent& InEvent, int32_t& InParameter);                                   // [0xbe7070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEventExecuteFloat(FLGUIDrawableEvent& InEvent, float& InParameter);                                     // [0xbe6f30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEventExecuteEmpty(FLGUIDrawableEvent& InEvent);                                                         // [0xbe6e60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEventExecuteColor(FLGUIDrawableEvent& InEvent, FColor& InParameter);                                    // [0xbe6d30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEventExecuteClass(FLGUIDrawableEvent& InEvent, class UClass* InParameter);                              // [0xbe6c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEventExecuteBool(FLGUIDrawableEvent& InEvent, bool& InParameter);                                       // [0xbe6ae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEventExecuteActor(FLGUIDrawableEvent& InEvent, class AActor* InParameter);                              // [0xbe69c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Vector4_Unregister(FLGUIDrawableEvent_Vector4& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbee600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Vector4_Register(FLGUIDrawableEvent_Vector4& InEvent, FDelegateProperty InDelegate); // [0xbee430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Vector4_Execute(FLGUIDrawableEvent_Vector4& InEvent, FVector4 InParameter);                       // [0xbee1a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEvent_Vector3_Unregister(FLGUIDrawableEvent_Vector3& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbedff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Vector3_Register(FLGUIDrawableEvent_Vector3& InEvent, FDelegateProperty InDelegate); // [0xbede20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Vector3_Execute(FLGUIDrawableEvent_Vector3& InEvent, FVector InParameter);                        // [0xbedb80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEvent_Vector2_Unregister(FLGUIDrawableEvent_Vector2& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbed9d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Vector2_Register(FLGUIDrawableEvent_Vector2& InEvent, FDelegateProperty InDelegate); // [0xbed800] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Vector2_Execute(FLGUIDrawableEvent_Vector2& InEvent, FVector2D InParameter);                      // [0xbed590] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEvent_UInt8_Unregister(FLGUIDrawableEvent_UInt8& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbed3e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_UInt8_Register(FLGUIDrawableEvent_UInt8& InEvent, FDelegateProperty InDelegate); // [0xbed210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_UInt8_Execute(FLGUIDrawableEvent_UInt8& InEvent, char InParameter);                               // [0xbecfa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_String_Unregister(FLGUIDrawableEvent_String& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbecdf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_String_Register(FLGUIDrawableEvent_String& InEvent, FDelegateProperty InDelegate); // [0xbecc20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_String_Execute(FLGUIDrawableEvent_String& InEvent, FString InParameter);                          // [0xbeca10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Rotator_Unregister(FLGUIDrawableEvent_Rotator& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbec860] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Rotator_Register(FLGUIDrawableEvent_Rotator& InEvent, FDelegateProperty InDelegate); // [0xbec690] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Rotator_Execute(FLGUIDrawableEvent_Rotator& InEvent, FRotator InParameter);                       // [0xbec3f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEvent_Quaternion_Unregister(FLGUIDrawableEvent_Quaternion& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbec240] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Quaternion_Register(FLGUIDrawableEvent_Quaternion& InEvent, FDelegateProperty InDelegate); // [0xbec070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Quaternion_Execute(FLGUIDrawableEvent_Quaternion& InEvent, FQuat InParameter);                    // [0xbebdf0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEvent_PointerEvent_Unregister(FLGUIDrawableEvent_PointerEvent& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbebc40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_PointerEvent_Register(FLGUIDrawableEvent_PointerEvent& InEvent, FDelegateProperty InDelegate); // [0xbeba70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_PointerEvent_Execute(FLGUIDrawableEvent_PointerEvent& InEvent, class ULGUIPointerEventData* InParameter); // [0xbeb800] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Object_Unregister(FLGUIDrawableEvent_Object& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbeb650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Object_Register(FLGUIDrawableEvent_Object& InEvent, FDelegateProperty InDelegate); // [0xbeb480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Object_Execute(FLGUIDrawableEvent_Object& InEvent, class UObject* InParameter);                   // [0xbeb210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_LinearColor_Unregister(FLGUIDrawableEvent_LinearColor& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbeb060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_LinearColor_Register(FLGUIDrawableEvent_LinearColor& InEvent, FDelegateProperty InDelegate); // [0xbeae90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_LinearColor_Execute(FLGUIDrawableEvent_LinearColor& InEvent, FLinearColor InParameter);           // [0xbeac10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEvent_Int64_Unregister(FLGUIDrawableEvent_Int64& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbeaa60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Int64_Register(FLGUIDrawableEvent_Int64& InEvent, FDelegateProperty InDelegate); // [0xbea890] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Int64_Execute(FLGUIDrawableEvent_Int64& InEvent, int64_t InParameter);                            // [0xbea620] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Int32_Unregister(FLGUIDrawableEvent_Int32& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbea470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Int32_Register(FLGUIDrawableEvent_Int32& InEvent, FDelegateProperty InDelegate); // [0xbea2a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Int32_Execute(FLGUIDrawableEvent_Int32& InEvent, int32_t InParameter);                            // [0xbea030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Float_Unregister(FLGUIDrawableEvent_Float& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbe9e80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Float_Register(FLGUIDrawableEvent_Float& InEvent, FDelegateProperty InDelegate); // [0xbe9cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Float_Execute(FLGUIDrawableEvent_Float& InEvent, float InParameter);                              // [0xbe9a40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Empty_Unregister(FLGUIDrawableEvent_Empty& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbe9890] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Empty_Register(FLGUIDrawableEvent_Empty& InEvent, FDelegateProperty InDelegate); // [0xbe96c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Empty_Execute(FLGUIDrawableEvent_Empty& InEvent);                                                 // [0xbe94b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Color_Unregister(FLGUIDrawableEvent_Color& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbe9300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Color_Register(FLGUIDrawableEvent_Color& InEvent, FDelegateProperty InDelegate); // [0xbe9130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Color_Execute(FLGUIDrawableEvent_Color& InEvent, FColor InParameter);                             // [0xbe8ec0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void LGUIDrawableEvent_Class_Unregister(FLGUIDrawableEvent_Class& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbe8d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Class_Register(FLGUIDrawableEvent_Class& InEvent, FDelegateProperty InDelegate); // [0xbe8b40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Class_Execute(FLGUIDrawableEvent_Class& InEvent, class UClass* InParameter);                      // [0xbe88d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Bool_Unregister(FLGUIDrawableEvent_Bool& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle);  // [0xbe8720] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Bool_Register(FLGUIDrawableEvent_Bool& InEvent, FDelegateProperty InDelegate); // [0xbe8550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Bool_Execute(FLGUIDrawableEvent_Bool& InEvent, bool InParameter);                                 // [0xbe82d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Actor_Unregister(FLGUIDrawableEvent_Actor& InEvent, FLGUIDelegateHandleWrapper& InDelegateHandle); // [0xbe8120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper LGUIDrawableEvent_Actor_Register(FLGUIDrawableEvent_Actor& InEvent, FDelegateProperty InDelegate); // [0xbe7f50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void LGUIDrawableEvent_Actor_Execute(FLGUIDrawableEvent_Actor& InEvent, class AActor* InParameter);                      // [0xbe7ce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class UClass* LGUICompRef_GetComponentClass(FLGUIComponentReference& InLGUIComponentReference);                          // [0xbe6910] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// class UActorComponent* LGUICompRef_GetComponent(FLGUIComponentReference& InLGUIComponentReference, class UClass* InComponentType); // [0xbe6810] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// class AActor* LGUICompRef_GetActor(FLGUIComponentReference& InLGUIComponentReference);                                   // [0xbe6760] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void K2_LGUICompRef_GetComponent(FLGUIComponentReference& InLGUICompRef, class UActorComponent*& OutResult);             // [0xbe6660] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// class ULTweener* HeightTo(class UUIItem* Target, float endValue, float Duration, float delay, LTweenEase Ease);          // [0xbe64d0] Final|Native|Static|Public|BlueprintCallable 
	// bool GetWorldUISceneRendering(class UObject* WorldContextObject);                                                        // [0xbe6440] Final|Native|Static|Public|BlueprintCallable 
	// class UUIItem* GetUIItemWithRelativePath(class UUIItem* ParentItem, FString RelativePath);                               // [0xbe6360] Final|Native|Static|Public|BlueprintCallable 
	// class UUIItem* GetUIItemWithPath(class UObject* WorldContextObject, FString FullItemPath);                               // [0xbe6280] Final|Native|Static|Public|BlueprintCallable 
	// FVector2D GetUIItemPositionInViewPort(class UObject* WorldContextObject, class UUIItem* Item, bool bIsScaledByBPI);      // [0xbe6170] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// FVector2D GetUIItemCornerPositionInViewPort(UiItemCornerType corner, class UObject* WorldContextObject, class UUIItem* Item); // [0xbe6060] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// int64_t GetStringHashValue(FString str);                                                                                 // [0xbe5fc0] Final|Native|Static|Public|BlueprintCallable 
	// void GetSpriteUV(FLGUISpriteInfo& SpriteInfo, float& uv0X, float& uv0Y, float& uv3X, float& uv3Y);                       // [0xbe5c70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void GetSpriteSize(FLGUISpriteInfo& SpriteInfo, int32_t& Width, int32_t& Height);                                        // [0xbe5e60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void GetSpriteBorderUV(FLGUISpriteInfo& SpriteInfo, float& borderUV0X, float& borderUV0Y, float& borderUV3X, float& borderUV3Y); // [0xbe5c70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void GetSpriteBorderSize(FLGUISpriteInfo& SpriteInfo, int32_t& borderLeft, int32_t& borderRight, int32_t& borderTop, int32_t& borderBottom); // [0xbe5a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FString GetRelativePathWithRoot(class UUIItem* Target, class UUIItem* Root);                                             // [0xbe5970] Final|Native|Static|Public|BlueprintCallable 
	// class UUIItem* GetPrefabRoot(class UUIItem* InUiItem);                                                                   // [0xbe58e0] Final|Native|Static|Public|BlueprintCallable 
	// bool GetFullPathOfActor(class UObject* WorldContextObject, class AActor* Actor, FString& PathString);                    // [0xbe57b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// TArray<UActorComponent*> GetComponentsInChildrenWithHirerarchyIndex(class AUIBaseActor* InActor, class UClass* ComponentClass, bool IncludeSelf); // [0xbe5660] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// TArray<UActorComponent*> GetComponentsInChildren(class AActor* InActor, class UClass* ComponentClass, bool IncludeSelf); // [0xbe5510] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class UActorComponent* GetComponentInParent(class AActor* InActor, class UClass* ComponentClass, bool IncludeSelf);      // [0xbe5410] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class UActorComponent* GetComponentInChildren(class AActor* InActor, class UClass* ComponentClass, bool IncludeSelf);    // [0xbe5310] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// TArray<AActor*> GetAllAttachChildrenOfActor(class AActor* Actor, bool bIncludeAllChildren);                              // [0xbe5200] Final|Native|Static|Public|BlueprintCallable 
	// void FreeUnusedResourcesInRenderTargetPool();                                                                            // [0xbe51e0] Final|Native|Static|Public|BlueprintCallable 
	// class AActor* DuplicateActor(class AActor* Target, class USceneComponent* Parent);                                       // [0xbe5110] Final|Native|Static|Public|BlueprintCallable 
	// void DestroyActorWithHierarchy(class AActor* Target, bool WithHierarchy);                                                // [0xbe4fb0] Final|Native|Static|Public|BlueprintCallable 
	// bool DeleteFile(FString Path);                                                                                           // [0xbe5070] Final|Native|Static|Public|BlueprintCallable 
	// void DeleteActor(class AActor* Target, bool WithHierarchy);                                                              // [0xbe4fb0] Final|Native|Static|Public|BlueprintCallable 
	// class UTexture2D* CreateTransientTexture2D(float Width, float Height, FName InName);                                     // [0xbe4e80] Final|Native|Static|Public|BlueprintCallable 
	// void CopySequenceBindingFromParent(class UUIItem* Target, FSoftObjectPath& LevelSequencePath);                           // [0xbe4da0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class ULTweener* ColorTo(class UUIItem* Target, FColor endValue, float Duration, float delay, LTweenEase Ease);          // [0xbe4c10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* ColorFrom(class UUIItem* Target, FColor startValue, float Duration, float delay, LTweenEase Ease);      // [0xbe4a80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void ClipBoardPaste(FString& Target);                                                                                    // [0xbe49e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void ClipBoardCopy(FString str);                                                                                         // [0xbe4950] Final|Native|Static|Public|BlueprintCallable 
	// TArray<AActor*> BatchDuplicateActors(class AActor* Src, int32_t Num, class USceneComponent* Parent);                     // [0xbe4810] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* AnchorOffsetYTo(class UUIItem* Target, float endValue, float Duration, float delay, LTweenEase Ease);   // [0xbe4680] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* AnchorOffsetXTo(class UUIItem* Target, float endValue, float Duration, float delay, LTweenEase Ease);   // [0xbe44f0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* AnchorOffsetTo(class UUIItem* Target, FVector2D endValue, float Duration, float delay, LTweenEase Ease); // [0xbe4360] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// class ULTweener* AlphaTo(class UUIItem* Target, float endValue, float Duration, float delay, LTweenEase Ease);           // [0xbe41d0] Final|Native|Static|Public|BlueprintCallable 
	// class ULTweener* AlphaFrom(class UUIItem* Target, float startValue, float Duration, float delay, LTweenEase Ease);       // [0xbe4040] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/LGUI.LGUIMaterialArrayContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FLGUIMaterialArrayContainer
{ 
	TArray<class UMaterialInstanceDynamic*>            MaterialList;                                               // 0x0000   (0x0010)  
};

/// Class /Script/LGUI.LGUICanvas
/// Size: 0x0260 (608 bytes) (0x0000C0 - 0x000320) align 16 pad: 0x0000
class ULGUICanvas : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x00C0   (0x0020)  MISSED
	SDK_UNDEFINED(8,711) /* TWeakObjectPtr<AActor*> */ __um(RootCanvasActor);                                      // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x98];                                      // 0x00E8   (0x0098)  MISSED
	ELGUIRenderMode                                    renderMode;                                                 // 0x0180   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0181   (0x0007)  MISSED
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0188   (0x0008)  
	bool                                               pixelPerfect;                                               // 0x0190   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0191   (0x0003)  MISSED
	int32_t                                            CanvasDepth;                                                // 0x0194   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0198   (0x0004)  MISSED
	int32_t                                            sortOrder;                                                  // 0x019C   (0x0004)  
	int32_t                                            AdditionalSortOrder;                                        // 0x01A0   (0x0004)  
	bool                                               bOverrideSortOrder;                                         // 0x01A4   (0x0001)  
	ELGUICanvasClipType                                clipType;                                                   // 0x01A5   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x01A6   (0x0002)  MISSED
	FVector2D                                          clipFeather;                                                // 0x01A8   (0x0008)  
	FMargin                                            clipRectOffset;                                             // 0x01B0   (0x0010)  
	class UTexture*                                    clipTexture;                                                // 0x01C0   (0x0008)  
	float                                              clipTextureAlpha;                                           // 0x01C8   (0x0004)  
	bool                                               inheritRectClip;                                            // 0x01CC   (0x0001)  
	bool                                               bFlipClipArea;                                              // 0x01CD   (0x0001)  
	bool                                               bClipWithRectOp;                                            // 0x01CE   (0x0001)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x01CF   (0x0001)  MISSED
	float                                              dynamicPixelsPerUnit;                                       // 0x01D0   (0x0004)  
	int8_t                                             additionalShaderChannels;                                   // 0x01D4   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x01D5   (0x0003)  MISSED
	class UMaterialInterface*                          DefaultMaterials[3];                                        // 0x01D8   (0x0018)  
	bool                                               ownerNoSee;                                                 // 0x01F0   (0x0001)  
	bool                                               onlyOwnerSee;                                               // 0x01F1   (0x0001)  
	bool                                               textRGBSplitGlitch;                                         // 0x01F2   (0x0001)  
	int8_t                                             overrideParameters;                                         // 0x01F3   (0x0001)  
	unsigned char                                      UnknownData08_6[0x4C];                                      // 0x01F4   (0x004C)  MISSED
	SDK_UNDEFINED(80,712) /* TSet<UUIBaseRenderable*> */ __um(RenderableSet);                                      // 0x0240   (0x0050)  
	TArray<class UUIBaseRenderable*>                   ToRenderList;                                               // 0x0290   (0x0010)  
	unsigned char                                      UnknownData09_6[0x60];                                      // 0x02A0   (0x0060)  MISSED
	TArray<FLGUIMaterialArrayContainer>                PooledUIMaterialList;                                       // 0x0300   (0x0010)  
	bool                                               IsUIScenePrimitive : 1;                                     // 0x0310:0 (0x0001)  
	bool                                               bPostTickUpdate;                                            // 0x0311   (0x0001)  
	unsigned char                                      UnknownData10_7[0xE];                                       // 0x0312   (0x000E)  MISSED
	// void SetTextRGBSplitGlitch(bool Value);                                                                                  // [0xbf3c70] Final|Native|Public|BlueprintCallable 
	// void SetSortOrderToHighestOfHierarchy(bool propagateToChildrenCanvas);                                                   // [0xbf3be0] Final|Native|Public|BlueprintCallable 
	// void SetSortOrder(int32_t NewValue, bool propagateToChildrenCanvas);                                                     // [0xbf3b10] Final|Native|Public|BlueprintCallable 
	// void SetRenderTarget(class UTextureRenderTarget2D* Value);                                                               // [0xbf3a00] Final|Native|Public|BlueprintCallable 
	// void SetRenderMode(ELGUIRenderMode Value);                                                                               // [0xbf3980] Final|Native|Public|BlueprintCallable 
	// void SetRectClipOffset(FMargin newOffset);                                                                               // [0xbf3870] Final|Native|Public|BlueprintCallable 
	// void SetRectClipFeather(FVector2D newFeather);                                                                           // [0xbf37f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetProjectionParameters(TEnumAsByte<ECameraProjectionMode> InProjectionType, float InFovAngle, float InNearClipPlane, float InFarClipPlane); // [0xbf3610] Final|Native|Public|BlueprintCallable 
	// void SetPixelPerfect(bool Value);                                                                                        // [0xbf3580] Final|Native|Public|BlueprintCallable 
	// void SetOwnerNoSee(bool Value);                                                                                          // [0xbf34f0] Final|Native|Public|BlueprintCallable 
	// void SetOnlyOwnerSee(bool Value);                                                                                        // [0xbf3460] Final|Native|Public|BlueprintCallable 
	// void SetInheriRectClip(bool newBool);                                                                                    // [0xbf32d0] Final|Native|Public|BlueprintCallable 
	// void SetDynamicPixelsPerUnit(float NewValue);                                                                            // [0xbf3150] Final|Native|Public|BlueprintCallable 
	// void SetClipType(ELGUICanvasClipType newClipType);                                                                       // [0xbf30d0] Final|Native|Public|BlueprintCallable 
	// void SetClipTextureAlpha(float newAlpha);                                                                                // [0xbf3050] Final|Native|Public|BlueprintCallable 
	// void SetClipTexture(class UTexture* newTexture);                                                                         // [0xbf2fc0] Final|Native|Public|BlueprintCallable 
	// bool IsUIVisible(class UUIItem* HitUI);                                                                                  // [0xbf2e30] Final|Native|Public|BlueprintCallable 
	// bool IsPostTickUpdate();                                                                                                 // [0xbf2e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class ULGUICanvas* GetRootCanvas();                                                                                      // [0xbf2da0] Final|Native|Public|BlueprintCallable 
	// bool GetRequireUV3();                                                                                                    // [0xbf2d70] Final|Native|Public|BlueprintCallable 
	// bool GetRequireUV2();                                                                                                    // [0xbf2d40] Final|Native|Public|BlueprintCallable 
	// bool GetRequireUV1();                                                                                                    // [0xbf2d10] Final|Native|Public|BlueprintCallable 
	// bool GetRequireTangent();                                                                                                // [0xbf2ce0] Final|Native|Public|BlueprintCallable 
	// bool GetRequireNormal();                                                                                                 // [0xbf2cb0] Final|Native|Public|BlueprintCallable 
	// class UTextureRenderTarget2D* GetRenderTarget();                                                                         // [0xbf2c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// ELGUIRenderMode GetRenderMode();                                                                                         // [0xbf2c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetPixelPerfect();                                                                                                  // [0xbf2c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetOwnerNoSee();                                                                                                    // [0xbf2be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetOnlyOwnerSee();                                                                                                  // [0xbf2bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetInheritRectClip();                                                                                               // [0xbf2b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetDynamicPixelsPerUnit();                                                                                         // [0xbf2b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// ELGUICanvasClipType GetClipType();                                                                                       // [0xbf2ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetClipTextureAlpha();                                                                                             // [0xbf2ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UTexture* GetClipTexture();                                                                                        // [0xbf2aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetClipRectMin();                                                                                              // [0xbf2a60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector2D GetClipRectMax();                                                                                              // [0xbf2a20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector2D GetClipFeather();                                                                                              // [0xbf29f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetActualTextRGBSplitGlitch();                                                                                      // [0xbf29c0] Final|Native|Public|BlueprintCallable 
	// class UTextureRenderTarget2D* GetActualRenderTarget();                                                                   // [0xbf2990] Final|Native|Public|BlueprintCallable 
	// ELGUIRenderMode GetActualRenderMode();                                                                                   // [0xbf2960] Final|Native|Public|BlueprintCallable 
	// bool GetActualPixelPerfect();                                                                                            // [0xbf2930] Final|Native|Public|BlueprintCallable 
	// bool GetActualOwnerNoSee();                                                                                              // [0xbf2900] Final|Native|Public|BlueprintCallable 
	// bool GetActualOnlyOwnerSee();                                                                                            // [0xbf28d0] Final|Native|Public|BlueprintCallable 
	// float GetActualDynamicPixelsPerUnit();                                                                                   // [0xbf28a0] Final|Native|Public|BlueprintCallable 
	// ELGUICanvasClipType GetActualClipType();                                                                                 // [0xbf2870] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUICanvasScaler
/// Size: 0x0068 (104 bytes) (0x0000C0 - 0x000128) align 8 pad: 0x0000
class ULGUICanvasScaler : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x00C0   (0x0020)  MISSED
	TEnumAsByte<ECameraProjectionMode>                 ProjectionType;                                             // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00E1   (0x0003)  MISSED
	float                                              FOVAngle;                                                   // 0x00E4   (0x0004)  
	float                                              NearClipPlane;                                              // 0x00E8   (0x0004)  
	float                                              FarClipPlane;                                               // 0x00EC   (0x0004)  
	LGUIScaleMode                                      UIScaleMode;                                                // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	FVector2D                                          ReferenceResolution;                                        // 0x00F4   (0x0008)  
	float                                              MatchFromWidthToHeight;                                     // 0x00FC   (0x0004)  
	LGUIScreenMatchMode                                ScreenMatchMode;                                            // 0x0100   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0101   (0x0007)  MISSED
	class ULGUICanvas*                                 Canvas;                                                     // 0x0108   (0x0008)  
	unsigned char                                      UnknownData04_7[0x18];                                      // 0x0110   (0x0018)  MISSED
	// void SetUIScaleMode(LGUIScaleMode Value);                                                                                // [0xbf3d00] Final|Native|Public|BlueprintCallable 
	// void SetScreenMatchMode(LGUIScreenMatchMode Value);                                                                      // [0xbf3a90] Final|Native|Public|BlueprintCallable 
	// void SetReferenceResolution(FVector2D Value);                                                                            // [0xbf3900] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetProjectionType(TEnumAsByte<ECameraProjectionMode> Value);                                                        // [0xbf3770] Final|Native|Public|BlueprintCallable 
	// void SetNearClipPlane(float Value);                                                                                      // [0xbf33e0] Final|Native|Public|BlueprintCallable 
	// void SetMatchFromWidthToHeight(float Value);                                                                             // [0xbf3360] Final|Native|Public|BlueprintCallable 
	// void SetFovAngle(float Value);                                                                                           // [0xbf3250] Final|Native|Public|BlueprintCallable 
	// void SetFarClipPlane(float Value);                                                                                       // [0xbf31d0] Final|Native|Public|BlueprintCallable 
	// bool Project3DToScreen(FVector& Position3D, FVector2D& OutPosition2D);                                                   // [0xbf2ed0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// LGUIScaleMode GetUIScaleMode();                                                                                          // [0xbf2df0] Final|Native|Public|BlueprintCallable 
	// LGUIScreenMatchMode GetScreenMatchMode();                                                                                // [0xbf2dd0] Final|Native|Public|BlueprintCallable 
	// FVector2D GetReferenceResolution();                                                                                      // [0xbf2c40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// TEnumAsByte<ECameraProjectionMode> GetProjectionType();                                                                  // [0xbf2c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetNearClipPlane();                                                                                                // [0xbf2ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetMatchFromWidthToHeight();                                                                                       // [0xbf2b80] Final|Native|Public|BlueprintCallable 
	// float GetFovAngle();                                                                                                     // [0xbf2b40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetFarClipPlane();                                                                                                 // [0xbf2b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector2D ConvertPositionFromViewportToLGUICanvas(FVector2D& Position);                                                  // [0xbf27d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FVector2D ConvertPositionFromLGUICanvasToViewport(FVector2D& Position);                                                  // [0xbf2730] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.LGUIComponentsRegistry
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x000180) align 8 pad: 0x0000
class ULGUIComponentsRegistry : public UActorComponent
{ 
public:
	FString                                            TsClassName;                                                // 0x00C0   (0x0010)  
	SDK_UNDEFINED(80,713) /* TMap<FString, FRegisterRuntimeData> */ __um(RuntimeRegistryData);                     // 0x00D0   (0x0050)  
	TArray<class AActor*>                              Components;                                                 // 0x0120   (0x0010)  
	SDK_UNDEFINED(80,714) /* TMap<int32_t, FString> */ __um(MissingComponents);                                    // 0x0130   (0x0050)  
};

/// Class /Script/LGUI.LGUIEditorLevelDataStorageActor
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class ALGUIEditorLevelDataStorageActor : public AActor
{ 
public:
};

/// Class /Script/LGUI.LGUIEditorManagerObject
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class ULGUIEditorManagerObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/LGUI.LGUIEventSystem
/// Size: 0x0100 (256 bytes) (0x0000C0 - 0x0001C0) align 8 pad: 0x0000
class ULGUIEventSystem : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x1];                                       // 0x00C0   (0x0001)  MISSED
	bool                                               bRayEventEnable;                                            // 0x00C1   (0x0001)  
	bool                                               HighlightWhenMouseMoveOut;                                  // 0x00C2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00C3   (0x0005)  MISSED
	SDK_UNDEFINED(80,715) /* TMap<int32_t, ULGUIPointerEventData*> */ __um(pointerEventDataMap);                   // 0x00C8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0118   (0x0030)  MISSED
	SDK_UNDEFINED(20,716) /* FDelegateProperty */      __um(NavigationChangeDelegate);                             // 0x0148   (0x0014)  
	SDK_UNDEFINED(20,717) /* FDelegateProperty */      __um(FindDefaultNavigationDelegate);                        // 0x015C   (0x0014)  
	SDK_UNDEFINED(20,718) /* FDelegateProperty */      __um(TryFindNavigationDelegate);                            // 0x0170   (0x0014)  
	ELGUIPointerInputType                              defaultInputType;                                           // 0x0184   (0x0001)  
	ELGUIEventFireType                                 eventFireTypeForNavigation;                                 // 0x0185   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0186   (0x0002)  MISSED
	float                                              navigateInputInterval;                                      // 0x0188   (0x0004)  
	float                                              navigateInputIntervalForFirstTime;                          // 0x018C   (0x0004)  
	class USceneComponent*                             selectedComponent;                                          // 0x0190   (0x0008)  
	class USceneComponent*                             navigationComponent;                                        // 0x0198   (0x0008)  
	class USceneComponent*                             preSelectedComponent;                                       // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData04_7[0x18];                                      // 0x01A8   (0x0018)  MISSED
	// void UnRegisterPointerEnterExitEvent();                                                                                  // [0xbf83d0] Final|Native|Public|BlueprintCallable 
	// void UnregisterHitEvent(FLGUIDelegateHandleWrapper& InHandle);                                                           // [0xbf8480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterGlobalListener(FLGUIDelegateHandleWrapper& InHandle);                                                     // [0xbf83f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetSelectComponentWithDefault(class USceneComponent* InSelectComp);                                                 // [0xbf8340] Final|Native|Public|BlueprintCallable 
	// void SetSelectComponent(class USceneComponent* InSelectComp, class ULGUIBaseEventData* eventData, ELGUIEventFireType eventFireType); // [0xbf8230] Final|Native|Public|BlueprintCallable 
	// void SetRaycastEnable(bool Enable, bool clearEvent);                                                                     // [0xbf8160] Final|Native|Public|BlueprintCallable 
	// void RegisterPointerEnterExitEvent(FDelegateProperty& PointerEnterExitDelegate);                                         // [0xbf8030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterHitEvent(FDelegateProperty& InDelegate);                                              // [0xbf7f60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterGlobalListener(FDelegateProperty& InDelegate);                                        // [0xbf7e90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// class USceneComponent* Navigate(ELGUINavigationDirection Direction, class UUISelectableComponent* Selectable);           // [0xbf7d80] Final|Native|Public|BlueprintCallable 
	// bool IsRaycastEnable();                                                                                                  // [0xbf7d60] Final|Native|Public|BlueprintCallable 
	// bool IsNavigationActive();                                                                                               // [0xbf7d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void InputTrigger(bool inTriggerPress, EMouseButtonType inMouseButtonType);                                              // [0xbf7c90] Final|Native|Public|BlueprintCallable 
	// void InputScroll(float& inAxisValue);                                                                                    // [0xbf7c20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void InputNavigationUp();                                                                                                // [0xbf7c00] Final|Native|Public|BlueprintCallable 
	// void InputNavigationRight();                                                                                             // [0xbf7c00] Final|Native|Public|BlueprintCallable 
	// void InputNavigationPrev();                                                                                              // [0xbf7c00] Final|Native|Public|BlueprintCallable 
	// void InputNavigationNext();                                                                                              // [0xbf7c00] Final|Native|Public|BlueprintCallable 
	// void InputNavigationLeft();                                                                                              // [0xbf7c00] Final|Native|Public|BlueprintCallable 
	// void InputNavigationEnd();                                                                                               // [0xbf7c00] Final|Native|Public|BlueprintCallable 
	// void InputNavigationDown();                                                                                              // [0xbf7c00] Final|Native|Public|BlueprintCallable 
	// void InputNavigationBegin();                                                                                             // [0xbf7c00] Final|Native|Public|BlueprintCallable 
	// class ULGUIEventSystem* GetLGUIEventSystemInstance(class UObject* WorldContextObject);                                   // [0xbf7b10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class USceneComponent* GetCurrentSelectedComponent();                                                                    // [0xbf7960] Final|Native|Public|BlueprintCallable 
	// class ULGUIBaseInputModule* GetCurrentInputModule();                                                                     // [0xbf7930] Final|Native|Public|BlueprintCallable 
	// void clearEvent();                                                                                                       // [0xbf78e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUIEventSystemActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class ALGUIEventSystemActor : public AActor
{ 
public:
	class ULGUIEventSystem*                            eventSystem;                                                // 0x02A8   (0x0008)  
	// void PreDestroy();                                                                                                       // [0xbf7e50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUIFontData_BaseObject
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000080) align 8 pad: 0x0000
class ULGUIFontData_BaseObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Struct /Script/LGUI.LGUISubFontData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FLGUISubFontData
{ 
	class UFontFace*                                   unrealFont;                                                 // 0x0000   (0x0008)  
	TArray<FInt32Range>                                CharacterRanges;                                            // 0x0008   (0x0010)  
	Culture                                            Cultures;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              VerticalOffset;                                             // 0x001C   (0x0004)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Class /Script/LGUI.LGUIFontData
/// Size: 0x0450 (1104 bytes) (0x000080 - 0x0004D0) align 8 pad: 0x0000
class ULGUIFontData : public ULGUIFontData_BaseObject
{ 
public:
	Culture                                            CurrentMainCulture;                                         // 0x0080   (0x0001)  
	ELGUIDynamicFontDataType                           fontType;                                                   // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0082   (0x0006)  MISSED
	FString                                            fontFilePath;                                               // 0x0088   (0x0010)  
	bool                                               useRelativeFilePath;                                        // 0x0098   (0x0001)  
	bool                                               useExternalFileOrEmbedInToUAsset;                           // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x009A   (0x0006)  MISSED
	class UFontFace*                                   unrealFont;                                                 // 0x00A0   (0x0008)  
	int32_t                                            FontFace;                                                   // 0x00A8   (0x0004)  
	float                                              fixedVerticalOffset;                                        // 0x00AC   (0x0004)  
	float                                              italicAngle;                                                // 0x00B0   (0x0004)  
	float                                              boldRatio;                                                  // 0x00B4   (0x0004)  
	FName                                              packingTag;                                                 // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	class UTexture2D*                                  Texture;                                                    // 0x00C8   (0x0008)  
	ELGUIAtlasTextureSizeType                          initialSize;                                                // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
	TArray<FLGUISubFontData>                           SubFonts;                                                   // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
	SDK_UNDEFINED(16,719) /* TArray<TWeakObjectPtr<UUIText*>> */ __um(renderTextArray);                            // 0x00F0   (0x0010)  
	TArray<char>                                       fontBinaryArray;                                            // 0x0100   (0x0010)  
	TArray<char>                                       tempFontBinaryArray;                                        // 0x0110   (0x0010)  
	unsigned char                                      UnknownData05_7[0x3B0];                                     // 0x0120   (0x03B0)  MISSED
	// void SetAllFontCurrentCulture(Culture newCulture);                                                                       // [0xbf80f0] Final|Native|Static|Public|BlueprintCallable 
	// void RebuildAllFontText();                                                                                               // [0xbf7e70] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetUsedRectNum();                                                                                                // [0xbf7bd0] Final|Native|Public|BlueprintCallable 
	// int32_t GetTobeClearNum();                                                                                               // [0xbf7ba0] Final|Native|Public|BlueprintCallable 
	// int32_t GetFreeRectNum();                                                                                                // [0xbf7ae0] Final|Native|Public|BlueprintCallable 
	// class UTexture2D* GetFontTexture();                                                                                      // [0xbf7a30] Native|Public|BlueprintCallable 
	// TArray<ULGUIFontData*> GetFonts();                                                                                       // [0xbf7a60] Final|Native|Static|Public|BlueprintCallable 
	// FString GetFontPath();                                                                                                   // [0xbf79b0] Final|Native|Public|BlueprintCallable 
	// class ULGUIFontData* GetDefaultFont();                                                                                   // [0xbf7980] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetCharMapSize();                                                                                                // [0xbf7900] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUIGridAnimationInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIGridAnimationInterface : public UInterface
{ 
public:
};

/// Class /Script/LGUI.LGUIImageSequencePlayer
/// Size: 0x0020 (32 bytes) (0x0000C0 - 0x0000E0) align 8 pad: 0x0000
class ULGUIImageSequencePlayer : public UActorComponent
{ 
public:
	float                                              FPS;                                                        // 0x00C0   (0x0004)  
	bool                                               Loop;                                                       // 0x00C4   (0x0001)  
	bool                                               playOnStart;                                                // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1A];                                      // 0x00C6   (0x001A)  MISSED
	// void Stop();                                                                                                             // [0xbfd130] Final|Native|Public|BlueprintCallable 
	// void SetLoop(bool Value);                                                                                                // [0xbfd080] Final|Native|Public|BlueprintCallable 
	// void SetFps(float Value);                                                                                                // [0xbfd000] Final|Native|Public|BlueprintCallable 
	// void SeekTime(float Time);                                                                                               // [0xbfcec0] Final|Native|Public|BlueprintCallable 
	// void SeekFrame(int32_t FrameNumber);                                                                                     // [0xbfce30] Final|Native|Public|BlueprintCallable 
	// void Play();                                                                                                             // [0xbfcd00] Final|Native|Public|BlueprintCallable 
	// void Pause();                                                                                                            // [0xbfcce0] Final|Native|Public|BlueprintCallable 
	// bool GetLoop();                                                                                                          // [0xbfca20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetIsPlaying();                                                                                                     // [0xbfc9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetFps();                                                                                                          // [0xbe0cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetDuration();                                                                                                     // [0xbfc8d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LGUI.LGUIBehaviourArrayContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FLGUIBehaviourArrayContainer
{ 
	SDK_UNDEFINED(16,720) /* TArray<TWeakObjectPtr<ULGUIBehaviour*>> */ __um(LGUIBehaviourArray);                  // 0x0000   (0x0010)  
};

/// Class /Script/LGUI.LGUIManagerActor
/// Size: 0x0218 (536 bytes) (0x0002A8 - 0x0004C0) align 8 pad: 0x0000
class ALGUIManagerActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02A8   (0x0008)  MISSED
	SDK_UNDEFINED(16,721) /* TArray<TWeakObjectPtr<UUIItem*>> */ __um(AllUIItem);                                  // 0x02B0   (0x0010)  
	TArray<class ULGUICanvas*>                         AllCanvas;                                                  // 0x02C0   (0x0010)  
	TArray<class ULGUICanvas*>                         PostTickCanvas;                                             // 0x02D0   (0x0010)  
	TArray<class ULGUIBaseRaycaster*>                  raycasterArray;                                             // 0x02E0   (0x0010)  
	class ULGUIBaseInputModule*                        currentInputModule;                                         // 0x02F0   (0x0008)  
	TArray<class UUISelectableComponent*>              allSelectableArray;                                         // 0x02F8   (0x0010)  
	class USequencerManager*                           SequencerManager;                                           // 0x0308   (0x0008)  
	SDK_UNDEFINED(16,722) /* TArray<TWeakObjectPtr<UUIItem*>> */ __um(AllRaycastTarget);                           // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,723) /* TArray<TWeakObjectPtr<ULGUIBehaviour*>> */ __um(LGUIBehavioursForUpdate);             // 0x0320   (0x0010)  
	TArray<class UUINiagara*>                          allUINiagara;                                               // 0x0330   (0x0010)  
	SDK_UNDEFINED(8,724) /* TWeakObjectPtr<ULGUICanvas*> */ __um(ScreenRootPtr);                                   // 0x0340   (0x0008)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0348   (0x0040)  MISSED
	TArray<FLGUIBehaviourArrayContainer>               LGUIBehaviours_PrefabSystemProcessing;                      // 0x0388   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0398   (0x0004)  MISSED
	SDK_UNDEFINED(8,725) /* TWeakObjectPtr<UUIItem*> */ __um(DebugRootLayer);                                      // 0x039C   (0x0008)  
	unsigned char                                      UnknownData03_6[0x5C];                                      // 0x03A4   (0x005C)  MISSED
	SDK_UNDEFINED(80,726) /* TSet<UUIItem*> */         __um(DirtyHierarchyRootSet);                                // 0x0400   (0x0050)  
	TArray<class UUILayoutBase*>                       AutoLayoutRebuildList_ParentFirst;                          // 0x0450   (0x0010)  
	TArray<class UUILayoutBase*>                       AutoLayoutRebuildList_ChildrenFirst;                        // 0x0460   (0x0010)  
	SDK_UNDEFINED(80,727) /* TSet<UUILayoutBase*> */   __um(AutoLayoutPostRebuildList);                            // 0x0470   (0x0050)  
	// void SetDebugRootLayer(class UObject* WorldContextObj, class UUIItem* LayerItem);                                        // [0xbfcf40] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetGlobalUiBlurIndex(class UObject* WorldContextObject);                                                         // [0xbfc910] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUIMeshComponent
/// Size: 0x0048 (72 bytes) (0x000508 - 0x000550) align 16 pad: 0x0000
class ULGUIMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0508   (0x0048)  MISSED
};

/// Class /Script/LGUI.LGUINiagaraComponent
/// Size: 0x0010 (16 bytes) (0x0006A0 - 0x0006B0) align 16 pad: 0x0000
class ULGUINiagaraComponent : public UNiagaraComponent
{ 
public:
	bool                                               IsUIDrawCallVisible;                                        // 0x06A0   (0x0001)  
	bool                                               IsSupportWorldSpace;                                        // 0x06A1   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x06A2   (0x000E)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEventData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FLGUIDrawableEventData
{ 
	class AActor*                                      TargetActor;                                                // 0x0000   (0x0008)  
	class UClass*                                      ComponentClass;                                             // 0x0008   (0x0008)  
	FName                                              ComponentName;                                              // 0x0010   (0x000C)  
	FName                                              FunctionName;                                               // 0x001C   (0x000C)  
	LGUIDrawableEventParameterType                     ParamType;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<char>                                       ParamBuffer;                                                // 0x0030   (0x0010)  
	class UObject*                                     ReferenceObject;                                            // 0x0040   (0x0008)  
	class AActor*                                      ReferenceActor;                                             // 0x0048   (0x0008)  
	class UClass*                                      ReferenceClass;                                             // 0x0050   (0x0008)  
	FString                                            ReferenceString;                                            // 0x0058   (0x0010)  
	bool                                               UseNativeParameter;                                         // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	class UFunction*                                   CacheFunction;                                              // 0x0070   (0x0008)  
	class UObject*                                     CacheTarget;                                                // 0x0078   (0x0008)  
};

/// Struct /Script/LGUI.LGUIDrawableEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FLGUIDrawableEvent
{ 
	TArray<FLGUIDrawableEventData>                     eventList;                                                  // 0x0000   (0x0010)  
	LGUIDrawableEventParameterType                     supportParameterType;                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/LGUI.LGUIPlayTween
/// Size: 0x0088 (136 bytes) (0x000030 - 0x0000B8) align 8 pad: 0x0000
class ULGUIPlayTween : public UObject
{ 
public:
	LTweenLoop                                         loopType;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            LoopCount;                                                  // 0x0034   (0x0004)  
	LTweenEase                                         easeType;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UCurveFloat*                                 easeCurve;                                                  // 0x0040   (0x0008)  
	float                                              Duration;                                                   // 0x0048   (0x0004)  
	float                                              startDelay;                                                 // 0x004C   (0x0004)  
	FLGUIDrawableEvent                                 OnStart;                                                    // 0x0050   (0x0018)  
	FLGUIDrawableEvent                                 onUpdateProgress;                                           // 0x0068   (0x0018)  
	FLGUIDrawableEvent                                 OnComplete;                                                 // 0x0080   (0x0018)  
	class ULTweener*                                   tweener;                                                    // 0x0098   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x00A0   (0x0018)  MISSED
	// void UnregisterOnComplete(FLGUIDelegateHandleWrapper& InDelegateHandle);                                                 // [0xbfd1b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void Stop();                                                                                                             // [0xbfd150] Final|Native|Public|BlueprintCallable 
	// void Start();                                                                                                            // [0xbfd110] Final|Native|Public|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnComplete(FDelegateProperty& InDelegate);                                            // [0xbfcd60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// class ULTweener* GetTweener();                                                                                           // [0xbfca60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.LGUIPlayTween_Float
/// Size: 0x0020 (32 bytes) (0x0000B8 - 0x0000D8) align 8 pad: 0x0000
class ULGUIPlayTween_Float : public ULGUIPlayTween
{ 
public:
	float                                              From;                                                       // 0x00B8   (0x0004)  
	float                                              To;                                                         // 0x00BC   (0x0004)  
	FLGUIDrawableEvent                                 onUpdateValue;                                              // 0x00C0   (0x0018)  
};

/// Class /Script/LGUI.LGUIPlayTween_Color
/// Size: 0x0020 (32 bytes) (0x0000B8 - 0x0000D8) align 8 pad: 0x0000
class ULGUIPlayTween_Color : public ULGUIPlayTween
{ 
public:
	FColor                                             From;                                                       // 0x00B8   (0x0004)  
	FColor                                             To;                                                         // 0x00BC   (0x0004)  
	FLGUIDrawableEvent                                 onUpdateValue;                                              // 0x00C0   (0x0018)  
};

/// Class /Script/LGUI.LGUIPlayTween_Int
/// Size: 0x0020 (32 bytes) (0x0000B8 - 0x0000D8) align 8 pad: 0x0000
class ULGUIPlayTween_Int : public ULGUIPlayTween
{ 
public:
	int32_t                                            From;                                                       // 0x00B8   (0x0004)  
	int32_t                                            To;                                                         // 0x00BC   (0x0004)  
	FLGUIDrawableEvent                                 onUpdateValue;                                              // 0x00C0   (0x0018)  
};

/// Class /Script/LGUI.LGUIPlayTween_LinearColor
/// Size: 0x0038 (56 bytes) (0x0000B8 - 0x0000F0) align 8 pad: 0x0000
class ULGUIPlayTween_LinearColor : public ULGUIPlayTween
{ 
public:
	FLinearColor                                       From;                                                       // 0x00B8   (0x0010)  
	FLinearColor                                       To;                                                         // 0x00C8   (0x0010)  
	FLGUIDrawableEvent                                 onUpdateValue;                                              // 0x00D8   (0x0018)  
};

/// Class /Script/LGUI.LGUIPlayTween_Quaternion
/// Size: 0x0048 (72 bytes) (0x0000B8 - 0x000100) align 16 pad: 0x0000
class ULGUIPlayTween_Quaternion : public ULGUIPlayTween
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FQuat                                              From;                                                       // 0x00C0   (0x0010)  
	FQuat                                              To;                                                         // 0x00D0   (0x0010)  
	FLGUIDrawableEvent                                 onUpdateValue;                                              // 0x00E0   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/LGUI.LGUIPlayTween_Rotator
/// Size: 0x0030 (48 bytes) (0x0000B8 - 0x0000E8) align 8 pad: 0x0000
class ULGUIPlayTween_Rotator : public ULGUIPlayTween
{ 
public:
	FRotator                                           From;                                                       // 0x00B8   (0x000C)  
	FRotator                                           To;                                                         // 0x00C4   (0x000C)  
	FLGUIDrawableEvent                                 onUpdateValue;                                              // 0x00D0   (0x0018)  
};

/// Class /Script/LGUI.LGUIPlayTween_Vector2
/// Size: 0x0028 (40 bytes) (0x0000B8 - 0x0000E0) align 8 pad: 0x0000
class ULGUIPlayTween_Vector2 : public ULGUIPlayTween
{ 
public:
	FVector2D                                          From;                                                       // 0x00B8   (0x0008)  
	FVector2D                                          To;                                                         // 0x00C0   (0x0008)  
	FLGUIDrawableEvent                                 onUpdateValue;                                              // 0x00C8   (0x0018)  
};

/// Class /Script/LGUI.LGUIPlayTween_Vector3
/// Size: 0x0030 (48 bytes) (0x0000B8 - 0x0000E8) align 8 pad: 0x0000
class ULGUIPlayTween_Vector3 : public ULGUIPlayTween
{ 
public:
	FVector                                            From;                                                       // 0x00B8   (0x000C)  
	FVector                                            To;                                                         // 0x00C4   (0x000C)  
	FLGUIDrawableEvent                                 onUpdateValue;                                              // 0x00D0   (0x0018)  
};

/// Class /Script/LGUI.LGUIPlayTween_Vector4
/// Size: 0x0048 (72 bytes) (0x0000B8 - 0x000100) align 16 pad: 0x0000
class ULGUIPlayTween_Vector4 : public ULGUIPlayTween
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FVector4                                           From;                                                       // 0x00C0   (0x0010)  
	FVector4                                           To;                                                         // 0x00D0   (0x0010)  
	FLGUIDrawableEvent                                 onUpdateValue;                                              // 0x00E0   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/LGUI.LGUIPlayTweenComponent
/// Size: 0x0010 (16 bytes) (0x0000C0 - 0x0000D0) align 8 pad: 0x0000
class ULGUIPlayTweenComponent : public UActorComponent
{ 
public:
	bool                                               playOnStart;                                                // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
	class ULGUIPlayTween*                              playTween;                                                  // 0x00C8   (0x0008)  
	// void Stop();                                                                                                             // [0xbfd170] Final|Native|Public|BlueprintCallable 
	// void Play();                                                                                                             // [0xbfcd20] Final|Native|Public|BlueprintCallable 
	// class ULGUIPlayTween* GetPlayTween();                                                                                    // [0xbfca40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.LGUIPlayTweenSequenceComponent
/// Size: 0x0038 (56 bytes) (0x0000C0 - 0x0000F8) align 8 pad: 0x0000
class ULGUIPlayTweenSequenceComponent : public UActorComponent
{ 
public:
	bool                                               playOnStart;                                                // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
	TArray<class ULGUIPlayTween*>                      playTweenArray;                                             // 0x00C8   (0x0010)  
	FLGUIDrawableEvent                                 OnComplete;                                                 // 0x00D8   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00F0   (0x0008)  MISSED
	// void Stop();                                                                                                             // [0xbfd190] Final|Native|Public|BlueprintCallable 
	// void Play();                                                                                                             // [0xbfcd40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUIPointerClickInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIPointerClickInterface : public UInterface
{ 
public:
	// bool OnPointerClick(class ULGUIPointerEventData* eventData);                                                             // [0xbfcba0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/LGUI.LGUIPointerDownUpInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIPointerDownUpInterface : public UInterface
{ 
public:
	// bool OnPointerUp(class ULGUIPointerEventData* eventData);                                                                // [0xbfcba0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// bool OnPointerDown(class ULGUIPointerEventData* eventData);                                                              // [0xbfcc40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/LGUI.LGUIPointerDragDropInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIPointerDragDropInterface : public UInterface
{ 
public:
	// bool OnPointerDragDrop(class ULGUIPointerEventData* eventData);                                                          // [0xbfcba0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/LGUI.LGUIPointerDragEnterExitInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIPointerDragEnterExitInterface : public UInterface
{ 
public:
	// bool OnPointerDragExit(class ULGUIPointerEventData* eventData);                                                          // [0xbfcba0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// bool OnPointerDragEnter(class ULGUIPointerEventData* eventData);                                                         // [0xbfcc40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/LGUI.LGUIPointerDragInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIPointerDragInterface : public UInterface
{ 
public:
	// bool OnPointerEndDrag(class ULGUIPointerEventData* eventData);                                                           // [0xbfcba0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// bool OnPointerDrag(class ULGUIPointerEventData* eventData);                                                              // [0xbfcc40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// bool OnPointerBeginDrag(class ULGUIPointerEventData* eventData);                                                         // [0xbfcb00] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/LGUI.LGUIPointerEnterExitInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIPointerEnterExitInterface : public UInterface
{ 
public:
	// bool OnPointerExit(class ULGUIPointerEventData* eventData);                                                              // [0xbfcba0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// bool OnPointerEnter(class ULGUIPointerEventData* eventData);                                                             // [0xbfcc40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/LGUI.LGUIPointerEventData
/// Size: 0x01C0 (448 bytes) (0x000040 - 0x000200) align 16 pad: 0x0000
class ULGUIPointerEventData : public ULGUIBaseEventData
{ 
public:
	ELGUIPointerInputType                              InputType;                                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            PointerId;                                                  // 0x0044   (0x0004)  
	FVector                                            pointerPosition;                                            // 0x0048   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	class USceneComponent*                             currentComponent;                                           // 0x0058   (0x0008)  
	class USceneComponent*                             enterComponent;                                             // 0x0060   (0x0008)  
	TArray<class USceneComponent*>                     enterComponentStack;                                        // 0x0068   (0x0010)  
	TArray<class USceneComponent*>                     hoverComponentArray;                                        // 0x0078   (0x0010)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0088   (0x0050)  MISSED
	FVector                                            worldPoint;                                                 // 0x00D8   (0x000C)  
	FVector                                            WorldNormal;                                                // 0x00E4   (0x000C)  
	int32_t                                            FaceIndex;                                                  // 0x00F0   (0x0004)  
	char                                               ElementIndex;                                               // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00F5   (0x0003)  MISSED
	int32_t                                            Item;                                                       // 0x00F8   (0x0004)  
	FVector                                            moveDelta;                                                  // 0x00FC   (0x000C)  
	FVector                                            cumulativeMoveDelta;                                        // 0x0108   (0x000C)  
	float                                              scrollAxisValue;                                            // 0x0114   (0x0004)  
	FVector                                            rayOrigin;                                                  // 0x0118   (0x000C)  
	FVector                                            rayDirection;                                               // 0x0124   (0x000C)  
	class ULGUIBaseRaycaster*                          raycaster;                                                  // 0x0130   (0x0008)  
	EMouseButtonType                                   mouseButtonType;                                            // 0x0138   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0139   (0x0007)  MISSED
	class USceneComponent*                             pressComponent;                                             // 0x0140   (0x0008)  
	FVector                                            pressWorldPoint;                                            // 0x0148   (0x000C)  
	FVector                                            pressWorldNormal;                                           // 0x0154   (0x000C)  
	float                                              pressDistance;                                              // 0x0160   (0x0004)  
	FVector                                            pressRayOrigin;                                             // 0x0164   (0x000C)  
	FVector                                            pressRayDirection;                                          // 0x0170   (0x000C)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x017C   (0x0004)  MISSED
	FTransform                                         pressWorldToLocalTransform;                                 // 0x0180   (0x0030)  
	class ULGUIBaseRaycaster*                          pressRaycaster;                                             // 0x01B0   (0x0008)  
	float                                              clickTime;                                                  // 0x01B8   (0x0004)  
	float                                              pressTime;                                                  // 0x01BC   (0x0004)  
	FVector2D                                          prevMousePos;                                               // 0x01C0   (0x0008)  
	bool                                               isDragging;                                                 // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x01C9   (0x0007)  MISSED
	class USceneComponent*                             dragComponent;                                              // 0x01D0   (0x0008)  
	FVector                                            dragRayOrigin;                                              // 0x01D8   (0x000C)  
	FVector                                            dragRayDirection;                                           // 0x01E4   (0x000C)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x01F0   (0x0007)  MISSED
	bool                                               nowIsTriggerPressed;                                        // 0x01F7   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x01F8   (0x0002)  MISSED
	bool                                               dragDropTriggered;                                          // 0x01FA   (0x0001)  
	unsigned char                                      UnknownData09_7[0x5];                                       // 0x01FB   (0x0005)  MISSED
	// FVector GetWorldPointSpherical();                                                                                        // [0xbfcac0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FVector GetWorldPointInPlane();                                                                                          // [0xbfca80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FVector GetLocalPointInPlane();                                                                                          // [0xbfc9e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FVector GetDragRayOrigin();                                                                                              // [0xbfc890] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FVector GetDragRayDirection();                                                                                           // [0xbfc850] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FVector GetCumulativeMoveDelta();                                                                                        // [0xbfc810] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.LGUIPointerInterruptInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIPointerInterruptInterface : public UInterface
{ 
public:
	// bool NeedInterrupt(class ULGUIBaseEventData* eventData);                                                                 // [0xbfcba0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/LGUI.LGUIPointerScrollInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIPointerScrollInterface : public UInterface
{ 
public:
	// bool OnPointerScroll(class ULGUIPointerEventData* eventData);                                                            // [0xbfcba0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/LGUI.LGUIPointerSelectDeselectInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIPointerSelectDeselectInterface : public UInterface
{ 
public:
	// bool OnPointerSelect(class ULGUIBaseEventData* eventData);                                                               // [0xbfcc40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// bool OnPointerDeselect(class ULGUIBaseEventData* eventData);                                                             // [0xbfcba0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/LGUI.LGUIPrefab
/// Size: 0x0078 (120 bytes) (0x000030 - 0x0000A8) align 8 pad: 0x0000
class ULGUIPrefab : public UObject
{ 
public:
	TArray<class UObject*>                             ReferenceAssetList;                                         // 0x0030   (0x0010)  
	TArray<FString>                                    ReferenceStringList;                                        // 0x0040   (0x0010)  
	TArray<FName>                                      ReferenceNameList;                                          // 0x0050   (0x0010)  
	TArray<FText>                                      ReferenceTextList;                                          // 0x0060   (0x0010)  
	TArray<class UClass*>                              ReferenceClassList;                                         // 0x0070   (0x0010)  
	TArray<FSoftObjectPath>                            AllSoftObjectReferences;                                    // 0x0080   (0x0010)  
	uint16_t                                           PrefabVersion;                                              // 0x0090   (0x0002)  
	uint16_t                                           EngineMajorVersion;                                         // 0x0092   (0x0002)  
	uint16_t                                           EngineMinorVersion;                                         // 0x0094   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0096   (0x0002)  MISSED
	TArray<char>                                       BinaryDataForBuild;                                         // 0x0098   (0x0010)  
};

/// Class /Script/LGUI.LGUIPrefabActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class ALGUIPrefabActor : public AActor
{ 
public:
	class ULGUIPrefabHelperComponent*                  PrefabComponent;                                            // 0x02A8   (0x0008)  
};

/// Class /Script/LGUI.LGUIPrefabCheckerInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIPrefabCheckerInterface : public UInterface
{ 
public:
};

/// Class /Script/LGUI.PrefabActorHierarchyData
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UPrefabActorHierarchyData : public UObject
{ 
public:
};

/// Class /Script/LGUI.LGUIPrefabHelperObject
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIPrefabHelperObject : public UObject
{ 
public:
};

/// Class /Script/LGUI.LGUIPrefabHelperActor
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class ALGUIPrefabHelperActor : public AActor
{ 
public:
};

/// Class /Script/LGUI.LGUIPrefabHelperComponent
/// Size: 0x0008 (8 bytes) (0x000218 - 0x000220) align 16 pad: 0x0000
class ULGUIPrefabHelperComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0218   (0x0008)  MISSED
};

/// Class /Script/LGUI.LGUIPrefabV2
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000088) align 8 pad: 0x0000
class ULGUIPrefabV2 : public UObject
{ 
public:
	TArray<class UObject*>                             ReferenceAssetListForBuild;                                 // 0x0030   (0x0010)  
	TArray<class UClass*>                              ReferenceClassListForBuild;                                 // 0x0040   (0x0010)  
	TArray<FName>                                      ReferenceNameListForBuild;                                  // 0x0050   (0x0010)  
	EPrefabVersion                                     PrefabVersion;                                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	FGuid                                              Guid;                                                       // 0x0064   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<char>                                       BinaryDataForBuild;                                         // 0x0078   (0x0010)  
	// class AActor* LoadPrefabWithTransform(class UObject* WorldContextObject, class USceneComponent* InParent, bool bForceUseRuntimeData, FVector Location, FRotator Rotation, FVector Scale); // [0xc005f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// class AActor* LoadPrefab(class UObject* WorldContextObject, class USceneComponent* InParent, bool bForceUseRuntimeData, bool SetRelativeTransformToIdentity); // [0xc00470] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.LGUIScaleAdaptation
/// Size: 0x0008 (8 bytes) (0x0000E8 - 0x0000F0) align 8 pad: 0x0000
class ULGUIScaleAdaptation : public ULGUIBehaviour
{ 
public:
	float                                              ScaleAdapatationPercent;                                    // 0x00E8   (0x0004)  
	float                                              StartRadio;                                                 // 0x00EC   (0x0004)  
};

/// Class /Script/LGUI.LGUIScreenSpaceInteraction
/// Size: 0x0018 (24 bytes) (0x000268 - 0x000280) align 16 pad: 0x0000
class ULGUIScreenSpaceInteraction : public ULGUI_UIRaycaster
{ 
public:
	float                                              clickThreshold;                                             // 0x0268   (0x0004)  
	bool                                               holdToDrag;                                                 // 0x026C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x026D   (0x0003)  MISSED
	float                                              holdToDragTime;                                             // 0x0270   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0274   (0x000C)  MISSED
	// void SetHoldToDragTime(float Value);                                                                                     // [0xc00800] Final|Native|Public|BlueprintCallable 
	// void SetHoldToDrag(bool Value);                                                                                          // [0xc00900] Final|Native|Public|BlueprintCallable 
	// void SetClickThreshold(float Value);                                                                                     // [0xc00800] Final|Native|Public|BlueprintCallable 
	// float GetHoldToDragTime();                                                                                               // [0xc00450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetHoldToDrag();                                                                                                    // [0xc00410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetClickThreshold();                                                                                               // [0xc003d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.LGUIScreenSpaceInteractionForNoneUI
/// Size: 0x0010 (16 bytes) (0x000260 - 0x000270) align 16 pad: 0x0000
class ULGUIScreenSpaceInteractionForNoneUI : public ULGUI_WorldRaycaster
{ 
public:
	float                                              clickThreshold;                                             // 0x0260   (0x0004)  
	bool                                               holdToDrag;                                                 // 0x0264   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0265   (0x0003)  MISSED
	float                                              holdToDragTime;                                             // 0x0268   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x026C   (0x0004)  MISSED
	// void SetHoldToDragTime(float Value);                                                                                     // [0xc00880] Final|Native|Public|BlueprintCallable 
	// void SetHoldToDrag(bool Value);                                                                                          // [0xc00990] Final|Native|Public|BlueprintCallable 
	// void SetClickThreshold(float Value);                                                                                     // [0xc00880] Final|Native|Public|BlueprintCallable 
	// float GetHoldToDragTime();                                                                                               // [0xc003d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetHoldToDrag();                                                                                                    // [0xc00430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetClickThreshold();                                                                                               // [0xc003f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.LGUISequenceBindingMgr
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000080) align 8 pad: 0x0000
class ULGUISequenceBindingMgr : public UObject
{ 
public:
	SDK_UNDEFINED(80,728) /* TMap<UMovieSceneSequence*, FActorBindings> */ __um(BindingMaps);                      // 0x0030   (0x0050)  
};

/// Struct /Script/LGUI.LGUIAtlasSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FLGUIAtlasSettings
{ 
	ELGUIAtlasTextureSizeType                          atlasTextureInitialSize;                                    // 0x0000   (0x0001)  
	bool                                               atlasTextureUseSRGB;                                        // 0x0001   (0x0001)  
	TEnumAsByte<TextureFilter>                         atlasTextureFilter;                                         // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	int32_t                                            spaceBetweenSprites;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/LGUI.LGUIFixedInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FLGUIFixedInfo
{ 
	int32_t                                            ResolutionWidth;                                            // 0x0000   (0x0004)  
	int32_t                                            ResolutionHeight;                                           // 0x0004   (0x0004)  
	FVector                                            OverlayLocation;                                            // 0x0008   (0x000C)  
	FRotator                                           OverlayRotation;                                            // 0x0014   (0x000C)  
};

/// Class /Script/LGUI.LGUISettings
/// Size: 0x01B8 (440 bytes) (0x000030 - 0x0001E8) align 8 pad: 0x0000
class ULGUISettings : public UObject
{ 
public:
	FLGUIAtlasSettings                                 defaultAtlasSetting;                                        // 0x0030   (0x0008)  
	SDK_UNDEFINED(80,729) /* TMap<FName, FLGUIAtlasSettings> */ __um(atlasSettingForSpecificPackingTag);           // 0x0038   (0x0050)  
	TEnumAsByte<ETraceTypeQuery>                       defaultTraceChannel;                                        // 0x0088   (0x0001)  
	ELGUIScreenSpaceUIAntiAliasing                     antiAliasing;                                               // 0x0089   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x008A   (0x0002)  MISSED
	FLGUIFixedInfo                                     fixedInfo;                                                  // 0x008C   (0x0020)  
	int32_t                                            niagaraSortOrderBias;                                       // 0x00AC   (0x0004)  
	float                                              needTidyUpRatio;                                            // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FString                                            DefaultWhiteTexturePath;                                    // 0x00B8   (0x0010)  
	FString                                            DefaultWhiteSpritePath;                                     // 0x00C8   (0x0010)  
	FString                                            DefaultEventPrefabPath;                                     // 0x00D8   (0x0010)  
	FString                                            DefaultScreenRootPath;                                      // 0x00E8   (0x0010)  
	FString                                            DefaultWorldRootPath;                                       // 0x00F8   (0x0010)  
	FString                                            DefaultChildPath;                                           // 0x0108   (0x0010)  
	FString                                            DefaultFontPath;                                            // 0x0118   (0x0010)  
	FString                                            PcPrefix;                                                   // 0x0128   (0x0010)  
	FString                                            MobilePrefix;                                               // 0x0138   (0x0010)  
	FString                                            BasePrefabItemName;                                         // 0x0148   (0x0010)  
	FString                                            PlatformReplacePath;                                        // 0x0158   (0x0010)  
	FString                                            PlatformSequenceReplacePath;                                // 0x0168   (0x0010)  
	FString                                            PcDirectory;                                                // 0x0178   (0x0010)  
	FString                                            PcSequenceDirectory;                                        // 0x0188   (0x0010)  
	FSoftObjectPath                                    PcSequenceTmpPath;                                          // 0x0198   (0x0020)  
	FString                                            PcSequencePostfix;                                          // 0x01B8   (0x0010)  
	FString                                            MobileDirectory;                                            // 0x01C8   (0x0010)  
	int32_t                                            MaxSequenceActorTriggerCollect;                             // 0x01D8   (0x0004)  
	float                                              SequenceActorTriggerCollectInterval;                        // 0x01DC   (0x0004)  
	bool                                               bUseNewSequenceBinding;                                     // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x01E1   (0x0007)  MISSED
};

/// Class /Script/LGUI.LGUIEditorSettings
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUIEditorSettings : public UObject
{ 
public:
};

/// Class /Script/LGUI.LGUISpriteData_BaseObject
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULGUISpriteData_BaseObject : public UObject
{ 
public:
	// bool IsIndividual();                                                                                                     // [0xc03d00] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FLGUISpriteInfo GetSpriteInfo();                                                                                         // [0xc03c10] Native|Public|BlueprintCallable 
	// class UTexture2D* GetAtlasTexture();                                                                                     // [0xbf7a30] Native|Public|BlueprintCallable 
};

/// Struct /Script/LGUI.LGUISpriteInfo
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 pad: 0x0000
struct FLGUISpriteInfo
{ 
	uint16_t                                           Width;                                                      // 0x0000   (0x0002)  
	uint16_t                                           Height;                                                     // 0x0002   (0x0002)  
	uint16_t                                           borderLeft;                                                 // 0x0004   (0x0002)  
	uint16_t                                           borderRight;                                                // 0x0006   (0x0002)  
	uint16_t                                           borderTop;                                                  // 0x0008   (0x0002)  
	uint16_t                                           borderBottom;                                               // 0x000A   (0x0002)  
	int16_t                                            paddingLeft;                                                // 0x000C   (0x0002)  
	int16_t                                            paddingRight;                                               // 0x000E   (0x0002)  
	int16_t                                            paddingTop;                                                 // 0x0010   (0x0002)  
	int16_t                                            paddingBottom;                                              // 0x0012   (0x0002)  
	float                                              uv0X;                                                       // 0x0014   (0x0004)  
	float                                              uv0Y;                                                       // 0x0018   (0x0004)  
	float                                              uv3X;                                                       // 0x001C   (0x0004)  
	float                                              uv3Y;                                                       // 0x0020   (0x0004)  
	float                                              buv0X;                                                      // 0x0024   (0x0004)  
	float                                              buv0Y;                                                      // 0x0028   (0x0004)  
	float                                              buv3X;                                                      // 0x002C   (0x0004)  
	float                                              buv3Y;                                                      // 0x0030   (0x0004)  
};

/// Class /Script/LGUI.LGUISpriteData
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000088) align 8 pad: 0x0000
class ULGUISpriteData : public ULGUISpriteData_BaseObject
{ 
public:
	class UTexture2D*                                  spriteTexture;                                              // 0x0030   (0x0008)  
	FLGUISpriteInfo                                    SpriteInfo;                                                 // 0x0038   (0x0034)  
	FName                                              packingTag;                                                 // 0x006C   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	class UTexture2D*                                  atlasTexture;                                               // 0x0080   (0x0008)  
	// bool HavePackingTag();                                                                                                   // [0xc03cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UTexture2D* GetSpriteTexture();                                                                                    // [0xc03c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FName GetPackingTag();                                                                                                   // [0xc03ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class ULGUISpriteData* CreateLGUISpriteData(class UObject* Outer, class UTexture2D* inSpriteTexture, FVector2D inHorizontalBorder, FVector2D inVerticalBorder, FName inPackingTag); // [0xc03780] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LGUI.LGUIWorldSpaceInteraction
/// Size: 0x0018 (24 bytes) (0x000268 - 0x000280) align 16 pad: 0x0000
class ULGUIWorldSpaceInteraction : public ULGUI_UIRaycaster
{ 
public:
	float                                              clickThreshold;                                             // 0x0268   (0x0004)  
	bool                                               holdToDrag;                                                 // 0x026C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x026D   (0x0003)  MISSED
	float                                              holdToDragTime;                                             // 0x0270   (0x0004)  
	ELGUIWorldSpaceInteractionSource                   interactionSource;                                          // 0x0274   (0x0001)  
	unsigned char                                      UnknownData01_7[0xB];                                       // 0x0275   (0x000B)  MISSED
	// void SetInteractionSource(ELGUIWorldSpaceInteractionSource Value);                                                       // [0xc04230] Final|Native|Public|BlueprintCallable 
	// void SetHoldToDragTime(float Value);                                                                                     // [0xc00800] Final|Native|Public|BlueprintCallable 
	// void SetHoldToDrag(bool Value);                                                                                          // [0xc00900] Final|Native|Public|BlueprintCallable 
	// void SetClickThreshold(float Value);                                                                                     // [0xc00800] Final|Native|Public|BlueprintCallable 
	// ELGUIWorldSpaceInteractionSource GetInteractionSource();                                                                 // [0xc03a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetHoldToDragTime();                                                                                               // [0xc00450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetHoldToDrag();                                                                                                    // [0xc00410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetClickThreshold();                                                                                               // [0xc003d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.LGUIWorldSpaceInteractionForNoneUI
/// Size: 0x0010 (16 bytes) (0x000260 - 0x000270) align 16 pad: 0x0000
class ULGUIWorldSpaceInteractionForNoneUI : public ULGUI_WorldRaycaster
{ 
public:
	float                                              clickThreshold;                                             // 0x0260   (0x0004)  
	bool                                               holdToDrag;                                                 // 0x0264   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0265   (0x0003)  MISSED
	float                                              holdToDragTime;                                             // 0x0268   (0x0004)  
	ELGUIWorldSpaceInteractionSource                   interactionSource;                                          // 0x026C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x026D   (0x0003)  MISSED
	// void SetInteractionSource(ELGUIWorldSpaceInteractionSource Value);                                                       // [0xc042b0] Final|Native|Public|BlueprintCallable 
	// void SetHoldToDragTime(float Value);                                                                                     // [0xc00880] Final|Native|Public|BlueprintCallable 
	// void SetHoldToDrag(bool Value);                                                                                          // [0xc00990] Final|Native|Public|BlueprintCallable 
	// void SetClickThreshold(float Value);                                                                                     // [0xc00880] Final|Native|Public|BlueprintCallable 
	// ELGUIWorldSpaceInteractionSource GetInteractionSource();                                                                 // [0xc00410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetHoldToDragTime();                                                                                               // [0xc003d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetHoldToDrag();                                                                                                    // [0xc00430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetClickThreshold();                                                                                               // [0xc003f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LGUI.SequenceInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FSequenceInfo
{ 
	FSoftObjectPath                                    LevelSequence;                                              // 0x0000   (0x0020)  
	bool                                               bUseAsHardRef;                                              // 0x0020   (0x0001)  
	bool                                               ChildrenInteractiveDuringPlaying;                           // 0x0021   (0x0001)  
	bool                                               BlockAllEventWhilePlaying;                                  // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0023   (0x0001)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaySetting;                                                // 0x0024   (0x0014)  
};

/// Class /Script/LGUI.SequencePlayContext
/// Size: 0x00E8 (232 bytes) (0x000030 - 0x000118) align 8 pad: 0x0000
class USequencePlayContext : public UObject
{ 
public:
	FSequenceInfo                                      PlayInfo;                                                   // 0x0030   (0x0038)  
	bool                                               bReverse;                                                   // 0x0068   (0x0001)  
	bool                                               bIsAsync;                                                   // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x006A   (0x0002)  MISSED
	SDK_UNDEFINED(20,730) /* FDelegateProperty */      __um(OnLoaded);                                             // 0x006C   (0x0014)  
	SDK_UNDEFINED(20,731) /* FDelegateProperty */      __um(OnPlay);                                               // 0x0080   (0x0014)  
	SDK_UNDEFINED(20,732) /* FDelegateProperty */      __um(OnFinish);                                             // 0x0094   (0x0014)  
	SDK_UNDEFINED(20,733) /* FDelegateProperty */      __um(OnPlayReverse);                                        // 0x00A8   (0x0014)  
	SDK_UNDEFINED(20,734) /* FDelegateProperty */      __um(OnStop);                                               // 0x00BC   (0x0014)  
	SDK_UNDEFINED(20,735) /* FDelegateProperty */      __um(OnPause);                                              // 0x00D0   (0x0014)  
	SDK_UNDEFINED(20,736) /* FDelegateProperty */      __um(OnInterrupt);                                          // 0x00E4   (0x0014)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00F8   (0x0010)  MISSED
	TArray<class AUIBaseActor*>                        Roots;                                                      // 0x0108   (0x0010)  
	// void TryStop();                                                                                                          // [0xc04650] Final|Native|Public|BlueprintCallable 
	// void SetBatchRoots(TArray<AUIBaseActor*>& BatchRoots);                                                                   // [0xc04080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void ExecutePlay();                                                                                                      // [0xc03920] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LGUI.LevelSequencerActor
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FLevelSequencerActor
{ 
	TArray<class AUIBaseActor*>                        TargetActors;                                               // 0x0000   (0x0010)  
	class ALevelSequenceActor*                         LvlSequencerActor;                                          // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Class /Script/LGUI.SequencerManager
/// Size: 0x0178 (376 bytes) (0x000030 - 0x0001A8) align 8 pad: 0x0000
class USequencerManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<FLevelSequencerActor>                       AllLvlSequencerActors;                                      // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x138];                                     // 0x0048   (0x0138)  MISSED
	TArray<class USequencePlayContext*>                BatchPlayContexts;                                          // 0x0180   (0x0010)  
	class USequencePlayContext*                        TransientSyncParamContext;                                  // 0x0190   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0198   (0x0010)  MISSED
	// void LoadSequenceAssetAsync(class UObject* Context, FSoftObjectPath& Path, FDelegateProperty& OnLoad);                   // [0xc03e90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// ESequenceLoadState GetSequenceLoadState(class UObject* Context, FSoftObjectPath& Path);                                  // [0xc03b20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class USequencePlayContext* GetBatchPlayContext(class UObject* Context);                                                 // [0xc03990] Final|Native|Static|Public|BlueprintCallable 
	// void ClearInvalidBind(class ALevelSequenceActor* SeqActor);                                                              // [0xc036f0] Final|Native|Public  
	// class ALevelSequenceActor* BatchPlaySequenceOnActors(class UObject* Context, FSoftObjectPath& SequencePath, TArray<AUIBaseActor*>& BatchRoots, FMovieSceneSequencePlaybackSettings& PlaySetting); // [0xc03500] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/LGUI.UIWidget
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 pad: 0x0000
struct FUIWidget
{ 
	int32_t                                            Depth;                                                      // 0x0000   (0x0004)  
	FColor                                             Color;                                                      // 0x0004   (0x0004)  
	FVector2D                                          Pivot;                                                      // 0x0008   (0x0008)  
	UIAnchorHorizontalAlign                            anchorHAlign;                                               // 0x0010   (0x0001)  
	UIAnchorVerticalAlign                              anchorVAlign;                                               // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0012   (0x0002)  MISSED
	float                                              anchorOffsetX;                                              // 0x0014   (0x0004)  
	float                                              anchorOffsetY;                                              // 0x0018   (0x0004)  
	float                                              Width;                                                      // 0x001C   (0x0004)  
	float                                              Height;                                                     // 0x0020   (0x0004)  
	float                                              stretchLeft;                                                // 0x0024   (0x0004)  
	float                                              stretchRight;                                               // 0x0028   (0x0004)  
	float                                              stretchTop;                                                 // 0x002C   (0x0004)  
	float                                              stretchBottom;                                              // 0x0030   (0x0004)  
	float                                              AnchorXPercent;                                             // 0x0034   (0x0004)  
	float                                              AnchorYPercent;                                             // 0x0038   (0x0004)  
	bool                                               ShowXPercent;                                               // 0x003C   (0x0001)  
	bool                                               ShowYPercent;                                               // 0x003D   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Class /Script/LGUI.UIItem
/// Size: 0x0308 (776 bytes) (0x000218 - 0x000520) align 16 pad: 0x0000
class UUIItem : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0xD8];                                      // 0x0218   (0x00D8)  MISSED
	FUIWidget                                          Widget;                                                     // 0x02F0   (0x0040)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0330   (0x0010)  MISSED
	TArray<class UUIItem*>                             UIChildren;                                                 // 0x0340   (0x0010)  
	bool                                               inheritAlpha;                                               // 0x0350   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0351   (0x0003)  MISSED
	FColor                                             Color;                                                      // 0x0354   (0x0004)  
	float                                              ALPHA;                                                      // 0x0358   (0x0004)  
	float                                              Width;                                                      // 0x035C   (0x0004)  
	float                                              Height;                                                     // 0x0360   (0x0004)  
	bool                                               useChangeColor;                                             // 0x0364   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0365   (0x0003)  MISSED
	FColor                                             ChangeColor;                                                // 0x0368   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x036C   (0x0004)  MISSED
	SDK_UNDEFINED(80,737) /* TMap<FString, FSequenceInfo> */ __um(LevelSequences);                                 // 0x0370   (0x0050)  
	SDK_UNDEFINED(80,738) /* TMap<FSoftObjectPath, FLGUILevelSequenceBindings> */ __um(LevelSequenceBindings);     // 0x03C0   (0x0050)  
	TArray<class UObject*>                             HardRefAssets;                                              // 0x0410   (0x0010)  
	unsigned char                                      UnknownData05_6[0xC];                                       // 0x0420   (0x000C)  MISSED
	SDK_UNDEFINED(8,739) /* TWeakObjectPtr<AActor*> */ __um(RenderCanvasActor);                                    // 0x042C   (0x0008)  
	unsigned char                                      UnknownData06_6[0x6D];                                      // 0x0434   (0x006D)  MISSED
	bool                                               bIsRenderAfterBlur;                                         // 0x04A1   (0x0001)  
	bool                                               bIsRenderBeforeBloom;                                       // 0x04A2   (0x0001)  
	unsigned char                                      UnknownData07_6[0x1];                                       // 0x04A3   (0x0001)  MISSED
	bool                                               bIsUIActive;                                                // 0x04A4   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x04A5   (0x0007)  MISSED
	int32_t                                            HierarchyIndex;                                             // 0x04AC   (0x0004)  
	int32_t                                            flattenHierarchyIndex;                                      // 0x04B0   (0x0004)  
	int32_t                                            AdditionalIndexDelta;                                       // 0x04B4   (0x0004)  
	unsigned char                                      UnknownData09_6[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FString                                            DisplayName;                                                // 0x04C0   (0x0010)  
	bool                                               bRaycastTarget;                                             // 0x04D0   (0x0001)  
	bool                                               bBubbleUpToParent;                                          // 0x04D1   (0x0001)  
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                               // 0x04D2   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3D];                                      // 0x04D3   (0x003D)  MISSED
	SDK_UNDEFINED(8,740) /* TWeakObjectPtr<AUIBaseActor*> */ __um(DebugCollisionLine);                             // 0x0510   (0x0008)  
	unsigned char                                      UnknownData11_7[0x8];                                       // 0x0518   (0x0008)  MISSED
	// void SetWidth(float NewWidth);                                                                                           // [0xc1f340] Final|Native|Public|BlueprintCallable 
	// void SetWidget(FUIWidget& InWidget);                                                                                     // [0xc1f260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetVerticalStretch(FVector2D newStretch);                                                                           // [0xc1f1e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetUIWorldRotation(FRotator& NewRotation);                                                                          // [0xc1f150] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetUIWorldLocation(FVector& NewLocation);                                                                           // [0xc1f0c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetUIRenderBeforeBloom(bool bBeforeBloom);                                                                          // [0xc1f030] Native|Public|BlueprintCallable 
	// void SetUIRenderAfterBlur(bool bAfterBlur);                                                                              // [0xc1efa0] Native|Public|BlueprintCallable 
	// void SetUIRelativeScale3D(FVector& NewScale3D);                                                                          // [0xc1ef10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetUIRelativeRotation(FRotator& NewRotation);                                                                       // [0xc1ee80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetUIRelativeLocation(FVector NewLocation);                                                                         // [0xc1edf0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetUIParent(class UUIItem* InParent, bool KeepWorldTransform);                                                      // [0xc1ed20] Final|Native|Public|BlueprintCallable 
	// void SetUIItemScale(FVector Value);                                                                                      // [0xc1ec90] Final|Native|Private|HasDefaults 
	// void SetUIItemAlpha(float Value);                                                                                        // [0xc1db70] Final|Native|Private 
	// void SetUIActive(bool bActive);                                                                                          // [0xc1e6e0] Native|Public|BlueprintCallable 
	// void SetTraceChannel(TEnumAsByte<ETraceTypeQuery> InTraceChannel);                                                       // [0xc1ec10] Final|Native|Public|BlueprintCallable 
	// void SetStretchTop(float newTop);                                                                                        // [0xc1eb90] Final|Native|Public|BlueprintCallable 
	// void SetStretchRight(float newRight);                                                                                    // [0xc1eb10] Final|Native|Public|BlueprintCallable 
	// void SetStretchLeft(float newLeft);                                                                                      // [0xc1ea90] Final|Native|Public|BlueprintCallable 
	// void SetStretchBottom(float newBottom);                                                                                  // [0xc1ea10] Final|Native|Public|BlueprintCallable 
	// void SetRaycastTarget(bool newBool);                                                                                     // [0xc1e980] Final|Native|Public|BlueprintCallable 
	// void SetPivot(FVector2D NewPivot);                                                                                       // [0xc1e880] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetLGUISpaceAbsolutePosition(FVector& Pos);                                                                         // [0xc1e770] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetIsUIActive(bool Active);                                                                                         // [0xc1e6e0] Final|Native|Public|BlueprintCallable 
	// void SetHorizontalStretch(FVector2D newStretch);                                                                         // [0xc1e5d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetHierarchyIndex(int32_t inInt);                                                                                   // [0xc1e540] Final|Native|Public|BlueprintCallable 
	// void SetHeight(float NewHeight);                                                                                         // [0xc1e4c0] Final|Native|Public|BlueprintCallable 
	// void SetDisplayName(FString InName);                                                                                     // [0xc1e2b0] Final|Native|Public|BlueprintCallable 
	// void SetDepth(int32_t Depth, bool propagateToChildren);                                                                  // [0xc1e1e0] Final|Native|Public|BlueprintCallable 
	// void SetColor(FColor NewColor);                                                                                          // [0xc1e0e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetChangeColor(bool bUseChangeColor, FColor& NewColor);                                                             // [0xc1e010] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetBubbleUpToParent(bool newBool);                                                                                  // [0xc1df80] Final|Native|Public|BlueprintCallable 
	// void SetAsLastHierarchy();                                                                                               // [0xc1df60] Final|Native|Public|BlueprintCallable 
	// void SetAsFirstHierarchy();                                                                                              // [0xc1df40] Final|Native|Public|BlueprintCallable 
	// void SetAnchorVAlign(UIAnchorVerticalAlign align);                                                                       // [0xc1dec0] Final|Native|Public|BlueprintCallable 
	// void SetAnchorOffsetY(float newOffset);                                                                                  // [0xc1de40] Final|Native|Public|BlueprintCallable 
	// void SetAnchorOffsetX(float newOffset);                                                                                  // [0xc1ddc0] Final|Native|Public|BlueprintCallable 
	// void SetAnchorOffset(FVector2D newOffset);                                                                               // [0xc1dd40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetAnchorHAlign(UIAnchorHorizontalAlign align);                                                                     // [0xc1dcc0] Final|Native|Public|BlueprintCallable 
	// void SetAnchorAlign(UIAnchorHorizontalAlign HAlign, UIAnchorVerticalAlign VAlign);                                       // [0xc1dbf0] Final|Native|Public|BlueprintCallable 
	// void SetAlpha(float newAlpha);                                                                                           // [0xc1db70] Final|Native|Public|BlueprintCallable 
	// void ReverseChildrenIndex();                                                                                             // [0xc1db50] Final|Native|Public|BlueprintCallable 
	// void PlayUIItemScaleTween(float startValue, float endValue, float Duration);                                             // [0xc1da30] Final|Native|Public|BlueprintCallable 
	// void PlayUIItemAlphaTween(float startValue, float endValue, float Duration);                                             // [0xc1d910] Final|Native|Public|BlueprintCallable 
	// bool IsWorldSpaceUI();                                                                                                   // [0xc1d8e0] Final|Native|Public|BlueprintCallable 
	// bool IsUIActiveSelf();                                                                                                   // [0xc1d8c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsUIActiveInHierarchy();                                                                                            // [0xc1d880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsScreenSpaceOverlayUI();                                                                                           // [0xc1d850] Final|Native|Public|BlueprintCallable 
	// bool IsRenderTargetUI();                                                                                                 // [0xc1d820] Final|Native|Public|BlueprintCallable 
	// bool IsRaycastTarget();                                                                                                  // [0xc1d800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsBubbleUpToParent();                                                                                               // [0xc1d7e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetWidth();                                                                                                        // [0xc1d7c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FUIWidget GetWidget();                                                                                                   // [0xc1d770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// UIItemType GetUIItemType();                                                                                              // [0xc1d750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TEnumAsByte<ETraceTypeQuery> GetTraceChannel();                                                                          // [0xc1d730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetStretchTop();                                                                                                   // [0xc1d710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetStretchRight();                                                                                                 // [0xc1d6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetStretchLeft();                                                                                                  // [0xc1d6d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetStretchBottom();                                                                                                // [0xc1d6b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class ULGUICanvas* GetRootCanvas();                                                                                      // [0xc1d680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class ULGUICanvas* GetRenderCanvas();                                                                                    // [0xc1d650] Final|Native|Public|BlueprintCallable 
	// FVector2D GetPositionInViewPort(bool bIsScaledByDPI);                                                                    // [0xc1d590] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector2D GetPositionInScreen(bool bIsScaledByDPI);                                                                      // [0xc1d4f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector2D GetPivot();                                                                                                    // [0xc1d4c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class UUIItem* GetParentAsUIItem();                                                                                      // [0xc1d490] Final|Native|Public|BlueprintCallable 
	// bool GetOverlapWith(class UUIItem* UIItem);                                                                              // [0xc1d3f0] Final|Native|Public|BlueprintCallable 
	// float GetLocalSpaceTop();                                                                                                // [0xc1d3c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetLocalSpaceRightTopPoint();                                                                                  // [0xc1d380] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// float GetLocalSpaceRight();                                                                                              // [0xc1d350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetLocalSpaceLeftBottomPoint();                                                                                // [0xc1d310] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// float GetLocalSpaceLeft();                                                                                               // [0xc1d2e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetLocalSpaceCenter();                                                                                         // [0xc1d2a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// float GetLocalSpaceBottom();                                                                                             // [0xc1d270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector GetLGUISpaceCenterAbsolutePosition();                                                                            // [0xc1d230] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// FVector GetLGUISpaceAbsolutePositionByPivot(FVector2D& Pivot);                                                           // [0xc1d180] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FVector GetLGUISpaceAbsolutePosition();                                                                                  // [0xc1d140] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool GetInheritAlpha();                                                                                                  // [0xc1d120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetHierarchyIndex();                                                                                             // [0xc1d090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetHeight();                                                                                                       // [0xc1d070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetFlattenHierarchyIndex();                                                                                      // [0xc1cfd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetDisplayName();                                                                                                // [0xc1cf10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetDepth();                                                                                                      // [0xc1cef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FColor GetColor();                                                                                                       // [0xc1ceb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class ULGUICanvasScaler* GetCanvasScaler();                                                                              // [0xc1ce80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetCalculatedParentAlpha();                                                                                        // [0xc1ce60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<UUIItem*> GetAttachUIChildren();                                                                                  // [0xc1cdd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUIItem* GetAttachUIChild(int32_t Index);                                                                          // [0xc1cd30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// UIAnchorVerticalAlign GetAnchorVAlign();                                                                                 // [0xc1cd10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetAnchorOffsetY();                                                                                                // [0xc1ccf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetAnchorOffsetX();                                                                                                // [0xc1ccd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetAnchorOffset();                                                                                             // [0xc1cca0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// UIAnchorHorizontalAlign GetAnchorHAlign();                                                                               // [0xc1cc80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetAlpha();                                                                                                        // [0xc1cc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetAllAttachUIChildren(TArray<UUIItem*>& OutArray);                                                                 // [0xc1cb90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LGUI.UIBaseRenderable
/// Size: 0x0020 (32 bytes) (0x000520 - 0x000540) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class UUIBaseRenderable : public UUIItem
{ 
public:
	unsigned char                                      UnknownData00_3[0xC];                                       // 0x0520   (0x000C)  MISSED
	int32_t                                            BatchDepth;                                                 // 0x052C   (0x0004)  
	bool                                               bIsRenderAfterBlurPartial;                                  // 0x0530   (0x0001)  
	bool                                               bIsAlphaZeroClip;                                           // 0x0531   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0532   (0x0006)  MISSED
	// void SetUIRenderAfterBlurPartial(bool bAfterBlurPartial);                                                                // [0xc08f70] Native|Public|BlueprintCallable 
	// EUIRenderableType GetUIRenderableType();                                                                                 // [0xc07f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/LGUI.UIBatchGeometryRenderable
/// Size: 0x01F8 (504 bytes) (0x000538 - 0x000730) align 16 pad: 0x0000
class UUIBatchGeometryRenderable : public UUIBaseRenderable
{ 
public:
	unsigned char                                      UnknownData00_3[0xE0];                                      // 0x0538   (0x00E0)  MISSED
	SDK_UNDEFINED(80,741) /* TMap<FName, float> */     __um(CustomScalarParameterTMap);                            // 0x0618   (0x0050)  
	SDK_UNDEFINED(80,742) /* TMap<FName, UTexture*> */ __um(CustomTextureParameterTMap);                           // 0x0668   (0x0050)  
	SDK_UNDEFINED(80,743) /* TMap<FName, FLinearColor> */ __um(CustomVectorParameterTMap);                         // 0x06B8   (0x0050)  
	class UMaterialInterface*                          CustomUIMaterial;                                           // 0x0708   (0x0008)  
	bool                                               bIsSelfRender;                                              // 0x0710   (0x0001)  
	bool                                               bIsGray;                                                    // 0x0711   (0x0001)  
	bool                                               bIsColorRevert;                                             // 0x0712   (0x0001)  
	bool                                               bRaycastComplex;                                            // 0x0713   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0714   (0x0004)  MISSED
	class UUIDrawcallMesh*                             uiMesh;                                                     // 0x0718   (0x0008)  
	class UMaterialInstanceDynamic*                    uiMaterial;                                                 // 0x0720   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0728   (0x0008)  MISSED
	// void SetRaycastComplex(bool NewValue);                                                                                   // [0xc08dd0] Final|Native|Public|BlueprintCallable 
	// void SetIsSelfRender(bool Value);                                                                                        // [0xc08cc0] Final|Native|Public|BlueprintCallable 
	// void SetIsGray(bool Value);                                                                                              // [0xc08c30] Final|Native|Public|BlueprintCallable 
	// void SetIsColorRevert(bool Value);                                                                                       // [0xc08ba0] Final|Native|Public|BlueprintCallable 
	// void SetCustomUIMaterial(class UMaterialInterface* inMat);                                                               // [0xc08a80] Final|Native|Public|BlueprintCallable 
	// void SetCustomMaterialVectorParameter(FName paramterName, FLinearColor Value);                                           // [0xc08990] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetCustomMaterialTextureParameter(FName ParameterName, class UTexture* Value);                                      // [0xc088a0] Final|Native|Public|BlueprintCallable 
	// void SetCustomMaterialScalarParameter(FName paramterName, float Value);                                                  // [0xc087b0] Final|Native|Public|BlueprintCallable 
	// bool GetRaycastComplex();                                                                                                // [0xc07c50] Final|Native|Public|BlueprintCallable 
	// class UMaterialInstanceDynamic* GetMaterialInstanceDynamic();                                                            // [0xc07c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetIsSelfRender();                                                                                                  // [0xc07b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UMaterialInterface* GetCustomUIMaterial();                                                                         // [0xc07b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void ClearCustomMaterialParameterInMap();                                                                                // [0xc077d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UISpriteBase
/// Size: 0x0010 (16 bytes) (0x000730 - 0x000740) align 16 pad: 0x0000
class UUISpriteBase : public UUIBatchGeometryRenderable
{ 
public:
	class ULGUISpriteData_BaseObject*                  Sprite;                                                     // 0x0730   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0738   (0x0008)  MISSED
	// void SetSprite(class ULGUISpriteData_BaseObject* newSprite, bool setSize);                                               // [0xc2f830] Final|Native|Public|BlueprintCallable 
	// void SetSizeFromSpriteData();                                                                                            // [0xc2f810] Final|Native|Public|BlueprintCallable 
	// class ULGUISpriteData_BaseObject* GetSprite();                                                                           // [0xc2eb10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UI2DLineRendererBase
/// Size: 0x0020 (32 bytes) (0x000740 - 0x000760) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class UUI2DLineRendererBase : public UUISpriteBase
{ 
public:
	float                                              LineWidth;                                                  // 0x0740   (0x0004)  
	EUI2DLineRenderer_EndType                          EndType;                                                    // 0x0744   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0745   (0x0003)  MISSED
	float                                              LineWidthOffset;                                            // 0x0748   (0x0004)  
	bool                                               bFixedThickness;                                            // 0x074C   (0x0001)  
	unsigned char                                      UnknownData01_7[0xB];                                       // 0x074D   (0x000B)  MISSED
	// void SetLineWidthOffset(float NewValue);                                                                                 // [0xc043b0] Final|Native|Public|BlueprintCallable 
	// void SetLineWidth(float NewValue);                                                                                       // [0xc04330] Final|Native|Public|BlueprintCallable 
	// void SetEndType(EUI2DLineRenderer_EndType NewValue);                                                                     // [0xc041b0] Final|Native|Public|BlueprintCallable 
	// class ULTweener* LineWidthTo(float endValue, float Duration, float delay, LTweenEase easeType);                          // [0xc03d30] Final|Native|Public|BlueprintCallable 
	// float GetLineWidthOffset();                                                                                              // [0xc03aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetLineWidth();                                                                                                    // [0xc03a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EUI2DLineRenderer_EndType GetEndType();                                                                                  // [0xc03a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/LGUI.UI2DLineChildrenAsPoints
/// Size: 0x0038 (56 bytes) (0x000758 - 0x000790) align 16 pad: 0x0000
class UUI2DLineChildrenAsPoints : public UUI2DLineRendererBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0758   (0x0010)  MISSED
	TArray<FVector2D>                                  CurrentPointArray;                                          // 0x0768   (0x0010)  
	TArray<class UUIItem*>                             SortedItemArray;                                            // 0x0778   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0788   (0x0008)  MISSED
};

/// Class /Script/LGUI.UIBaseActor
/// Size: 0x00D8 (216 bytes) (0x0002A8 - 0x000380) align 8 pad: 0x0000
class AUIBaseActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02A8   (0x0008)  MISSED
	SDK_UNDEFINED(80,744) /* TMap<FSoftObjectPath, ALevelSequenceActor*> */ __um(CurBindingSeqActors);             // 0x02B0   (0x0050)  
	SDK_UNDEFINED(20,745) /* FDelegateProperty */      __um(OnSequencePlayEvent);                                  // 0x0300   (0x0014)  
	FGuid                                              LGUIGuid;                                                   // 0x0314   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0324   (0x0004)  MISSED
	SDK_UNDEFINED(80,746) /* TMap<FSoftObjectPath, USequencePlayContext*> */ __um(AllSequencePlayContexts);        // 0x0328   (0x0050)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0378   (0x0008)  MISSED
	// void StopSequenceByKey(FString Name);                                                                                    // [0xc09000] Final|Native|Public|BlueprintCallable 
	// void SequencePlayReverseByKey(FString Name);                                                                             // [0xc08680] Final|Native|Public|BlueprintCallable 
	// void SequenceJumpToSecondByKey(FString Name, FFrameTime& Time);                                                          // [0xc08590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SequenceJumpToEnd(FSoftObjectPath& SoftPath);                                                                       // [0xc084e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void ResumeSequenceByKey(FString Name);                                                                                  // [0xc08440] Final|Native|Public|BlueprintCallable 
	// void ReplaySequenceByKey(FString Name);                                                                                  // [0xc083a0] Final|Native|Public|BlueprintCallable 
	// void PlayLevelSequenceByKey(FString Name);                                                                               // [0xc08230] Final|Native|Public|BlueprintCallable 
	// void PauseSequenceByKey(FString Name);                                                                                   // [0xc08190] Final|Native|Public|BlueprintCallable 
	// void LoadSequenceAssetAsyncByKey(FString Key, FDelegateProperty& OnLoaded);                                              // [0xc07fa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// class UUIItem* GetUIItem();                                                                                              // [0xc07f50] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class ALevelSequenceActor* GetSequencePlayerByKey(FString Name);                                                         // [0xc07e60] Final|Native|Public|BlueprintCallable 
	// class USequencePlayContext* GetSequencePlayContextOfKey(FString Key);                                                    // [0xc07db0] Final|Native|Public|BlueprintCallable 
	// FSequenceInfo GetSeqInfoByKey(FString Key);                                                                              // [0xc07c70] Final|Native|Public|BlueprintCallable 
	// ESequenceLoadState GetLoadStateOfSequenceByKey(FString Key);                                                             // [0xc07b70] Final|Native|Public|BlueprintCallable 
	// void ExecuteSequencePlayEvent(FString sequenceName, FString EventName);                                                  // [0xc07a10] Final|Native|Public|BlueprintCallable|Const 
	// void ClearAllSequence();                                                                                                 // [0xc077b0] Final|Native|Public  
	// void CleanIdleAnimSeqActorCache();                                                                                       // [0xc07790] Final|Native|Public  
	// void ActivateAllChildrenInteraction();                                                                                   // [0xc071e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UI2DLineChildrenAsPointsActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUI2DLineChildrenAsPointsActor : public AUIBaseActor
{ 
public:
	class UUI2DLineChildrenAsPoints*                   UIElement;                                                  // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UI2DLineRaw
/// Size: 0x0018 (24 bytes) (0x000758 - 0x000770) align 16 pad: 0x0000
class UUI2DLineRaw : public UUI2DLineRendererBase
{ 
public:
	TArray<FVector2D>                                  PointArray;                                                 // 0x0758   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0768   (0x0008)  MISSED
	// void SetPoints(TArray<FVector2D>& InPoints, bool bAdjustSize);                                                           // [0xc044c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void AdjustSize();                                                                                                       // [0xc034e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UI2DLineActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUI2DLineActor : public AUIBaseActor
{ 
public:
	class UUI2DLineRaw*                                UIElement;                                                  // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UIAndroidBackComponent
/// Size: 0x0008 (8 bytes) (0x0000E8 - 0x0000F0) align 8 pad: 0x0000
class UUIAndroidBackComponent : public ULGUIBehaviour
{ 
public:
	FVector2D                                          ClickPivot;                                                 // 0x00E8   (0x0008)  
	// class UUIAndroidBackComponent* GetTopActiveAndroidBack();                                                                // [0xc03ca0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetActiveAndroidBackComponentSize();                                                                             // [0xc03940] Final|Native|Static|Public|BlueprintCallable 
	// void ClearAndroidBackComponent();                                                                                        // [0xc036d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIPostProcessRenderable
/// Size: 0x0058 (88 bytes) (0x000538 - 0x000590) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class UUIPostProcessRenderable : public UUIBaseRenderable
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0538   (0x0010)  MISSED
	class UTexture2D*                                  maskTexture;                                                // 0x0548   (0x0008)  
	unsigned char                                      UnknownData01_7[0x38];                                      // 0x0550   (0x0038)  MISSED
	// void SetMaskTexture(class UTexture2D* NewValue);                                                                         // [0xc26e20] Final|Native|Public|BlueprintCallable 
	// class UTexture2D* GetMaskTexture();                                                                                      // [0xc261f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/LGUI.UIBackgroundBlur
/// Size: 0x0028 (40 bytes) (0x000588 - 0x0005B0) align 16 pad: 0x0000
class UUIBackgroundBlur : public UUIPostProcessRenderable
{ 
public:
	float                                              blurStrength;                                               // 0x0588   (0x0004)  
	bool                                               applyAlphaToBlur;                                           // 0x058C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x058D   (0x0003)  MISSED
	int32_t                                            maxDownSampleLevel;                                         // 0x0590   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0594   (0x0004)  MISSED
	class UTexture2D*                                  strengthTexture;                                            // 0x0598   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x05A0   (0x0010)  MISSED
	// void SetStrengthTexture(class UTexture2D* NewValue);                                                                     // [0xc045c0] Final|Native|Public|BlueprintCallable 
	// void SetMaxDownSampleLevel(int32_t NewValue);                                                                            // [0xc04430] Final|Native|Public|BlueprintCallable 
	// void SetBlurStrength(float NewValue);                                                                                    // [0xc04130] Final|Native|Public|BlueprintCallable 
	// void SetApplyAlphaToBlur(bool NewValue);                                                                                 // [0xc03ff0] Final|Native|Public|BlueprintCallable 
	// class UTexture2D* GetStrengthTexture();                                                                                  // [0xc03c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetMaxDownSampleLevel();                                                                                         // [0xc03ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetBlurStrength();                                                                                                 // [0xc03a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetApplyAlphaToBlur();                                                                                              // [0xc03970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIPostProcessBaseActor
/// Size: 0x0000 (0 bytes) (0x000380 - 0x000380) align 8 pad: 0x0000
class AUIPostProcessBaseActor : public AUIBaseActor
{ 
public:
};

/// Class /Script/LGUI.UIBackgroundBlurActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUIBackgroundBlurActor : public AUIPostProcessBaseActor
{ 
public:
	class UUIBackgroundBlur*                           UIBackgroundBlur;                                           // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UIBackgroundPixelate
/// Size: 0x0008 (8 bytes) (0x000588 - 0x000590) align 16 pad: 0x0000
class UUIBackgroundPixelate : public UUIPostProcessRenderable
{ 
public:
	float                                              pixelateStrength;                                           // 0x0588   (0x0004)  
	bool                                               applyAlphaToStrength;                                       // 0x058C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x058D   (0x0003)  MISSED
	// void SetPixelateStrength(float NewValue);                                                                                // [0xc08d50] Final|Native|Public|BlueprintCallable 
	// void SetApplyAlphaToStrength(bool NewValue);                                                                             // [0xc08720] Final|Native|Public|BlueprintCallable 
	// float GetPixelateStrength();                                                                                             // [0xc03a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetApplyAlphaToStrength();                                                                                          // [0xc03970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIBackgroundPixelateActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUIBackgroundPixelateActor : public AUIPostProcessBaseActor
{ 
public:
	class UUIBackgroundPixelate*                       UIBackgroundPixelate;                                       // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.LevelSequencePrefabData
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class ULevelSequencePrefabData : public UAssetUserData
{ 
public:
	TArray<FGuid>                                      SourcePrefabGuids;                                          // 0x0030   (0x0010)  
};

/// Class /Script/LGUI.LGUICreateGeometryHelper
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class ULGUICreateGeometryHelper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
	// void AddVertexStruct(FLGUIGeometryVertex Vertex);                                                                        // [0xc076b0] Final|Native|Public|BlueprintCallable 
	// void AddVertexSimple(FVector Position, FColor Color, FVector2D uv0);                                                     // [0xc075a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void AddVertexFull(FVector Position, FColor Color, FVector2D uv0, FVector2D uv1, FVector2D uv2, FVector2D uv3, FVector Normal, FVector Tangent); // [0xc07310] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void AddTriangle(int32_t index0, int32_t index1, int32_t index2);                                                        // [0xc07200] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LGUI.LGUIGeometryVertex
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 4 pad: 0x0000
struct FLGUIGeometryVertex
{ 
	FVector                                            Position;                                                   // 0x0000   (0x000C)  
	FColor                                             Color;                                                      // 0x000C   (0x0004)  
	FVector2D                                          uv0;                                                        // 0x0010   (0x0008)  
	FVector2D                                          uv1;                                                        // 0x0018   (0x0008)  
	FVector2D                                          uv2;                                                        // 0x0020   (0x0008)  
	FVector2D                                          uv3;                                                        // 0x0028   (0x0008)  
	FVector                                            Normal;                                                     // 0x0030   (0x000C)  
	FVector                                            tagent;                                                     // 0x003C   (0x000C)  
};

/// Class /Script/LGUI.LGUIUpdateGeometryHelper
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class ULGUIUpdateGeometryHelper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0030   (0x0010)  MISSED
	TArray<FLGUIGeometryVertex>                        cacheVertices;                                              // 0x0040   (0x0010)  
	// void EndUpdateVertices();                                                                                                // [0xc079f0] Final|Native|Public|BlueprintCallable 
	// void BeginUpdateVertices();                                                                                              // [0xc07770] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIBatchGeometryRenderable_BP
/// Size: 0x0010 (16 bytes) (0x000730 - 0x000740) align 16 pad: 0x0000
class UUIBatchGeometryRenderable_BP : public UUIBatchGeometryRenderable
{ 
public:
	class ULGUICreateGeometryHelper*                   createGeometryHelper;                                       // 0x0730   (0x0008)  
	class ULGUIUpdateGeometryHelper*                   updateGeometryHelper;                                       // 0x0738   (0x0008)  
	// void OnUpdateGeometry_BP(class ULGUIUpdateGeometryHelper* InUpdateGoemetryHelper, bool InVertexPositionChanged, bool InVertexUVChanged, bool InVertexColorChanged); // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnCreateGeometry_BP(class ULGUICreateGeometryHelper* InCreateGeometryHelper);                                       // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnBeforeCreateOrUpdateGeometry_BP();                                                                                // [0x25a7960] Event|Protected|BlueprintEvent 
	// void MarkVertexChanged_BP();                                                                                             // [0xc080d0] Final|Native|Public|BlueprintCallable 
	// void MarkRebuildGeometry_BP();                                                                                           // [0xc080b0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LGUI.LGUIComponentReference
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FLGUIComponentReference
{ 
	SDK_UNDEFINED(8,747) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                          // 0x0000   (0x0008)  
	class UClass*                                      targetComponentClass;                                       // 0x0008   (0x0008)  
	FName                                              targetComonentName;                                         // 0x0010   (0x000C)  
	SDK_UNDEFINED(8,748) /* TWeakObjectPtr<UActorComponent*> */ __um(componentInstance);                           // 0x001C   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/LGUI.UISelectableComponent
/// Size: 0x02A0 (672 bytes) (0x0000E8 - 0x000388) align 8 pad: 0x0000
class UUISelectableComponent : public ULGUIBehaviour
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x00E8   (0x0020)  MISSED
	SDK_UNDEFINED(8,749) /* TWeakObjectPtr<AUIBaseActor*> */ __um(TransitionActor);                                // 0x0108   (0x0008)  
	bool                                               AllowEventBubbleUp;                                         // 0x0110   (0x0001)  
	UISelectableTransitionType                         Transition;                                                 // 0x0111   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0112   (0x0006)  MISSED
	class ULTweener*                                   TransitionTweener;                                          // 0x0118   (0x0008)  
	FColor                                             NormalColor;                                                // 0x0120   (0x0004)  
	FColor                                             HighlightedColor;                                           // 0x0124   (0x0004)  
	FColor                                             PressedColor;                                               // 0x0128   (0x0004)  
	FColor                                             DisabledColor;                                              // 0x012C   (0x0004)  
	FColor                                             SelectedColor;                                              // 0x0130   (0x0004)  
	float                                              FadeDuration;                                               // 0x0134   (0x0004)  
	class ULGUISpriteData_BaseObject*                  NormalSprite;                                               // 0x0138   (0x0008)  
	class ULGUISpriteData_BaseObject*                  HighlightedSprite;                                          // 0x0140   (0x0008)  
	class ULGUISpriteData_BaseObject*                  PressedSprite;                                              // 0x0148   (0x0008)  
	class ULGUISpriteData_BaseObject*                  DisabledSprite;                                             // 0x0150   (0x0008)  
	class ULGUISpriteData_BaseObject*                  SelectedSprite;                                             // 0x0158   (0x0008)  
	SDK_UNDEFINED(8,750) /* TWeakObjectPtr<AUIBaseActor*> */ __um(NormalItem);                                     // 0x0160   (0x0008)  
	SDK_UNDEFINED(8,751) /* TWeakObjectPtr<AUIBaseActor*> */ __um(HighlightedItem);                                // 0x0168   (0x0008)  
	SDK_UNDEFINED(8,752) /* TWeakObjectPtr<AUIBaseActor*> */ __um(PressedItem);                                    // 0x0170   (0x0008)  
	SDK_UNDEFINED(8,753) /* TWeakObjectPtr<AUIBaseActor*> */ __um(DisabledItem);                                   // 0x0178   (0x0008)  
	SDK_UNDEFINED(8,754) /* TWeakObjectPtr<AUIBaseActor*> */ __um(SelectedItem);                                   // 0x0180   (0x0008)  
	EUISelectableSelectionState                        CurrentSelectionState;                                      // 0x0188   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0189   (0x0003)  MISSED
	bool                                               bApplyColorToChildren;                                      // 0x018C   (0x0001)  
	bool                                               bAutoScrollOnSelected;                                      // 0x018D   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x018E   (0x0002)  MISSED
	SDK_UNDEFINED(8,755) /* TWeakObjectPtr<AActor*> */ __um(NavigationGroupParentComponentActor);                  // 0x0190   (0x0008)  
	SDK_UNDEFINED(8,756) /* TWeakObjectPtr<UUISelectableComponent*> */ __um(NavigationGroupParentComponent);       // 0x0198   (0x0008)  
	SDK_UNDEFINED(8,757) /* TWeakObjectPtr<AActor*> */ __um(NavigationGroupComponentActor);                        // 0x01A0   (0x0008)  
	SDK_UNDEFINED(8,758) /* TWeakObjectPtr<UUINavigationGroupComponent*> */ __um(NavigationGroupComponent);        // 0x01A8   (0x0008)  
	SDK_UNDEFINED(8,759) /* TWeakObjectPtr<AActor*> */ __um(ScrollViewActor);                                      // 0x01B0   (0x0008)  
	SDK_UNDEFINED(8,760) /* TWeakObjectPtr<UUIScrollViewWithScrollbarComponent*> */ __um(ScrollViewComponent);     // 0x01B8   (0x0008)  
	SDK_UNDEFINED(8,761) /* TWeakObjectPtr<UUISelectableTransitionComponent*> */ __um(TransitionComp);             // 0x01C0   (0x0008)  
	EUISelectableNavigationMode                        NavigationLeft;                                             // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x01C9   (0x0007)  MISSED
	FLGUIComponentReference                            NavigationLeftSpecific;                                     // 0x01D0   (0x0028)  
	EUISelectableNavigationMode                        NavigationRight;                                            // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
	FLGUIComponentReference                            NavigationRightSpecific;                                    // 0x0200   (0x0028)  
	EUISelectableNavigationMode                        NavigationUp;                                               // 0x0228   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x0229   (0x0007)  MISSED
	FLGUIComponentReference                            NavigationUpSpecific;                                       // 0x0230   (0x0028)  
	EUISelectableNavigationMode                        NavigationDown;                                             // 0x0258   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x0259   (0x0007)  MISSED
	FLGUIComponentReference                            NavigationDownSpecific;                                     // 0x0260   (0x0028)  
	EUISelectableNavigationMode                        NavigationNext;                                             // 0x0288   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x0289   (0x0007)  MISSED
	FLGUIComponentReference                            NavigationNextSpecific;                                     // 0x0290   (0x0028)  
	EUISelectableNavigationMode                        NavigationPrev;                                             // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x02B9   (0x0007)  MISSED
	FLGUIComponentReference                            NavigationPrevSpecific;                                     // 0x02C0   (0x0028)  
	SDK_UNDEFINED(80,762) /* TMap<EStateTransferType, FAnimationPlayInfo> */ __um(AnimationConfig);                // 0x02E8   (0x0050)  
	unsigned char                                      UnknownData10_6[0x8];                                       // 0x0338   (0x0008)  MISSED
	TArray<class ULevelSequence*>                      AllAnims;                                                   // 0x0340   (0x0010)  
	SDK_UNDEFINED(20,763) /* FDelegateProperty */      __um(OnSelfInteractiveChanged);                             // 0x0350   (0x0014)  
	bool                                               IsSelfInteractive;                                          // 0x0364   (0x0001)  
	bool                                               bCanClickWhenDisable;                                       // 0x0365   (0x0001)  
	unsigned char                                      UnknownData11_6[0xE];                                       // 0x0366   (0x000E)  MISSED
	SDK_UNDEFINED(20,764) /* FDelegateProperty */      __um(FocusListenerDelegate);                                // 0x0374   (0x0014)  
	// void SetTransitionTarget(class AUIBaseActor* Value);                                                                     // [0xc2b7d0] Final|Native|Public|BlueprintCallable 
	// void SetShieldPCPress(bool Value);                                                                                       // [0xc2b750] Final|Native|Static|Public|BlueprintCallable 
	// void SetShieldMobileHighlight(bool Value);                                                                               // [0xc2b6d0] Final|Native|Static|Public|BlueprintCallable 
	// void SetSelfInteractive(bool InteractiveEnable);                                                                         // [0xc2b640] Final|Native|Public|BlueprintCallable 
	// void SetSelectionState(EUISelectableSelectionState NewState);                                                            // [0xc2b5c0] Final|Native|Public|BlueprintCallable 
	// void SetSelectableDelegate(FDelegateProperty& Delegate);                                                                 // [0xc2b510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetScrollView(class UUIScrollViewWithScrollbarComponent* Component);                                                // [0xc2b480] Final|Native|Public|BlueprintCallable 
	// void SetPressedSprite(class ULGUISpriteData_BaseObject* newSprite);                                                      // [0xc2b3f0] Final|Native|Public|BlueprintCallable 
	// void SetPressedColor(FColor NewColor);                                                                                   // [0xc2b370] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetNormalSprite(class ULGUISpriteData_BaseObject* newSprite);                                                       // [0xc2b2e0] Final|Native|Public|BlueprintCallable 
	// void SetNormalColor(FColor NewColor);                                                                                    // [0xc2b260] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetNavigationUpExplicit(class UUISelectableComponent* Value);                                                       // [0xc2b1d0] Final|Native|Public|BlueprintCallable 
	// void SetNavigationUp(EUISelectableNavigationMode Value);                                                                 // [0xc2b150] Final|Native|Public|BlueprintCallable 
	// void SetNavigationRightExplicit(class UUISelectableComponent* Value);                                                    // [0xc2b0c0] Final|Native|Public|BlueprintCallable 
	// void SetNavigationRight(EUISelectableNavigationMode Value);                                                              // [0xc2b040] Final|Native|Public|BlueprintCallable 
	// void SetNavigationPrevExplicit(class UUISelectableComponent* Value);                                                     // [0xc2afb0] Final|Native|Public|BlueprintCallable 
	// void SetNavigationPrev(EUISelectableNavigationMode Value);                                                               // [0xc2af30] Final|Native|Public|BlueprintCallable 
	// void SetNavigationNextExplicit(class UUISelectableComponent* Value);                                                     // [0xc2aea0] Final|Native|Public|BlueprintCallable 
	// void SetNavigationNext(EUISelectableNavigationMode Value);                                                               // [0xc2ae20] Final|Native|Public|BlueprintCallable 
	// void SetNavigationLeftExplicit(class UUISelectableComponent* Value);                                                     // [0xc2ad90] Final|Native|Public|BlueprintCallable 
	// void SetNavigationLeft(EUISelectableNavigationMode Value);                                                               // [0xc2ad10] Final|Native|Public|BlueprintCallable 
	// void SetNavigationGroupParent(class UUISelectableComponent* Component);                                                  // [0xc2ac80] Final|Native|Protected|BlueprintCallable 
	// void SetNavigationGroup(class UUINavigationGroupComponent* Component);                                                   // [0xc2abf0] Final|Native|Protected|BlueprintCallable 
	// void SetNavigationDownExplicit(class UUISelectableComponent* Value);                                                     // [0xc2ab60] Final|Native|Public|BlueprintCallable 
	// void SetNavigationDown(EUISelectableNavigationMode Value);                                                               // [0xc2aae0] Final|Native|Public|BlueprintCallable 
	// void SetIsCustomTransition(bool bIsCustomTransition);                                                                    // [0xc2aa50] Final|Native|Public|BlueprintCallable 
	// void SetIsCustomAnim(bool bIsCustomAnim);                                                                                // [0xc2a9c0] Final|Native|Public|BlueprintCallable 
	// void SetHighlightedSprite(class ULGUISpriteData_BaseObject* newSprite);                                                  // [0xc2a930] Final|Native|Public|BlueprintCallable 
	// void SetHighlightedColor(FColor NewColor);                                                                               // [0xc2a8b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetCanClickWhenDisable(bool CanClickEnbale);                                                                        // [0xc2a790] Final|Native|Public|BlueprintCallable 
	// void ResetSelectableDelegate();                                                                                          // [0xc2a6e0] Final|Native|Static|Public|BlueprintCallable 
	// void PlayUIAnimationByPlayInfo(FAnimationPlayInfo PlayInfo);                                                             // [0xc2a570] Final|Native|Public  
	// void NotifyFocusListener();                                                                                              // [0xc2a3f0] Final|Native|Public|BlueprintCallable 
	// bool IsInteractable();                                                                                                   // [0xc2a3c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class AUIBaseActor* GetTransitionTarget();                                                                               // [0xc26090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetSelfInteractive();                                                                                               // [0xc2a390] Final|Native|Public|BlueprintCallable 
	// EUISelectableSelectionState GetSelectionState();                                                                         // [0xc2a360] Final|Native|Public|BlueprintCallable 
	// class ULGUISpriteData_BaseObject* GetSelectedSprite();                                                                   // [0xc2a340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class ULGUISpriteData_BaseObject* GetPressedSprite();                                                                    // [0xc2a320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FColor GetPressedColor();                                                                                                // [0xc2a300] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class ULGUISpriteData_BaseObject* GetNormalSprite();                                                                     // [0xc2a2e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FColor GetNormalColor();                                                                                                 // [0xc2a2c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class UUISelectableComponent* GetNavigationUpExplicit();                                                                 // [0xc2a280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EUISelectableNavigationMode GetNavigationUp();                                                                           // [0xc2a260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUISelectableComponent* GetNavigationRightExplicit();                                                              // [0xc2a220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EUISelectableNavigationMode GetNavigationRight();                                                                        // [0xc2a200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUISelectableComponent* GetNavigationPrevExplicit();                                                               // [0xc2a1c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EUISelectableNavigationMode GetNavigationPrev();                                                                         // [0xc2a1a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUISelectableComponent* GetNavigationNextExplicit();                                                               // [0xc2a160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EUISelectableNavigationMode GetNavigationNext();                                                                         // [0xc2a140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUISelectableComponent* GetNavigationLeftExplicit();                                                               // [0xc2a100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EUISelectableNavigationMode GetNavigationLeft();                                                                         // [0xc261d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUISelectableComponent* GetNavigationDownExplicit();                                                               // [0xc2a0c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EUISelectableNavigationMode GetNavigationDown();                                                                         // [0xc2a0a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class ULGUISpriteData_BaseObject* GetHighlightedSprite();                                                                // [0xc2a080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FColor GetHighlightedColor();                                                                                            // [0xc2a060] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class ULGUISpriteData_BaseObject* GetDisabledSprite();                                                                   // [0xc2a040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetCanClickWhenDisable();                                                                                           // [0xc2a010] Final|Native|Public|BlueprintCallable 
	// void ApplySelectionState(bool bImmediateSet);                                                                            // [0xc29db0] Native|Protected|BlueprintCallable 
};

/// Class /Script/LGUI.UIButtonComponent
/// Size: 0x0178 (376 bytes) (0x000388 - 0x000500) align 8 pad: 0x0000
class UUIButtonComponent : public UUISelectableComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0388   (0x0008)  MISSED
	FLGUIDrawableEvent                                 OnClick;                                                    // 0x0390   (0x0018)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x03A8   (0x0018)  MISSED
	bool                                               bAllowChangeCursorStyleWhenEnter;                           // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x03C1   (0x0003)  MISSED
	SDK_UNDEFINED(20,765) /* FDelegateProperty */      __um(OnClickCallBack);                                      // 0x03C4   (0x0014)  
	SDK_UNDEFINED(20,766) /* FDelegateProperty */      __um(OnPointDownCallBack);                                  // 0x03D8   (0x0014)  
	SDK_UNDEFINED(20,767) /* FDelegateProperty */      __um(OnPointUpCallBack);                                    // 0x03EC   (0x0014)  
	SDK_UNDEFINED(20,768) /* FDelegateProperty */      __um(OnPointCancelCallBack);                                // 0x0400   (0x0014)  
	SDK_UNDEFINED(20,769) /* FDelegateProperty */      __um(OnPointEnterCallBack);                                 // 0x0414   (0x0014)  
	SDK_UNDEFINED(20,770) /* FDelegateProperty */      __um(OnPointExitCallBack);                                  // 0x0428   (0x0014)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x043C   (0x0004)  MISSED
	FSoftObjectPath                                    AkAudioEvent;                                               // 0x0440   (0x0020)  
	SDK_UNDEFINED(20,771) /* FDelegateProperty */      __um(OnPostAudioEvent);                                     // 0x0460   (0x0014)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0474   (0x0004)  MISSED
	SDK_UNDEFINED(80,772) /* TMap<EButtonAudioStateTransferType, FSoftObjectPath> */ __um(AudioConfig);            // 0x0478   (0x0050)  
	FSoftObjectPath                                    LongPressAudioEvent;                                        // 0x04C8   (0x0020)  
	SDK_UNDEFINED(20,773) /* FDelegateProperty */      __um(OnPostAudioStateEvent);                                // 0x04E8   (0x0014)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x04FC   (0x0004)  MISSED
	// void UnregisterClickEvent(FLGUIDelegateHandleWrapper& InDelegateHandle);                                                 // [0xc090a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterClickEvent(FDelegateProperty& InDelegate);                                            // [0xc082d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool OnPointerDown_Implementation(class ULGUIPointerEventData* eventData);                                               // [0xc080f0] Native|Protected     
};

/// Class /Script/LGUI.UIComboBox
/// Size: 0x0038 (56 bytes) (0x0000C0 - 0x0000F8) align 8 pad: 0x0000
class UUIComboBox : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class AUIBaseActor*                                _RootUIActor;                                               // 0x00C8   (0x0008)  
	class AUIBaseActor*                                _SrcItemActor;                                              // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x00D8   (0x0020)  MISSED
	// class UUIComboBox* CreateComboBoxFromArray(TArray<FString>& InItemNameArray, FDelegateProperty& InCallback, class AUIBaseActor* InParentActor, int32_t InSelectedItemIndex, EComboBoxPosition InPosition); // [0xc077f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LGUI.UIComboBoxItem
/// Size: 0x0030 (48 bytes) (0x0000C0 - 0x0000F0) align 8 pad: 0x0000
class UUIComboBoxItem : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class AUIBaseActor*                                _RootUIActor;                                               // 0x00C8   (0x0008)  
	class AUITextActor*                                _TextActor;                                                 // 0x00D0   (0x0008)  
	class AUISpriteActor*                              _HighlightSpriteActor;                                      // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00E0   (0x0010)  MISSED
};

/// Class /Script/LGUI.UIContainerActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUIContainerActor : public AUIBaseActor
{ 
public:
	class UUIItem*                                     UIItem;                                                     // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UICustomDepthStencilMask
/// Size: 0x0008 (8 bytes) (0x000588 - 0x000590) align 16 pad: 0x0000
class UUICustomDepthStencilMask : public UUIPostProcessRenderable
{ 
public:
	bool                                               bFullScreen;                                                // 0x0588   (0x0001)  
	EUICustomDepthStencilMaskSourceType                SourceType;                                                 // 0x0589   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x058A   (0x0002)  MISSED
	int32_t                                            stencilValue;                                               // 0x058C   (0x0004)  
	// void SetStencilValue(int32_t Value);                                                                                     // [0xc08ee0] Final|Native|Public|BlueprintCallable 
	// void SetSourceType(EUICustomDepthStencilMaskSourceType Value);                                                           // [0xc08e60] Final|Native|Public|BlueprintCallable 
	// void SetFullScreen(bool Value);                                                                                          // [0xc08b10] Final|Native|Public|BlueprintCallable 
	// int32_t GetStencilValue();                                                                                               // [0xc07f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EUICustomDepthStencilMaskSourceType GetSourceType();                                                                     // [0xc07f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetFullScreen();                                                                                                    // [0xc07b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UICustomDepthStencilMaskActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUICustomDepthStencilMaskActor : public AUIPostProcessBaseActor
{ 
public:
	class UUICustomDepthStencilMask*                   UICustomDepthStencilMask;                                   // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UIDirectMeshRenderable
/// Size: 0x0018 (24 bytes) (0x000538 - 0x000550) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class UUIDirectMeshRenderable : public UUIBaseRenderable
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0538   (0x0010)  MISSED
};
#pragma pack(pop)

/// Class /Script/LGUI.UIDraggableComponent
/// Size: 0x0110 (272 bytes) (0x0000E8 - 0x0001F8) align 8 pad: 0x0000
class UUIDraggableComponent : public ULGUIBehaviour
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x00E8   (0x0028)  MISSED
	SDK_UNDEFINED(20,774) /* FDelegateProperty */      __um(OnPointerDownCallBack);                                // 0x0110   (0x0014)  
	SDK_UNDEFINED(20,775) /* FDelegateProperty */      __um(OnPointerUpCallBack);                                  // 0x0124   (0x0014)  
	SDK_UNDEFINED(20,776) /* FDelegateProperty */      __um(OnPointerCancelCallBack);                              // 0x0138   (0x0014)  
	SDK_UNDEFINED(20,777) /* FDelegateProperty */      __um(OnPointerBeginDragCallBack);                           // 0x014C   (0x0014)  
	SDK_UNDEFINED(20,778) /* FDelegateProperty */      __um(OnPointerDragCallBack);                                // 0x0160   (0x0014)  
	SDK_UNDEFINED(20,779) /* FDelegateProperty */      __um(OnPointerEndDragCallBack);                             // 0x0174   (0x0014)  
	SDK_UNDEFINED(20,780) /* FDelegateProperty */      __um(OnPointerScrollCallBack);                              // 0x0188   (0x0014)  
	SDK_UNDEFINED(20,781) /* FDelegateProperty */      __um(OnUIDimensionsChangedCallBack);                        // 0x019C   (0x0014)  
	SDK_UNDEFINED(20,782) /* FDelegateProperty */      __um(NeedInterruptDelegate);                                // 0x01B0   (0x0014)  
	bool                                               bNeedInterrupt;                                             // 0x01C4   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x01C5   (0x000B)  MISSED
	SDK_UNDEFINED(20,783) /* FDelegateProperty */      __um(NavigateToPrevDelegate);                               // 0x01D0   (0x0014)  
	SDK_UNDEFINED(20,784) /* FDelegateProperty */      __um(NavigateToNextDelegate);                               // 0x01E4   (0x0014)  
	// void NotifyNavigateToPrev();                                                                                             // [0xc0c2c0] Final|Native|Public|BlueprintCallable 
	// void NotifyNavigateToNext();                                                                                             // [0xc0c2a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIDrawcallMesh
/// Size: 0x0000 (0 bytes) (0x000550 - 0x000550) align 16 pad: 0x0000
class UUIDrawcallMesh : public ULGUIMeshComponent
{ 
public:
};

/// Struct /Script/LGUI.UIDropdownOptionData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FUIDropdownOptionData
{ 
	FString                                            TextOrConfigTableName;                                      // 0x0000   (0x0010)  
	class ULGUISpriteData_BaseObject*                  Sprite;                                                     // 0x0010   (0x0008)  
	int32_t                                            TextId;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            SecondText;                                                 // 0x0020   (0x0010)  
};

/// Class /Script/LGUI.UIDropdownComponent
/// Size: 0x00E0 (224 bytes) (0x000388 - 0x000468) align 8 pad: 0x0000
class UUIDropdownComponent : public UUISelectableComponent
{ 
public:
	SDK_UNDEFINED(8,785) /* TWeakObjectPtr<AUIBaseActor*> */ __um(ListRoot);                                       // 0x0388   (0x0008)  
	SDK_UNDEFINED(8,786) /* TWeakObjectPtr<AUITextActor*> */ __um(CaptionText);                                    // 0x0390   (0x0008)  
	SDK_UNDEFINED(8,787) /* TWeakObjectPtr<AUITextActor*> */ __um(SecondCaptionText);                              // 0x0398   (0x0008)  
	SDK_UNDEFINED(8,788) /* TWeakObjectPtr<AUISpriteActor*> */ __um(CaptionSprite);                                // 0x03A0   (0x0008)  
	FLGUIComponentReference                            ItemTemplate;                                               // 0x03A8   (0x0028)  
	EUIDropdownVerticalPosition                        VerticalPosition;                                           // 0x03D0   (0x0001)  
	bool                                               VerticalOverlap;                                            // 0x03D1   (0x0001)  
	EUIDropdownHorizontalPosition                      HorizontalPosition;                                         // 0x03D2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x03D3   (0x0001)  MISSED
	int32_t                                            Value;                                                      // 0x03D4   (0x0004)  
	TArray<FUIDropdownOptionData>                      Options;                                                    // 0x03D8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x03E8   (0x0018)  MISSED
	SDK_UNDEFINED(16,789) /* TArray<TWeakObjectPtr<UUIDropdownItemComponent*>> */ __um(CreatedItemArray);          // 0x0400   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0410   (0x0018)  MISSED
	FLGUIDrawableEvent                                 OnSelectionChange;                                          // 0x0428   (0x0018)  
	SDK_UNDEFINED(20,790) /* FDelegateProperty */      __um(OnSelectChange);                                       // 0x0440   (0x0014)  
	SDK_UNDEFINED(20,791) /* FDelegateProperty */      __um(OnPanelActiveChange);                                  // 0x0454   (0x0014)  
	// void UnregisterSelectionChangeEvent(FLGUIDelegateHandleWrapper& InDelegateHandle);                                       // [0xc0d1f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnbindAllToggleDelegate();                                                                                          // [0xc0d1d0] Final|Native|Public|BlueprintCallable 
	// void Show();                                                                                                             // [0xc0d1b0] Final|Native|Public|BlueprintCallable 
	// void SetVerticalPosition(EUIDropdownVerticalPosition InValue);                                                           // [0xc0d130] Final|Native|Public|BlueprintCallable 
	// void SetVerticalOverlap(bool NewValue);                                                                                  // [0xc0d0a0] Final|Native|Public|BlueprintCallable 
	// void SetValue(int32_t NewValue, bool fireEvent);                                                                         // [0xc0cfd0] Final|Native|Public|BlueprintCallable 
	// void SetOptions(TArray<FUIDropdownOptionData>& InOptions);                                                               // [0xc0cc40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetMaxHeight(float NewValue);                                                                                       // [0xc0cbc0] Final|Native|Public|BlueprintCallable 
	// void SetHorizontalPosition(EUIDropdownHorizontalPosition InValue);                                                       // [0xc0cab0] Final|Native|Public|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterSelectionChangeEvent(FDelegateProperty& InDelegate);                                  // [0xc0c410] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void MarkRecreateList();                                                                                                 // [0xc0c170] Final|Native|Public|BlueprintCallable 
	// void Hide();                                                                                                             // [0xc0c150] Final|Native|Public|BlueprintCallable 
	// EUIDropdownVerticalPosition GetVerticalPosition();                                                                       // [0xc0c130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetVerticalOverlap();                                                                                               // [0xc0c110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetValue();                                                                                                      // [0xc0c0f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<FUIDropdownOptionData> GetOptions();                                                                              // [0xc0be70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FUIDropdownOptionData GetOption(int32_t Index);                                                                          // [0xc0bdb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetMaxHeight();                                                                                                    // [0xc0bd90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EUIDropdownHorizontalPosition GetHorizontalPosition();                                                                   // [0xc0baf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FUIDropdownOptionData GetCurrentOption();                                                                                // [0xc0ba10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void AddOptions(TArray<FUIDropdownOptionData>& InOptions);                                                               // [0xc0b930] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LGUI.UIDropdownItemComponent
/// Size: 0x0050 (80 bytes) (0x0000C0 - 0x000110) align 8 pad: 0x0000
class UUIDropdownItemComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	SDK_UNDEFINED(8,792) /* TWeakObjectPtr<AUITextActor*> */ __um(TextActor);                                      // 0x00C8   (0x0008)  
	SDK_UNDEFINED(8,793) /* TWeakObjectPtr<AUITextActor*> */ __um(SecondTextActor);                                // 0x00D0   (0x0008)  
	SDK_UNDEFINED(8,794) /* TWeakObjectPtr<AUISpriteActor*> */ __um(SpriteActor);                                  // 0x00D8   (0x0008)  
	FLGUIComponentReference                            Toggle;                                                     // 0x00E0   (0x0028)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Class /Script/LGUI.UIScrollViewComponent
/// Size: 0x00D0 (208 bytes) (0x0000E8 - 0x0001B8) align 8 pad: 0x0000
class UUIScrollViewComponent : public ULGUIBehaviour
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x00E8   (0x0020)  MISSED
	SDK_UNDEFINED(8,795) /* TWeakObjectPtr<AUIBaseActor*> */ __um(Content);                                        // 0x0108   (0x0008)  
	bool                                               Horizontal;                                                 // 0x0110   (0x0001)  
	bool                                               Vertical;                                                   // 0x0111   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0112   (0x0002)  MISSED
	float                                              ScrollSensitivity;                                          // 0x0114   (0x0004)  
	bool                                               AllowEventBubbleUp;                                         // 0x0118   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0119   (0x0003)  MISSED
	float                                              DecelerationRate;                                           // 0x011C   (0x0004)  
	float                                              Elasticity;                                                 // 0x0120   (0x0004)  
	float                                              ScrollOutOfRangeModulus;                                    // 0x0124   (0x0004)  
	bool                                               bUnderSizeScrollEnabled;                                    // 0x0128   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0129   (0x0003)  MISSED
	SDK_UNDEFINED(8,796) /* TWeakObjectPtr<UUIItem*> */ __um(ContentUIItem);                                       // 0x012C   (0x0008)  
	SDK_UNDEFINED(8,797) /* TWeakObjectPtr<UUIItem*> */ __um(ContentParentUIItem);                                 // 0x0134   (0x0008)  
	unsigned char                                      UnknownData04_6[0x64];                                      // 0x013C   (0x0064)  MISSED
	SDK_UNDEFINED(20,798) /* FDelegateProperty */      __um(OnScrollValueChange);                                  // 0x01A0   (0x0014)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x01B4   (0x0004)  MISSED
	// void StopMovement();                                                                                                     // [0xc27d70] Final|Native|Public|BlueprintCallable 
	// void SetVertical(bool Value);                                                                                            // [0xc27840] Final|Native|Public|BlueprintCallable 
	// void SetUnderSizeScrollEnabled(bool bEnabled);                                                                           // [0xc27500] Final|Native|Public|BlueprintCallable 
	// void SetScrollValue(FVector2D Value);                                                                                    // [0xc27130] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetScrollUseDebug(bool Value);                                                                                      // [0xc270b0] Final|Native|Static|Public|BlueprintCallable 
	// void SetScrollSensitivityDebug(float Value);                                                                             // [0xc27030] Final|Native|Static|Public|BlueprintCallable 
	// void SetScrollProgressIncrement(float Value);                                                                            // [0xc26fb0] Final|Native|Public|BlueprintCallable 
	// void SetScrollProgress(float Value);                                                                                     // [0xc26f30] Final|Native|Public|BlueprintCallable 
	// void SetScrollOutOfRangeModulusDebug(float Value);                                                                       // [0xc26eb0] Final|Native|Static|Public|BlueprintCallable 
	// void SetHorizontal(bool Value);                                                                                          // [0xc26d10] Final|Native|Public|BlueprintCallable 
	// void SetElasticityDebug(float Value);                                                                                    // [0xc26b90] Final|Native|Static|Public|BlueprintCallable 
	// void SetDecelerationRateDebug(float Value);                                                                              // [0xc26b10] Final|Native|Static|Public|BlueprintCallable 
	// bool GetVertical();                                                                                                      // [0xc264e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetUnderSizeScrollEnabled();                                                                                        // [0xc26410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetScrollUseDebug();                                                                                                // [0xc26390] Final|Native|Static|Public|BlueprintCallable 
	// float GetScrollSensitivityDebug();                                                                                       // [0xc26360] Final|Native|Static|Public|BlueprintCallable 
	// float GetScrollOutOfRangeModulusDebug();                                                                                 // [0xc26330] Final|Native|Static|Public|BlueprintCallable 
	// bool GetHorizontal();                                                                                                    // [0xc26170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetElasticityDegbug();                                                                                             // [0xc26100] Final|Native|Static|Public|BlueprintCallable 
	// float GetDecelerationRateDegbug();                                                                                       // [0xc260d0] Final|Native|Static|Public|BlueprintCallable 
	// class AUIBaseActor* GetContent();                                                                                        // [0xc26090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIScrollViewWithScrollbarComponent
/// Size: 0x0038 (56 bytes) (0x0001B8 - 0x0001F0) align 8 pad: 0x0000
class UUIScrollViewWithScrollbarComponent : public UUIScrollViewComponent
{ 
public:
	SDK_UNDEFINED(8,799) /* TWeakObjectPtr<AUIBaseActor*> */ __um(Viewport);                                       // 0x01B8   (0x0008)  
	SDK_UNDEFINED(8,800) /* TWeakObjectPtr<AUIBaseActor*> */ __um(HorizontalScrollbar);                            // 0x01C0   (0x0008)  
	EScrollViewScrollbarVisibility                     HorizontalScrollbarVisibility;                              // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01C9   (0x0003)  MISSED
	SDK_UNDEFINED(8,801) /* TWeakObjectPtr<AUIBaseActor*> */ __um(VerticalScrollbar);                              // 0x01CC   (0x0008)  
	EScrollViewScrollbarVisibility                     VerticalScrollbarVisibility;                                // 0x01D4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01D5   (0x0003)  MISSED
	SDK_UNDEFINED(8,802) /* TWeakObjectPtr<UUIScrollbarComponent*> */ __um(HorizontalScrollbarComp);               // 0x01D8   (0x0008)  
	SDK_UNDEFINED(8,803) /* TWeakObjectPtr<UUIScrollbarComponent*> */ __um(VerticalScrollbarComp);                 // 0x01E0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x01E8   (0x0002)  MISSED
	bool                                               IsChangeNavigation;                                         // 0x01EA   (0x0001)  
	unsigned char                                      UnknownData03_7[0x5];                                       // 0x01EB   (0x0005)  MISSED
	// void UnBindParentUIItem(class UUISelectableComponent* Component);                                                        // [0xc27db0] Native|Public|BlueprintCallable 
	// void SetVerticalScrollbarVisibility(EScrollViewScrollbarVisibility Value);                                               // [0xc278d0] Final|Native|Public|BlueprintCallable 
	// void SetHorizontalScrollbarVisibility(EScrollViewScrollbarVisibility Value);                                             // [0xc26da0] Final|Native|Public|BlueprintCallable 
	// void ScrollToTop(FVector2D& NewPosition, class UUIItem* UIItem);                                                         // [0xc26a40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void ScrollToSelectableComponent(class UUISelectableComponent* Component);                                               // [0xc269b0] Native|Public|BlueprintCallable 
	// void ScrollToRight(FVector2D& NewPosition, class UUIItem* UIItem);                                                       // [0xc268e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void ScrollToLeft(FVector2D& NewPosition, class UUIItem* UIItem);                                                        // [0xc26810] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void ScrollToBottom(FVector2D& NewPosition, class UUIItem* UIItem);                                                      // [0xc26740] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void ScrollTo(class UUIItem* UIItem);                                                                                    // [0xc266b0] Final|Native|Public|BlueprintCallable 
	// void ResetIsChangeNavigation();                                                                                          // [0xc26670] Final|Native|Public|BlueprintCallable 
	// class AUIBaseActor* GetViewport();                                                                                       // [0xc26560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EScrollViewScrollbarVisibility GetVerticalScrollbarVisibility();                                                         // [0xc26540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class AUIBaseActor* GetVerticalScrollbar();                                                                              // [0xc26500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetOutOfBottomBoundsType(class UUIItem* UIItem, EOutOfBoundsType& OutOfTopOrBottomType, EOutOfBoundsType& OutOfLeftOrRightType); // [0xc26210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// EScrollViewScrollbarVisibility GetHorizontalScrollbarVisibility();                                                       // [0xc261d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class AUIBaseActor* GetHorizontalScrollbar();                                                                            // [0xc26190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUISelectableComponent* FindNavigationComponent(class UUISelectableComponent* Component, FVector Direction, UINavigationWrapMode Mode, bool bHasOtherNode); // [0xc25f10] Native|Public|HasDefaults|BlueprintCallable 
	// void BindParentUIItem(class UUISelectableComponent* Component);                                                          // [0xc25b40] Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIDynScrollViewComponent
/// Size: 0x01A8 (424 bytes) (0x0001F0 - 0x000398) align 8 pad: 0x0000
class UUIDynScrollViewComponent : public UUIScrollViewWithScrollbarComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x01F0   (0x0010)  MISSED
	SDK_UNDEFINED(8,804) /* TWeakObjectPtr<AUIBaseActor*> */ __um(TemplateItem);                                   // 0x0200   (0x0008)  
	int32_t                                            TotalItemNum;                                               // 0x0208   (0x0004)  
	bool                                               ItemDefaultUIActive;                                        // 0x020C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x020D   (0x0003)  MISSED
	float                                              SpacingHorizontal;                                          // 0x0210   (0x0004)  
	float                                              SpacingVertical;                                            // 0x0214   (0x0004)  
	float                                              PaddingHorizontal;                                          // 0x0218   (0x0004)  
	float                                              PaddingVertical;                                            // 0x021C   (0x0004)  
	float                                              GridAnimationStartTime;                                     // 0x0220   (0x0004)  
	float                                              GridAnimationInterval;                                      // 0x0224   (0x0004)  
	bool                                               IsInAnimation;                                              // 0x0228   (0x0001)  
	bool                                               SizeMatchContent;                                           // 0x0229   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x022A   (0x0002)  MISSED
	SDK_UNDEFINED(20,805) /* FDelegateProperty */      __um(OnItemCreate);                                         // 0x022C   (0x0014)  
	SDK_UNDEFINED(20,806) /* FDelegateProperty */      __um(OnItemUpdate);                                         // 0x0240   (0x0014)  
	SDK_UNDEFINED(20,807) /* FDelegateProperty */      __um(ItemSizeDelegate);                                     // 0x0254   (0x0014)  
	SDK_UNDEFINED(20,808) /* FDelegateProperty */      __um(OnItemClear);                                          // 0x0268   (0x0014)  
	SDK_UNDEFINED(20,809) /* FDelegateProperty */      __um(OnDestroyCallBack);                                    // 0x027C   (0x0014)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0290   (0x0010)  MISSED
	SDK_UNDEFINED(16,810) /* TArray<TWeakObjectPtr<AUIBaseActor*>> */ __um(DisplayItemArray);                      // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,811) /* TArray<TWeakObjectPtr<AUIBaseActor*>> */ __um(IdleItemArray);                         // 0x02B0   (0x0010)  
	SDK_UNDEFINED(80,812) /* TMap<AUIBaseActor*, AUIBaseActor*> */ __um(ToUsingItemMap);                           // 0x02C0   (0x0050)  
	unsigned char                                      UnknownData04_7[0x88];                                      // 0x0310   (0x0088)  MISSED
	// void SetInAnimation(bool State);                                                                                         // [0xc0cb30] Native|Public|BlueprintCallable 
	// void SetGridAnimationStartTime(float Value);                                                                             // [0xc0ca20] Native|Public|BlueprintCallable 
	// void SetGridAnimationInterval(float Value);                                                                              // [0xc0c990] Native|Public|BlueprintCallable 
	// void ScrollToUIItem(class UUIItem* UIItem, bool bScrollToTop);                                                           // [0xc0c840] Final|Native|Public|BlueprintCallable 
	// void ScrollToStartItemIndex(bool bScrollToTop, float Offset);                                                            // [0xc0c770] Final|Native|Public|BlueprintCallable 
	// void ScrollToNextLine(bool bReversed);                                                                                   // [0xc0c6e0] Final|Native|Public|BlueprintCallable 
	// void ScrollToLastItem();                                                                                                 // [0xc0c6c0] Final|Native|Public|BlueprintCallable 
	// void ScrollToItemIndex(int32_t ItemIndex, bool bScrollToTop, float Offset);                                              // [0xc0c5b0] Final|Native|Public|BlueprintCallable 
	// void ScrollToEndItemIndex(bool bScrollToTop, float Offset);                                                              // [0xc0c4e0] Final|Native|Public|BlueprintCallable 
	// void RefreshByData(class AUIBaseActor* Item, int32_t ItemNum, bool KeepContentPosition);                                 // [0xc0c300] Final|Native|Public|BlueprintCallable 
	// void Refresh();                                                                                                          // [0xc0c2e0] Final|Native|Public|BlueprintCallable 
	// void NavigateScrollToUIItem(class UUIItem* UIItem, bool bReversed, UINavigationWrapMode Mode);                           // [0xc0c190] Final|Native|Public|BlueprintCallable 
	// class AUIBaseActor* GetRealUsingItem(int32_t ItemIndex);                                                                 // [0xc0bfc0] Final|Native|Public|BlueprintCallable 
	// bool GetItemIndex(int32_t DisplayIndex, int32_t& ItemIndex);                                                             // [0xc0bcc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetItemDisplayIndex(int32_t ItemIndex, int32_t& DisplayIndex);                                                      // [0xc0bbf0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// class AUIBaseActor* GetItem(int32_t ItemIndex);                                                                          // [0xc0bb50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetInAnimation();                                                                                                   // [0xc0bb10] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetGridAnimationStartTime();                                                                                       // [0xc0bab0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetGridAnimationInterval();                                                                                        // [0xc0ba70] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIGeometryModifierBase
/// Size: 0x0018 (24 bytes) (0x0000C0 - 0x0000D8) align 8 pad: 0x0000
class UUIGeometryModifierBase : public UActorComponent
{ 
public:
	int32_t                                            executeOrder;                                               // 0x00C0   (0x0004)  
	FName                                              ComponentName;                                              // 0x00C4   (0x000C)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Class /Script/LGUI.UIEffectGradientColor
/// Size: 0x0018 (24 bytes) (0x0000D8 - 0x0000F0) align 8 pad: 0x0000
class UUIEffectGradientColor : public UUIGeometryModifierBase
{ 
public:
	EUIEffectGradientColorDirection                    directionType;                                              // 0x00D8   (0x0001)  
	bool                                               multiplySourceAlpha;                                        // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00DA   (0x0002)  MISSED
	FColor                                             color1;                                                     // 0x00DC   (0x0004)  
	FColor                                             color2;                                                     // 0x00E0   (0x0004)  
	FColor                                             color3;                                                     // 0x00E4   (0x0004)  
	FColor                                             color4;                                                     // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Class /Script/LGUI.UIEffectLongShadow
/// Size: 0x0020 (32 bytes) (0x0000D8 - 0x0000F8) align 8 pad: 0x0000
class UUIEffectLongShadow : public UUIGeometryModifierBase
{ 
public:
	FColor                                             ShadowColor;                                                // 0x00D8   (0x0004)  
	FVector                                            shadowSize;                                                 // 0x00DC   (0x000C)  
	char                                               shadowSegment;                                              // 0x00E8   (0x0001)  
	bool                                               useGradientColor;                                           // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00EA   (0x0002)  MISSED
	FColor                                             gradientColor;                                              // 0x00EC   (0x0004)  
	bool                                               multiplySourceAlpha;                                        // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00F1   (0x0007)  MISSED
	// void SetUseGradientColor(bool newBool);                                                                                  // [0xc0cf40] Final|Native|Public|BlueprintCallable 
	// void SetShadowSize(FVector newSize);                                                                                     // [0xc0ce20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetShadowSegment(char newSegment);                                                                                  // [0xc0cda0] Final|Native|Public|BlueprintCallable 
	// void SetShadowColor(FColor NewColor);                                                                                    // [0xc0c910] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetGradientColor(FColor NewColor);                                                                                  // [0xc0c910] Final|Native|Public|HasDefaults|BlueprintCallable 
	// bool GetUseGradientColor();                                                                                              // [0xc0c0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector GetShadowSize();                                                                                                 // [0xc0c080] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// char GetShadowSegments();                                                                                                // [0xc0c060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FColor GetShadowColor();                                                                                                 // [0xc0bf70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FColor GetGradientColor();                                                                                               // [0xbf2b20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectOutline
/// Size: 0x0010 (16 bytes) (0x0000D8 - 0x0000E8) align 8 pad: 0x0000
class UUIEffectOutline : public UUIGeometryModifierBase
{ 
public:
	FColor                                             OutlineColor;                                               // 0x00D8   (0x0004)  
	FVector2D                                          OutlineSize;                                                // 0x00DC   (0x0008)  
	bool                                               multiplySourceAlpha;                                        // 0x00E4   (0x0001)  
	bool                                               use8Direction;                                              // 0x00E5   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x00E6   (0x0002)  MISSED
	// void SetUse8Direction(bool NewValue);                                                                                    // [0xc0ceb0] Final|Native|Public|BlueprintCallable 
	// void SetOutlineSize(FVector2D newSize);                                                                                  // [0xc0cd20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetOutlineColor(FColor NewColor);                                                                                   // [0xc0c910] Final|Native|Public|HasDefaults|BlueprintCallable 
	// bool GetUse8Direction();                                                                                                 // [0xc0c0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetOutlineSize();                                                                                              // [0xc0bf90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FColor GetOutlineColor();                                                                                                // [0xc0bf70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectPositionAsUV
/// Size: 0x0008 (8 bytes) (0x0000D8 - 0x0000E0) align 8 pad: 0x0000
class UUIEffectPositionAsUV : public UUIGeometryModifierBase
{ 
public:
	char                                               uvChannel;                                                  // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/LGUI.UIEffectShadow
/// Size: 0x0010 (16 bytes) (0x0000D8 - 0x0000E8) align 8 pad: 0x0000
class UUIEffectShadow : public UUIGeometryModifierBase
{ 
public:
	FColor                                             ShadowColor;                                                // 0x00D8   (0x0004)  
	bool                                               multiplySourceAlpha;                                        // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
	FVector2D                                          ShadowOffset;                                               // 0x00E0   (0x0008)  
	// void SetShadowOffset(FVector2D newOffset);                                                                               // [0xc11580] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetShadowColor(FColor NewColor);                                                                                    // [0xc0c910] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector2D GetShadowOffset();                                                                                             // [0xc108b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FColor GetShadowColor();                                                                                                 // [0xc0bf70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_Selector
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UUIEffectTextAnimation_Selector : public UObject
{ 
public:
	float                                              Offset;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
	// void SetOffset(float Value);                                                                                             // [0xc11040] Final|Native|Public|BlueprintCallable 
	// float GetOffset();                                                                                                       // [0xc10680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_Property
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UUIEffectTextAnimation_Property : public UObject
{ 
public:
};

/// Class /Script/LGUI.UIEffectTextAnimation
/// Size: 0x0038 (56 bytes) (0x0000D8 - 0x000110) align 8 pad: 0x0000
class UUIEffectTextAnimation : public UUIGeometryModifierBase
{ 
public:
	class UUIEffectTextAnimation_Selector*             Selector;                                                   // 0x00D8   (0x0008)  
	TArray<class UUIEffectTextAnimation_Property*>     properties;                                                 // 0x00E0   (0x0010)  
	class UUIText*                                     UIText;                                                     // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00F8   (0x0018)  MISSED
	// void SetSelectorOffset(float Value);                                                                                     // [0xc11500] Final|Native|Public|BlueprintCallable 
	// void SetSelector(class UUIEffectTextAnimation_Selector* Value);                                                          // [0xc11470] Final|Native|Public|BlueprintCallable 
	// void SetProperty(int32_t Index, class UUIEffectTextAnimation_Property* Value);                                           // [0xc11200] Final|Native|Public|BlueprintCallable 
	// void SetProperties(TArray<UUIEffectTextAnimation_Property*>& Value);                                                     // [0xc11150] Final|Native|Public|HasOutParms|BlueprintCallable 
	// float GetSelectorOffset();                                                                                               // [0xc10880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUIEffectTextAnimation_Selector* GetSelector();                                                                    // [0xc10860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUIEffectTextAnimation_Property* GetProperty(int32_t Index);                                                       // [0xc107a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<UUIEffectTextAnimation_Property*> GetProperties();                                                                // [0xc106d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_PropertyWithEase
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UUIEffectTextAnimation_PropertyWithEase : public UUIEffectTextAnimation_Property
{ 
public:
	LTweenEase                                         easeType;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	class UCurveFloat*                                 easeCurve;                                                  // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0040   (0x0010)  MISSED
	// void SetEaseType(LTweenEase Value);                                                                                      // [0xc10b00] Final|Native|Public|BlueprintCallable 
	// void SetEaseCurve(class UCurveFloat* Value);                                                                             // [0xc10a70] Final|Native|Public|BlueprintCallable 
	// LTweenEase GetEaseType();                                                                                                // [0xc10520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UCurveFloat* GetCurveFloat();                                                                                      // [0xc10500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_PositionProperty
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UUIEffectTextAnimation_PositionProperty : public UUIEffectTextAnimation_PropertyWithEase
{ 
public:
	FVector                                            Position;                                                   // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
	// void SetPosition(FVector Value);                                                                                         // [0xc110c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector GetPosition();                                                                                                   // [0xc106a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_PositionRandomProperty
/// Size: 0x0020 (32 bytes) (0x000050 - 0x000070) align 8 pad: 0x0000
class UUIEffectTextAnimation_PositionRandomProperty : public UUIEffectTextAnimation_PropertyWithEase
{ 
public:
	int32_t                                            Seed;                                                       // 0x0050   (0x0004)  
	FVector                                            Min;                                                        // 0x0054   (0x000C)  
	FVector                                            Max;                                                        // 0x0060   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
	// void SetSeed(int32_t Value);                                                                                             // [0xc11350] Final|Native|Public|BlueprintCallable 
	// void SetMin(FVector Value);                                                                                              // [0xc10fb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetMax(FVector Value);                                                                                              // [0xc10ea0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// int32_t GetSeed();                                                                                                       // [0xc104e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector GetMin();                                                                                                        // [0xc10650] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FVector GetMax();                                                                                                        // [0xc10600] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_RotationProperty
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UUIEffectTextAnimation_RotationProperty : public UUIEffectTextAnimation_PropertyWithEase
{ 
public:
	FRotator                                           Rotator;                                                    // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
	// void SetRotator(FRotator Value);                                                                                         // [0xc110c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FRotator GetRotator();                                                                                                   // [0xc106a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_RotationRandomProperty
/// Size: 0x0020 (32 bytes) (0x000050 - 0x000070) align 8 pad: 0x0000
class UUIEffectTextAnimation_RotationRandomProperty : public UUIEffectTextAnimation_PropertyWithEase
{ 
public:
	int32_t                                            Seed;                                                       // 0x0050   (0x0004)  
	FRotator                                           Min;                                                        // 0x0054   (0x000C)  
	FRotator                                           Max;                                                        // 0x0060   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
	// void SetSeed(int32_t Value);                                                                                             // [0xc11350] Final|Native|Public|BlueprintCallable 
	// void SetMin(FRotator Value);                                                                                             // [0xc10fb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetMax(FRotator Value);                                                                                             // [0xc10ea0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// int32_t GetSeed();                                                                                                       // [0xc104e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FRotator GetMin();                                                                                                       // [0xc10650] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FRotator GetMax();                                                                                                       // [0xc10600] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_ScaleProperty
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UUIEffectTextAnimation_ScaleProperty : public UUIEffectTextAnimation_PropertyWithEase
{ 
public:
	FVector                                            Scale;                                                      // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
	// void SetScale(FVector Value);                                                                                            // [0xc110c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector GetScale();                                                                                                      // [0xc106a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_ScaleRandomProperty
/// Size: 0x0020 (32 bytes) (0x000050 - 0x000070) align 8 pad: 0x0000
class UUIEffectTextAnimation_ScaleRandomProperty : public UUIEffectTextAnimation_PropertyWithEase
{ 
public:
	int32_t                                            Seed;                                                       // 0x0050   (0x0004)  
	FVector                                            Min;                                                        // 0x0054   (0x000C)  
	FVector                                            Max;                                                        // 0x0060   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
	// void SetSeed(int32_t Value);                                                                                             // [0xc11350] Final|Native|Public|BlueprintCallable 
	// void SetMin(FVector Value);                                                                                              // [0xc10fb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetMax(FVector Value);                                                                                              // [0xc10ea0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// int32_t GetSeed();                                                                                                       // [0xc104e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector GetMin();                                                                                                        // [0xc10650] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FVector GetMax();                                                                                                        // [0xc10600] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_AlphaProperty
/// Size: 0x0008 (8 bytes) (0x000050 - 0x000058) align 8 pad: 0x0000
class UUIEffectTextAnimation_AlphaProperty : public UUIEffectTextAnimation_PropertyWithEase
{ 
public:
	float                                              ALPHA;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
	// void SetAlpha(float Value);                                                                                              // [0xc10970] Final|Native|Public|BlueprintCallable 
	// float GetAlpha();                                                                                                        // [0xc104e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_ColorProperty
/// Size: 0x0008 (8 bytes) (0x000050 - 0x000058) align 8 pad: 0x0000
class UUIEffectTextAnimation_ColorProperty : public UUIEffectTextAnimation_PropertyWithEase
{ 
public:
	FColor                                             Color;                                                      // 0x0050   (0x0004)  
	bool                                               useHSV;                                                     // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0055   (0x0003)  MISSED
	// void SetUseHSV(bool Value);                                                                                              // [0xc11720] Final|Native|Public|BlueprintCallable 
	// void SetColor(FColor Value);                                                                                             // [0xc109f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// bool GetUseHSV();                                                                                                        // [0xc10930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FColor GetColor();                                                                                                       // [0xc104e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_ColorRandomProperty
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UUIEffectTextAnimation_ColorRandomProperty : public UUIEffectTextAnimation_PropertyWithEase
{ 
public:
	int32_t                                            Seed;                                                       // 0x0050   (0x0004)  
	FColor                                             Min;                                                        // 0x0054   (0x0004)  
	FColor                                             Max;                                                        // 0x0058   (0x0004)  
	bool                                               useHSV;                                                     // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x005D   (0x0003)  MISSED
	// void SetUseHSV(bool Value);                                                                                              // [0xc117b0] Final|Native|Public|BlueprintCallable 
	// void SetSeed(int32_t Value);                                                                                             // [0xc11350] Final|Native|Public|BlueprintCallable 
	// void SetMin(FColor Value);                                                                                               // [0xc10f30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetMax(FColor Value);                                                                                               // [0xc10e20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// bool GetUseHSV();                                                                                                        // [0xc10950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetSeed();                                                                                                       // [0xc104e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FColor GetMin();                                                                                                         // [0xc10630] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FColor GetMax();                                                                                                         // [0xc105e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_PropertyWithWave
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UUIEffectTextAnimation_PropertyWithWave : public UUIEffectTextAnimation_Property
{ 
public:
	float                                              Frequency;                                                  // 0x0030   (0x0004)  
	float                                              Speed;                                                      // 0x0034   (0x0004)  
	bool                                               flipDirection;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0039   (0x000F)  MISSED
	class UUIText*                                     UIText;                                                     // 0x0048   (0x0008)  
	// void SetFrequency(float Value);                                                                                          // [0xc10da0] Final|Native|Public|BlueprintCallable 
	// float GetFrequency();                                                                                                    // [0xc105c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_PositionWaveProperty
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UUIEffectTextAnimation_PositionWaveProperty : public UUIEffectTextAnimation_PropertyWithWave
{ 
public:
	FVector                                            Position;                                                   // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
	// void SetPosition(FVector Value);                                                                                         // [0xc110c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector GetPosition();                                                                                                   // [0xc106a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_RotationWaveProperty
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UUIEffectTextAnimation_RotationWaveProperty : public UUIEffectTextAnimation_PropertyWithWave
{ 
public:
	FRotator                                           Rotator;                                                    // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
	// void SetRotator(FRotator Value);                                                                                         // [0xc110c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FRotator GetRotator();                                                                                                   // [0xc106a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_ScaleWaveProperty
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UUIEffectTextAnimation_ScaleWaveProperty : public UUIEffectTextAnimation_PropertyWithWave
{ 
public:
	FVector                                            Scale;                                                      // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
	// void SetScale(FVector Value);                                                                                            // [0xc110c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector GetScale();                                                                                                      // [0xc106a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_RangeSelector
/// Size: 0x0028 (40 bytes) (0x000038 - 0x000060) align 8 pad: 0x0000
class UUIEffectTextAnimation_RangeSelector : public UUIEffectTextAnimation_Selector
{ 
public:
	float                                              Range;                                                      // 0x0038   (0x0004)  
	bool                                               flipDirection;                                              // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              Start;                                                      // 0x0040   (0x0004)  
	float                                              End;                                                        // 0x0044   (0x0004)  
	bool                                               lineByLine;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x17];                                      // 0x0049   (0x0017)  MISSED
	// void SetStart(float Value);                                                                                              // [0xc10b80] Final|Native|Public|BlueprintCallable 
	// void SetRange(float Value);                                                                                              // [0xc112d0] Final|Native|Public|BlueprintCallable 
	// void SetFlipDirection(bool Value);                                                                                       // [0xc10c80] Final|Native|Public|BlueprintCallable 
	// void SetEnd(float Value);                                                                                                // [0xc10c00] Final|Native|Public|BlueprintCallable 
	// float GetStart();                                                                                                        // [0xc10540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetRange();                                                                                                        // [0xc10840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetFlipDirection();                                                                                                 // [0xc10580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetEnd();                                                                                                          // [0xc10560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_RandomSelector
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UUIEffectTextAnimation_RandomSelector : public UUIEffectTextAnimation_Selector
{ 
public:
	int32_t                                            Seed;                                                       // 0x0038   (0x0004)  
	float                                              Start;                                                      // 0x003C   (0x0004)  
	float                                              End;                                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
	// void SetStart(float Value);                                                                                              // [0xc11600] Final|Native|Public|BlueprintCallable 
	// void SetSeed(int32_t Value);                                                                                             // [0xc113e0] Final|Native|Public|BlueprintCallable 
	// void SetEnd(float Value);                                                                                                // [0xc10b80] Final|Native|Public|BlueprintCallable 
	// float GetStart();                                                                                                        // [0xc108e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetSeed();                                                                                                       // [0xc10840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetEnd();                                                                                                          // [0xc10540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEffectTextAnimation_RichTextTagSelector
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class UUIEffectTextAnimation_RichTextTagSelector : public UUIEffectTextAnimation_Selector
{ 
public:
	float                                              Range;                                                      // 0x0038   (0x0004)  
	FName                                              TagName;                                                    // 0x003C   (0x000C)  
	bool                                               flipDirection;                                              // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
	// void SetTagName(FName& Value);                                                                                           // [0xc11680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetRange(float Value);                                                                                              // [0xc112d0] Final|Native|Public|BlueprintCallable 
	// void SetFlipDirection(bool Value);                                                                                       // [0xc10d10] Final|Native|Public|BlueprintCallable 
	// FName GetTagName();                                                                                                      // [0xc10900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetRange();                                                                                                        // [0xc10840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetFlipDirection();                                                                                                 // [0xc105a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIEventBlocker
/// Size: 0x0010 (16 bytes) (0x000388 - 0x000398) align 8 pad: 0x0000
class AUIEventBlocker : public AUIContainerActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0388   (0x0010)  MISSED
};

/// Class /Script/LGUI.UIEventBlockerComponent
/// Size: 0x0040 (64 bytes) (0x0000C0 - 0x000100) align 8 pad: 0x0000
class UUIEventBlockerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x00C0   (0x0038)  MISSED
	bool                                               AllowEventBubbleUp;                                         // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Class /Script/LGUI.UIEventTriggerComponent
/// Size: 0x02C8 (712 bytes) (0x0000C0 - 0x000388) align 8 pad: 0x0000
class UUIEventTriggerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x00C0   (0x0038)  MISSED
	bool                                               AllowEventBubbleUp;                                         // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
	FLGUIDrawableEvent                                 OnPointerEnter;                                             // 0x0100   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerExit;                                              // 0x0118   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerDown;                                              // 0x0130   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerUp;                                                // 0x0148   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerCancel;                                            // 0x0160   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerClick;                                             // 0x0178   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerBeginDrag;                                         // 0x0190   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerDrag;                                              // 0x01A8   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerEndDrag;                                           // 0x01C0   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerDragEnter;                                         // 0x01D8   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerDragExit;                                          // 0x01F0   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerDragDrop;                                          // 0x0208   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerScroll;                                            // 0x0220   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerSelect;                                            // 0x0238   (0x0018)  
	FLGUIDrawableEvent                                 OnPointerDeselect;                                          // 0x0250   (0x0018)  
	unsigned char                                      UnknownData02_7[0x120];                                     // 0x0268   (0x0120)  MISSED
	// void UnregisterOnPointerUp(FLGUIDelegateHandleWrapper& InDelegateHandle);                                                // [0xc16610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerSelect(FLGUIDelegateHandleWrapper& InDelegateHandle);                                            // [0xc16580] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerScroll(FLGUIDelegateHandleWrapper& InDelegateHandle);                                            // [0xc164f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerExit(FLGUIDelegateHandleWrapper& InDelegateHandle);                                              // [0xc16460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerEnter(FLGUIDelegateHandleWrapper& InDelegateHandle);                                             // [0xc163d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerEndDrag(FLGUIDelegateHandleWrapper& InDelegateHandle);                                           // [0xc16340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerDragExit(FLGUIDelegateHandleWrapper& InDelegateHandle);                                          // [0xc162d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerDragEnter(FLGUIDelegateHandleWrapper& InDelegateHandle);                                         // [0xc162d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerDragDrop(FLGUIDelegateHandleWrapper& InDelegateHandle);                                          // [0xc16240] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerDrag(FLGUIDelegateHandleWrapper& InDelegateHandle);                                              // [0xc161b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerDown(FLGUIDelegateHandleWrapper& InDelegateHandle);                                              // [0xc16120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerDeselect(FLGUIDelegateHandleWrapper& InDelegateHandle);                                          // [0xc16090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerClick(FLGUIDelegateHandleWrapper& InDelegateHandle);                                             // [0xc16000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterOnPointerBeginDrag(FLGUIDelegateHandleWrapper& InDelegateHandle);                                         // [0xc15f70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerUp(FDelegateProperty& InDelegate);                                           // [0xc159a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerSelect(FDelegateProperty& InDelegate);                                       // [0xc158d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerScroll(FDelegateProperty& InDelegate);                                       // [0xc15800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerExit(FDelegateProperty& InDelegate);                                         // [0xc15730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerEnter(FDelegateProperty& InDelegate);                                        // [0xc15660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerEndDrag(FDelegateProperty& InDelegate);                                      // [0xc15590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerDragExit(FDelegateProperty& InDelegate);                                     // [0xc15500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerDragEnter(FDelegateProperty& InDelegate);                                    // [0xc15500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerDragDrop(FDelegateProperty& InDelegate);                                     // [0xc15430] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerDrag(FDelegateProperty& InDelegate);                                         // [0xc15360] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerDown(FDelegateProperty& InDelegate);                                         // [0xc15290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerDeselect(FDelegateProperty& InDelegate);                                     // [0xc151c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerClick(FDelegateProperty& InDelegate);                                        // [0xc150f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterOnPointerBeginDrag(FDelegateProperty& InDelegate);                                    // [0xc15020] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LGUI.UIExtendButtonComponent
/// Size: 0x0008 (8 bytes) (0x000500 - 0x000508) align 8 pad: 0x0000
class UUIExtendButtonComponent : public UUIButtonComponent
{ 
public:
	int32_t                                            helpGroupId;                                                // 0x0500   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0504   (0x0004)  MISSED
	// void SetDelegateForHelpClick(FDelegateProperty& delegateObj);                                                            // [0xc15b90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LGUI.UIExtendToggleTransitionBase
/// Size: 0x0040 (64 bytes) (0x0000E8 - 0x000128) align 8 pad: 0x0000
class UUIExtendToggleTransitionBase : public ULGUIBehaviour
{ 
public:
	FUIWidget                                          UnCkeckUnHoverWidget;                                       // 0x00E8   (0x0040)  
};

/// Class /Script/LGUI.UIExtendToggle
/// Size: 0x0370 (880 bytes) (0x000388 - 0x0006F8) align 8 pad: 0x0000
class UUIExtendToggle : public UUISelectableComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0388   (0x0010)  MISSED
	SDK_UNDEFINED(16,813) /* FMulticastInlineDelegate */ __um(OnStateChange);                                      // 0x0398   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x03A8   (0x0010)  MISSED
	SDK_UNDEFINED(20,814) /* FDelegateProperty */      __um(CanExecuteChange);                                     // 0x03B8   (0x0014)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x03CC   (0x0004)  MISSED
	SDK_UNDEFINED(16,815) /* FMulticastInlineDelegate */ __um(OnHover);                                            // 0x03D0   (0x0010)  
	SDK_UNDEFINED(16,816) /* FMulticastInlineDelegate */ __um(OnUnHover);                                          // 0x03E0   (0x0010)  
	SDK_UNDEFINED(16,817) /* FMulticastInlineDelegate */ __um(OnUndeterminedClicked);                              // 0x03F0   (0x0010)  
	SDK_UNDEFINED(20,818) /* FDelegateProperty */      __um(OnPostAudioEvent);                                     // 0x0400   (0x0014)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0414   (0x0004)  MISSED
	SDK_UNDEFINED(80,819) /* TMap<EToggleAudioTransitionState, FSoftObjectPath> */ __um(AudioConfig);              // 0x0418   (0x0050)  
	bool                                               bIgnoreSelectedHover;                                       // 0x0468   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0469   (0x0007)  MISSED
	FSoftObjectPath                                    LongPressAudioEvent;                                        // 0x0470   (0x0020)  
	SDK_UNDEFINED(20,820) /* FDelegateProperty */      __um(OnPostAudioStateEvent);                                // 0x0490   (0x0014)  
	SDK_UNDEFINED(20,821) /* FDelegateProperty */      __um(OnPointEnterCallBack);                                 // 0x04A4   (0x0014)  
	SDK_UNDEFINED(20,822) /* FDelegateProperty */      __um(OnPointExitCallBack);                                  // 0x04B8   (0x0014)  
	SDK_UNDEFINED(20,823) /* FDelegateProperty */      __um(OnPointDownCallBack);                                  // 0x04CC   (0x0014)  
	SDK_UNDEFINED(20,824) /* FDelegateProperty */      __um(OnPointUpCallBack);                                    // 0x04E0   (0x0014)  
	SDK_UNDEFINED(20,825) /* FDelegateProperty */      __um(OnPointCancelCallBack);                                // 0x04F4   (0x0014)  
	EToggleState                                       ToggleState;                                                // 0x0508   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0509   (0x0003)  MISSED
	SDK_UNDEFINED(8,826) /* TWeakObjectPtr<AActor*> */ __um(ToggleGroupActor);                                     // 0x050C   (0x0008)  
	bool                                               bToggleOnSelect;                                            // 0x0514   (0x0001)  
	bool                                               bLockStateOnSelect;                                         // 0x0515   (0x0001)  
	bool                                               bCheckToggleSelected;                                       // 0x0516   (0x0001)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x0517   (0x0001)  MISSED
	SDK_UNDEFINED(80,827) /* TMap<EToggleAnimationType, FToggleAnimationPlayInfo> */ __um(ToggleAnimations);       // 0x0518   (0x0050)  
	SDK_UNDEFINED(80,828) /* TMap<EUISelectableInteractionState, FToggleStateAnimation> */ __um(InteractiveAnimations); // 0x0568   (0x0050)  
	SDK_UNDEFINED(80,829) /* TMap<EToggleStateSwitch, FToggleAnimationPlayInfo> */ __um(StateSwitchAnimations);    // 0x05B8   (0x0050)  
	unsigned char                                      UnknownData07_7[0xF0];                                      // 0x0608   (0x00F0)  MISSED
	// void SetToggleStateForce(EToggleState State, bool bFireEvent, bool bIngnoreAnim);                                        // [0xc15e30] Final|Native|Public|BlueprintCallable 
	// EToggleChangeStateResult SetToggleState(EToggleState State, bool bFireEvent);                                            // [0xc15d60] Final|Native|Public|BlueprintCallable 
	// void SetToggleGroup(class AActor* TogGroupActor);                                                                        // [0xc15cd0] Final|Native|Public|BlueprintCallable 
	// void SetAllTransitionsEnable(bool bIsEnable);                                                                            // [0xc15a70] Final|Native|Public|BlueprintCallable 
	// EToggleState GetToggleState();                                                                                           // [0xc15000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUIExtendToggleGroup* GetToggleGroup();                                                                            // [0xc14fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIExtendToggleGroup
/// Size: 0x0048 (72 bytes) (0x0000C0 - 0x000108) align 8 pad: 0x0000
class UUIExtendToggleGroup : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	SDK_UNDEFINED(16,830) /* FMulticastInlineDelegate */ __um(OnToggleGroupActivationChanged);                     // 0x00C8   (0x0010)  
	bool                                               bGroupToggleOnSelect;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00D9   (0x000F)  MISSED
	SDK_UNDEFINED(16,831) /* TArray<TWeakObjectPtr<UUIExtendToggle*>> */ __um(ToggleCollection);                   // 0x00E8   (0x0010)  
	bool                                               bAllowNoneSelect;                                           // 0x00F8   (0x0001)  
	bool                                               bEnable;                                                    // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData02_7[0xE];                                       // 0x00FA   (0x000E)  MISSED
	// void UnBindOnExtendToggleGroupActive();                                                                                  // [0xc15f50] Final|Native|Static|Public|BlueprintCallable 
	// void SetGroupEnable(bool bInEnable);                                                                                     // [0xc15c40] Final|Native|Public|BlueprintCallable 
	// void SetAllowNoneSelect(bool bAllowNoneSelection);                                                                       // [0xc15b00] Final|Native|Public|BlueprintCallable 
	// class UUIExtendToggle* GetCurSelection();                                                                                // [0xc14f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetAllowNoneSelect();                                                                                               // [0xc14f70] Final|Native|Public|BlueprintCallable 
	// void BindOnExtendToggleGroupActive(FDelegateProperty& Delegate);                                                         // [0xc14ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LGUI.ToggleTransitionEditSetting
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FToggleTransitionEditSetting
{ 
	bool                                               bEnableUnDetermined : 1;                                    // 0x0000:0 (0x0001)  
	bool                                               bCustomUnCheckedHover : 1;                                  // 0x0000:1 (0x0001)  
	bool                                               bCustomUnCheckedPressed : 1;                                // 0x0000:2 (0x0001)  
	bool                                               bCustomCheckedHover : 1;                                    // 0x0000:3 (0x0001)  
	bool                                               bCustomCheckedPressed : 1;                                  // 0x0000:4 (0x0001)  
	bool                                               bCustomUnDeterminedHover : 1;                               // 0x0000:5 (0x0001)  
	bool                                               bCustomUnDeterminePressed : 1;                              // 0x0000:6 (0x0001)  
};

/// Struct /Script/LGUI.ExtendToggleColorTransition
/// Size: 0x0027 (39 bytes) (0x000001 - 0x000028) align 4 pad: 0x0000
struct FExtendToggleColorTransition : FToggleTransitionEditSetting
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FColor                                             UnCheckedUnHoverColor;                                      // 0x0004   (0x0004)  
	FColor                                             UnCheckedHoverColor;                                        // 0x0008   (0x0004)  
	FColor                                             UnCheckedPressedColor;                                      // 0x000C   (0x0004)  
	FColor                                             CheckedUnHoverColor;                                        // 0x0010   (0x0004)  
	FColor                                             CheckedHoverColor;                                          // 0x0014   (0x0004)  
	FColor                                             CheckedPressedColor;                                        // 0x0018   (0x0004)  
	FColor                                             UnDeterminedUnHoverColor;                                   // 0x001C   (0x0004)  
	FColor                                             UnDeterminedHoverColor;                                     // 0x0020   (0x0004)  
	FColor                                             UnDeterminedPressedColor;                                   // 0x0024   (0x0004)  
};

/// Struct /Script/LGUI.RenderableAdditionalInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FRenderableAdditionalInfo
{ 
	bool                                               bIsGray : 1;                                                // 0x0000:0 (0x0001)  
	bool                                               bIsColorRevert : 1;                                         // 0x0000:1 (0x0001)  
	bool                                               bUseChangeColor : 1;                                        // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FColor                                             ChangeColor;                                                // 0x0004   (0x0004)  
	float                                              SpriteRotation;                                             // 0x0008   (0x0004)  
};

/// Struct /Script/LGUI.SpriteTransitionOfState
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FSpriteTransitionOfState
{ 
	class ULGUISpriteData_BaseObject*                  Sprite;                                                     // 0x0000   (0x0008)  
	FColor                                             Color;                                                      // 0x0008   (0x0004)  
	bool                                               bSnapSize : 1;                                              // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FRenderableAdditionalInfo                          AdditionInfo;                                               // 0x0010   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/LGUI.ExtendToggleSpriteTransitionState
/// Size: 0x0127 (295 bytes) (0x000001 - 0x000128) align 8 pad: 0x0000
struct FExtendToggleSpriteTransitionState : FToggleTransitionEditSetting
{ 
	unsigned char                                      UnknownData00_3[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSpriteTransitionOfState                           UnCheckedUnHoverState;                                      // 0x0008   (0x0020)  
	FSpriteTransitionOfState                           UnCheckedHoverState;                                        // 0x0028   (0x0020)  
	FSpriteTransitionOfState                           UnCheckedPressedState;                                      // 0x0048   (0x0020)  
	FSpriteTransitionOfState                           CheckedUnHoverState;                                        // 0x0068   (0x0020)  
	FSpriteTransitionOfState                           CheckedHoverState;                                          // 0x0088   (0x0020)  
	FSpriteTransitionOfState                           CheckedPressedState;                                        // 0x00A8   (0x0020)  
	FSpriteTransitionOfState                           UnDetermineUnHoverState;                                    // 0x00C8   (0x0020)  
	FSpriteTransitionOfState                           UnDetermineHoverState;                                      // 0x00E8   (0x0020)  
	FSpriteTransitionOfState                           UnDeterminePressedState;                                    // 0x0108   (0x0020)  
};

/// Class /Script/LGUI.UIExtendToggleSpriteTransition
/// Size: 0x01A8 (424 bytes) (0x000128 - 0x0002D0) align 8 pad: 0x0000
class UUIExtendToggleSpriteTransition : public UUIExtendToggleTransitionBase
{ 
public:
	ESpriteTransitionType                              TransitionType;                                             // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0129   (0x0003)  MISSED
	FExtendToggleColorTransition                       TransitionColors;                                           // 0x012C   (0x0028)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	FExtendToggleSpriteTransitionState                 TransitionState;                                            // 0x0158   (0x0128)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x0280   (0x0050)  MISSED
	// void SetStateSprite(EToggleTransitionState State, class ULGUISpriteData_BaseObject* newSprite, bool ForceNoTriggerOnChange); // [0xc1a9f0] Final|Native|Public|BlueprintCallable 
	// void SetAllStateSprite(class ULGUISpriteData_BaseObject* newSprite);                                                     // [0xc1a000] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LGUI.TextTransitionInfoOfState
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FTextTransitionInfoOfState
{ 
	FColor                                             FontColor;                                                  // 0x0000   (0x0004)  
	float                                              Size;                                                       // 0x0004   (0x0004)  
	UITextFontStyle                                    fontStyle;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/LGUI.ExtendToggleTextTransitionState
/// Size: 0x006F (111 bytes) (0x000001 - 0x000070) align 4 pad: 0x0000
struct FExtendToggleTextTransitionState : FToggleTransitionEditSetting
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FTextTransitionInfoOfState                         UnCheckUnHoverState;                                        // 0x0004   (0x000C)  
	FTextTransitionInfoOfState                         UnCheckHoverState;                                          // 0x0010   (0x000C)  
	FTextTransitionInfoOfState                         UnCheckPressedState;                                        // 0x001C   (0x000C)  
	FTextTransitionInfoOfState                         CheckUnHoverState;                                          // 0x0028   (0x000C)  
	FTextTransitionInfoOfState                         CheckHoverState;                                            // 0x0034   (0x000C)  
	FTextTransitionInfoOfState                         CheckPressedState;                                          // 0x0040   (0x000C)  
	FTextTransitionInfoOfState                         UnDetermineUnHoverState;                                    // 0x004C   (0x000C)  
	FTextTransitionInfoOfState                         UnDetermineHoverState;                                      // 0x0058   (0x000C)  
	FTextTransitionInfoOfState                         UnDeterminePressedState;                                    // 0x0064   (0x000C)  
};

/// Class /Script/LGUI.UIExtendToggleTextTransition
/// Size: 0x0070 (112 bytes) (0x000128 - 0x000198) align 8 pad: 0x0000
class UUIExtendToggleTextTransition : public UUIExtendToggleTransitionBase
{ 
public:
	FExtendToggleTextTransitionState                   TransitionState;                                            // 0x0128   (0x0070)  
};

/// Struct /Script/LGUI.TextureTransitionOfState
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FTextureTransitionOfState
{ 
	FColor                                             Color;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UTexture*                                    Texture;                                                    // 0x0008   (0x0008)  
	bool                                               bSnapSize;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FRenderableAdditionalInfo                          AdditionalInfo;                                             // 0x0014   (0x000C)  
};

/// Struct /Script/LGUI.ExtendToggleTextureTransitionState
/// Size: 0x0127 (295 bytes) (0x000001 - 0x000128) align 8 pad: 0x0000
struct FExtendToggleTextureTransitionState : FToggleTransitionEditSetting
{ 
	unsigned char                                      UnknownData00_3[0x7];                                       // 0x0001   (0x0007)  MISSED
	FTextureTransitionOfState                          UnCheckUnHoverState;                                        // 0x0008   (0x0020)  
	FTextureTransitionOfState                          UnCheckHoverState;                                          // 0x0028   (0x0020)  
	FTextureTransitionOfState                          UnCheckPressedState;                                        // 0x0048   (0x0020)  
	FTextureTransitionOfState                          CheckUnHoverState;                                          // 0x0068   (0x0020)  
	FTextureTransitionOfState                          CheckHoverState;                                            // 0x0088   (0x0020)  
	FTextureTransitionOfState                          CheckPressedState;                                          // 0x00A8   (0x0020)  
	FTextureTransitionOfState                          UnDetermineUnHoverState;                                    // 0x00C8   (0x0020)  
	FTextureTransitionOfState                          UnDetermineHoverState;                                      // 0x00E8   (0x0020)  
	FTextureTransitionOfState                          UnDeterminePressedState;                                    // 0x0108   (0x0020)  
};

/// Class /Script/LGUI.UIExtendToggleTextureTransition
/// Size: 0x01A8 (424 bytes) (0x000128 - 0x0002D0) align 8 pad: 0x0000
class UUIExtendToggleTextureTransition : public UUIExtendToggleTransitionBase
{ 
public:
	ETextureTransitionType                             TransitionType;                                             // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0129   (0x0003)  MISSED
	FExtendToggleColorTransition                       TransitionColors;                                           // 0x012C   (0x0028)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	FExtendToggleTextureTransitionState                TransitionState;                                            // 0x0158   (0x0128)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x0280   (0x0050)  MISSED
	// void SetTargetStateTexture(EToggleTransitionState State, class UTexture* Texture, bool ForceNoTriggerOnChange);          // [0xc1ab10] Final|Native|Public|BlueprintCallable 
	// void SetAllTransitionStateTexture(class UTexture* Texture);                                                              // [0xc1a090] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIFlyoutMenu
/// Size: 0x0038 (56 bytes) (0x0000C0 - 0x0000F8) align 8 pad: 0x0000
class UUIFlyoutMenu : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class AUIBaseActor*                                _RootUIActor;                                               // 0x00C8   (0x0008)  
	class AUIBaseActor*                                _SrcItemActor;                                              // 0x00D0   (0x0008)  
	TArray<class UUIFlyoutMenuItem*>                   _CreatedItemArray;                                          // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00E8   (0x0010)  MISSED
	// class UUIFlyoutMenu* CreateFlyoutMenuFromArray(TArray<FString>& InItemNameArray, FDelegateProperty& InCallback, class AUIBaseActor* InParentActor, int32_t InWidth, EFlyoutMenuVerticalPosition InVerticalPosition, EFlyoutMenuHorizontalAlignment InHorizontalAlign); // [0xc195a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LGUI.UIFlyoutMenuItem
/// Size: 0x0030 (48 bytes) (0x0000C0 - 0x0000F0) align 8 pad: 0x0000
class UUIFlyoutMenuItem : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class AUIBaseActor*                                _RootUIActor;                                               // 0x00C8   (0x0008)  
	class AUITextActor*                                _TextActor;                                                 // 0x00D0   (0x0008)  
	class AUISpriteActor*                              _HighlightSpriteActor;                                      // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00E0   (0x0010)  MISSED
};

/// Class /Script/LGUI.UIForcesCursor
/// Size: 0x00F8 (248 bytes) (0x000218 - 0x000310) align 16 pad: 0x0000
class UUIForcesCursor : public USceneComponent
{ 
public:
	bool                                               IsOrthographic;                                             // 0x0218   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0219   (0x0003)  MISSED
	int32_t                                            ScreenSizeX;                                                // 0x021C   (0x0004)  
	int32_t                                            ScreenSizeY;                                                // 0x0220   (0x0004)  
	FRotator                                           RotatorInfo;                                                // 0x0224   (0x000C)  
	FVector                                            MoveVector;                                                 // 0x0230   (0x000C)  
	FVector                                            OriginPos;                                                  // 0x023C   (0x000C)  
	float                                              FrameStepping;                                              // 0x0248   (0x0004)  
	float                                              MaxAngleX;                                                  // 0x024C   (0x0004)  
	float                                              MaxAngleY;                                                  // 0x0250   (0x0004)  
	float                                              MouseX;                                                     // 0x0254   (0x0004)  
	float                                              MouseY;                                                     // 0x0258   (0x0004)  
	FVector                                            OffsetVector;                                               // 0x025C   (0x000C)  
	FVector                                            AroundPoint;                                                // 0x0268   (0x000C)  
	float                                              GamepadRightX;                                              // 0x0274   (0x0004)  
	float                                              GamepadRightY;                                              // 0x0278   (0x0004)  
	FVector                                            Tilt;                                                       // 0x027C   (0x000C)  
	FVector                                            Gravity;                                                    // 0x0288   (0x000C)  
	FVector                                            RotationRate;                                               // 0x0294   (0x000C)  
	FVector                                            Acceleration;                                               // 0x02A0   (0x000C)  
	unsigned char                                      UnknownData01_7[0x64];                                      // 0x02AC   (0x0064)  MISSED
};

/// Class /Script/LGUI.UIFrameAnimController
/// Size: 0x0030 (48 bytes) (0x0000E8 - 0x000118) align 8 pad: 0x0000
class UUIFrameAnimController : public ULGUIBehaviour
{ 
public:
	float                                              FrameInterval;                                              // 0x00E8   (0x0004)  
	bool                                               bUseCustomFrameCount;                                       // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00ED   (0x0003)  MISSED
	int32_t                                            BeginFrame;                                                 // 0x00F0   (0x0004)  
	int32_t                                            CustomFrameCount;                                           // 0x00F4   (0x0004)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x00F8   (0x0020)  MISSED
	// void Stop();                                                                                                             // [0xc1ad50] Final|Native|Protected|BlueprintCallable 
	// void Resume();                                                                                                           // [0xc19ee0] Final|Native|Protected|BlueprintCallable 
	// void Play(bool bLooping);                                                                                                // [0xc19ae0] Final|Native|Protected|BlueprintCallable 
	// void Pause();                                                                                                            // [0xc19ac0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/LGUI.UILayoutBase
/// Size: 0x0060 (96 bytes) (0x0000E8 - 0x000148) align 8 pad: 0x0000
class UUILayoutBase : public ULGUIBehaviour
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x00E8   (0x0020)  MISSED
	float                                              GridAnimationStartTime;                                     // 0x0108   (0x0004)  
	float                                              GridAnimationInterval;                                      // 0x010C   (0x0004)  
	bool                                               IsInAnimation;                                              // 0x0110   (0x0001)  
	bool                                               bIsScaleCalculated;                                         // 0x0111   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1E];                                      // 0x0112   (0x001E)  MISSED
	SDK_UNDEFINED(20,832) /* FDelegateProperty */      __um(OnRebuildLayoutDelegate);                              // 0x0130   (0x0014)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0144   (0x0004)  MISSED
	// void SetInAnimation(bool State);                                                                                         // [0xc1e650] Native|Protected|BlueprintCallable 
	// void SetGridAnimationStartTime(float Value);                                                                             // [0xc1e430] Native|Protected|BlueprintCallable 
	// void SetGridAnimationInterval(float Value);                                                                              // [0xc1e3a0] Native|Protected|BlueprintCallable 
	// bool GetInAnimation();                                                                                                   // [0xc1d0e0] Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// float GetGridAnimationStartTime();                                                                                       // [0xc1d030] Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// float GetGridAnimationInterval();                                                                                        // [0xc1cff0] Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UILayoutWithAnimation
/// Size: 0x0020 (32 bytes) (0x000148 - 0x000168) align 8 pad: 0x0000
class UUILayoutWithAnimation : public UUILayoutBase
{ 
public:
	EUILayoutChangePositionAnimationType               AnimationType;                                              // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0149   (0x0003)  MISSED
	float                                              AnimationDuration;                                          // 0x014C   (0x0004)  
	TArray<class ULTweener*>                           TweenerArray;                                               // 0x0150   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0160   (0x0008)  MISSED
	// void SetAnimationType(EUILayoutChangePositionAnimationType Value);                                                       // [0xc22650] Final|Native|Public|BlueprintCallable 
	// void SetAnimationDuration(float Value);                                                                                  // [0xc225d0] Final|Native|Public|BlueprintCallable 
	// EUILayoutChangePositionAnimationType GetAnimationType();                                                                 // [0xc21fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetAnimationDuration();                                                                                            // [0xc21fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void CancelAnimation(bool callComplete);                                                                                 // [0xc21d70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIGridLayout
/// Size: 0x0038 (56 bytes) (0x000168 - 0x0001A0) align 8 pad: 0x0000
class UUIGridLayout : public UUILayoutWithAnimation
{ 
public:
	FMargin                                            Padding;                                                    // 0x0168   (0x0010)  
	FVector2D                                          Spacing;                                                    // 0x0178   (0x0008)  
	ELGUILayoutAlignmentType                           align;                                                      // 0x0180   (0x0001)  
	bool                                               LastLineCanAlign;                                           // 0x0181   (0x0001)  
	bool                                               HorizontalOrVertical;                                       // 0x0182   (0x0001)  
	bool                                               DependOnSizeOrCount;                                        // 0x0183   (0x0001)  
	bool                                               ExpendChildSize;                                            // 0x0184   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0185   (0x0003)  MISSED
	FVector2D                                          CellSize;                                                   // 0x0188   (0x0008)  
	uint32_t                                           LineCount;                                                  // 0x0190   (0x0004)  
	bool                                               WidthFitToChildren;                                         // 0x0194   (0x0001)  
	bool                                               HeightFitToChildren;                                        // 0x0195   (0x0001)  
	EGridFitType                                       FitType;                                                    // 0x0196   (0x0001)  
	unsigned char                                      UnknownData01_7[0x9];                                       // 0x0197   (0x0009)  MISSED
	// void SetWidthFitToChildren(bool Value);                                                                                  // [0xc1ac30] Final|Native|Public|BlueprintCallable 
	// void SetSpacing(FVector2D Value);                                                                                        // [0xc1a8f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetPadding(FMargin Value);                                                                                          // [0xc1a860] Final|Native|Public|BlueprintCallable 
	// void SetMaxItemCountInOneLine(int32_t Value);                                                                            // [0xc1a7d0] Final|Native|Public|BlueprintCallable 
	// void SetLineCount(int32_t Value);                                                                                        // [0xc1a7d0] Final|Native|Public|BlueprintCallable 
	// void SetLastLineCanAlign(bool Value);                                                                                    // [0xc1a740] Final|Native|Public|BlueprintCallable 
	// void SetHorizontalOrVertical(bool Value);                                                                                // [0xc1a500] Final|Native|Public|BlueprintCallable 
	// void SetHeightFitToChildren(bool Value);                                                                                 // [0xc1a3e0] Final|Native|Public|BlueprintCallable 
	// void SetExpendChildSize(bool Value);                                                                                     // [0xc1a230] Final|Native|Public|BlueprintCallable 
	// void SetDependOnSizeOrCount(bool Value);                                                                                 // [0xc1a1a0] Final|Native|Public|BlueprintCallable 
	// void SetCellSize(FVector2D Value);                                                                                       // [0xc1a120] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetAlign(ELGUILayoutAlignmentType Value);                                                                           // [0xc19f00] Final|Native|Public|BlueprintCallable 
	// bool GetWidthFitToChildren();                                                                                            // [0xc19a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetSpacing();                                                                                                  // [0xc199e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FMargin GetPadding();                                                                                                    // [0xc199b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetMaxItemCountInOneLine();                                                                                      // [0xc19990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetLineCount();                                                                                                  // [0xc19990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetLastLineCanAlign();                                                                                              // [0xc19970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetHorizontalOrVertical();                                                                                          // [0xc19930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetHeightFitToChildren();                                                                                           // [0xc19910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetExpendChildSize();                                                                                               // [0xc198b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetDependOnSizeOrCount();                                                                                           // [0xc19890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetCellSize();                                                                                                 // [0xc19860] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// ELGUILayoutAlignmentType GetAlign();                                                                                     // [0xbf2c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetActuralRange();                                                                                             // [0xc197f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIHorizontalLayout
/// Size: 0x0030 (48 bytes) (0x000168 - 0x000198) align 8 pad: 0x0000
class UUIHorizontalLayout : public UUILayoutWithAnimation
{ 
public:
	FMargin                                            Padding;                                                    // 0x0168   (0x0010)  
	float                                              Spacing;                                                    // 0x0178   (0x0004)  
	ELGUILayoutAlignmentType                           align;                                                      // 0x017C   (0x0001)  
	bool                                               ExpendChildrenWidth;                                        // 0x017D   (0x0001)  
	bool                                               ExpendChildrenHeight;                                       // 0x017E   (0x0001)  
	bool                                               WidthFitToChildren;                                         // 0x017F   (0x0001)  
	bool                                               HeightFitToChildren;                                        // 0x0180   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0181   (0x0017)  MISSED
	// void SetWidthFitToChildren(bool Value);                                                                                  // [0xc1acc0] Final|Native|Public|BlueprintCallable 
	// void SetSpacing(float Value);                                                                                            // [0xc1a970] Final|Native|Public|BlueprintCallable 
	// void SetPadding(FMargin Value);                                                                                          // [0xc1a860] Final|Native|Public|BlueprintCallable 
	// void SetHeightFitToChildren(bool Value);                                                                                 // [0xc1a470] Final|Native|Public|BlueprintCallable 
	// void SetExpendChildrenWidth(bool Value);                                                                                 // [0xc1a350] Final|Native|Public|BlueprintCallable 
	// void SetExpendChildrenHeight(bool Value);                                                                                // [0xc1a2c0] Final|Native|Public|BlueprintCallable 
	// void SetAlign(ELGUILayoutAlignmentType Value);                                                                           // [0xc19f80] Final|Native|Public|BlueprintCallable 
	// bool GetWidthFitToChildren();                                                                                            // [0xc19a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetSpacing();                                                                                                      // [0xc19a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FMargin GetPadding();                                                                                                    // [0xc199b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetHeightFitToChildren();                                                                                           // [0xbf2c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetExpendChildrenWidth();                                                                                           // [0xc198f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetExpendChildrenHeight();                                                                                          // [0xc198d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// ELGUILayoutAlignmentType GetAlign();                                                                                     // [0xc19840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetActuralRange();                                                                                                 // [0xc19820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIInteractionGroup
/// Size: 0x0010 (16 bytes) (0x0000C0 - 0x0000D0) align 8 pad: 0x0000
class UUIInteractionGroup : public UActorComponent
{ 
public:
	bool                                               bInteractable;                                              // 0x00C0   (0x0001)  
	bool                                               bIgnoreParentGroup;                                         // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00C2   (0x0006)  MISSED
	class UUIItem*                                     CacheUIItem;                                                // 0x00C8   (0x0008)  
	// void SetInteractable(bool Value);                                                                                        // [0xc1a620] Final|Native|Public|BlueprintCallable 
	// void SetIgnoreParentGroup(bool Value);                                                                                   // [0xc1a590] Final|Native|Public|BlueprintCallable 
	// bool GetInteractable();                                                                                                  // [0xbe0cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetIgnoreParentGroup();                                                                                             // [0xbf7d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIInturnAnimController
/// Size: 0x0078 (120 bytes) (0x0000C0 - 0x000138) align 8 pad: 0x0000
class UUIInturnAnimController : public UActorComponent
{ 
public:
	SDK_UNDEFINED(20,833) /* FDelegateProperty */      __um(OnFinish);                                             // 0x00C0   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FString                                            AnimName;                                                   // 0x00D8   (0x0010)  
	float                                              StartTime;                                                  // 0x00E8   (0x0004)  
	bool                                               bPlayInSameTime;                                            // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00ED   (0x0003)  MISSED
	float                                              interval;                                                   // 0x00F0   (0x0004)  
	float                                              CustomAnimDuration;                                         // 0x00F4   (0x0004)  
	bool                                               bItemDefaultActive;                                         // 0x00F8   (0x0001)  
	bool                                               bItemDefaultAlphaZero;                                      // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00FA   (0x0002)  MISSED
	int32_t                                            PlayFromIndex;                                              // 0x00FC   (0x0004)  
	unsigned char                                      UnknownData03_7[0x38];                                      // 0x0100   (0x0038)  MISSED
	// void Stop();                                                                                                             // [0xc1ad70] Final|Native|Public|BlueprintCallable 
	// void SetItemDefaultAlphaZero(bool IsItemDefaultAlphaZero);                                                               // [0xc1a6b0] Final|Native|Public|BlueprintCallable 
	// void PlayWithItems(TArray<UUIItem*>& SpecChildren, FString NewAnimName);                                                 // [0xc19dd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void PlayWithActors(TArray<TWeakObjectPtr<AUIBaseActor*>>& SpecChildren, FString NewAnimName);                           // [0xc19cc0] Final|Native|Public|HasOutParms 
	// void PlayInEditor();                                                                                                     // [0xc19ca0] Final|Native|Public|BlueprintCallable 
	// void Play(FString NewAnimName, int32_t AssignNum, bool bIsScrollViewItem);                                               // [0xc19b70] Final|Native|Public|BlueprintCallable 
	// void OnItemAnimFinish();                                                                                                 // [0xc19aa0] Final|Native|Protected 
	// bool IsPlaying();                                                                                                        // [0xc19a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetItemDefaultAlphaZero();                                                                                          // [0xc19950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIItemEditorHelperComp
/// Size: 0x0010 (16 bytes) (0x0004E0 - 0x0004F0) align 16 pad: 0x0000
class UUIItemEditorHelperComp : public UPrimitiveComponent
{ 
public:
	class UUIItem*                                     Parent;                                                     // 0x04E0   (0x0008)  
	class UBodySetup*                                  BodySetup;                                                  // 0x04E8   (0x0008)  
};

/// Class /Script/LGUI.UILayoutElement
/// Size: 0x0018 (24 bytes) (0x0000E8 - 0x000100) align 8 pad: 0x0000
class UUILayoutElement : public ULGUIBehaviour
{ 
public:
	class UUILayoutBase*                               ParentLayout;                                               // 0x00E8   (0x0008)  
	ELayoutElementType                                 LayoutElementType;                                          // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              ConstantSize;                                               // 0x00F4   (0x0004)  
	float                                              RatioSize;                                                  // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
	// void SetRatioSize(float Value);                                                                                          // [0xc1e900] Final|Native|Public|BlueprintCallable 
	// void SetLayoutType(ELayoutElementType InType);                                                                           // [0xc1e800] Final|Native|Public|BlueprintCallable 
	// void SetConstantSize(float Value);                                                                                       // [0xc1e160] Final|Native|Public|BlueprintCallable 
	// float GetRatioSize();                                                                                                    // [0xc1d630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// ELayoutElementType GetLayoutType();                                                                                      // [0xbf2df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetIgnoreLayout();                                                                                                  // [0xc1d0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetConstantSize();                                                                                                 // [0xc1ced0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UILayoutInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UUILayoutInterface : public UInterface
{ 
public:
};

/// Class /Script/LGUI.UILoopScrollViewComponent
/// Size: 0x0170 (368 bytes) (0x0001F0 - 0x000360) align 8 pad: 0x0000
class UUILoopScrollViewComponent : public UUIScrollViewWithScrollbarComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x01F0   (0x0038)  MISSED
	SDK_UNDEFINED(16,834) /* TArray<TWeakObjectPtr<AUIBaseActor*>> */ __um(GridArray);                             // 0x0228   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0238   (0x0050)  MISSED
	SDK_UNDEFINED(8,835) /* TWeakObjectPtr<AUIBaseActor*> */ __um(TemplateGrid);                                   // 0x0288   (0x0008)  
	int32_t                                            DisplayGridNum;                                             // 0x0290   (0x0004)  
	int32_t                                            TotalGridNum;                                               // 0x0294   (0x0004)  
	bool                                               GridDefaultUIActive;                                        // 0x0298   (0x0001)  
	bool                                               IsGridShrinkStrech;                                         // 0x0299   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x029A   (0x0002)  MISSED
	float                                              SpacingHorizontal;                                          // 0x029C   (0x0004)  
	float                                              SpacingVertical;                                            // 0x02A0   (0x0004)  
	float                                              PaddingHorizontal;                                          // 0x02A4   (0x0004)  
	float                                              PaddingVertical;                                            // 0x02A8   (0x0004)  
	bool                                               bForceSingleLine;                                           // 0x02AC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x02AD   (0x0003)  MISSED
	float                                              GridAnimationStartTime;                                     // 0x02B0   (0x0004)  
	float                                              GridAnimationInterval;                                      // 0x02B4   (0x0004)  
	bool                                               IsInAnimation;                                              // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x02B9   (0x0003)  MISSED
	SDK_UNDEFINED(20,836) /* FDelegateProperty */      __um(OnGridCreate);                                         // 0x02BC   (0x0014)  
	SDK_UNDEFINED(20,837) /* FDelegateProperty */      __um(OnGridsUpdate);                                        // 0x02D0   (0x0014)  
	SDK_UNDEFINED(20,838) /* FDelegateProperty */      __um(OnDestroyCallBack);                                    // 0x02E4   (0x0014)  
	unsigned char                                      UnknownData05_6[0x50];                                      // 0x02F8   (0x0050)  MISSED
	int32_t                                            NavigationIndex;                                            // 0x0348   (0x0004)  
	unsigned char                                      UnknownData06_7[0x14];                                      // 0x034C   (0x0014)  MISSED
	// void SetNavigationIndex(int32_t GridIndex);                                                                              // [0xc229b0] Final|Native|Public|BlueprintCallable 
	// void SetInAnimation(bool State);                                                                                         // [0xc0cb30] Native|Public|BlueprintCallable 
	// void SetGridAnimationStartTime(float Value);                                                                             // [0xc0ca20] Native|Public|BlueprintCallable 
	// void SetGridAnimationInterval(float Value);                                                                              // [0xc0c990] Native|Public|BlueprintCallable 
	// void ScrollToNextLine(bool bReversed);                                                                                   // [0xc22540] Final|Native|Public|BlueprintCallable 
	// void ScrollToGridIndex(int32_t GridIndex);                                                                               // [0xc224b0] Final|Native|Public|BlueprintCallable 
	// void ResetPreview();                                                                                                     // [0xc22490] Final|Native|Public  
	// void RefreshByData(class AUIBaseActor* UIItem, int32_t GridNum, bool KeepContentPosition);                               // [0xc22340] Final|Native|Public|BlueprintCallable 
	// void Refresh();                                                                                                          // [0xc22320] Final|Native|Public|BlueprintCallable 
	// bool GetInAnimation();                                                                                                   // [0xc0bb10] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetGridAnimationStartTime();                                                                                       // [0xc0bab0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetGridAnimationInterval();                                                                                        // [0xc0ba70] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class AUIBaseActor* GetGrid(int32_t GridIndex);                                                                          // [0xc22010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UINavigationBehaviour
/// Size: 0x0008 (8 bytes) (0x0000E8 - 0x0000F0) align 8 pad: 0x0000
class UUINavigationBehaviour : public ULGUIBehaviour
{ 
public:
	int32_t                                            LoopScrollViewGridIndex;                                    // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00EC   (0x0004)  MISSED
	// void OnNotifyNotInteractiveBP();                                                                                         // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnNotifyNavigationSelectBP(class ULGUIPointerEventData* eventData);                                                 // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnNotifyNavigationEnterBP(class ULGUIPointerEventData* eventData);                                                  // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnNotifyInteractiveBP();                                                                                            // [0x25a7960] Event|Protected|BlueprintEvent 
	// bool OnCheckLoopScrollChangeNavigationBP();                                                                              // [0x25a7960] Event|Public|BlueprintEvent 
	// bool OnCheckCanSetNavigationBP();                                                                                        // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/LGUI.UINavigationGroupComponent
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x0001F0) align 8 pad: 0x0000
class UUINavigationGroupComponent : public ULGUIBehaviour
{ 
public:
	unsigned char                                      UnknownData00_3[0xA0];                                      // 0x00E8   (0x00A0)  MISSED
	UINavigationWrapMode                               HorizontalWrapMode;                                         // 0x0188   (0x0001)  
	UINavigationPriorityMode                           HorizontalPriorityMode;                                     // 0x0189   (0x0001)  
	UINavigationWrapMode                               VerticalWrapMode;                                           // 0x018A   (0x0001)  
	UINavigationPriorityMode                           VerticalPriorityMode;                                       // 0x018B   (0x0001)  
	SDK_UNDEFINED(8,839) /* TWeakObjectPtr<AActor*> */ __um(PrevNavigationGroupActor);                             // 0x018C   (0x0008)  
	SDK_UNDEFINED(8,840) /* TWeakObjectPtr<UUINavigationGroupComponent*> */ __um(PrevNavigationGroup);             // 0x0194   (0x0008)  
	SDK_UNDEFINED(8,841) /* TWeakObjectPtr<AActor*> */ __um(NextNavigationGroupActor);                             // 0x019C   (0x0008)  
	SDK_UNDEFINED(8,842) /* TWeakObjectPtr<UUINavigationGroupComponent*> */ __um(NextNavigationGroup);             // 0x01A4   (0x0008)  
	FName                                              PrevNavigationGroupName;                                    // 0x01AC   (0x000C)  
	FName                                              NextNavigationGroupName;                                    // 0x01B8   (0x000C)  
	FName                                              NavigationGroupName;                                        // 0x01C4   (0x000C)  
	SDK_UNDEFINED(16,843) /* TArray<TWeakObjectPtr<AActor*>> */ __um(DefaultNavigateActors);                       // 0x01D0   (0x0010)  
	bool                                               BookMark;                                                   // 0x01E0   (0x0001)  
	bool                                               ScrollBall;                                                 // 0x01E1   (0x0001)  
	bool                                               MouseCanJump;                                               // 0x01E2   (0x0001)  
	bool                                               AutoSearch;                                                 // 0x01E3   (0x0001)  
	bool                                               SelectableMemory;                                           // 0x01E4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01E5   (0x0003)  MISSED
	int32_t                                            ViewId;                                                     // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x01EC   (0x0004)  MISSED
	// void SetNavigateTolerance(float Tolerance);                                                                              // [0xc22930] Final|Native|Static|Public|BlueprintCallable 
	// void SetNavigateGroupDelegate(FDelegateProperty& Delegate);                                                              // [0xc22880] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void ResetNavigateGroupDelegate();                                                                                       // [0xc22470] Final|Native|Static|Public|BlueprintCallable 
	// void NavigateToPrevGroup();                                                                                              // [0xc22300] Final|Native|Public|BlueprintCallable 
	// void NavigateToNextGroup();                                                                                              // [0xc222e0] Final|Native|Public|BlueprintCallable 
	// void Navigate();                                                                                                         // [0xc222c0] Final|Native|Public|BlueprintCallable 
	// void GetRootNavigationGrade(TArray<UUISelectableComponent*>& Result);                                                    // [0xc220e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LGUI.UINavigationTextChangeListener
/// Size: 0x0008 (8 bytes) (0x0000E8 - 0x0000F0) align 8 pad: 0x0000
class UUINavigationTextChangeListener : public ULGUIBehaviour
{ 
public:
	class AActor*                                      TextActor;                                                  // 0x00E8   (0x0008)  
	// void OnNotifyTextChangeBP(FString NotifyText);                                                                           // [0x25a7960] Event|Protected|BlueprintEvent 
};

/// Struct /Script/LGUI.CircleClipParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FCircleClipParameters
{ 
	float                                              ClipTextureHideThreshhold;                                  // 0x0000   (0x0004)  
	float                                              ClipTextureHideFeather;                                     // 0x0004   (0x0004)  
	float                                              ClipAngle;                                                  // 0x0008   (0x0004)  
	bool                                               UseTwoWayClip;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/LGUI.UINiagara
/// Size: 0x07D8 (2008 bytes) (0x000538 - 0x000D10) align 16 pad: 0x0000
class UUINiagara : public UUIBaseRenderable
{ 
public:
	class UNiagaraSystem*                              NiagaraSystemReference;                                     // 0x0538   (0x0008)  
	bool                                               IsNiagaraActive;                                            // 0x0540   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0541   (0x0003)  MISSED
	float                                              StartTime;                                                  // 0x0544   (0x0004)  
	float                                              LoopTime;                                                   // 0x0548   (0x0004)  
	float                                              EndTime;                                                    // 0x054C   (0x0004)  
	FKuroCurveVector                                   NiagaraLocation;                                            // 0x0550   (0x01A8)  
	FKuroCurveVector                                   NiagaraRotation;                                            // 0x06F8   (0x01A8)  
	FKuroCurveVector                                   NiagaraScale;                                               // 0x08A0   (0x01A8)  
	SDK_UNDEFINED(80,844) /* TMap<FString, FKuroCurveFloat> */ __um(FloatParameter);                               // 0x0A48   (0x0050)  
	SDK_UNDEFINED(80,845) /* TMap<FString, FKuroCurveVector> */ __um(VectorParameter);                             // 0x0A98   (0x0050)  
	SDK_UNDEFINED(80,846) /* TMap<FString, FKuroCurveLinearColor> */ __um(ColorParameter);                         // 0x0AE8   (0x0050)  
	bool                                               bAdaptPosAndSizeChanged;                                    // 0x0B38   (0x0001)  
	bool                                               bEnableCircleClip;                                          // 0x0B39   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0B3A   (0x0002)  MISSED
	FCircleClipParameters                              CircleClipParameters;                                       // 0x0B3C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0B4C   (0x0004)  MISSED
	class ULGUINiagaraComponent*                       NiagaraComponent;                                           // 0x0B50   (0x0008)  
	unsigned char                                      UnknownData03_6[0x1A0];                                     // 0x0B58   (0x01A0)  MISSED
	bool                                               bResetNiagara;                                              // 0x0CF8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0CF9   (0x0007)  MISSED
	class UAkAudioEvent*                               StartEvent;                                                 // 0x0D00   (0x0008)  
	bool                                               bCanInterupt;                                               // 0x0D08   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0D09   (0x0003)  MISSED
	int32_t                                            FadeOutMs;                                                  // 0x0D0C   (0x0004)  
	// void SwitchToStop();                                                                                                     // [0xc23730] Final|Native|Public|BlueprintCallable 
	// void SetNiagaraVarLinearColor(FString VarName, FLinearColor Value);                                                      // [0xc23230] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetNiagaraVarFloat(FString VarName, float Value);                                                                   // [0xc230f0] Final|Native|Public|BlueprintCallable 
	// void SetNiagaraUIActive(bool Active, bool bInResetNiagara);                                                              // [0xc23020] Final|Native|Public|BlueprintCallable 
	// void SetNiagaraSystem(class UNiagaraSystem* InSystem);                                                                   // [0xc22f90] Final|Native|Public|BlueprintCallable 
	// void SetNiagaraEmitterVectorParam(FString InEmitterName, FString InVariableName, FVector4 InVector);                     // [0xc22dc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetNiagaraEmitterFloatParam(FString InEmitterName, FString InVariableName, float InValue);                          // [0xc22c00] Final|Native|Public|BlueprintCallable 
	// void SetNiagaraEmitterCustomTexture(FString InEmitterName, FString InVariableName, class UTexture* InTexture);           // [0xc22a40] Final|Native|Public|BlueprintCallable 
	// void SetCircleClipParameters(FCircleClipParameters& NewCircleClipParameters);                                            // [0xc22760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetCircleClipEnable(bool Enable);                                                                                   // [0xc226d0] Final|Native|Public|BlueprintCallable 
	// void ReinitializeSystem();                                                                                               // [0xc22450] Final|Native|Public|BlueprintCallable 
	// bool IsCircleClipEnable();                                                                                               // [0xc222a0] Final|Native|Public|BlueprintCallable 
	// bool GetIsActive();                                                                                                      // [0xc220b0] Final|Native|Public|BlueprintCallable 
	// FCircleClipParameters GetCircleClipParameters();                                                                         // [0xc21fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void DeactivateSystem();                                                                                                 // [0xc21e20] Final|Native|Public|BlueprintCallable 
	// void ActivateSystem(bool Reset);                                                                                         // [0xc21ce0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UINiagaraActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUINiagaraActor : public AUIBaseActor
{ 
public:
	class UUINiagara*                                  UINiagara;                                                  // 0x0380   (0x0008)  
	// void SwitchToStop();                                                                                                     // [0xc23710] Final|Native|Public|BlueprintCallable 
	// class UUINiagara* GetUINiagara();                                                                                        // [0xc221d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void DeactivateSystem();                                                                                                 // [0xc21e00] Final|Native|Public|BlueprintCallable 
	// void ActivateSystem();                                                                                                   // [0xc21cc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIPolygon
/// Size: 0x0030 (48 bytes) (0x000740 - 0x000770) align 16 pad: 0x0000
class UUIPolygon : public UUISpriteBase
{ 
public:
	bool                                               FullCycle;                                                  // 0x0740   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0741   (0x0003)  MISSED
	float                                              StartAngle;                                                 // 0x0744   (0x0004)  
	float                                              EndAngle;                                                   // 0x0748   (0x0004)  
	int32_t                                            Sides;                                                      // 0x074C   (0x0004)  
	UIPolygonUVType                                    UVType;                                                     // 0x0750   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0751   (0x0007)  MISSED
	TArray<float>                                      VertexOffsetArray;                                          // 0x0758   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0768   (0x0008)  MISSED
	// class ULTweener* StartAngleTo(float endValue, float Duration, float delay, LTweenEase easeType);                         // [0xc235b0] Final|Native|Public|BlueprintCallable 
	// void SetVertexOffsetArray(TArray<float>& Value);                                                                         // [0xc23500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetUVType(UIPolygonUVType Value);                                                                                   // [0xc23480] Final|Native|Public|BlueprintCallable 
	// void SetStartAngle(float Value);                                                                                         // [0xc23400] Final|Native|Public|BlueprintCallable 
	// void SetSides(int32_t Value);                                                                                            // [0xc23370] Final|Native|Public|BlueprintCallable 
	// void SetEndAngle(float Value);                                                                                           // [0xc22800] Final|Native|Public|BlueprintCallable 
	// TArray<float> GetVertexOffsetArray();                                                                                    // [0xc22210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// UIPolygonUVType GetUVType();                                                                                             // [0xc221f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetStartAngle();                                                                                                   // [0xc221b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetSides();                                                                                                      // [0xc22190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetEndAngle();                                                                                                     // [0xc03aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class ULTweener* EndAngleTo(float endValue, float Duration, float delay, LTweenEase easeType);                           // [0xc21e40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIPolygonActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUIPolygonActor : public AUIBaseActor
{ 
public:
	class UUIPolygon*                                  UIPolygon;                                                  // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UIPolygonLine
/// Size: 0x0038 (56 bytes) (0x000758 - 0x000790) align 16 pad: 0x0000
class UUIPolygonLine : public UUI2DLineRendererBase
{ 
public:
	bool                                               FullCycle;                                                  // 0x0758   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0759   (0x0003)  MISSED
	float                                              StartAngle;                                                 // 0x075C   (0x0004)  
	float                                              EndAngle;                                                   // 0x0760   (0x0004)  
	int32_t                                            Sides;                                                      // 0x0764   (0x0004)  
	TArray<float>                                      VertexOffsetArray;                                          // 0x0768   (0x0010)  
	TArray<FVector2D>                                  CurrentPointArray;                                          // 0x0778   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0788   (0x0008)  MISSED
	// class ULTweener* StartAngleTo(float endValue, float Duration, float delay, LTweenEase easeType);                         // [0xc27ab0] Final|Native|Public|BlueprintCallable 
	// void SetVertexOffsetArray(TArray<float>& Value);                                                                         // [0xc27790] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetStartAngle(float Value);                                                                                         // [0xc27400] Final|Native|Public|BlueprintCallable 
	// void SetSides(int32_t Value);                                                                                            // [0xc272f0] Final|Native|Public|BlueprintCallable 
	// void SetEndAngle(float Value);                                                                                           // [0xc26c10] Final|Native|Public|BlueprintCallable 
	// TArray<float> GetVertexOffsetArray();                                                                                    // [0xc26450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetStartAngle();                                                                                                   // [0xc26150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetSides();                                                                                                      // [0xc263b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetEndAngle();                                                                                                     // [0xc26130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class ULTweener* EndAngleTo(float endValue, float Duration, float delay, LTweenEase easeType);                           // [0xc25c50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIPolygonLineActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUIPolygonLineActor : public AUIBaseActor
{ 
public:
	class UUIPolygonLine*                              UIPolygonLine;                                              // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UIRaycastRangeComponent
/// Size: 0x0020 (32 bytes) (0x0000E8 - 0x000108) align 8 pad: 0x0000
class UUIRaycastRangeComponent : public ULGUIBehaviour
{ 
public:
	float                                              PointSize;                                                  // 0x00E8   (0x0004)  
	int32_t                                            DragDistance;                                               // 0x00EC   (0x0004)  
	TArray<FVector2D>                                  Points;                                                     // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0100   (0x0008)  MISSED
};

/// Class /Script/LGUI.UIRing
/// Size: 0x0028 (40 bytes) (0x000758 - 0x000780) align 16 pad: 0x0000
class UUIRing : public UUI2DLineRendererBase
{ 
public:
	float                                              StartAngle;                                                 // 0x0758   (0x0004)  
	float                                              EndAngle;                                                   // 0x075C   (0x0004)  
	int32_t                                            Segment;                                                    // 0x0760   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0764   (0x0004)  MISSED
	TArray<FVector2D>                                  CurrentPointArray;                                          // 0x0768   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0778   (0x0008)  MISSED
	// class ULTweener* StartAngleTo(float endValue, float Duration, float delay, LTweenEase easeType);                         // [0xc27c10] Final|Native|Public|BlueprintCallable 
	// void SetStartAngle(float NewValue);                                                                                      // [0xc27480] Final|Native|Public|BlueprintCallable 
	// void SetSegment(int32_t NewValue);                                                                                       // [0xc27260] Final|Native|Public|BlueprintCallable 
	// void SetEndAngle(float NewValue);                                                                                        // [0xc26c90] Final|Native|Public|BlueprintCallable 
	// float GetStartAngle();                                                                                                   // [0xc263f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetSegment();                                                                                                    // [0xc26130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetEndAngle();                                                                                                     // [0xc26150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class ULTweener* EndAngleTo(float endValue, float Duration, float delay, LTweenEase easeType);                           // [0xc25db0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIRingActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUIRingActor : public AUIBaseActor
{ 
public:
	class UUIRing*                                     UIElement;                                                  // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UIRoundedLayout
/// Size: 0x0010 (16 bytes) (0x000148 - 0x000158) align 8 pad: 0x0000
class UUIRoundedLayout : public UUILayoutBase
{ 
public:
	float                                              Radius;                                                     // 0x0148   (0x0004)  
	float                                              StartAngle;                                                 // 0x014C   (0x0004)  
	float                                              EndAngle;                                                   // 0x0150   (0x0004)  
	bool                                               bSetChildAngle;                                             // 0x0154   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0155   (0x0003)  MISSED
};

/// Class /Script/LGUI.UISafeZone
/// Size: 0x00A0 (160 bytes) (0x0000E8 - 0x000188) align 8 pad: 0x0000
class UUISafeZone : public ULGUIBehaviour
{ 
public:
	ESafeZoneAdaptionStrategy                          AdaptionStrategy;                                           // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FMargin                                            Padding;                                                    // 0x00EC   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00FC   (0x0010)  MISSED
	FMargin                                            DefaultMargin;                                              // 0x010C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	SDK_UNDEFINED(80,847) /* TMap<FString, FMargin> */ __um(CustomDeviceMargins);                                  // 0x0120   (0x0050)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x0170   (0x0018)  MISSED
	// void SetWidthAndHeightRadio(float Left, float Right, float Top, float Bottom);                                           // [0xc27950] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIScrollbarComponent
/// Size: 0x0080 (128 bytes) (0x000388 - 0x000408) align 8 pad: 0x0000
class UUIScrollbarComponent : public UUISelectableComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0388   (0x0008)  MISSED
	float                                              Value;                                                      // 0x0390   (0x0004)  
	float                                              Size;                                                       // 0x0394   (0x0004)  
	SDK_UNDEFINED(8,848) /* TWeakObjectPtr<AUIBaseActor*> */ __um(HandleActor);                                    // 0x0398   (0x0008)  
	UIScrollbarDirectionType                           directionType;                                              // 0x03A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x03A1   (0x0003)  MISSED
	SDK_UNDEFINED(8,849) /* TWeakObjectPtr<UUIItem*> */ __um(Handle);                                              // 0x03A4   (0x0008)  
	SDK_UNDEFINED(8,850) /* TWeakObjectPtr<UUIItem*> */ __um(HandleArea);                                          // 0x03AC   (0x0008)  
	unsigned char                                      UnknownData02_6[0x1C];                                      // 0x03B4   (0x001C)  MISSED
	FLGUIDrawableEvent                                 OnValueChange;                                              // 0x03D0   (0x0018)  
	SDK_UNDEFINED(8,851) /* TWeakObjectPtr<AActor*> */ __um(ScrollViewBackgroundActor);                            // 0x03E8   (0x0008)  
	SDK_UNDEFINED(8,852) /* TWeakObjectPtr<UUIItem*> */ __um(ScrollViewBackgroundComponent);                       // 0x03F0   (0x0008)  
	bool                                               MainScrollbar;                                              // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x03F9   (0x0003)  MISSED
	int32_t                                            ViewId;                                                     // 0x03FC   (0x0004)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0400   (0x0008)  MISSED
	// void UnregisterSlideEvent(FLGUIDelegateHandleWrapper& InDelegateHandle);                                                 // [0xc27e40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetValueAndSize(float InValue, float InSize, bool fireEvent);                                                       // [0xc27670] Final|Native|Public|BlueprintCallable 
	// void SetValue(float InValue, bool fireEvent);                                                                            // [0xc27590] Final|Native|Public|BlueprintCallable 
	// void setSize(float InSize);                                                                                              // [0xc27380] Final|Native|Public|BlueprintCallable 
	// void SetScrollbarDelegate(FDelegateProperty& Delegate);                                                                  // [0xc271b0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// void ResetScrollbarDelegate();                                                                                           // [0xc26690] Final|Native|Static|Private|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterSlideEvent(FDelegateProperty& InDelegate);                                            // [0xc265a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// float GetValue();                                                                                                        // [0xc26430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetSize();                                                                                                         // [0xc263d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void ChangeSchedule(ELGUINavigationDirection InDirection);                                                               // [0xc25bd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIScrollViewHelper
/// Size: 0x0008 (8 bytes) (0x0000E8 - 0x0000F0) align 8 pad: 0x0000
class UUIScrollViewHelper : public ULGUIBehaviour
{ 
public:
	SDK_UNDEFINED(8,853) /* TWeakObjectPtr<UUIScrollViewComponent*> */ __um(TargetComp);                           // 0x00E8   (0x0008)  
};

/// Class /Script/LGUI.UISelectableButtonComponent
/// Size: 0x0008 (8 bytes) (0x000500 - 0x000508) align 8 pad: 0x0000
class UUISelectableButtonComponent : public UUIButtonComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0500   (0x0008)  MISSED
	// void SetForceSelect(bool ForceSelect);                                                                                   // [0xc2a820] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UISelectableGroupComponent
/// Size: 0x0030 (48 bytes) (0x0000E8 - 0x000118) align 8 pad: 0x0000
class UUISelectableGroupComponent : public ULGUIBehaviour
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00E8   (0x0008)  MISSED
	bool                                               AllowEventBubbleUp;                                         // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	SDK_UNDEFINED(8,854) /* TWeakObjectPtr<UUISelectableComponent*> */ __um(Selected);                             // 0x00F4   (0x0008)  
	SDK_UNDEFINED(8,855) /* TWeakObjectPtr<UUISelectableComponent*> */ __um(Highlighted);                          // 0x00FC   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	SDK_UNDEFINED(16,856) /* TArray<TWeakObjectPtr<UUISelectableComponent*>> */ __um(SelectableComponents);        // 0x0108   (0x0010)  
	// void OnComponentUnselected();                                                                                            // [0xc2a550] Final|Native|Public|BlueprintCallable 
	// void OnComponentUnhighlighted();                                                                                         // [0xc2a530] Final|Native|Public|BlueprintCallable 
	// void OnComponentSelected(class UUISelectableComponent* Component);                                                       // [0xc2a4a0] Final|Native|Public|BlueprintCallable 
	// void OnComponentHighlighted(class UUISelectableComponent* Component);                                                    // [0xc2a410] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UISelectableTransitionComponent
/// Size: 0x0010 (16 bytes) (0x0000E8 - 0x0000F8) align 8 pad: 0x0000
class UUISelectableTransitionComponent : public ULGUIBehaviour
{ 
public:
	TArray<class ULTweener*>                           TweenerCollection;                                          // 0x00E8   (0x0010)  
	// void StopTransition();                                                                                                   // [0xc2b860] Native|Public|BlueprintCallable 
	// void OnStartCustomTransitionBP(FName InTransitionName, bool InImmediateSet);                                             // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnPressedBP(bool InImmediateSet);                                                                                   // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnNormalBP(bool InImmediateSet);                                                                                    // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnHighlightedBP(bool InImmediateSet);                                                                               // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnDisabledBP(bool InImmediateSet);                                                                                  // [0x25a7960] Event|Protected|BlueprintEvent 
	// void CollectTweeners(TSet<ULTweener*>& InItems);                                                                         // [0xc29ed0] Native|Public|HasOutParms|BlueprintCallable 
	// void CollectTweener(class ULTweener* InItem);                                                                            // [0xc29e40] Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UISelectableStateHolder
/// Size: 0x0018 (24 bytes) (0x0000F8 - 0x000110) align 8 pad: 0x0000
class UUISelectableStateHolder : public UUISelectableTransitionComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00F8   (0x0010)  MISSED
	EStateTransitionType                               TransitionType;                                             // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0109   (0x0007)  MISSED
	// void SetAllTransitionsEnable(bool bEnable);                                                                              // [0xc2a700] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UISizeControlByAspectRatioHelper
/// Size: 0x0008 (8 bytes) (0x0000E8 - 0x0000F0) align 8 pad: 0x0000
class UUISizeControlByAspectRatioHelper : public ULGUIBehaviour
{ 
public:
	SDK_UNDEFINED(8,857) /* TWeakObjectPtr<UUISizeControlByAspectRatio*> */ __um(TargetComp);                      // 0x00E8   (0x0008)  
};

/// Class /Script/LGUI.UISizeControlByAspectRatio
/// Size: 0x0028 (40 bytes) (0x000148 - 0x000170) align 8 pad: 0x0000
class UUISizeControlByAspectRatio : public UUILayoutBase
{ 
public:
	EUISizeControlByAspectRatioMode                    ControlMode;                                                // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0149   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x014C   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0150   (0x000C)  MISSED
	SDK_UNDEFINED(8,858) /* TWeakObjectPtr<UUISizeControlByAspectRatioHelper*> */ __um(HelperComp);                // 0x015C   (0x0008)  
	FVector2D                                          Pivot;                                                      // 0x0164   (0x0008)  
	bool                                               bChangeChildrenOffset;                                      // 0x016C   (0x0001)  
	bool                                               bChangeChildrenSize;                                        // 0x016D   (0x0001)  
	unsigned char                                      UnknownData02_7[0x2];                                       // 0x016E   (0x0002)  MISSED
	// void SetControlMode(EUISizeControlByAspectRatioMode Value);                                                              // [0xc2f040] Final|Native|Public|BlueprintCallable 
	// void SetAspectRatio(float Value);                                                                                        // [0xc2ef30] Final|Native|Public|BlueprintCallable 
	// EUISizeControlByAspectRatioMode GetControlMode();                                                                        // [0xc21fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetAspectRatio();                                                                                                  // [0xc21fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UISizeControlByOtherHelper
/// Size: 0x0008 (8 bytes) (0x0000E8 - 0x0000F0) align 8 pad: 0x0000
class UUISizeControlByOtherHelper : public ULGUIBehaviour
{ 
public:
	SDK_UNDEFINED(8,859) /* TWeakObjectPtr<UUISizeControlByOther*> */ __um(TargetComp);                            // 0x00E8   (0x0008)  
};

/// Class /Script/LGUI.UISizeControlByOther
/// Size: 0x0038 (56 bytes) (0x000148 - 0x000180) align 8 pad: 0x0000
class UUISizeControlByOther : public UUILayoutBase
{ 
public:
	SDK_UNDEFINED(8,860) /* TWeakObjectPtr<AUIBaseActor*> */ __um(TargetActor);                                    // 0x0148   (0x0008)  
	bool                                               ControlWidth;                                               // 0x0150   (0x0001)  
	bool                                               ControlHeight;                                              // 0x0151   (0x0001)  
	bool                                               UseWidthRange;                                              // 0x0152   (0x0001)  
	bool                                               UseHeightRange;                                             // 0x0153   (0x0001)  
	int32_t                                            MaxWidth;                                                   // 0x0154   (0x0004)  
	int32_t                                            MinWidth;                                                   // 0x0158   (0x0004)  
	int32_t                                            MaxHeight;                                                  // 0x015C   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x0160   (0x0004)  
	float                                              AdditionalWidth;                                            // 0x0164   (0x0004)  
	float                                              AdditionalHeight;                                           // 0x0168   (0x0004)  
	SDK_UNDEFINED(8,861) /* TWeakObjectPtr<UUIItem*> */ __um(TargetUIItem);                                        // 0x016C   (0x0008)  
	SDK_UNDEFINED(8,862) /* TWeakObjectPtr<UUISizeControlByOtherHelper*> */ __um(HelperComp);                      // 0x0174   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x017C   (0x0004)  MISSED
	// void SetTargetActor(class AUIBaseActor* NewTargetActor);                                                                 // [0xc2fd80] Final|Native|Public|BlueprintCallable 
	// void SetControlWidth(bool Value);                                                                                        // [0xc2f0c0] Final|Native|Public|BlueprintCallable 
	// void SetControlHeight(bool Value);                                                                                       // [0xc2efb0] Final|Native|Public|BlueprintCallable 
	// void SetAdditionalWidth(float Value);                                                                                    // [0xc2ee20] Final|Native|Public|BlueprintCallable 
	// void SetAdditionalHeight(float Value);                                                                                   // [0xc2eda0] Final|Native|Public|BlueprintCallable 
	// class AUIBaseActor* GetTargetActor();                                                                                    // [0xc2ec20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetControlWidth();                                                                                                  // [0xc2ea50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetControlHeight();                                                                                                 // [0xc2ea30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetAdditionalWidth();                                                                                              // [0xc2ea10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetAdditionalHeight();                                                                                             // [0xc2e9f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UISliderComponent
/// Size: 0x00A8 (168 bytes) (0x000388 - 0x000430) align 8 pad: 0x0000
class UUISliderComponent : public UUISelectableComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0388   (0x0008)  MISSED
	float                                              Value;                                                      // 0x0390   (0x0004)  
	float                                              MinValue;                                                   // 0x0394   (0x0004)  
	float                                              MaxValue;                                                   // 0x0398   (0x0004)  
	bool                                               WholeNumbers;                                               // 0x039C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x039D   (0x0003)  MISSED
	SDK_UNDEFINED(8,863) /* TWeakObjectPtr<AUIBaseActor*> */ __um(FillActor);                                      // 0x03A0   (0x0008)  
	SDK_UNDEFINED(8,864) /* TWeakObjectPtr<AUIBaseActor*> */ __um(HandleActor);                                    // 0x03A8   (0x0008)  
	UISliderDirectionType                              directionType;                                              // 0x03B0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x03B1   (0x0003)  MISSED
	SDK_UNDEFINED(20,865) /* FDelegateProperty */      __um(OnValueChangeCb);                                      // 0x03B4   (0x0014)  
	SDK_UNDEFINED(20,866) /* FDelegateProperty */      __um(OnEndDragCb);                                          // 0x03C8   (0x0014)  
	SDK_UNDEFINED(8,867) /* TWeakObjectPtr<UUIItem*> */ __um(Fill);                                                // 0x03DC   (0x0008)  
	SDK_UNDEFINED(8,868) /* TWeakObjectPtr<UUIItem*> */ __um(FillArea);                                            // 0x03E4   (0x0008)  
	SDK_UNDEFINED(8,869) /* TWeakObjectPtr<UUIItem*> */ __um(Handle);                                              // 0x03EC   (0x0008)  
	SDK_UNDEFINED(8,870) /* TWeakObjectPtr<UUIItem*> */ __um(HandleArea);                                          // 0x03F4   (0x0008)  
	unsigned char                                      UnknownData03_6[0x1C];                                      // 0x03FC   (0x001C)  MISSED
	FLGUIDrawableEvent                                 OnValueChange;                                              // 0x0418   (0x0018)  
	// void UnregisterSlideEvent(FLGUIDelegateHandleWrapper& InDelegateHandle);                                                 // [0xc30110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetValue(float InValue, bool fireEvent);                                                                            // [0xc2ffa0] Final|Native|Public|BlueprintCallable 
	// void SetProgressIncrement(float incrementValue, bool needRound);                                                         // [0xc2f730] Final|Native|Public|BlueprintCallable 
	// void SetMinValue(float InMinValue, bool KeepRelativeValue, bool fireEvent);                                              // [0xc2f510] Final|Native|Public|BlueprintCallable 
	// void SetMaxValue(float InMaxValue, bool KeepRelativeValue, bool fireEvent);                                              // [0xc2f3f0] Final|Native|Public|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterSlideEvent(FDelegateProperty& InDelegate);                                            // [0xc2ecd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// float GetValue();                                                                                                        // [0xc26430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetMinValue();                                                                                                     // [0xc263d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetMaxValue();                                                                                                     // [0xc2ead0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UISpineActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUISpineActor : public AUIBaseActor
{ 
public:
	class UUISpineRenderable*                          UISpine;                                                    // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UISpineRenderable
/// Size: 0x03B8 (952 bytes) (0x000538 - 0x0008F0) align 16 pad: 0x0000
class UUISpineRenderable : public UUIBaseRenderable
{ 
public:
	float                                              DepthOffset;                                                // 0x0538   (0x0004)  
	FName                                              TextureParameterName;                                       // 0x053C   (0x000C)  
	bool                                               bAdjustSizeWithAnimation;                                   // 0x0548   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0549   (0x0017)  MISSED
	class USpineSkeletonDataAsset*                     CurrSkeletonData;                                           // 0x0560   (0x0008)  
	unsigned char                                      UnknownData01_6[0x200];                                     // 0x0568   (0x0200)  MISSED
	SDK_UNDEFINED(80,871) /* TMap<ELGUICanvasClipType, UMaterialInterface*> */ __um(NormalBlendMaterials);         // 0x0768   (0x0050)  
	SDK_UNDEFINED(80,872) /* TMap<ELGUICanvasClipType, UMaterialInterface*> */ __um(AdditiveBlendMaterials);       // 0x07B8   (0x0050)  
	SDK_UNDEFINED(80,873) /* TMap<ELGUICanvasClipType, UMaterialInterface*> */ __um(MultiplyBlendMaterials);       // 0x0808   (0x0050)  
	SDK_UNDEFINED(80,874) /* TMap<ELGUICanvasClipType, UMaterialInterface*> */ __um(ScreenBlendMaterials);         // 0x0858   (0x0050)  
	TArray<class UMaterialInstanceDynamic*>            AtlasNormalBlendMaterials;                                  // 0x08A8   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            AtlasAdditiveBlendMaterials;                                // 0x08B8   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            AtlasMultiplyBlendMaterials;                                // 0x08C8   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            AtlasScreenBlendMaterials;                                  // 0x08D8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x08E8   (0x0008)  MISSED
	// int32_t GetTotalVerticeNum();                                                                                            // [0xc2ec60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetMeshesNum();                                                                                                  // [0xc2eaf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void AfterSkeletonUpdate(class USpineSkeletonComponent* SkeletonComponent);                                              // [0xc2e960] Final|Native|Protected 
	// void AdjustSize();                                                                                                       // [0xc2e940] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UISprite
/// Size: 0x0040 (64 bytes) (0x000740 - 0x000780) align 16 pad: 0x0000
class UUISprite : public UUISpriteBase
{ 
public:
	UISpriteType                                       Type;                                                       // 0x0740   (0x0001)  
	UISpriteFillMethod                                 fillMethod;                                                 // 0x0741   (0x0001)  
	char                                               fillOrigin;                                                 // 0x0742   (0x0001)  
	bool                                               fillDirectionFlip;                                          // 0x0743   (0x0001)  
	float                                              fillAmount;                                                 // 0x0744   (0x0004)  
	bool                                               bTileAutoFit;                                               // 0x0748   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0749   (0x0003)  MISSED
	float                                              clampEdge;                                                  // 0x074C   (0x0004)  
	float                                              tileX;                                                      // 0x0750   (0x0004)  
	float                                              tileY;                                                      // 0x0754   (0x0004)  
	float                                              offsetX;                                                    // 0x0758   (0x0004)  
	float                                              offsetY;                                                    // 0x075C   (0x0004)  
	class UMaterialInterface*                          HistoryCustomMaterial;                                      // 0x0760   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0768   (0x0018)  MISSED
	// void SetTileY(float NewValue);                                                                                           // [0xc2ff20] Final|Native|Public|BlueprintCallable 
	// void SetTileX(float NewValue);                                                                                           // [0xc2fea0] Final|Native|Public|BlueprintCallable 
	// void SetTileOffset(FLinearColor& In);                                                                                    // [0xc2fe10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetSpriteType(UISpriteType NewType);                                                                                // [0xc2fc30] Final|Native|Public|BlueprintCallable 
	// void SetOffsetY(float NewValue);                                                                                         // [0xc2f6b0] Final|Native|Public|BlueprintCallable 
	// void SetOffsetX(float NewValue);                                                                                         // [0xc2f630] Final|Native|Public|BlueprintCallable 
	// void SetFillOrigin(char NewValue);                                                                                       // [0xc2f2e0] Final|Native|Public|BlueprintCallable 
	// void SetFillMethod(UISpriteFillMethod NewValue);                                                                         // [0xc2f260] Final|Native|Public|BlueprintCallable 
	// void SetFillDirectionFlip(bool NewValue);                                                                                // [0xc2f1d0] Final|Native|Public|BlueprintCallable 
	// void SetFillAmount(float NewValue);                                                                                      // [0xc2f150] Final|Native|Public|BlueprintCallable 
	// UISpriteType GetSpriteType();                                                                                            // [0xc2ec00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// char GetFillOrigin();                                                                                                    // [0xc2eab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// UISpriteFillMethod GetFillMethod();                                                                                      // [0xc2ea90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetFillDirectionFlip();                                                                                             // [0xc2ea70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetFillAmount();                                                                                                   // [0xc221b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UISpriteActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUISpriteActor : public AUIBaseActor
{ 
public:
	class UUISprite*                                   UISprite;                                                   // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UISpriteBase_BP
/// Size: 0x0010 (16 bytes) (0x000740 - 0x000750) align 16 pad: 0x0000
class UUISpriteBase_BP : public UUISpriteBase
{ 
public:
	class ULGUICreateGeometryHelper*                   createGeometryHelper;                                       // 0x0740   (0x0008)  
	class ULGUIUpdateGeometryHelper*                   updateGeometryHelper;                                       // 0x0748   (0x0008)  
	// void OnUpdateGeometry_BP(class ULGUIUpdateGeometryHelper* InUpdateGoemetryHelper, class ULGUISpriteData_BaseObject* InSpriteData, bool InVertexPositionChanged, bool InVertexUVChanged, bool InVertexColorChanged); // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnCreateGeometry_BP(class ULGUICreateGeometryHelper* InCreateGeometryHelper, class ULGUISpriteData_BaseObject* InSpriteData); // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnBeforeCreateOrUpdateGeometry_BP();                                                                                // [0x25a7960] Event|Protected|BlueprintEvent 
	// void MarkVertexChanged_BP();                                                                                             // [0xc2ecb0] Final|Native|Public|BlueprintCallable 
	// void MarkRebuildGeometry_BP();                                                                                           // [0xc2ec90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UISpriteSequencePlayer
/// Size: 0x0018 (24 bytes) (0x0000E0 - 0x0000F8) align 8 pad: 0x0000
class UUISpriteSequencePlayer : public ULGUIImageSequencePlayer
{ 
public:
	SDK_UNDEFINED(8,875) /* TWeakObjectPtr<UUISpriteBase*> */ __um(Sprite);                                        // 0x00E0   (0x0008)  
	TArray<class ULGUISpriteData_BaseObject*>          spriteSequence;                                             // 0x00E8   (0x0010)  
	// void SetSpriteSequence(TArray<ULGUISpriteData_BaseObject*> Value);                                                       // [0xc2f9e0] Final|Native|Public|BlueprintCallable 
	// TArray<ULGUISpriteData_BaseObject*> GetSpriteSequence();                                                                 // [0xc2eb30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UISpriteSheetTexturePlayer
/// Size: 0x0018 (24 bytes) (0x0000E0 - 0x0000F8) align 8 pad: 0x0000
class UUISpriteSheetTexturePlayer : public ULGUIImageSequencePlayer
{ 
public:
	SDK_UNDEFINED(8,876) /* TWeakObjectPtr<UUITexture*> */ __um(Texture);                                          // 0x00E0   (0x0008)  
	int32_t                                            widthCount;                                                 // 0x00E8   (0x0004)  
	int32_t                                            heightCount;                                                // 0x00EC   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00F0   (0x0008)  MISSED
	// void SetWidthCount(int32_t Value);                                                                                       // [0xc30080] Final|Native|Public|BlueprintCallable 
	// void SetHeightCount(int32_t Value);                                                                                      // [0xc2f360] Final|Native|Public|BlueprintCallable 
	// int32_t GetWidthCount();                                                                                                 // [0xbf2ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetHeightCount();                                                                                                // [0xbf2b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LGUI.WidgetTransitionInfo
/// Size: 0x0104 (260 bytes) (0x000000 - 0x000104) align 4 pad: 0x0000
struct FWidgetTransitionInfo
{ 
	bool                                               bCustomNormalTransition : 1;                                // 0x0000:0 (0x0001)  
	bool                                               bCustomHighlightedTransition : 1;                           // 0x0000:1 (0x0001)  
	bool                                               bCustomPressedTransition : 1;                               // 0x0000:2 (0x0001)  
	bool                                               bCustomDisabledTransition : 1;                              // 0x0000:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FUIWidget                                          NormalTransition;                                           // 0x0004   (0x0040)  
	FUIWidget                                          HighlightedTransition;                                      // 0x0044   (0x0040)  
	FUIWidget                                          PressedTransition;                                          // 0x0084   (0x0040)  
	FUIWidget                                          DisabledTransition;                                         // 0x00C4   (0x0040)  
};

/// Class /Script/LGUI.UITransitionBase
/// Size: 0x0158 (344 bytes) (0x0000F8 - 0x000250) align 8 pad: 0x0000
class UUITransitionBase : public UUISelectableTransitionComponent
{ 
public:
	FWidgetTransitionInfo                              WidgetTransitionInfo;                                       // 0x00F8   (0x0104)  
	unsigned char                                      UnknownData00_7[0x54];                                      // 0x01FC   (0x0054)  MISSED
};

/// Struct /Script/LGUI.SpriteTransitionInfo
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FSpriteTransitionInfo
{ 
	FSpriteTransitionOfState                           NormalTransition;                                           // 0x0000   (0x0020)  
	FSpriteTransitionOfState                           HighlightedTransition;                                      // 0x0020   (0x0020)  
	FSpriteTransitionOfState                           PressedTransition;                                          // 0x0040   (0x0020)  
	FSpriteTransitionOfState                           DisabledTransition;                                         // 0x0060   (0x0020)  
};

/// Class /Script/LGUI.UISpriteTransition
/// Size: 0x0080 (128 bytes) (0x000250 - 0x0002D0) align 8 pad: 0x0000
class UUISpriteTransition : public UUITransitionBase
{ 
public:
	FSpriteTransitionInfo                              TransitionInfo;                                             // 0x0250   (0x0080)  
	// void SetStateSprite(EUISelectableSelectionState State, class ULGUISpriteData_BaseObject* newSprite);                     // [0xc2fcb0] Final|Native|Public|BlueprintCallable 
	// void SetAllTransitionSprite(class ULGUISpriteData_BaseObject* newSprite);                                                // [0xc2eea0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.SpriteTransitionUtil
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class USpriteTransitionUtil : public UBlueprintFunctionLibrary
{ 
public:
	// void SetSpriteSize(class UUISprite* Sprite, bool bSnapSize, float Width, float Height);                                  // [0xc2fad0] Final|Native|Static|Public|BlueprintCallable 
	// void SetSpriteByTransitionInfo(class UUISprite* Sprite, FSpriteTransitionOfState& Info);                                 // [0xc2f900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LGUI.UIStaticMesh
/// Size: 0x0018 (24 bytes) (0x000548 - 0x000560) align 16 pad: 0x0000
class UUIStaticMesh : public UUIDirectMeshRenderable
{ 
public:
	class UStaticMesh*                                 Mesh;                                                       // 0x0548   (0x0008)  
	UIStaticMeshVertexColorType                        vertexColorType;                                            // 0x0550   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0551   (0x000F)  MISSED
	// void SetVertexColorType(UIStaticMeshVertexColorType Value);                                                              // [0xc34260] Final|Native|Public|BlueprintCallable 
	// void SetMesh(class UStaticMesh* Value);                                                                                  // [0xc33d00] Final|Native|Public|BlueprintCallable 
	// UIStaticMeshVertexColorType GetVertexColorType();                                                                        // [0xc33160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UStaticMesh* GetMesh();                                                                                            // [0xc261f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIStaticMeshActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUIStaticMeshActor : public AUIBaseActor
{ 
public:
	class UUIStaticMesh*                               UIStaticMesh;                                               // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UITextClickComponent
/// Size: 0x0018 (24 bytes) (0x0000E8 - 0x000100) align 8 pad: 0x0000
class UUITextClickComponent : public ULGUIBehaviour
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00E8   (0x0010)  MISSED
	SDK_UNDEFINED(8,877) /* TWeakObjectPtr<UUIText*> */ __um(Target);                                              // 0x00F8   (0x0008)  
};

/// Class /Script/LGUI.UIText
/// Size: 0x02C0 (704 bytes) (0x000730 - 0x0009F0) align 16 pad: 0x0000
class UUIText : public UUIBatchGeometryRenderable
{ 
public:
	unsigned char                                      UnknownData00_3[0x60];                                      // 0x0730   (0x0060)  MISSED
	class ULGUIFontData_BaseObject*                    Font;                                                       // 0x0790   (0x0008)  
	FString                                            Text;                                                       // 0x0798   (0x0010)  
	float                                              Size;                                                       // 0x07A8   (0x0004)  
	FVector2D                                          spacePercentage;                                            // 0x07AC   (0x0008)  
	FVector2D                                          Space;                                                      // 0x07B4   (0x0008)  
	int32_t                                            OutlineSize;                                                // 0x07BC   (0x0004)  
	FColor                                             OutlineColor;                                               // 0x07C0   (0x0004)  
	UITextParagraphHorizontalAlign                     HAlign;                                                     // 0x07C4   (0x0001)  
	UITextParagraphVerticalAlign                       VAlign;                                                     // 0x07C5   (0x0001)  
	UITextOverflowType                                 overflowType;                                               // 0x07C6   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x07C7   (0x0001)  MISSED
	int32_t                                            MaxWidth;                                                   // 0x07C8   (0x0004)  
	int32_t                                            MaxHeight;                                                  // 0x07CC   (0x0004)  
	bool                                               adjustWidth;                                                // 0x07D0   (0x0001)  
	bool                                               adjustHeight;                                               // 0x07D1   (0x0001)  
	bool                                               NeedCustomerLimitWidth;                                     // 0x07D2   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x07D3   (0x0001)  MISSED
	float                                              CustomerLimitWidth;                                         // 0x07D4   (0x0004)  
	UITextFontStyle                                    fontStyle;                                                  // 0x07D8   (0x0001)  
	bool                                               richText;                                                   // 0x07D9   (0x0001)  
	bool                                               bApplyAlphaOnRichText;                                      // 0x07DA   (0x0001)  
	bool                                               bBestFit;                                                   // 0x07DB   (0x0001)  
	bool                                               bAlignCenter;                                               // 0x07DC   (0x0001)  
	bool                                               bIgnoreWordRules;                                           // 0x07DD   (0x0001)  
	bool                                               bAutoEllipsis;                                              // 0x07DE   (0x0001)  
	bool                                               bAutoEllipsisSplitWord;                                     // 0x07DF   (0x0001)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x07E0   (0x0004)  MISSED
	int32_t                                            BestFitMinSize;                                             // 0x07E4   (0x0004)  
	int32_t                                            BestFitRealSize;                                            // 0x07E8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x07EC   (0x0004)  MISSED
	TArray<FString>                                    hyperlinks;                                                 // 0x07F0   (0x0010)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x0800   (0x0004)  MISSED
	SDK_UNDEFINED(20,878) /* FDelegateProperty */      __um(OnHyperLinkClickCallBack);                             // 0x0804   (0x0014)  
	unsigned char                                      UnknownData06_6[0x78];                                      // 0x0818   (0x0078)  MISSED
	bool                                               bEnableTextRenderSystemV2;                                  // 0x0890   (0x0001)  
	unsigned char                                      UnknownData07_6[0xE7];                                      // 0x0891   (0x00E7)  MISSED
	class UUITextClickComponent*                       ClickComponent;                                             // 0x0978   (0x0008)  
	unsigned char                                      UnknownData08_6[0x28];                                      // 0x0980   (0x0028)  MISSED
	SDK_UNDEFINED(20,879) /* FDelegateProperty */      __um(OnSelfLanguageChange);                                 // 0x09A8   (0x0014)  
	SDK_UNDEFINED(20,880) /* FDelegateProperty */      __um(OnTextureAsyncLoaded);                                 // 0x09BC   (0x0014)  
	uint32_t                                           TranslateId;                                                // 0x09D0   (0x0004)  
	unsigned char                                      UnknownData09_7[0x1C];                                      // 0x09D4   (0x001C)  MISSED
	// void ShowTextNew(FString Key);                                                                                           // [0xc34420] Native|Public|BlueprintCallable 
	// void ShowText(FString ConfigTableName, int32_t Key);                                                                     // [0xc342e0] Native|Public|BlueprintCallable 
	// void SetTextTranslateDelegate(FDelegateProperty& Delegate);                                                              // [0xc341b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetText(FString newText, bool DisableTranslate);                                                                    // [0xc33fa0] Final|Native|Public|BlueprintCallable 
	// void SetRichText(bool newRichText);                                                                                      // [0xc33f10] Final|Native|Public|BlueprintCallable 
	// void SetParagraphVerticalAlignment(UITextParagraphVerticalAlign newVAlign);                                              // [0xc33e90] Final|Native|Public|BlueprintCallable 
	// void SetParagraphHorizontalAlignment(UITextParagraphHorizontalAlign newHAlign);                                          // [0xc33e10] Final|Native|Public|BlueprintCallable 
	// void SetOverflowType(UITextOverflowType newOverflowType);                                                                // [0xc33d90] Final|Native|Public|BlueprintCallable 
	// void SetMaxWidth(int32_t NewMaxWidth);                                                                                   // [0xc33c70] Final|Native|Public|BlueprintCallable 
	// void SetMaxHeight(int32_t NewMaxHeight);                                                                                 // [0xc33be0] Final|Native|Public|BlueprintCallable 
	// void SetLocalTextNewDelegate(FDelegateProperty& Delegate);                                                               // [0xc33b30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetLocalTextDelegate(FDelegateProperty& Delegate);                                                                  // [0xc33a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetFontStyle(UITextFontStyle newFontStyle);                                                                         // [0xc33980] Final|Native|Public|BlueprintCallable 
	// void SetFontSpacePercentage(FVector2D newSpace);                                                                         // [0xc33900] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetFontSpace(FVector2D newSpace);                                                                                   // [0xc33880] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetFontSize(float newSize);                                                                                         // [0xc33800] Final|Native|Public|BlueprintCallable 
	// void SetFont(class ULGUIFontData_BaseObject* newFont);                                                                   // [0xc33770] Final|Native|Public|BlueprintCallable 
	// void SetAdjustWidth(bool newAdjustWidth);                                                                                // [0xc33620] Final|Native|Public|BlueprintCallable 
	// void SetAdjustHeight(bool newAdjustHeight);                                                                              // [0xc33590] Final|Native|Public|BlueprintCallable 
	// void OnTsLanguageChange();                                                                                               // [0xc33300] Final|Native|Static|Public|BlueprintCallable 
	// void OnTextTextureLoaded(TArray<FDynamicAtlasSlotManagedHandle> ManagedHandle);                                          // [0xc33180] Final|Native|Public|BlueprintCallable 
	// FVector2D GetTextRenderSize();                                                                                           // [0xc33120] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void GetTextLineNumArray(TArray<int32_t>& OutArray);                                                                     // [0xc33070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FString GetText();                                                                                                       // [0xc32f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetSize();                                                                                                         // [0xc32f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetRichText();                                                                                                      // [0xc32f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetRealSize();                                                                                                 // [0xc32f10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// UITextOverflowType GetOverflowType();                                                                                    // [0xc32ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetMaxWidth();                                                                                                   // [0xc32ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetMaxHeight();                                                                                                  // [0xc32eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<FString> GetHyperlinks();                                                                                         // [0xc32d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// UITextFontStyle GetFontStyle();                                                                                          // [0xc32cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetFontSpacePercentage();                                                                                      // [0xc32cc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetFontSpaceFinal();                                                                                           // [0xc32c70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FVector2D GetFontSpace();                                                                                                // [0xc32c40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetFontOutlineSize();                                                                                            // [0xc32c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FColor GetFontOutlineColor();                                                                                            // [0xc32c00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class ULGUIFontData_BaseObject* GetFont();                                                                               // [0xc32be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetDisplayCharLength();                                                                                          // [0xc32bb0] Final|Native|Public|BlueprintCallable 
	// bool GetAutoEllipsisSplitWord();                                                                                         // [0xc32b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetAutoEllipsis();                                                                                                  // [0xc32b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetAlignCenter();                                                                                                   // [0xc32b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetAdjustWidth();                                                                                                   // [0xc32b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetAdjustHeight();                                                                                                  // [0xc32b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void Clear();                                                                                                            // [0xc32ac0] Native|Public|BlueprintCallable 
	// void AddStringArgs(FString Value);                                                                                       // [0xc329c0] Native|Public|BlueprintCallable 
	// void AddIntArgs(int32_t Value);                                                                                          // [0xc32930] Native|Public|BlueprintCallable 
	// void AddInt64Args(int64_t Value);                                                                                        // [0xc328a0] Native|Public|BlueprintCallable 
	// void AddFormatTableInfoNew(FString Key);                                                                                 // [0xc32800] Native|Public|BlueprintCallable 
	// void AddFormatTableInfo(FString ConfigTableName, int32_t Key);                                                           // [0xc326c0] Native|Public|BlueprintCallable 
	// void AddFloatArgs(float Value);                                                                                          // [0xc32630] Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UITextActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUITextActor : public AUIBaseActor
{ 
public:
	class UUIText*                                     UIText;                                                     // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UITextInputComponent
/// Size: 0x0290 (656 bytes) (0x000388 - 0x000618) align 8 pad: 0x0000
class UUITextInputComponent : public UUISelectableComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0388   (0x0008)  MISSED
	SDK_UNDEFINED(8,881) /* TWeakObjectPtr<AUITextActor*> */ __um(TextActor);                                      // 0x0390   (0x0008)  
	FString                                            Text;                                                       // 0x0398   (0x0010)  
	ELGUITextInputType                                 InputType;                                                  // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x03A9   (0x0007)  MISSED
	FString                                            PasswordChar;                                               // 0x03B0   (0x0010)  
	bool                                               bAllowMultiLine;                                            // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x03C1   (0x0003)  MISSED
	SDK_UNDEFINED(8,882) /* TWeakObjectPtr<AUIBaseActor*> */ __um(PlaceHolderActor);                               // 0x03C4   (0x0008)  
	float                                              CaretBlinkRate;                                             // 0x03CC   (0x0004)  
	float                                              CaretWidth;                                                 // 0x03D0   (0x0004)  
	bool                                               IsShowDefaultText;                                          // 0x03D4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x03D5   (0x0003)  MISSED
	FColor                                             CaretColor;                                                 // 0x03D8   (0x0004)  
	FColor                                             SelectionColor;                                             // 0x03DC   (0x0004)  
	FVirtualKeyboardOptions                            VirtualKeyboradOptions;                                     // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x03E1   (0x0007)  MISSED
	TArray<FKey>                                       IgnoreKeys;                                                 // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x03F8   (0x0018)  MISSED
	FLGUIDrawableEvent                                 OnValueChange;                                              // 0x0410   (0x0018)  
	unsigned char                                      UnknownData06_6[0x18];                                      // 0x0428   (0x0018)  MISSED
	FLGUIDrawableEvent                                 OnSubmit;                                                   // 0x0440   (0x0018)  
	unsigned char                                      UnknownData07_6[0x18];                                      // 0x0458   (0x0018)  MISSED
	FLGUIDrawableEvent                                 OnInputActivate;                                            // 0x0470   (0x0018)  
	SDK_UNDEFINED(20,883) /* FDelegateProperty */      __um(OnCheckTextInputDelegate);                             // 0x0488   (0x0014)  
	uint32_t                                           MaxInput;                                                   // 0x049C   (0x0004)  
	unsigned char                                      UnknownData08_6[0x88];                                      // 0x04A0   (0x0088)  MISSED
	class APlayerController*                           PlayerController;                                           // 0x0528   (0x0008)  
	unsigned char                                      UnknownData09_6[0x14];                                      // 0x0530   (0x0014)  MISSED
	SDK_UNDEFINED(8,884) /* TWeakObjectPtr<UUISprite*> */ __um(CaretObject);                                       // 0x0544   (0x0008)  
	unsigned char                                      UnknownData10_6[0x4];                                       // 0x054C   (0x0004)  MISSED
	SDK_UNDEFINED(16,885) /* TArray<TWeakObjectPtr<UUISprite*>> */ __um(SelectionMaskObjectArray);                 // 0x0550   (0x0010)  
	unsigned char                                      UnknownData11_6[0x68];                                      // 0x0560   (0x0068)  MISSED
	SDK_UNDEFINED(20,886) /* FDelegateProperty */      __um(OnTextChange);                                         // 0x05C8   (0x0014)  
	SDK_UNDEFINED(20,887) /* FDelegateProperty */      __um(OnTextSubmit);                                         // 0x05DC   (0x0014)  
	SDK_UNDEFINED(20,888) /* FDelegateProperty */      __um(OnTextClip);                                           // 0x05F0   (0x0014)  
	SDK_UNDEFINED(20,889) /* FDelegateProperty */      __um(OnInputActivateDelegate);                              // 0x0604   (0x0014)  
	// void UnregisterValueChangeEvent(FLGUIDelegateHandleWrapper& InDelegateHandle);                                           // [0xc345e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterSubmitEvent(FLGUIDelegateHandleWrapper& InDelegateHandle);                                                // [0xc34550] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UnregisterInputActivateEvent(FLGUIDelegateHandleWrapper& InDelegateHandle);                                         // [0xc344c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetText(FString InText, bool InFireEvent);                                                                          // [0xc34080] Final|Native|Public|BlueprintCallable 
	// void SetInputType(ELGUITextInputType NewValue);                                                                          // [0xc33a00] Final|Native|Public|BlueprintCallable 
	// void SetCustomInputTypeFunction(FDelegateProperty& InFunction);                                                          // [0xc336b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterValueChangeEvent(FDelegateProperty& InDelegate);                                      // [0xc334c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterSubmitEvent(FDelegateProperty& InDelegate);                                           // [0xc333f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterInputActivateEvent(FDelegateProperty& InDelegate);                                    // [0xc33320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// class UUIText* GetTextComponent();                                                                                       // [0xc33040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetText();                                                                                                       // [0xc32fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// ELGUITextInputType GetInputType();                                                                                       // [0xc32e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void ClearCustomInputTypeEvent();                                                                                        // [0xc32af0] Final|Native|Public|BlueprintCallable 
	// void ActivateInputText();                                                                                                // [0xc32610] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LGUI.TextTransitionInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 pad: 0x0000
struct FTextTransitionInfo
{ 
	FTextTransitionInfoOfState                         NormalTransition;                                           // 0x0000   (0x000C)  
	FTextTransitionInfoOfState                         HighlightedTransition;                                      // 0x000C   (0x000C)  
	FTextTransitionInfoOfState                         PressedTransition;                                          // 0x0018   (0x000C)  
	FTextTransitionInfoOfState                         DisabledTransition;                                         // 0x0024   (0x000C)  
};

/// Class /Script/LGUI.UITextTransition
/// Size: 0x0030 (48 bytes) (0x000250 - 0x000280) align 8 pad: 0x0000
class UUITextTransition : public UUITransitionBase
{ 
public:
	FTextTransitionInfo                                TransitionInfo;                                             // 0x0250   (0x0030)  
};

/// Class /Script/LGUI.UITextureBase
/// Size: 0x0060 (96 bytes) (0x000730 - 0x000790) align 16 pad: 0x0000
class UUITextureBase : public UUIBatchGeometryRenderable
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0730   (0x0008)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0738   (0x0058)  MISSED
	// void SetTexture(class UTexture* newTexture);                                                                             // [0xc37ed0] Native|Public|BlueprintCallable 
	// void SetSizeFromTexture();                                                                                               // [0xc37c20] Final|Native|Public|BlueprintCallable 
	// void SetDynamicAtlasTextureAsync(FString InAtlasTag, FSoftObjectPath InSoftObjectPath);                                  // [0xc37830] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void OnDynamicAtlasSlotBuilt(FDynamicAtlasSlotManagedHandle& ManagedHandle);                                             // [0xc37410] Native|Public|HasOutParms|BlueprintCallable 
	// class UTexture* GetTexture();                                                                                            // [0xc370b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UITexture
/// Size: 0x0070 (112 bytes) (0x000790 - 0x000800) align 16 pad: 0x0000
class UUITexture : public UUITextureBase
{ 
public:
	UITextureType                                      Type;                                                       // 0x0790   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0791   (0x0003)  MISSED
	FLGUISpriteInfo                                    spriteData;                                                 // 0x0794   (0x0034)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x07C8   (0x0008)  MISSED
	FVector4                                           UVRect;                                                     // 0x07D0   (0x0010)  
	UISpriteFillMethod                                 fillMethod;                                                 // 0x07E0   (0x0001)  
	char                                               fillOrigin;                                                 // 0x07E1   (0x0001)  
	bool                                               fillDirectionFlip;                                          // 0x07E2   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x07E3   (0x0001)  MISSED
	float                                              fillAmount;                                                 // 0x07E4   (0x0004)  
	bool                                               bIsFrameAnimate;                                            // 0x07E8   (0x0001)  
	bool                                               bUseFrameSize;                                              // 0x07E9   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x07EA   (0x0002)  MISSED
	int32_t                                            FrameAnimateRows;                                           // 0x07EC   (0x0004)  
	int32_t                                            FrameAnimateColumn;                                         // 0x07F0   (0x0004)  
	float                                              CurFrame;                                                   // 0x07F4   (0x0004)  
	FVector2D                                          FrameSize;                                                  // 0x07F8   (0x0008)  
	// void SetUVRect(FVector4 newUVRect);                                                                                      // [0xc382b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetTextureType(UITextureType NewType);                                                                              // [0xc381a0] Final|Native|Public|BlueprintCallable 
	// void SetSpriteData(FLGUISpriteInfo newSpriteData);                                                                       // [0xc37c40] Final|Native|Public|BlueprintCallable 
	// void SetFillOrigin(char NewValue);                                                                                       // [0xc37b10] Final|Native|Public|BlueprintCallable 
	// void SetFillMethod(UISpriteFillMethod NewValue);                                                                         // [0xc37a90] Final|Native|Public|BlueprintCallable 
	// void SetFillDirectionFlip(bool NewValue);                                                                                // [0xc37a00] Final|Native|Public|BlueprintCallable 
	// void SetFillAmount(float NewValue);                                                                                      // [0xc37980] Final|Native|Public|BlueprintCallable 
	// void SetCurFrame(float newCurFrame);                                                                                     // [0xc377b0] Final|Native|Public|BlueprintCallable 
	// FVector4 GetUVRect();                                                                                                    // [0xc37280] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// UITextureType GetTextureType();                                                                                          // [0xc370e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FLGUISpriteInfo GetSpriteData();                                                                                         // [0xc37040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// char GetFillOrigin();                                                                                                    // [0xc36fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// UISpriteFillMethod GetFillMethod();                                                                                      // [0xc36fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetFillDirectionFlip();                                                                                             // [0xc36f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetFillAmount();                                                                                                   // [0xc36f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UITextureActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUITextureActor : public AUIBaseActor
{ 
public:
	class UUITexture*                                  UITexture;                                                  // 0x0380   (0x0008)  
};

/// Class /Script/LGUI.UITextureBase_BP
/// Size: 0x0010 (16 bytes) (0x000790 - 0x0007A0) align 16 pad: 0x0000
class UUITextureBase_BP : public UUITextureBase
{ 
public:
	class ULGUICreateGeometryHelper*                   createGeometryHelper;                                       // 0x0790   (0x0008)  
	class ULGUIUpdateGeometryHelper*                   updateGeometryHelper;                                       // 0x0798   (0x0008)  
	// void OnUpdateGeometry_BP(class ULGUIUpdateGeometryHelper* InUpdateGoemetryHelper, bool InVertexPositionChanged, bool InVertexUVChanged, bool InVertexColorChanged); // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnCreateGeometry_BP(class ULGUICreateGeometryHelper* InCreateGeometryHelper);                                       // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnBeforeCreateOrUpdateGeometry_BP();                                                                                // [0x25a7960] Event|Protected|BlueprintEvent 
	// void MarkVertexChanged_BP();                                                                                             // [0xc2ecb0] Final|Native|Public|BlueprintCallable 
	// void MarkRebuildGeometry_BP();                                                                                           // [0xc2ec90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UITextureBox
/// Size: 0x0010 (16 bytes) (0x000790 - 0x0007A0) align 16 pad: 0x0000
class UUITextureBox : public UUITextureBase
{ 
public:
	float                                              Thickness;                                                  // 0x0790   (0x0004)  
	bool                                               seperateFrontColor;                                         // 0x0794   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0795   (0x0003)  MISSED
	FColor                                             frontFaceColor;                                             // 0x0798   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x079C   (0x0004)  MISSED
};

/// Class /Script/LGUI.UITextureBoxActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AUITextureBoxActor : public AUIBaseActor
{ 
public:
	class UUITextureBox*                               UITextureBox;                                               // 0x0380   (0x0008)  
};

/// Struct /Script/LGUI.TextureTransitionInfo
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FTextureTransitionInfo
{ 
	FTextureTransitionOfState                          NormalTransition;                                           // 0x0000   (0x0020)  
	FTextureTransitionOfState                          HighlightedTransition;                                      // 0x0020   (0x0020)  
	FTextureTransitionOfState                          PressedTransition;                                          // 0x0040   (0x0020)  
	FTextureTransitionOfState                          DisabledTransition;                                         // 0x0060   (0x0020)  
};

/// Class /Script/LGUI.UITextureTransitionComponent
/// Size: 0x0080 (128 bytes) (0x000250 - 0x0002D0) align 8 pad: 0x0000
class UUITextureTransitionComponent : public UUITransitionBase
{ 
public:
	FTextureTransitionInfo                             Transition;                                                 // 0x0250   (0x0080)  
	// void SetStateTexture(EUISelectableSelectionState State, class UTexture* newTexture);                                     // [0xc37e00] Final|Native|Public|BlueprintCallable 
	// void SetAllStateTexture(class UTexture* newTexture);                                                                     // [0xc37690] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.TextureTransitionUtil
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UTextureTransitionUtil : public UBlueprintFunctionLibrary
{ 
public:
	// void SetTextureSize(class UUITexture* Texture, bool bIsSnapSize, float Width, float Height);                             // [0xc38040] Final|Native|Static|Public|BlueprintCallable 
	// void SetTextureByTransitionInfo(class UUITexture* Texture, FTextureTransitionOfState& Info);                             // [0xc37f60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LGUI.UIToggleComponent
/// Size: 0x00B8 (184 bytes) (0x000388 - 0x000440) align 8 pad: 0x0000
class UUIToggleComponent : public UUISelectableComponent
{ 
public:
	SDK_UNDEFINED(8,890) /* TWeakObjectPtr<AUIBaseActor*> */ __um(ToggleActor);                                    // 0x0388   (0x0008)  
	UIToggleTransitionType                             ToggleTransition;                                           // 0x0390   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0391   (0x0003)  MISSED
	SDK_UNDEFINED(8,891) /* TWeakObjectPtr<UUISelectableTransitionComponent*> */ __um(ToggleTransitionComp);       // 0x0394   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x039C   (0x0004)  MISSED
	class ULTweener*                                   ToggleTransitionTweener;                                    // 0x03A0   (0x0008)  
	float                                              OnAlpha;                                                    // 0x03A8   (0x0004)  
	float                                              OffAlpha;                                                   // 0x03AC   (0x0004)  
	FColor                                             OnColor;                                                    // 0x03B0   (0x0004)  
	FColor                                             OffColor;                                                   // 0x03B4   (0x0004)  
	float                                              ToggleDuration;                                             // 0x03B8   (0x0004)  
	FName                                              OnTransitionName;                                           // 0x03BC   (0x000C)  
	FName                                              OffTransitionName;                                          // 0x03C8   (0x000C)  
	SDK_UNDEFINED(8,892) /* TWeakObjectPtr<AUIBaseActor*> */ __um(OnActor);                                        // 0x03D4   (0x0008)  
	SDK_UNDEFINED(8,893) /* TWeakObjectPtr<AUIBaseActor*> */ __um(OffActor);                                       // 0x03DC   (0x0008)  
	bool                                               IsOn;                                                       // 0x03E4   (0x0001)  
	bool                                               bToggleOnSelect;                                            // 0x03E5   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x03E6   (0x0002)  MISSED
	SDK_UNDEFINED(8,894) /* TWeakObjectPtr<AActor*> */ __um(UIToggleGroupActor);                                   // 0x03E8   (0x0008)  
	SDK_UNDEFINED(8,895) /* TWeakObjectPtr<UUIToggleGroupComponent*> */ __um(GroupComp);                           // 0x03F0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x03F8   (0x0018)  MISSED
	FLGUIDrawableEvent                                 OnToggle;                                                   // 0x0410   (0x0018)  
	SDK_UNDEFINED(20,896) /* FDelegateProperty */      __um(OnToggleEvent);                                        // 0x0428   (0x0014)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x043C   (0x0004)  MISSED
	// void UnregisterToggleEvent(FLGUIDelegateHandleWrapper& InDelegateHandle);                                                // [0xc345e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetValue(bool NewValue, bool fireEvent);                                                                            // [0xc38340] Native|Public|BlueprintCallable 
	// void SetToggleGroup(class UUIToggleGroupComponent* InGroupComp);                                                         // [0xc38220] Final|Native|Public|BlueprintCallable 
	// void SetState(bool NewState, bool fireEvent);                                                                            // [0xc37d20] Native|Public|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterToggleEvent(FDelegateProperty& InDelegate);                                           // [0xc374f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool GetValue();                                                                                                         // [0xc37090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class AActor* GetToggleGroupActor();                                                                                     // [0xc371a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetState();                                                                                                         // [0xc37090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetIndexInGroup();                                                                                               // [0xc36fe0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIToggleGroupComponent
/// Size: 0x0080 (128 bytes) (0x0000C0 - 0x000140) align 8 pad: 0x0000
class UUIToggleGroupComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	SDK_UNDEFINED(8,897) /* TWeakObjectPtr<UUIToggleComponent*> */ __um(LastSelect);                               // 0x00C8   (0x0008)  
	SDK_UNDEFINED(16,898) /* TArray<TWeakObjectPtr<UUIToggleComponent*>> */ __um(ToggleCollection);                // 0x00D0   (0x0010)  
	bool                                               bAllowNoneSelected;                                         // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x00E1   (0x001F)  MISSED
	FLGUIDrawableEvent                                 OnToggle;                                                   // 0x0100   (0x0018)  
	bool                                               AllowEventBubbleUp;                                         // 0x0118   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0119   (0x0003)  MISSED
	SDK_UNDEFINED(8,899) /* TWeakObjectPtr<UUIToggleComponent*> */ __um(Selected);                                 // 0x011C   (0x0008)  
	SDK_UNDEFINED(8,900) /* TWeakObjectPtr<UUIToggleComponent*> */ __um(Highlighted);                              // 0x0124   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	SDK_UNDEFINED(16,901) /* TArray<TWeakObjectPtr<UUIToggleComponent*>> */ __um(SelectableComponents);            // 0x0130   (0x0010)  
	// void UnregisterToggleEvent(FLGUIDelegateHandleWrapper& InDelegateHandle);                                                // [0xc38420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetSelection(class UUIToggleComponent* Target);                                                                     // [0xc37b90] Final|Native|Public|BlueprintCallable 
	// void SetAllowNoneSelected(bool InBool);                                                                                  // [0xc37720] Final|Native|Public|BlueprintCallable 
	// FLGUIDelegateHandleWrapper RegisterToggleEvent(FDelegateProperty& InDelegate);                                           // [0xc375c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void OnComponentUnselected();                                                                                            // [0xc373f0] Final|Native|Public|BlueprintCallable 
	// void OnComponentUnhighlighted();                                                                                         // [0xc373d0] Final|Native|Public|BlueprintCallable 
	// void OnComponentSelected(class UUIToggleComponent* Component);                                                           // [0xc37340] Final|Native|Public|BlueprintCallable 
	// void OnComponentHighlighted(class UUIToggleComponent* Component);                                                        // [0xc372b0] Final|Native|Public|BlueprintCallable 
	// int32_t GetToggleIndex(class UUIToggleComponent* InComp);                                                                // [0xc371e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUIToggleComponent* GetToggleByIndex(int32_t InIndex);                                                             // [0xc37100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UUIToggleComponent* GetSelectedItem();                                                                             // [0xc37010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetAllowNoneSelected();                                                                                             // [0xbf2c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void ClearSelection();                                                                                                   // [0xc36f40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.UIVerticalLayout
/// Size: 0x0030 (48 bytes) (0x000168 - 0x000198) align 8 pad: 0x0000
class UUIVerticalLayout : public UUILayoutWithAnimation
{ 
public:
	FMargin                                            Padding;                                                    // 0x0168   (0x0010)  
	float                                              Spacing;                                                    // 0x0178   (0x0004)  
	ELGUILayoutAlignmentType                           align;                                                      // 0x017C   (0x0001)  
	bool                                               ExpendChildrenWidth;                                        // 0x017D   (0x0001)  
	bool                                               ExpendChildrenHeight;                                       // 0x017E   (0x0001)  
	bool                                               HeightFitToChildren;                                        // 0x017F   (0x0001)  
	bool                                               WidthFitToChildren;                                         // 0x0180   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0181   (0x0017)  MISSED
	// void SetWidthFitToChildren(bool Value);                                                                                  // [0xc1a470] Final|Native|Public|BlueprintCallable 
	// void SetSpacing(float Value);                                                                                            // [0xc1a970] Final|Native|Public|BlueprintCallable 
	// void SetPadding(FMargin Value);                                                                                          // [0xc1a860] Final|Native|Public|BlueprintCallable 
	// void SetHeightFitToChildren(bool Value);                                                                                 // [0xc1acc0] Final|Native|Public|BlueprintCallable 
	// void SetExpendChildrenWidth(bool Value);                                                                                 // [0xc1a350] Final|Native|Public|BlueprintCallable 
	// void SetExpendChildrenHeight(bool Value);                                                                                // [0xc1a2c0] Final|Native|Public|BlueprintCallable 
	// void SetAlign(ELGUILayoutAlignmentType Value);                                                                           // [0xc19f80] Final|Native|Public|BlueprintCallable 
	// bool GetWidthFitToChildren();                                                                                            // [0xbf2c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetSpacing();                                                                                                      // [0xc19a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FMargin GetPadding();                                                                                                    // [0xc199b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetHeightFitToChildren();                                                                                           // [0xc19a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetExpendChildrenWidth();                                                                                           // [0xc198f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetExpendChildrenHeight();                                                                                          // [0xc198d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// ELGUILayoutAlignmentType GetAlign();                                                                                     // [0xc19840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetActuralRange();                                                                                                 // [0xc19820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.UIViewAudioEffectComponent
/// Size: 0x0010 (16 bytes) (0x0000C0 - 0x0000D0) align 8 pad: 0x0000
class UUIViewAudioEffectComponent : public UActorComponent
{ 
public:
	bool                                               bAudioCoverEnable;                                          // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C1   (0x0003)  MISSED
	float                                              AudioUiAlpha;                                               // 0x00C4   (0x0004)  
	float                                              AudioUiCover;                                               // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/LGUI.UIViewTweenParams
/// Size: 0x0020 (32 bytes) (0x0000C0 - 0x0000E0) align 8 pad: 0x0000
class UUIViewTweenParams : public UActorComponent
{ 
public:
	float                                              TweenSize;                                                  // 0x00C0   (0x0004)  
	float                                              TweenAlpha;                                                 // 0x00C4   (0x0004)  
	float                                              TweenTime;                                                  // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FString>                                    ViewNameBlackList;                                          // 0x00D0   (0x0010)  
	// TArray<FString> GetViewNameBlackList();                                                                                  // [0xc392c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetTweenTime();                                                                                                    // [0xc392a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetTweenSize();                                                                                                    // [0xbe0cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetTweenAlpha();                                                                                                   // [0xc39280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.LGUIMapTilesSyncer
/// Size: 0x0008 (8 bytes) (0x0000E8 - 0x0000F0) align 8 pad: 0x0000
class ULGUIMapTilesSyncer : public ULGUIBehaviour
{ 
public:
	class AActor*                                      TilesRoot;                                                  // 0x00E8   (0x0008)  
};

/// Class /Script/LGUI.ViewportUITexture
/// Size: 0x0010 (16 bytes) (0x000800 - 0x000810) align 16 pad: 0x0000
class UViewportUITexture : public UUITexture
{ 
public:
	class ASceneCapture2D*                             SceneCaptureActor;                                          // 0x0800   (0x0008)  
	bool                                               bSyncSizeToRT;                                              // 0x0808   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0809   (0x0007)  MISSED
	// bool WorldToViewPoint(FVector& InWorldLocation, FVector2D& OutViewPoint);                                                // [0xc394f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// void ViewPointToWorld(FVector2D& InViewPoint, FVector& OutWorldLocation, FVector& OutWorldDirection);                    // [0xc393c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class USceneCaptureComponent2D* GetSceneCapture();                                                                       // [0xc39250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LGUI.ViewportUITextureActor
/// Size: 0x0008 (8 bytes) (0x000380 - 0x000388) align 8 pad: 0x0000
class AViewportUITextureActor : public AUIBaseActor
{ 
public:
	class UViewportUITexture*                          UITextureComponent;                                         // 0x0380   (0x0008)  
	// class UViewportUITexture* GetUITexture();                                                                                // [0xc221d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LGUI.WwiseAudioComponent
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UWwiseAudioComponent : public UActorComponent
{ 
public:
	int32_t                                            AudioStateSystemLevel;                                      // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00C4   (0x0004)  MISSED
	// int32_t GetAudioStateSystemLevel();                                                                                      // [0xbe0cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LGUI.LGUIAtlasData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FLGUIAtlasData
{ 
	SDK_UNDEFINED(16,902) /* TArray<TWeakObjectPtr<UUISpriteBase*>> */ __um(renderSpriteArray);                    // 0x0000   (0x0010)  
	class UTexture2D*                                  atlasTexture;                                               // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0018   (0x0030)  MISSED
	TArray<class ULGUISpriteData*>                     spriteDataArray;                                            // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0058   (0x0018)  MISSED
};

/// Struct /Script/LGUI.UIItemInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FUIItemInfo
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LGUI.RegisterRuntimeData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FRegisterRuntimeData
{ 
	class AActor*                                      TargetActor;                                                // 0x0000   (0x0008)  
	class UClass*                                      targetComponentClass;                                       // 0x0008   (0x0008)  
	FName                                              ComponentName;                                              // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/LGUI.ComponentRegistryEditorData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FComponentRegistryEditorData
{ 
	FString                                            ExportName;                                                 // 0x0000   (0x0010)  
	FRegisterRuntimeData                               RuntimeCacheData;                                           // 0x0010   (0x0020)  
	FString                                            ActorPath;                                                  // 0x0030   (0x0010)  
	FString                                            ActorType;                                                  // 0x0040   (0x0010)  
};

/// Struct /Script/LGUI.RegisteredComponents
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FRegisteredComponents
{ 
	TArray<FComponentRegistryEditorData>               RegisteredData;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/LGUI.LGUIDelegateHandleWrapper
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FLGUIDelegateHandleWrapper
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Rotator
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Rotator : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Class
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Class : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_PointerEvent
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_PointerEvent : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Actor
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Actor : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Object
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Object : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_String
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_String : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Quaternion
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Quaternion : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_LinearColor
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_LinearColor : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Color
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Color : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Vector4
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Vector4 : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Vector3
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Vector3 : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Vector2
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Vector2 : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_UInt64
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_UInt64 : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Int64
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Int64 : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_UInt32
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_UInt32 : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Int32
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Int32 : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_UInt16
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_UInt16 : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Int16
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Int16 : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_UInt8
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_UInt8 : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Int8
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Int8 : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Double
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Double : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Float
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Float : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Bool
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Bool : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUIDrawableEvent_Empty
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000030) align 8 pad: 0x0000
struct FLGUIDrawableEvent_Empty : FLGUIDrawableEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/LGUI.LGUICharData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FLGUICharData
{ 
	uint16_t                                           Width;                                                      // 0x0000   (0x0002)  
	uint16_t                                           Height;                                                     // 0x0002   (0x0002)  
	float                                              xoffset;                                                    // 0x0004   (0x0004)  
	float                                              yoffset;                                                    // 0x0008   (0x0004)  
	int16_t                                            xadvance;                                                   // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	float                                              uv0X;                                                       // 0x0010   (0x0004)  
	float                                              uv0Y;                                                       // 0x0014   (0x0004)  
	float                                              uv3X;                                                       // 0x0018   (0x0004)  
	float                                              uv3Y;                                                       // 0x001C   (0x0004)  
	bool                                               bHasRendered;                                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0021   (0x0001)  MISSED
	int16_t                                            descender;                                                  // 0x0022   (0x0002)  
	unsigned char                                      UnknownData02_7[0x14];                                      // 0x0024   (0x0014)  MISSED
};

/// Struct /Script/LGUI.LGUIPostTickFunction
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
struct FLGUIPostTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/LGUI.ActorGuidAndPrefabContainer
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FActorGuidAndPrefabContainer
{ 
	class ULGUIPrefab*                                 Prefab;                                                     // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,903) /* TMap<FGuid, FGuid> */     __um(GuidFromPrefabToInstance);                             // 0x0008   (0x0050)  
};

/// Struct /Script/LGUI.LGUIPrefabOverrideParameterData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FLGUIPrefabOverrideParameterData
{ 
	SDK_UNDEFINED(8,904) /* TWeakObjectPtr<UObject*> */ __um(Object);                                              // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,905) /* TMap<FName, FGuid> */     __um(MemberPropertyInfoMap);                                // 0x0008   (0x0050)  
};

/// Struct /Script/LGUI.LGUISubPrefabData
/// Size: 0x00D8 (216 bytes) (0x000000 - 0x0000D8) align 8 pad: 0x0000
struct FLGUISubPrefabData
{ 
	FGuid                                              MasterPrefabGuid;                                           // 0x0000   (0x0010)  
	FGuid                                              UniqueStamp;                                                // 0x0010   (0x0010)  
	class ULGUIPrefabV2*                               PrefabAsset;                                                // 0x0020   (0x0008)  
	TArray<FLGUIPrefabOverrideParameterData>           ObjectOverrideParameterArray;                               // 0x0028   (0x0010)  
	SDK_UNDEFINED(80,906) /* TMap<FGuid, FGuid> */     __um(ObjMainGuidToSelfGuidMap);                             // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,907) /* TMap<FGuid, UObject*> */  __um(SelfGuidObjMap);                                       // 0x0088   (0x0050)  
};

/// Struct /Script/LGUI.GuidObjBiMap
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 pad: 0x0000
struct FGuidObjBiMap
{ 
	SDK_UNDEFINED(80,908) /* TMap<FGuid, UObject*> */  __um(AllGuidToObjMap);                                      // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,909) /* TMap<UObject*, FGuid> */  __um(AllObjToGuidMap);                                      // 0x0050   (0x0050)  
};

/// Struct /Script/LGUI.ActorBindings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FActorBindings
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/LGUI.ActorBindingInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FActorBindingInfo
{ 
	SDK_UNDEFINED(8,910) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                                // 0x0000   (0x0008)  
	FGuid                                              ObjectGUID;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/LGUI.LGUITextRuleItem
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FLGUITextRuleItem : FTableRowBase
{ 
	FString                                            KeyWord;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/LGUI.LGUILevelSequenceBindings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FLGUILevelSequenceBindings
{ 
	SDK_UNDEFINED(80,911) /* TMap<FGuid, UObject*> */  __um(BindingsMap);                                          // 0x0000   (0x0050)  
};

/// Struct /Script/LGUI.AudioPlayInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FAudioPlayInfo
{ 
	FSoftObjectPath                                    AkAudioEvent;                                               // 0x0000   (0x0020)  
	SDK_UNDEFINED(20,912) /* FDelegateProperty */      __um(OnPostAudioEvent);                                     // 0x0020   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/LGUI.ToggleAnimationPlayInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FToggleAnimationPlayInfo
{ 
	FSequenceInfo                                      Animation;                                                  // 0x0000   (0x0038)  
	float                                              PlayRate;                                                   // 0x0038   (0x0004)  
	bool                                               bPlayReverse;                                               // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            JumpToFrame;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/LGUI.ToggleStateAnimation
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 pad: 0x0000
struct FToggleStateAnimation
{ 
	SDK_UNDEFINED(80,913) /* TMap<EToggleStateInAnimation, FToggleAnimationPlayInfo> */ __um(StateToAnimation);    // 0x0000   (0x0050)  
	bool                                               bDifferSelectedState;                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FToggleAnimationPlayInfo                           UniAnimation;                                               // 0x0058   (0x0048)  
};

/// Struct /Script/LGUI.PredefColor
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FPredefColor : FTableRowBase
{ 
	FColor                                             Color;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Comment;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/LGUI.AnimationPlayInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FAnimationPlayInfo
{ 
	EAnimationPlayMode                                 PlayMode;                                                   // 0x0000   (0x0001)  
	EStateTransferType                                 ReverseType;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FSequenceInfo                                      Animation;                                                  // 0x0008   (0x0038)  
	float                                              PlayRate;                                                   // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

