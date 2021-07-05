// WidgetBlueprintGeneratedClass WBP_SliderLine.WBP_SliderLine_C
// Size: 0x561 (Inherited: 0x558)
struct UWBP_SliderLine_C : US_WidgetGenericSettingsSlot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	bool Indent; // 0x560(0x01)

	void OverrideRange(struct FFloatRange NewConfig); // Function WBP_SliderLine.WBP_SliderLine_C.OverrideRange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetSliderValue(float sliderValue); // Function WBP_SliderLine.WBP_SliderLine_C.SetSliderValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	float GetRawSliderValue(); // Function WBP_SliderLine.WBP_SliderLine_C.GetRawSliderValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_SliderLine.WBP_SliderLine_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_SliderLine(int32_t EntryPoint); // Function WBP_SliderLine.WBP_SliderLine_C.ExecuteUbergraph_WBP_SliderLine // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

