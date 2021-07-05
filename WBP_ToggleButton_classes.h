// WidgetBlueprintGeneratedClass WBP_ToggleButton.WBP_ToggleButton_C
// Size: 0x538 (Inherited: 0x518)
struct UWBP_ToggleButton_C : US_WidgetToggleModifier {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UWBP_CommonScavengerButton_C* WBP_CommonScavengerButton; // 0x520(0x08)
	struct FMulticastInlineDelegate ButtonToggled; // 0x528(0x10)

	void BndEvt__WBP_CommonScavengerButton_K2Node_ComponentBoundEvent_0_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_ToggleButton.WBP_ToggleButton_C.BndEvt__WBP_CommonScavengerButton_K2Node_ComponentBoundEvent_0_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_ToggleButton(int32_t EntryPoint); // Function WBP_ToggleButton.WBP_ToggleButton_C.ExecuteUbergraph_WBP_ToggleButton // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
	void ButtonToggled__DelegateSignature(bool bLeftButtonOn); // Function WBP_ToggleButton.WBP_ToggleButton_C.ButtonToggled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

