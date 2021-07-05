// WidgetBlueprintGeneratedClass WBP_MultiOptionLine.WBP_MultiOptionLine_C
// Size: 0x571 (Inherited: 0x558)
struct UWBP_MultiOptionLine_C : US_WidgetGenericSettingsSlot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UBorder* Border_3; // 0x560(0x08)
	struct UHorizontalBox* HorizontalBox_79; // 0x568(0x08)
	bool Indent; // 0x570(0x01)

	int32_t GetOptionIndex(); // Function WBP_MultiOptionLine.WBP_MultiOptionLine_C.GetOptionIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void OverrideOptionNames(struct TArray<struct FText> MultiOptionNames); // Function WBP_MultiOptionLine.WBP_MultiOptionLine_C.OverrideOptionNames // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetOptionIndex(int32_t Index); // Function WBP_MultiOptionLine.WBP_MultiOptionLine_C.SetOptionIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_MultiOptionLine.WBP_MultiOptionLine_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EditLoadout(); // Function WBP_MultiOptionLine.WBP_MultiOptionLine_C.EditLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ChooseClass(); // Function WBP_MultiOptionLine.WBP_MultiOptionLine_C.ChooseClass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SelectSession(int32_t SessionIndex); // Function WBP_MultiOptionLine.WBP_MultiOptionLine_C.SelectSession // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_MultiOptionLine(int32_t EntryPoint); // Function WBP_MultiOptionLine.WBP_MultiOptionLine_C.ExecuteUbergraph_WBP_MultiOptionLine // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

