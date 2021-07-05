// WidgetBlueprintGeneratedClass WBP_Slider.WBP_Slider_C
// Size: 0x5d8 (Inherited: 0x5b0)
struct UWBP_Slider_C : US_WidgetSliderModifier {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct US_UMGScavengerButton* LeftButton; // 0x5b8(0x08)
	struct US_UMGScavengerButton* RightButton; // 0x5c0(0x08)
	struct FMulticastInlineDelegate BarUpdated; // 0x5c8(0x10)

	void BndEvt__BarSlider_K2Node_ComponentBoundEvent_74_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function WBP_Slider.WBP_Slider_C.BndEvt__BarSlider_K2Node_ComponentBoundEvent_74_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Slider.WBP_Slider_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Slider.WBP_Slider_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_Slider(int32_t EntryPoint); // Function WBP_Slider.WBP_Slider_C.ExecuteUbergraph_WBP_Slider // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
	void BarUpdated__DelegateSignature(float NewValue); // Function WBP_Slider.WBP_Slider_C.BarUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

