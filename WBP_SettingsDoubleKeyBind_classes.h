// WidgetBlueprintGeneratedClass WBP_SettingsDoubleKeyBind.WBP_SettingsDoubleKeyBind_C
// Size: 0x4f0 (Inherited: 0x4b8)
struct UWBP_SettingsDoubleKeyBind_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWBP_SettingsKeyBind_C* WBP_SettingsKeyBind_Left; // 0x4c0(0x08)
	struct UWBP_SettingsKeyBind_C* WBP_SettingsKeyBind_Right; // 0x4c8(0x08)
	struct FMulticastInlineDelegate KeyChanged; // 0x4d0(0x10)
	struct FMulticastInlineDelegate SelectingKeyChanged; // 0x4e0(0x10)

	void SetGameInputActions(enum class ES_GameInputActionType LeftGameInputActionType, enum class ES_GameInputActionType RightGameInputActionType); // Function WBP_SettingsDoubleKeyBind.WBP_SettingsDoubleKeyBind_C.SetGameInputActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetKeyBind(struct FInputChord KeyBind, bool LeftKeyBind); // Function WBP_SettingsDoubleKeyBind.WBP_SettingsDoubleKeyBind_C.SetKeyBind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_SettingsKeyBind_Left_K2Node_ComponentBoundEvent_0_KeyChanged__DelegateSignature(struct FInputChord SelectedKey, enum class ES_GameInputActionType GameInputActionType); // Function WBP_SettingsDoubleKeyBind.WBP_SettingsDoubleKeyBind_C.BndEvt__WBP_SettingsKeyBind_Left_K2Node_ComponentBoundEvent_0_KeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_SettingsKeyBind_Left_K2Node_ComponentBoundEvent_1_SelectingKeyChanged__DelegateSignature(enum class ES_GameInputActionType GameInputActionType); // Function WBP_SettingsDoubleKeyBind.WBP_SettingsDoubleKeyBind_C.BndEvt__WBP_SettingsKeyBind_Left_K2Node_ComponentBoundEvent_1_SelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_SettingsKeyBind_Right_K2Node_ComponentBoundEvent_2_KeyChanged__DelegateSignature(struct FInputChord SelectedKey, enum class ES_GameInputActionType GameInputActionType); // Function WBP_SettingsDoubleKeyBind.WBP_SettingsDoubleKeyBind_C.BndEvt__WBP_SettingsKeyBind_Right_K2Node_ComponentBoundEvent_2_KeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_SettingsKeyBind_Right_K2Node_ComponentBoundEvent_3_SelectingKeyChanged__DelegateSignature(enum class ES_GameInputActionType GameInputActionType); // Function WBP_SettingsDoubleKeyBind.WBP_SettingsDoubleKeyBind_C.BndEvt__WBP_SettingsKeyBind_Right_K2Node_ComponentBoundEvent_3_SelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_SettingsDoubleKeyBind.WBP_SettingsDoubleKeyBind_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyWidgetOnMouseDown_BP_2(); // Function WBP_SettingsDoubleKeyBind.WBP_SettingsDoubleKeyBind_C.NotifyWidgetOnMouseDown_BP_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_SettingsDoubleKeyBind(int32_t EntryPoint); // Function WBP_SettingsDoubleKeyBind.WBP_SettingsDoubleKeyBind_C.ExecuteUbergraph_WBP_SettingsDoubleKeyBind // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void SelectingKeyChanged__DelegateSignature(enum class ES_GameInputActionType GameInputActionType, bool LeftKeyBind); // Function WBP_SettingsDoubleKeyBind.WBP_SettingsDoubleKeyBind_C.SelectingKeyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void KeyChanged__DelegateSignature(struct FInputChord SelectedKey, enum class ES_GameInputActionType GameInputActionType, bool LeftKeyBind); // Function WBP_SettingsDoubleKeyBind.WBP_SettingsDoubleKeyBind_C.KeyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

