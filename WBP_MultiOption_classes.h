// WidgetBlueprintGeneratedClass WBP_MultiOption.WBP_MultiOption_C
// Size: 0x580 (Inherited: 0x568)
struct UWBP_MultiOption_C : US_WidgetMultiOptionModifier {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct US_UMGScavengerButton* LeftButton; // 0x570(0x08)
	struct US_UMGScavengerButton* RightButton; // 0x578(0x08)

	void BndEvt__LeftSButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_MultiOption.WBP_MultiOption_C.BndEvt__LeftSButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__RightSButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_MultiOption.WBP_MultiOption_C.BndEvt__RightSButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyMultiOptionSettingConfigSet(struct FS_MultiOptionSettingConfig Config); // Function WBP_MultiOption.WBP_MultiOption_C.NotifyMultiOptionSettingConfigSet // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__NavBar_K2Node_ComponentBoundEvent_0_S_OnButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button, int32_t Index); // Function WBP_MultiOption.WBP_MultiOption_C.BndEvt__NavBar_K2Node_ComponentBoundEvent_0_S_OnButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_MultiOption(int32_t EntryPoint); // Function WBP_MultiOption.WBP_MultiOption_C.ExecuteUbergraph_WBP_MultiOption // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

