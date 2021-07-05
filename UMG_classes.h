// Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x110 (Inherited: 0x28)
struct UWidget : UVisual {
	struct UPanelSlot* Slot; // 0x28(0x08)
	struct FDelegate bIsEnabledDelegate; // 0x30(0x10)
	struct FText ToolTipText; // 0x40(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x58(0x10)
	struct UWidget* ToolTipWidget; // 0x68(0x08)
	struct FDelegate ToolTipWidgetDelegate; // 0x70(0x10)
	struct FDelegate VisibilityDelegate; // 0x80(0x10)
	struct FWidgetTransform RenderTransform; // 0x90(0x1c)
	struct FVector2D RenderTransformPivot; // 0xac(0x08)
	char bIsVariable : 1; // 0xb4(0x01)
	char bCreatedByConstructionScript : 1; // 0xb4(0x01)
	char bIsEnabled : 1; // 0xb4(0x01)
	char bOverride_Cursor : 1; // 0xb4(0x01)
	char pad_B4_4 : 4; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xb8(0x08)
	char bIsVolatile : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	enum class EMouseCursor Cursor; // 0xc1(0x01)
	enum class EWidgetClipping Clipping; // 0xc2(0x01)
	enum class ESlateVisibility Visibility; // 0xc3(0x01)
	float CursorFriction; // 0xc4(0x04)
	float RenderOpacity; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct UWidgetNavigation* Navigation; // 0xd0(0x08)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xd8(0x01)
	char pad_D9[0x27]; // 0xd9(0x27)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x100(0x10)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetToolTipText(struct FText InToolTipText); // Function UMG.Widget.SetToolTipText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetFocus(bool bAllUsers); // Function UMG.Widget.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetCursorFriction(float inCursorFriction); // Function UMG.Widget.SetCursorFriction // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAllUserFocus(); // Function UMG.Widget.SetAllUserFocus // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ResetCursor(); // Function UMG.Widget.ResetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0xffff8008e4a10000
	bool IsVisible(); // Function UMG.Widget.IsVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsHovered(); // Function UMG.Widget.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // (Public|Delegate|HasDefaults) // @ game+0xffff8008e4a10000
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetCursorFriction(); // Function UMG.Widget.GetCursorFriction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	struct FText GetAccessibleText(); // Function UMG.Widget.GetAccessibleText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FText GetAccessibleSummaryText(); // Function UMG.Widget.GetAccessibleSummaryText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.UserWidget
// Size: 0x270 (Inherited: 0x110)
struct UUserWidget : UWidget {
	char pad_110[0x8]; // 0x110(0x08)
	struct FLinearColor ColorAndOpacity; // 0x118(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x128(0x10)
	struct FSlateColor ForegroundColor; // 0x138(0x28)
	struct FDelegate ForegroundColorDelegate; // 0x160(0x10)
	struct FMulticastInlineDelegate OnVisibilityChanged; // 0x170(0x10)
	char pad_180[0x18]; // 0x180(0x18)
	struct FMargin Padding; // 0x198(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1a8(0x10)
	struct UUMGSequenceTickManager* AnimationTickManager; // 0x1b8(0x08)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1c0(0x10)
	bool bShouldUpdateAnimation; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1d8(0x10)
	struct UWidgetTree* WidgetTree; // 0x1e8(0x08)
	int32_t Priority; // 0x1f0(0x04)
	char bSupportsKeyboardFocus : 1; // 0x1f4(0x01)
	char bIsFocusable : 1; // 0x1f4(0x01)
	char bStopAction : 1; // 0x1f4(0x01)
	char bHasScriptImplementedTick : 1; // 0x1f4(0x01)
	char bHasScriptImplementedPaint : 1; // 0x1f4(0x01)
	char pad_1F4_5 : 3; // 0x1f4(0x01)
	char pad_1F5[0xb]; // 0x1f5(0x0b)
	enum class EWidgetTickFrequency TickFrequency; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct UInputComponent* InputComponent; // 0x208(0x08)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x210(0x10)
	char pad_220[0x50]; // 0x220(0x50)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0xffff8008e4a10000
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0xffff8008e4a10000
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // (Final|Native|Protected|BlueprintCallable) // @ game+0xffff8008e4a10000
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority // (Final|Native|Protected|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking // (Final|Native|Protected|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAnimationCurrentTime(struct UWidgetAnimation* InAnimation, float InTime); // Function UMG.UserWidget.SetAnimationCurrentTime // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchStarted // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchMoved // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent GestureEvent); // Function UMG.UserWidget.OnTouchGesture // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchEnded // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnPaint(struct FPaintContext Context); // Function UMG.UserWidget.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xffff8008e4a10000
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnDragCancelled(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // (BlueprintCosmetic|Event|Public|BlueprintEvent|Const) // @ game+0xffff8008e4a10000
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct APlayerCameraManager* GetOwningPlayerCameraManager(); // Function UMG.UserWidget.GetOwningPlayerCameraManager // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void FlushAnimations(); // Function UMG.UserWidget.FlushAnimations // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void Destruct(); // Function UMG.UserWidget.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function UMG.UserWidget.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.PanelWidget
// Size: 0x128 (Inherited: 0x110)
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x110(0x10)
	char pad_120[0x8]; // 0x120(0x08)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.ContentWidget
// Size: 0x128 (Inherited: 0x128)
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.RichTextBlockDecorator
// Size: 0x28 (Inherited: 0x28)
struct URichTextBlockDecorator : UObject {
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x30 (Inherited: 0x28)
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	struct UDataTable* ImageSet; // 0x28(0x08)
};

// Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x28(0x08)
	struct UWidget* Content; // 0x30(0x08)
};

// Class UMG.ProgressBar
// Size: 0x320 (Inherited: 0x110)
struct UProgressBar : UWidget {
	struct FProgressBarStyle WidgetStyle; // 0x110(0x1a0)
	struct USlateWidgetStyleAsset* Style; // 0x2b0(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x2b8(0x08)
	struct USlateBrushAsset* FillImage; // 0x2c0(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x2c8(0x08)
	float Percent; // 0x2d0(0x04)
	enum class EProgressBarFillType BarFillType; // 0x2d4(0x01)
	bool bIsMarquee; // 0x2d5(0x01)
	char pad_2D6[0x2]; // 0x2d6(0x02)
	struct FVector2D BorderPadding; // 0x2d8(0x08)
	struct FDelegate PercentDelegate; // 0x2e0(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x2f0(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x300(0x10)
	char pad_310[0x10]; // 0x310(0x10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.Slider
// Size: 0x500 (Inherited: 0x110)
struct USlider : UWidget {
	float Value; // 0x110(0x04)
	struct FDelegate ValueDelegate; // 0x114(0x10)
	float MinValue; // 0x124(0x04)
	float MaxValue; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FSliderStyle WidgetStyle; // 0x130(0x340)
	enum class EOrientation Orientation; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	struct FLinearColor SliderBarColor; // 0x474(0x10)
	struct FLinearColor SliderHandleColor; // 0x484(0x10)
	bool IndentHandle; // 0x494(0x01)
	bool Locked; // 0x495(0x01)
	bool MouseUsesStep; // 0x496(0x01)
	bool RequiresControllerLock; // 0x497(0x01)
	float StepSize; // 0x498(0x04)
	bool IsFocusable; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x4a0(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4b0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4c0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4d0(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4e0(0x10)
	char pad_4F0[0x10]; // 0x4f0(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	float GetValue(); // Function UMG.Slider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.TextLayoutWidget
// Size: 0x130 (Inherited: 0x110)
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x110(0x03)
	enum class ETextJustify Justification; // 0x113(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x114(0x01)
	char AutoWrapText : 1; // 0x115(0x01)
	char pad_115_1 : 7; // 0x115(0x01)
	char pad_116[0x2]; // 0x116(0x02)
	float WrapTextAt; // 0x118(0x04)
	struct FMargin Margin; // 0x11c(0x10)
	float LineHeightPercentage; // 0x12c(0x04)

	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.RichTextBlock
// Size: 0x690 (Inherited: 0x130)
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x130(0x18)
	struct UDataTable* TextStyleSet; // 0x148(0x08)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x150(0x10)
	bool bOverrideDefaultStyle; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x168(0x270)
	float MinDesiredWidth; // 0x3d8(0x04)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	struct FTextBlockStyle DefaultTextStyle; // 0x3e0(0x270)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x650(0x10)
	char pad_660[0x20]; // 0x660(0x20)
	struct FDataTableRowHandle RichTextLabelWrapperHandle; // 0x680(0x10)

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.RichTextBlock.SetTextTransformPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetText(struct FText InText); // Function UMG.RichTextBlock.SetText // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDefaultTextStyle(struct FTextBlockStyle InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDefaultStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FText GetText(); // Function UMG.RichTextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides // (Final|Native|Public) // @ game+0xffff8008e4a10000
};

// Class UMG.Button
// Size: 0x440 (Inherited: 0x128)
struct UButton : UContentWidget {
	struct USlateWidgetStyleAsset* Style; // 0x128(0x08)
	struct FButtonStyle WidgetStyle; // 0x130(0x278)
	struct FLinearColor ColorAndOpacity; // 0x3a8(0x10)
	struct FLinearColor BackgroundColor; // 0x3b8(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x3c8(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x3c9(0x01)
	enum class EButtonPressMethod PressMethod; // 0x3ca(0x01)
	bool IsFocusable; // 0x3cb(0x01)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FMulticastInlineDelegate OnClicked; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnRightClicked; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x400(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x410(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x420(0x10)
	char pad_430[0x10]; // 0x430(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetStyle(struct FButtonStyle InStyle); // Function UMG.Button.SetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsPressed(); // Function UMG.Button.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.WidgetSwitcher
// Size: 0x140 (Inherited: 0x128)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x128(0x04)
	char pad_12C[0x14]; // 0x12c(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.DragDropOperation
// Size: 0x98 (Inherited: 0x28)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x28(0x10)
	struct UObject* Payload; // 0x38(0x08)
	struct UWidget* DefaultDragVisual; // 0x40(0x08)
	enum class EDragPivot Pivot; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector2D Offset; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct FMulticastInlineDelegate OnDrop; // 0x58(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x68(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x78(0x10)
	struct FMulticastInlineDelegate OnEnded; // 0x88(0x10)

	void Ended(); // Function UMG.DragDropOperation.Ended // (Native|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Drop(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.Drop // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Dragged(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.Dragged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void DragCancelled(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.DragCancelled // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x50 (Inherited: 0x30)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.BackgroundBlur
// Size: 0x1e0 (Inherited: 0x128)
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; // 0x128(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x138(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x139(0x01)
	bool bApplyAlphaToBlur; // 0x13a(0x01)
	char pad_13B[0x1]; // 0x13b(0x01)
	float BlurStrength; // 0x13c(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	int32_t BlurRadius; // 0x144(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x148(0x88)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetLowQualityFallbackBrush(struct FSlateBrush InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.BackgroundBlurSlot
// Size: 0x60 (Inherited: 0x38)
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.PropertyBinding
// Size: 0x60 (Inherited: 0x28)
struct UPropertyBinding : UObject {
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x28(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x30(0x28)
	struct FName DestinationProperty; // 0x58(0x08)
};

// Class UMG.BoolBinding
// Size: 0x60 (Inherited: 0x60)
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // Function UMG.BoolBinding.GetValue // (Final|Native|Public|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.Border
// Size: 0x278 (Inherited: 0x128)
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x128(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x129(0x01)
	char bShowEffectWhenDisabled : 1; // 0x12a(0x01)
	char pad_12A_1 : 7; // 0x12a(0x01)
	char pad_12B[0x1]; // 0x12b(0x01)
	struct FLinearColor ContentColorAndOpacity; // 0x12c(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x13c(0x10)
	struct FMargin Padding; // 0x14c(0x10)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FSlateBrush Background; // 0x160(0x88)
	struct FDelegate BackgroundDelegate; // 0x1e8(0x10)
	struct FLinearColor BrushColor; // 0x1f8(0x10)
	struct FDelegate BrushColorDelegate; // 0x208(0x10)
	struct FVector2D DesiredSizeScale; // 0x218(0x08)
	bool bFlipForRightToLeftFlowDirection; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x224(0x10)
	struct FDelegate OnMouseButtonUpEvent; // 0x234(0x10)
	struct FDelegate OnMouseMoveEvent; // 0x244(0x10)
	struct FDelegate OnMouseDoubleClickEvent; // 0x254(0x10)
	char pad_264[0x14]; // 0x264(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrush(struct FSlateBrush InBrush); // Function UMG.Border.SetBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.BorderSlot
// Size: 0x60 (Inherited: 0x38)
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.BrushBinding
// Size: 0x68 (Inherited: 0x60)
struct UBrushBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // (Final|Native|Public|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.ButtonSlot
// Size: 0x60 (Inherited: 0x38)
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.CanvasPanel
// Size: 0x138 (Inherited: 0x128)
struct UCanvasPanel : UPanelWidget {
	char pad_128[0x10]; // 0x128(0x10)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.CanvasPanelSlot
// Size: 0x70 (Inherited: 0x38)
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x38(0x28)
	bool bAutoSize; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t ZOrder; // 0x64(0x04)
	char pad_68[0x8]; // 0x68(0x08)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum // (Final|Native|Public|HasDefaults) // @ game+0xffff8008e4a10000
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum // (Final|Native|Public|HasDefaults) // @ game+0xffff8008e4a10000
	void SetLayout(struct FAnchorData InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.CheckBox
// Size: 0x778 (Inherited: 0x128)
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	struct FDelegate CheckedStateDelegate; // 0x12c(0x10)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x140(0x580)
	struct USlateWidgetStyleAsset* Style; // 0x6c0(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x6c8(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x6d0(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x6d8(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x6e0(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x6e8(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x6f0(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x6f8(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x700(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x708(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x710(0x01)
	char pad_711[0x3]; // 0x711(0x03)
	struct FMargin Padding; // 0x714(0x10)
	char pad_724[0x4]; // 0x724(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x728(0x28)
	enum class EButtonClickMethod ClickMethod; // 0x750(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x751(0x01)
	enum class EButtonPressMethod PressMethod; // 0x752(0x01)
	bool IsFocusable; // 0x753(0x01)
	char pad_754[0x4]; // 0x754(0x04)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x758(0x10)
	char pad_768[0x10]; // 0x768(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.CheckBox.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.CheckBox.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.CheckBox.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.CheckedStateBinding
// Size: 0x68 (Inherited: 0x60)
struct UCheckedStateBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue // (Final|Native|Public|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.CircularThrobber
// Size: 0x1c8 (Inherited: 0x110)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x110(0x04)
	float Period; // 0x114(0x04)
	float Radius; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct USlateBrushAsset* PieceImage; // 0x120(0x08)
	struct FSlateBrush Image; // 0x128(0x88)
	bool bEnableRadius; // 0x1b0(0x01)
	char pad_1B1[0x17]; // 0x1b1(0x17)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.ColorBinding
// Size: 0x68 (Inherited: 0x60)
struct UColorBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // (Final|Native|Public|Const) // @ game+0xffff8008e4a10000
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue // (Final|Native|Public|HasDefaults|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.ComboBox
// Size: 0x148 (Inherited: 0x110)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x110(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x120(0x10)
	bool bIsFocusable; // 0x130(0x01)
	char pad_131[0x17]; // 0x131(0x17)
};

// Class UMG.ComboBoxString
// Size: 0xe08 (Inherited: 0x110)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x110(0x10)
	struct FString SelectedOption; // 0x120(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x130(0x3f0)
	struct FTableRowStyle ItemStyle; // 0x520(0x7c8)
	struct FMargin ContentPadding; // 0xce8(0x10)
	float MaxListHeight; // 0xcf8(0x04)
	bool HasDownArrow; // 0xcfc(0x01)
	bool EnableGamepadNavigationMode; // 0xcfd(0x01)
	char pad_CFE[0x2]; // 0xcfe(0x02)
	struct FSlateFontInfo Font; // 0xd00(0x58)
	struct FSlateColor ForegroundColor; // 0xd58(0x28)
	bool bIsFocusable; // 0xd80(0x01)
	char pad_D81[0x3]; // 0xd81(0x03)
	struct FDelegate OnGenerateWidgetEvent; // 0xd84(0x10)
	char pad_D94[0x4]; // 0xd94(0x04)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xd98(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xda8(0x10)
	char pad_DB8[0x50]; // 0xdb8(0x50)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xffff8008e4a10000
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xffff8008e4a10000
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x1e0 (Inherited: 0x110)
struct UDynamicEntryBoxBase : UWidget {
	enum class EDynamicBoxType EntryBoxType; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FVector2D EntrySpacing; // 0x114(0x08)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FVector2D> SpacingPattern; // 0x120(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x130(0x08)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x138(0x01)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	int32_t MaxElementSize; // 0x13c(0x04)
	struct FRadialBoxSettings RadialBoxSettings; // 0x140(0x0c)
	char pad_14C[0x14]; // 0x14c(0x14)
	struct FUserWidgetPool EntryWidgetPool; // 0x160(0x80)

	void SetRadialSettings(struct FRadialBoxSettings InSettings); // Function UMG.DynamicEntryBoxBase.SetRadialSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetEntrySpacing(struct FVector2D InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.DynamicEntryBox
// Size: 0x1e8 (Inherited: 0x1e0)
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	struct UUserWidget* EntryWidgetClass; // 0x1e0(0x08)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass // (Final|Native|Private|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry // (Final|Native|Private|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.EditableText
// Size: 0x480 (Inherited: 0x110)
struct UEditableText : UWidget {
	struct FText Text; // 0x110(0x18)
	struct FDelegate TextDelegate; // 0x128(0x10)
	struct FText HintText; // 0x138(0x18)
	struct FDelegate HintTextDelegate; // 0x150(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x160(0x220)
	struct USlateWidgetStyleAsset* Style; // 0x380(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x388(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x390(0x08)
	struct USlateBrushAsset* CaretImage; // 0x398(0x08)
	struct FSlateFontInfo Font; // 0x3a0(0x58)
	struct FSlateColor ColorAndOpacity; // 0x3f8(0x28)
	bool IsReadOnly; // 0x420(0x01)
	bool IsPassword; // 0x421(0x01)
	char pad_422[0x2]; // 0x422(0x02)
	float MinimumDesiredWidth; // 0x424(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x428(0x01)
	bool SelectAllTextWhenFocused; // 0x429(0x01)
	bool RevertTextOnEscape; // 0x42a(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x42b(0x01)
	bool SelectAllTextOnCommit; // 0x42c(0x01)
	bool AllowContextMenu; // 0x42d(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x42e(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x42f(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x430(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x431(0x01)
	enum class ETextJustify Justification; // 0x432(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x433(0x03)
	char pad_436[0x2]; // 0x436(0x02)
	int32_t MaxCharacterCount; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct FString ValidCharacters; // 0x440(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0x450(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x460(0x10)
	char pad_470[0x10]; // 0x470(0x10)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xffff8008e4a10000
	void OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xffff8008e4a10000
	struct FText GetText(); // Function UMG.EditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.EditableTextBox
// Size: 0xa40 (Inherited: 0x110)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x110(0x18)
	struct FDelegate TextDelegate; // 0x128(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x138(0x7f8)
	struct USlateWidgetStyleAsset* Style; // 0x930(0x08)
	struct FText HintText; // 0x938(0x18)
	struct FDelegate HintTextDelegate; // 0x950(0x10)
	struct FSlateFontInfo Font; // 0x960(0x58)
	struct FLinearColor ForegroundColor; // 0x9b8(0x10)
	struct FLinearColor BackgroundColor; // 0x9c8(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0x9d8(0x10)
	bool IsReadOnly; // 0x9e8(0x01)
	bool IsPassword; // 0x9e9(0x01)
	char pad_9EA[0x2]; // 0x9ea(0x02)
	float MinimumDesiredWidth; // 0x9ec(0x04)
	struct FMargin Padding; // 0x9f0(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xa00(0x01)
	bool SelectAllTextWhenFocused; // 0xa01(0x01)
	bool RevertTextOnEscape; // 0xa02(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xa03(0x01)
	bool SelectAllTextOnCommit; // 0xa04(0x01)
	bool AllowContextMenu; // 0xa05(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0xa06(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xa07(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xa08(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xa09(0x01)
	enum class ETextJustify Justification; // 0xa0a(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0xa0b(0x03)
	char pad_A0E[0x2]; // 0xa0e(0x02)
	struct FMulticastInlineDelegate OnTextChanged; // 0xa10(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xa20(0x10)
	char pad_A30[0x10]; // 0xa30(0x10)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xffff8008e4a10000
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xffff8008e4a10000
	bool HasError(); // Function UMG.EditableTextBox.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void ClearError(); // Function UMG.EditableTextBox.ClearError // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.ExpandableArea
// Size: 0x340 (Inherited: 0x110)
struct UExpandableArea : UWidget {
	char pad_110[0x8]; // 0x110(0x08)
	struct FExpandableAreaStyle Style; // 0x118(0x120)
	struct FSlateBrush BorderBrush; // 0x238(0x88)
	struct FSlateColor BorderColor; // 0x2c0(0x28)
	bool bIsExpanded; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float MaxHeight; // 0x2ec(0x04)
	struct FMargin HeaderPadding; // 0x2f0(0x10)
	struct FMargin AreaPadding; // 0x300(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x310(0x10)
	struct UWidget* HeaderContent; // 0x320(0x08)
	struct UWidget* BodyContent; // 0x328(0x08)
	char pad_330[0x10]; // 0x330(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.FloatBinding
// Size: 0x60 (Inherited: 0x60)
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // Function UMG.FloatBinding.GetValue // (Final|Native|Public|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.GridPanel
// Size: 0x168 (Inherited: 0x128)
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x128(0x10)
	struct TArray<float> RowFill; // 0x138(0x10)
	struct FMargin SlotPadding; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)

	void SetSlotPadding(struct FMargin inSlotPadding); // Function UMG.GridPanel.SetSlotPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.GridSlot
// Size: 0x70 (Inherited: 0x38)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t row; // 0x4c(0x04)
	int32_t RowSpan; // 0x50(0x04)
	int32_t Column; // 0x54(0x04)
	int32_t ColumnSpan; // 0x58(0x04)
	int32_t Layer; // 0x5c(0x04)
	struct FVector2D Nudge; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.HorizontalBox
// Size: 0x138 (Inherited: 0x128)
struct UHorizontalBox : UPanelWidget {
	char pad_128[0x10]; // 0x128(0x10)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.HorizontalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UHorizontalBoxSlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.Image
// Size: 0x218 (Inherited: 0x110)
struct UImage : UWidget {
	struct FSlateBrush Brush; // 0x110(0x88)
	struct FDelegate BrushDelegate; // 0x198(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1a8(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x1b8(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x1cc(0x10)
	char pad_1DC[0x3c]; // 0x1dc(0x3c)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<struct UTexture2D> softTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<struct UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushFromAtlasInterface(struct TScriptInterface<None> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrush(struct FSlateBrush InBrush); // Function UMG.Image.SetBrush // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.InputKeySelector
// Size: 0x708 (Inherited: 0x110)
struct UInputKeySelector : UWidget {
	struct FButtonStyle WidgetStyle; // 0x110(0x278)
	struct FTextBlockStyle TextStyle; // 0x388(0x270)
	struct FInputChord SelectedKey; // 0x5f8(0x20)
	struct FSlateFontInfo Font; // 0x618(0x58)
	struct FMargin Margin; // 0x670(0x10)
	struct FLinearColor ColorAndOpacity; // 0x680(0x10)
	struct FText KeySelectionText; // 0x690(0x18)
	struct FText NoKeySpecifiedText; // 0x6a8(0x18)
	bool bAllowModifierKeys; // 0x6c0(0x01)
	bool bAllowGamepadKeys; // 0x6c1(0x01)
	char pad_6C2[0x6]; // 0x6c2(0x06)
	struct TArray<struct FKey> EscapeKeys; // 0x6c8(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x6d8(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x6e8(0x10)
	char pad_6F8[0x10]; // 0x6f8(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetSelectedKey(struct FInputChord InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetEscapeKeys(struct TArray<struct FKey> InKeys); // Function UMG.InputKeySelector.SetEscapeKeys // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xffff8008e4a10000
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xffff8008e4a10000
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.Int32Binding
// Size: 0x60 (Inherited: 0x60)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // (Final|Native|Public|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.InvalidationBox
// Size: 0x140 (Inherited: 0x128)
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x128(0x01)
	bool CacheRelativeTransforms; // 0x129(0x01)
	char pad_12A[0x16]; // 0x12a(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.UserListEntry
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
};

// Class UMG.UserListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(struct TScriptInterface<None> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsListItemExpanded(struct TScriptInterface<None> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UListViewBase* GetOwningListView(struct TScriptInterface<None> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
};

// Class UMG.UserObjectListEntry
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
};

// Class UMG.UserObjectListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	struct UObject* GetListItemObject(struct TScriptInterface<None> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
};

// Class UMG.ListViewBase
// Size: 0x220 (Inherited: 0x110)
struct UListViewBase : UWidget {
	struct UUserWidget* EntryWidgetClass; // 0x110(0x08)
	float WheelScrollMultiplier; // 0x118(0x04)
	bool bEnableScrollAnimation; // 0x11c(0x01)
	bool bEnableFixedLineOffset; // 0x11d(0x01)
	char pad_11E[0x2]; // 0x11e(0x02)
	float FixedLineScrollOffset; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x128(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x138(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x148(0x80)
	char pad_1C8[0x58]; // 0x1c8(0x58)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetScrollbarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollbarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.ListView
// Size: 0x370 (Inherited: 0x220)
struct UListView : UListViewBase {
	char pad_220[0xc0]; // 0x220(0xc0)
	enum class EOrientation Orientation; // 0x2e0(0x01)
	enum class ESelectionMode SelectionMode; // 0x2e1(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x2e2(0x01)
	bool bClearSelectionOnClick; // 0x2e3(0x01)
	bool bIsFocusable; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	float EntrySpacing; // 0x2e8(0x04)
	bool bReturnFocusToSelection; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct TArray<struct UObject*> ListItems; // 0x2f0(0x10)
	char pad_300[0x10]; // 0x300(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x310(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x320(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x330(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x340(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x350(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x360(0x10)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void ClearListItems(); // Function UMG.ListView.ClearListItems // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem // (Final|Native|Private|BlueprintCallable) // @ game+0xffff8008e4a10000
	void BP_SetListItems(struct TArray<struct UObject*> InListItems); // Function UMG.ListView.BP_SetListItems // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection // (Final|Native|Private|BlueprintCallable) // @ game+0xffff8008e4a10000
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0xffff8008e4a10000
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem // (Final|Native|Private|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool BP_GetSelectedItems(struct TArray<struct UObject*> Items); // Function UMG.ListView.BP_GetSelectedItems // (Final|Native|Private|HasOutParms|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection // (Final|Native|Private|BlueprintCallable) // @ game+0xffff8008e4a10000
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0xffff8008e4a10000
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.ListViewDesignerPreviewItem
// Size: 0x28 (Inherited: 0x28)
struct UListViewDesignerPreviewItem : UObject {
};

// Class UMG.MenuAnchor
// Size: 0x178 (Inherited: 0x128)
struct UMenuAnchor : UContentWidget {
	struct UUserWidget* MenuClass; // 0x128(0x08)
	struct FDelegate OnGetMenuContentEvent; // 0x130(0x10)
	struct FDelegate OnGetUserMenuContentEvent; // 0x140(0x10)
	enum class EMenuPlacement Placement; // 0x150(0x01)
	bool bFitInWindow; // 0x151(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x152(0x01)
	bool UseApplicationMenuStack; // 0x153(0x01)
	char pad_154[0x4]; // 0x154(0x04)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x158(0x10)
	char pad_168[0x10]; // 0x168(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UUserWidget* GetUserWidget__DelegateSignature(); // DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void Close(); // Function UMG.MenuAnchor.Close // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.MouseCursorBinding
// Size: 0x60 (Inherited: 0x60)
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue // (Final|Native|Public|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.MovieScene2DTransformPropertySystem
// Size: 0x50 (Inherited: 0x50)
struct UMovieScene2DTransformPropertySystem : UMovieScenePropertySystem {
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x558 (Inherited: 0xe8)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieScene2DTransformMask TransformMask; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0xf8(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x238(0xa0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2d8(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x418(0x140)
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0xa8 (Inherited: 0xa8)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginSection
// Size: 0x368 (Inherited: 0xe8)
struct UMovieSceneMarginSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel TopCurve; // 0xe8(0xa0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x188(0xa0)
	struct FMovieSceneFloatChannel RightCurve; // 0x228(0xa0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2c8(0xa0)
};

// Class UMG.MovieSceneMarginTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0xa8 (Inherited: 0x88)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	char pad_88[0x8]; // 0x88(0x08)
	struct TArray<struct FName> BrushPropertyNamePath; // 0x90(0x10)
	struct FName TrackName; // 0xa0(0x08)
};

// Class UMG.MultiLineEditableText
// Size: 0x490 (Inherited: 0x130)
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; // 0x130(0x18)
	struct FText HintText; // 0x148(0x18)
	struct FDelegate HintTextDelegate; // 0x160(0x10)
	struct FTextBlockStyle WidgetStyle; // 0x170(0x270)
	bool bIsReadOnly; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FSlateFontInfo Font; // 0x3e8(0x58)
	bool SelectAllTextWhenFocused; // 0x440(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x441(0x01)
	bool RevertTextOnEscape; // 0x442(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x443(0x01)
	bool AllowContextMenu; // 0x444(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x445(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x446(0x01)
	char pad_447[0x1]; // 0x447(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x448(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x458(0x10)
	int32_t MaxCharacterCount; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FString ValidCharacters; // 0x470(0x10)
	char pad_480[0x10]; // 0x480(0x10)

	void SetWidgetStyle(struct FTextBlockStyle InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xffff8008e4a10000
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xffff8008e4a10000
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xca0 (Inherited: 0x130)
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; // 0x130(0x18)
	struct FText HintText; // 0x148(0x18)
	struct FDelegate HintTextDelegate; // 0x160(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x170(0x7f8)
	struct FTextBlockStyle TextStyle; // 0x968(0x270)
	bool bIsReadOnly; // 0xbd8(0x01)
	bool AllowContextMenu; // 0xbd9(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xbda(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xbdb(0x01)
	char pad_BDC[0x4]; // 0xbdc(0x04)
	struct USlateWidgetStyleAsset* Style; // 0xbe0(0x08)
	struct FSlateFontInfo Font; // 0xbe8(0x58)
	struct FLinearColor ForegroundColor; // 0xc40(0x10)
	struct FLinearColor BackgroundColor; // 0xc50(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xc60(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0xc70(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xc80(0x10)
	char pad_C90[0x10]; // 0xc90(0x10)

	void SetTextStyle(struct FTextBlockStyle InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xffff8008e4a10000
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xffff8008e4a10000
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.NamedSlot
// Size: 0x138 (Inherited: 0x128)
struct UNamedSlot : UContentWidget {
	char pad_128[0x10]; // 0x128(0x10)
};

// Class UMG.NamedSlotInterface
// Size: 0x28 (Inherited: 0x28)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
// Size: 0x120 (Inherited: 0x110)
struct UNativeWidgetHost : UWidget {
	char pad_110[0x10]; // 0x110(0x10)
};

// Class UMG.Overlay
// Size: 0x138 (Inherited: 0x128)
struct UOverlay : UPanelWidget {
	char pad_128[0x10]; // 0x128(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.OverlaySlot
// Size: 0x58 (Inherited: 0x38)
struct UOverlaySlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.RetainerBox
// Size: 0x158 (Inherited: 0x128)
struct URetainerBox : UContentWidget {
	bool bRetainRender; // 0x128(0x01)
	bool RenderOnInvalidation; // 0x129(0x01)
	bool RenderOnPhase; // 0x12a(0x01)
	char pad_12B[0x1]; // 0x12b(0x01)
	int32_t Phase; // 0x12c(0x04)
	int32_t PhaseCount; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x138(0x08)
	struct FName TextureParameter; // 0x140(0x08)
	char pad_148[0x10]; // 0x148(0x10)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRetainRendering(bool bInRetainRendering); // Function UMG.RetainerBox.SetRetainRendering // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.SafeZone
// Size: 0x140 (Inherited: 0x128)
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x128(0x01)
	bool PadRight; // 0x129(0x01)
	bool PadTop; // 0x12a(0x01)
	bool PadBottom; // 0x12b(0x01)
	char pad_12C[0x14]; // 0x12c(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.SafeZoneSlot
// Size: 0x60 (Inherited: 0x38)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FMargin SafeAreaScale; // 0x3c(0x10)
	enum class EHorizontalAlignment HAlign; // 0x4c(0x01)
	enum class EVerticalAlignment VAlign; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FMargin Padding; // 0x50(0x10)
};

// Class UMG.ScaleBox
// Size: 0x148 (Inherited: 0x128)
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x128(0x01)
	enum class EStretchDirection StretchDirection; // 0x129(0x01)
	char pad_12A[0x2]; // 0x12a(0x02)
	float UserSpecifiedScale; // 0x12c(0x04)
	bool IgnoreInheritedScale; // 0x130(0x01)
	char pad_131[0x17]; // 0x131(0x17)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.ScaleBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UScaleBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.ScrollBar
// Size: 0x618 (Inherited: 0x110)
struct UScrollBar : UWidget {
	struct FScrollBarStyle WidgetStyle; // 0x110(0x4d0)
	struct USlateWidgetStyleAsset* Style; // 0x5e0(0x08)
	bool bAlwaysShowScrollbar; // 0x5e8(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x5e9(0x01)
	enum class EOrientation Orientation; // 0x5ea(0x01)
	char pad_5EB[0x1]; // 0x5eb(0x01)
	struct FVector2D Thickness; // 0x5ec(0x08)
	struct FMargin Padding; // 0x5f4(0x10)
	char pad_604[0x14]; // 0x604(0x14)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.ScrollBox
// Size: 0x888 (Inherited: 0x128)
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x128(0x228)
	struct FScrollBarStyle WidgetBarStyle; // 0x350(0x4d0)
	struct USlateWidgetStyleAsset* Style; // 0x820(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x828(0x08)
	enum class EOrientation Orientation; // 0x830(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x831(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x832(0x01)
	char pad_833[0x1]; // 0x833(0x01)
	struct FVector2D ScrollbarThickness; // 0x834(0x08)
	struct FMargin ScrollbarPadding; // 0x83c(0x10)
	bool AlwaysShowScrollbar; // 0x84c(0x01)
	bool AlwaysShowScrollbarTrack; // 0x84d(0x01)
	bool AllowOverscroll; // 0x84e(0x01)
	bool bAnimateWheelScrolling; // 0x84f(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x850(0x01)
	char pad_851[0x3]; // 0x851(0x03)
	float NavigationScrollPadding; // 0x854(0x04)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x858(0x01)
	bool bAllowRightClickDragScrolling; // 0x859(0x01)
	char pad_85A[0x2]; // 0x85a(0x02)
	float WheelScrollMultiplier; // 0x85c(0x04)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x860(0x10)
	char pad_870[0x18]; // 0x870(0x18)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollbarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetScrollbarThickness(struct FVector2D NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetScrollbarPadding(struct FMargin NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetOrientation(enum class EOrientation newOrientation); // Function UMG.ScrollBox.SetOrientation // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAlwaysShowScrollbarTrack(bool NewAlwaysShowScrollbarTrack); // Function UMG.ScrollBox.SetAlwaysShowScrollbarTrack // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.ScrollBoxSlot
// Size: 0x58 (Inherited: 0x38)
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0xe]; // 0x4a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.SizeBox
// Size: 0x160 (Inherited: 0x128)
struct USizeBox : UContentWidget {
	char pad_128[0x10]; // 0x128(0x10)
	float WidthOverride; // 0x138(0x04)
	float HeightOverride; // 0x13c(0x04)
	float MinDesiredWidth; // 0x140(0x04)
	float MinDesiredHeight; // 0x144(0x04)
	float MaxDesiredWidth; // 0x148(0x04)
	float MaxDesiredHeight; // 0x14c(0x04)
	float MinAspectRatio; // 0x150(0x04)
	float MaxAspectRatio; // 0x154(0x04)
	char bOverride_WidthOverride : 1; // 0x158(0x01)
	char bOverride_HeightOverride : 1; // 0x158(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x158(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x158(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x158(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x158(0x01)
	char bOverride_MinAspectRatio : 1; // 0x158(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.SizeBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	float TransformScalarLocalToAbsolute(struct FGeometry Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	float TransformScalarAbsoluteToLocal(struct FGeometry Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry Geometry, struct FVector2D ScreenPosition, struct FVector2D LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0xffff8008e4a10000
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0xffff8008e4a10000
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0xffff8008e4a10000
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry Geometry, struct FVector2D LocalCoordinate, struct FVector2D PixelPosition, struct FVector2D ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FVector2D LocalToAbsolute(struct FGeometry Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsUnderLocation(struct FGeometry Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FVector2D GetLocalTopLeft(struct FGeometry Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FVector2D GetLocalSize(struct FGeometry Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FVector2D GetAbsoluteSize(struct FGeometry Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool EqualEqual_SlateBrush(struct FSlateBrush A, struct FSlateBrush B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D PixelPosition, struct FVector2D ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FVector2D AbsoluteToLocal(struct FGeometry Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
};

// Class UMG.SlateVectorArtData
// Size: 0x60 (Inherited: 0x28)
struct USlateVectorArtData : UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x28(0x10)
	struct TArray<uint32_t> IndexData; // 0x38(0x10)
	struct UMaterialInterface* Material; // 0x48(0x08)
	struct FVector2D ExtentMin; // 0x50(0x08)
	struct FVector2D ExtentMax; // 0x58(0x08)
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x80 (Inherited: 0x28)
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x28(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x29(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct FText AccessibleText; // 0x30(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x48(0x10)
	struct FText AccessibleSummaryText; // 0x58(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70(0x10)
};

// Class UMG.Spacer
// Size: 0x128 (Inherited: 0x110)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x110(0x08)
	char pad_118[0x10]; // 0x118(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.SpinBox
// Size: 0x528 (Inherited: 0x110)
struct USpinBox : UWidget {
	float Value; // 0x110(0x04)
	struct FDelegate ValueDelegate; // 0x114(0x10)
	char pad_124[0x4]; // 0x124(0x04)
	struct FSpinBoxStyle WidgetStyle; // 0x128(0x2e8)
	struct USlateWidgetStyleAsset* Style; // 0x410(0x08)
	int32_t MinFractionalDigits; // 0x418(0x04)
	int32_t MaxFractionalDigits; // 0x41c(0x04)
	bool bAlwaysUsesDeltaSnap; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float Delta; // 0x424(0x04)
	float SliderExponent; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct FSlateFontInfo Font; // 0x430(0x58)
	enum class ETextJustify Justification; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	float MinDesiredWidth; // 0x48c(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x490(0x01)
	bool SelectAllTextOnCommit; // 0x491(0x01)
	char pad_492[0x6]; // 0x492(0x06)
	struct FSlateColor ForegroundColor; // 0x498(0x28)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4c0(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x4d0(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x4e0(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x4f0(0x10)
	char bOverride_MinValue : 1; // 0x500(0x01)
	char bOverride_MaxValue : 1; // 0x500(0x01)
	char bOverride_MinSliderValue : 1; // 0x500(0x01)
	char bOverride_MaxSliderValue : 1; // 0x500(0x01)
	char pad_500_4 : 4; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float MinValue; // 0x504(0x04)
	float MaxValue; // 0x508(0x04)
	float MinSliderValue; // 0x50c(0x04)
	float MaxSliderValue; // 0x510(0x04)
	char pad_514[0x14]; // 0x514(0x14)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xffff8008e4a10000
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xffff8008e4a10000
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xffff8008e4a10000
	float GetValue(); // Function UMG.SpinBox.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetDelta(); // Function UMG.SpinBox.GetDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.TextBinding
// Size: 0x68 (Inherited: 0x60)
struct UTextBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // (Final|Native|Public|Const) // @ game+0xffff8008e4a10000
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue // (Final|Native|Public|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.TextBlock
// Size: 0x2b0 (Inherited: 0x130)
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x130(0x18)
	struct FDelegate TextDelegate; // 0x148(0x10)
	struct FSlateColor ColorAndOpacity; // 0x158(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x180(0x10)
	struct FSlateFontInfo Font; // 0x190(0x58)
	struct FSlateBrush StrikeBrush; // 0x1e8(0x88)
	struct FVector2D ShadowOffset; // 0x270(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x278(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x288(0x10)
	float MinDesiredWidth; // 0x298(0x04)
	bool bWrapWithInvalidationPanel; // 0x29c(0x01)
	bool bAutoWrapText; // 0x29d(0x01)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x29e(0x01)
	bool bSimpleTextMode; // 0x29f(0x01)
	char pad_2A0[0x10]; // 0x2a0(0x10)

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.TextBlock.SetTextTransformPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetText(struct FText InText); // Function UMG.TextBlock.SetText // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FText GetText(); // Function UMG.TextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.Throbber
// Size: 0x1b8 (Inherited: 0x110)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x110(0x04)
	bool bAnimateHorizontally; // 0x114(0x01)
	bool bAnimateVertically; // 0x115(0x01)
	bool bAnimateOpacity; // 0x116(0x01)
	char pad_117[0x1]; // 0x117(0x01)
	struct USlateBrushAsset* PieceImage; // 0x118(0x08)
	struct FSlateBrush Image; // 0x120(0x88)
	char pad_1A8[0x10]; // 0x1a8(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.TileView
// Size: 0x390 (Inherited: 0x370)
struct UTileView : UListView {
	float EntryHeight; // 0x370(0x04)
	float EntryWidth; // 0x374(0x04)
	enum class EListItemAlignment TileAlignment; // 0x378(0x01)
	bool bWrapHorizontalNavigation; // 0x379(0x01)
	char pad_37A[0x16]; // 0x37a(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	float GetEntryWidth(); // Function UMG.TileView.GetEntryWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetEntryHeight(); // Function UMG.TileView.GetEntryHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.TreeView
// Size: 0x3c8 (Inherited: 0x370)
struct UTreeView : UListView {
	char pad_370[0x10]; // 0x370(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0x380(0x10)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x390(0x10)
	char pad_3A0[0x28]; // 0x3a0(0x28)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ExpandAll(); // Function UMG.TreeView.ExpandAll // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void CollapseAll(); // Function UMG.TreeView.CollapseAll // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.UMGSequencePlayer
// Size: 0x578 (Inherited: 0x28)
struct UUMGSequencePlayer : UObject {
	char pad_28[0x3e8]; // 0x28(0x3e8)
	struct UWidgetAnimation* Animation; // 0x410(0x08)
	char pad_418[0x8]; // 0x418(0x08)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x420(0xe8)
	char pad_508[0x70]; // 0x508(0x70)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.UMGSequenceTickManager
// Size: 0x120 (Inherited: 0x28)
struct UUMGSequenceTickManager : UObject {
	struct TSet<struct TWeakObjectPtr<struct UUserWidget>> WeakUserWidgets; // 0x28(0x50)
	struct UMovieSceneEntitySystemLinker* Linker; // 0x78(0x08)
	char pad_80[0xa0]; // 0x80(0xa0)
};

// Class UMG.UniformGridPanel
// Size: 0x150 (Inherited: 0x128)
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x128(0x10)
	float MinDesiredSlotWidth; // 0x138(0x04)
	float MinDesiredSlotHeight; // 0x13c(0x04)
	char pad_140[0x10]; // 0x140(0x10)

	void SetSlotPadding(struct FMargin inSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.UniformGridSlot
// Size: 0x50 (Inherited: 0x38)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x38(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32_t row; // 0x3c(0x04)
	int32_t Column; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.VerticalBox
// Size: 0x138 (Inherited: 0x128)
struct UVerticalBox : UPanelWidget {
	char pad_128[0x10]; // 0x128(0x10)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.VerticalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UVerticalBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.Viewport
// Size: 0x170 (Inherited: 0x128)
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x128(0x10)
	char pad_138[0x38]; // 0x138(0x38)

	struct AActor* Spawn(struct AActor* ActorClass); // Function UMG.Viewport.Spawn // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.VisibilityBinding
// Size: 0x60 (Inherited: 0x60)
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue // (Final|Native|Public|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.WidgetAnimation
// Size: 0x90 (Inherited: 0x60)
struct UWidgetAnimation : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x60(0x08)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x68(0x10)
	bool bLegacyFinishOnStop; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString DisplayLabel; // 0x80(0x10)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UWidgetAnimationPlayCallbackProxy : UObject {
	struct FMulticastInlineDelegate Finished; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer* Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer* Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.WidgetBinding
// Size: 0x60 (Inherited: 0x60)
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // (Final|Native|Public|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x370 (Inherited: 0x330)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x330(0x08)
	char bClassRequiresNativeTick : 1; // 0x338(0x01)
	char pad_338_1 : 7; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x340(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x350(0x10)
	struct TArray<struct FName> NamedSlots; // 0x360(0x10)
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FEventReply SetUserFocus(struct FEventReply Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FEventReply SetMousePosition(struct FEventReply Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetInputMode_GameOnly(struct APlayerController* PlayerController); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushResourceToTexture(struct FSlateBrush Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBrushResourceToMaterial(struct FSlateBrush Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FEventReply ReleaseMouseCapture(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FEventReply ReleaseJoystickCapture(struct FEventReply Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature // (Public|Delegate) // @ game+0xffff8008e4a10000
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FEventReply LockMouse(struct FEventReply Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4 SafePadding, struct FVector2D SafePaddingScale, struct FVector4 SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent Event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UObject* GetBrushResource(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*> FoundWidgets, struct UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*> FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FEventReply EndDragDrop(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void DrawTextFormatted(struct FPaintContext Context, struct FText Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void DrawText(struct FPaintContext Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void DrawLines(struct FPaintContext Context, struct TArray<struct FVector2D> Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void DrawLine(struct FPaintContext Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void DrawBox(struct FPaintContext Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FEventReply DetectDragIfPressed(struct FPointerEvent PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FEventReply DetectDrag(struct FEventReply Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FEventReply ClearUserFocus(struct FEventReply Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FEventReply CaptureMouse(struct FEventReply Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FEventReply CaptureJoystick(struct FEventReply Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.WidgetComponent
// Size: 0x5a0 (Inherited: 0x470)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0x470(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct UUserWidget* WidgetClass; // 0x478(0x08)
	struct FIntPoint DrawSize; // 0x480(0x08)
	bool bManuallyRedraw; // 0x488(0x01)
	bool bRedrawRequested; // 0x489(0x01)
	char pad_48A[0x2]; // 0x48a(0x02)
	float RedrawTime; // 0x48c(0x04)
	char pad_490[0x8]; // 0x490(0x08)
	struct FIntPoint CurrentDrawSize; // 0x498(0x08)
	bool bDrawAtDesiredSize; // 0x4a0(0x01)
	char pad_4A1[0x3]; // 0x4a1(0x03)
	struct FVector2D Pivot; // 0x4a4(0x08)
	bool bReceiveHardwareInput; // 0x4ac(0x01)
	bool bWindowFocusable; // 0x4ad(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x4ae(0x01)
	bool bApplyGammaCorrection; // 0x4af(0x01)
	struct ULocalPlayer* OwnerPlayer; // 0x4b0(0x08)
	struct FLinearColor BackgroundColor; // 0x4b8(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x4c8(0x10)
	float OpacityFromTexture; // 0x4d8(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x4dc(0x01)
	bool bIsTwoSided; // 0x4dd(0x01)
	bool TickWhenOffscreen; // 0x4de(0x01)
	char pad_4DF[0x1]; // 0x4df(0x01)
	struct UBodySetup* BodySetup; // 0x4e0(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x4e8(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x4f0(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x4f8(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x500(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x508(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x510(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x518(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x520(0x08)
	bool bAddedToScreen; // 0x528(0x01)
	bool bEditTimeUsable; // 0x529(0x01)
	char pad_52A[0x2]; // 0x52a(0x02)
	struct FName SharedLayerName; // 0x52c(0x08)
	int32_t LayerZOrder; // 0x534(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	float CylinderArcAngle; // 0x53c(0x04)
	enum class ETickMode TickMode; // 0x540(0x01)
	char pad_541[0x27]; // 0x541(0x27)
	struct UUserWidget* Widget; // 0x568(0x08)
	char pad_570[0x30]; // 0x570(0x30)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetTickMode(enum class ETickMode InTickMode); // Function UMG.WidgetComponent.SetTickMode // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPivot(struct FVector2D InPivot); // Function UMG.WidgetComponent.SetPivot // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsWidgetVisible(); // Function UMG.WidgetComponent.IsWidgetVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UUserWidget* GetWidget(); // Function UMG.WidgetComponent.GetWidget // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.WidgetInteractionComponent
// Size: 0x400 (Inherited: 0x200)
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x1f8(0x10)
	char pad_210[0x8]; // 0x210(0x08)
	int32_t VirtualUserIndex; // 0x218(0x04)
	int32_t PointerIndex; // 0x21c(0x04)
	enum class ECollisionChannel TraceChannel; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	float InteractionDistance; // 0x224(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x228(0x01)
	bool bEnableHitTesting; // 0x229(0x01)
	bool bShowDebug; // 0x22a(0x01)
	char pad_22B[0x1]; // 0x22b(0x01)
	float DebugSphereLineThickness; // 0x22c(0x04)
	float DebugLineThickness; // 0x230(0x04)
	struct FLinearColor DebugColor; // 0x234(0x10)
	char pad_244[0x7c]; // 0x244(0x7c)
	struct FHitResult CustomHitResult; // 0x2c0(0x8c)
	struct FVector2D LocalHitLocation; // 0x34c(0x08)
	struct FVector2D LastLocalHitLocation; // 0x354(0x08)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x360(0x08)
	struct FHitResult LastHitResult; // 0x368(0x8c)
	bool bIsHoveredWidgetInteractable; // 0x3f4(0x01)
	bool bIsHoveredWidgetFocusable; // 0x3f5(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x3f6(0x01)
	char pad_3F7[0x9]; // 0x3f7(0x09)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetCustomHitResult(struct FHitResult HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float LocationX, float LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.WidgetNavigation
// Size: 0x100 (Inherited: 0x28)
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; // 0x28(0x24)
	struct FWidgetNavigationData Down; // 0x4c(0x24)
	struct FWidgetNavigationData Left; // 0x70(0x24)
	struct FWidgetNavigationData Right; // 0x94(0x24)
	struct FWidgetNavigationData Next; // 0xb8(0x24)
	struct FWidgetNavigationData Previous; // 0xdc(0x24)
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x58 (Inherited: 0x38)
struct UWidgetSwitcherSlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.WidgetTree
// Size: 0x30 (Inherited: 0x28)
struct UWidgetTree : UObject {
	struct UWidget* RootWidget; // 0x28(0x08)
};

// Class UMG.WindowTitleBarArea
// Size: 0x148 (Inherited: 0x128)
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x128(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x129(0x01)
	char pad_12A[0x1e]; // 0x12a(0x1e)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x60 (Inherited: 0x38)
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.WrapBox
// Size: 0x150 (Inherited: 0x128)
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x128(0x08)
	float WrapWidth; // 0x130(0x04)
	float WrapSize; // 0x134(0x04)
	bool bExplicitWrapWidth; // 0x138(0x01)
	bool bExplicitWrapSize; // 0x139(0x01)
	enum class EOrientation Orientation; // 0x13a(0x01)
	char pad_13B[0x15]; // 0x13b(0x15)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class UMG.WrapBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	bool bFillEmptySpace; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float FillSpanWhenLessThan; // 0x4c(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

