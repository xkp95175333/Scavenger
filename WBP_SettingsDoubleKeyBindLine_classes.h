// WidgetBlueprintGeneratedClass WBP_SettingsDoubleKeyBindLine.WBP_SettingsDoubleKeyBindLine_C
// Size: 0x5e2 (Inherited: 0x558)
struct UWBP_SettingsDoubleKeyBindLine_C : US_WidgetGenericSettingsSlot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UBorder* Border_1; // 0x560(0x08)
	struct URichTextBlock* OptionText; // 0x568(0x08)
	struct UWBP_SettingsDoubleKeyBind_C* WBP_DoubleKeyBind; // 0x570(0x08)
	struct FText OptionName; // 0x578(0x18)
	struct FText ValidRichTextFormat; // 0x590(0x18)
	struct FMulticastInlineDelegate KeyChanged; // 0x5a8(0x10)
	struct FMulticastInlineDelegate SelectingKeyChanged; // 0x5b8(0x10)
	struct FText InvalidRichTextFormat; // 0x5c8(0x18)
	bool ValidBind; // 0x5e0(0x01)
	bool Indent; // 0x5e1(0x01)

	void SetIsValidBind(bool IsValid); // Function WBP_SettingsDoubleKeyBindLine.WBP_SettingsDoubleKeyBindLine_C.SetIsValidBind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateLabelText(); // Function WBP_SettingsDoubleKeyBindLine.WBP_SettingsDoubleKeyBindLine_C.UpdateLabelText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetGameInputActions(enum class ES_GameInputActionType LeftGameInputActionType, enum class ES_GameInputActionType RightGameInputActionType); // Function WBP_SettingsDoubleKeyBindLine.WBP_SettingsDoubleKeyBindLine_C.SetGameInputActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetKeyBind(struct FInputChord KeyBind, bool LeftKey); // Function WBP_SettingsDoubleKeyBindLine.WBP_SettingsDoubleKeyBindLine_C.SetKeyBind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_SettingsDoubleKeyBindLine.WBP_SettingsDoubleKeyBindLine_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_DoubleKeyBind_K2Node_ComponentBoundEvent_0_KeyChanged__DelegateSignature(struct FInputChord SelectedKey, enum class ES_GameInputActionType GameInputActionType, bool LeftKeyBind); // Function WBP_SettingsDoubleKeyBindLine.WBP_SettingsDoubleKeyBindLine_C.BndEvt__WBP_DoubleKeyBind_K2Node_ComponentBoundEvent_0_KeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_DoubleKeyBind_K2Node_ComponentBoundEvent_1_SelectingKeyChanged__DelegateSignature(enum class ES_GameInputActionType GameInputActionType, bool LeftKeyBind); // Function WBP_SettingsDoubleKeyBindLine.WBP_SettingsDoubleKeyBindLine_C.BndEvt__WBP_DoubleKeyBind_K2Node_ComponentBoundEvent_1_SelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_SettingsDoubleKeyBindLine.WBP_SettingsDoubleKeyBindLine_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_SettingsDoubleKeyBindLine(int32_t EntryPoint); // Function WBP_SettingsDoubleKeyBindLine.WBP_SettingsDoubleKeyBindLine_C.ExecuteUbergraph_WBP_SettingsDoubleKeyBindLine // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void SelectingKeyChanged__DelegateSignature(enum class ES_GameInputActionType GameInputActionType, bool LeftKeyBind); // Function WBP_SettingsDoubleKeyBindLine.WBP_SettingsDoubleKeyBindLine_C.SelectingKeyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void KeyChanged__DelegateSignature(struct FInputChord SelectedKey, enum class ES_GameInputActionType GameInputActionType, bool LeftKeyBind); // Function WBP_SettingsDoubleKeyBindLine.WBP_SettingsDoubleKeyBindLine_C.KeyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

