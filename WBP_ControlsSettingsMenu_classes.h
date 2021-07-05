// WidgetBlueprintGeneratedClass WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C
// Size: 0x658 (Inherited: 0x508)
struct UWBP_ControlsSettingsMenu_C : US_WidgetGenericSettingsPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UWBP_CommonKey_C* CycleSubscreenLeftIcon; // 0x510(0x08)
	struct UWBP_CommonKey_C* CycleSubscreenRightIcon; // 0x518(0x08)
	struct UScrollBox* Gamepad_ScrollBox; // 0x520(0x08)
	struct UWBP_TopNavBarButton_C* GamepadButton; // 0x528(0x08)
	struct UVerticalBox* GamepadSettings; // 0x530(0x08)
	struct UVerticalBox* GameplayBinds; // 0x538(0x08)
	struct UWBP_SettingsSectionHeader_C* GameplayKeyBindings; // 0x540(0x08)
	struct UScrollBox* KBM_ScrollBox; // 0x548(0x08)
	struct UVerticalBox* MenuBinds; // 0x550(0x08)
	struct UWBP_SettingsSectionHeader_C* MenuKeyBindings; // 0x558(0x08)
	struct UWBP_TopNavBarButton_C* MouseKeyboardButton; // 0x560(0x08)
	struct UVerticalBox* PCSettings; // 0x568(0x08)
	struct UWidgetSwitcher* PlatformViewSwitcher; // 0x570(0x08)
	struct UVerticalBox* SubCycleNavBar; // 0x578(0x08)
	struct UWBP_MultiOptionLine_C* WBP_AimCurve; // 0x580(0x08)
	struct UWBP_MultiOptionLine_C* WBP_AimDeadzone; // 0x588(0x08)
	struct UWBP_MultiOptionLine_C* WBP_ButtonMap; // 0x590(0x08)
	struct UWBP_ToggleButtonLine_C* WBP_GamepadInvertPitch; // 0x598(0x08)
	struct UWBP_MultiOptionLine_C* WBP_GamepadSensitivitySelector; // 0x5a0(0x08)
	struct UWBP_ToggleButtonLine_C* WBP_MouseInvertPitch; // 0x5a8(0x08)
	struct UWBP_SliderLine_C* WBP_MouseSensitivity; // 0x5b0(0x08)
	struct UWBP_MultiOptionLine_C* WBP_MoveDeadzone; // 0x5b8(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_SettingsSectionHeader; // 0x5c0(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_SettingsSectionHeader_3; // 0x5c8(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_SettingsSectionHeader_4; // 0x5d0(0x08)
	struct US_WidgetCommonScavengerButton* ActiveButton; // 0x5d8(0x08)
	bool CanSetSettings; // 0x5e0(0x01)
	char pad_5E1[0x7]; // 0x5e1(0x07)
	struct TArray<struct FName> AimCurveOptionIndexToName; // 0x5e8(0x10)
	struct TArray<struct FName> ButtonLayoutOptionIndexToName; // 0x5f8(0x10)
	struct TMap<enum class ES_GameInputActionType, struct UWBP_SettingsDoubleKeyBindLine_C*> ActionToBindUI; // 0x608(0x50)

	void HandleInputActionDisplay(bool allowActiveWidgetCheck); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.HandleInputActionDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ConfigureInputDeviceNavBar(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.ConfigureInputDeviceNavBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InitInputTypeBehavior(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.InitInputTypeBehavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CycleSubscreen(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.CycleSubscreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExplicitlySetFocus(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.ExplicitlySetFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetKeybindWidgetsFromInputSettings(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.SetKeybindWidgetsFromInputSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetupMultiOptionWidgets(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.SetupMultiOptionWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ValueToPercent(float Value, float Min, float Max, float Percent); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.ValueToPercent // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void SetWidgetsFromInputSettings(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.SetWidgetsFromInputSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReadInputStaticData(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.ReadInputStaticData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ResetInputSettings(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.ResetInputSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event BindButtonEvents(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.Event BindButtonEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnBroadcastOptionChanged(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.Event OnBroadcastOptionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__MouseKeyboardButton_K2Node_ComponentBoundEvent_2_DispatchOnClicked__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.BndEvt__MouseKeyboardButton_K2Node_ComponentBoundEvent_2_DispatchOnClicked__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__GamepadButton_K2Node_ComponentBoundEvent_3_DispatchOnClicked__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.BndEvt__GamepadButton_K2Node_ComponentBoundEvent_3_DispatchOnClicked__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__MouseKeyboardButton_K2Node_ComponentBoundEvent_6_DispatchOnStateChangedDelegate__DelegateSignature(bool bIsSelected, struct US_WidgetCommonScavengerButton* Button); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.BndEvt__MouseKeyboardButton_K2Node_ComponentBoundEvent_6_DispatchOnStateChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__GamepadButton_K2Node_ComponentBoundEvent_8_DispatchOnStateChangedDelegate__DelegateSignature(bool bIsSelected, struct US_WidgetCommonScavengerButton* Button); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.BndEvt__GamepadButton_K2Node_ComponentBoundEvent_8_DispatchOnStateChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleResetRequest_BP(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.HandleResetRequest_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleSettingsChanged_BP(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.HandleSettingsChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleSettingsMenuOpened_BP(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.HandleSettingsMenuOpened_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnKeyBindChanged(struct FInputChord SelectedKey, enum class ES_GameInputActionType GameInputActionType, bool LeftKeyBind); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.OnKeyBindChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnSelectingKeyChanged(enum class ES_GameInputActionType GameInputActionType, bool LeftKeyBind); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.OnSelectingKeyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void LostSwitcherFocus_BP(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.LostSwitcherFocus_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveSwitcherFocus_BP(); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.ReceiveSwitcherFocus_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_MouseSensitivity_K2Node_ComponentBoundEvent_1_S_OnSliderValueChanged__DelegateSignature(float NewSliderValue); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.BndEvt__WBP_MouseSensitivity_K2Node_ComponentBoundEvent_1_S_OnSliderValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_MouseInvertPitch_K2Node_ComponentBoundEvent_0_S_OnToggleStateChanged__DelegateSignature(bool NewToggleState); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.BndEvt__WBP_MouseInvertPitch_K2Node_ComponentBoundEvent_0_S_OnToggleStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_GamepadInvertPitch_K2Node_ComponentBoundEvent_14_S_OnToggleStateChanged__DelegateSignature(bool NewToggleState); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.BndEvt__WBP_GamepadInvertPitch_K2Node_ComponentBoundEvent_14_S_OnToggleStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_ButtonMap_K2Node_ComponentBoundEvent_16_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.BndEvt__WBP_ButtonMap_K2Node_ComponentBoundEvent_16_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_AimCurve_K2Node_ComponentBoundEvent_18_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.BndEvt__WBP_AimCurve_K2Node_ComponentBoundEvent_18_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_AimDeadzone_K2Node_ComponentBoundEvent_22_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.BndEvt__WBP_AimDeadzone_K2Node_ComponentBoundEvent_22_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_MoveDeadzone_K2Node_ComponentBoundEvent_5_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.BndEvt__WBP_MoveDeadzone_K2Node_ComponentBoundEvent_5_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyNewFocusWidget_BP(struct US_WidgetMinimal* NewlyFocusedWidget); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.NotifyNewFocusWidget_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_GamepadSensitivitySelector_K2Node_ComponentBoundEvent_7_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.BndEvt__WBP_GamepadSensitivitySelector_K2Node_ComponentBoundEvent_7_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void SyncSubscreenButtonIcons(bool isUsingGamepad); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.SyncSubscreenButtonIcons // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SyncInputDeviceDisplay(enum class ES_Platform newInputDeviceType); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.SyncInputDeviceDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_ControlsSettingsMenu(int32_t EntryPoint); // Function WBP_ControlsSettingsMenu.WBP_ControlsSettingsMenu_C.ExecuteUbergraph_WBP_ControlsSettingsMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

