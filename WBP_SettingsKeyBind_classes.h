// WidgetBlueprintGeneratedClass WBP_SettingsKeyBind.WBP_SettingsKeyBind_C
// Size: 0x4f0 (Inherited: 0x4b8)
struct UWBP_SettingsKeyBind_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UInputKeySelector* InputKey; // 0x4c0(0x08)
	struct FMulticastInlineDelegate KeyChanged; // 0x4c8(0x10)
	enum class ES_GameInputActionType GameInputActionType; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct FMulticastInlineDelegate SelectingKeyChanged; // 0x4e0(0x10)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SettingsKeyBind.WBP_SettingsKeyBind_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SettingsKeyBind.WBP_SettingsKeyBind_C.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SettingsKeyBind.WBP_SettingsKeyBind_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetGameInputAction(enum class ES_GameInputActionType GameInputActionType); // Function WBP_SettingsKeyBind.WBP_SettingsKeyBind_C.SetGameInputAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetKeyBind(struct FInputChord KeyBind); // Function WBP_SettingsKeyBind.WBP_SettingsKeyBind_C.SetKeyBind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__InputKey_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function WBP_SettingsKeyBind.WBP_SettingsKeyBind_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__InputKey_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature(); // Function WBP_SettingsKeyBind.WBP_SettingsKeyBind_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_SettingsKeyBind(int32_t EntryPoint); // Function WBP_SettingsKeyBind.WBP_SettingsKeyBind_C.ExecuteUbergraph_WBP_SettingsKeyBind // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void SelectingKeyChanged__DelegateSignature(enum class ES_GameInputActionType GameInputActionType); // Function WBP_SettingsKeyBind.WBP_SettingsKeyBind_C.SelectingKeyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void KeyChanged__DelegateSignature(struct FInputChord SelectedKey, enum class ES_GameInputActionType GameInputActionType); // Function WBP_SettingsKeyBind.WBP_SettingsKeyBind_C.KeyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

