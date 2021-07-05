// WidgetBlueprintGeneratedClass WBP_ItemDropSwitcher.WBP_ItemDropSwitcher_C
// Size: 0x4d0 (Inherited: 0x4b8)
struct UWBP_ItemDropSwitcher_C : US_WidgetMinimal {
	struct UBorder* CanSwapBorder; // 0x4b8(0x08)
	struct UBorder* CantSwapBorder; // 0x4c0(0x08)
	struct UWidgetSwitcher* SwapSwitcher; // 0x4c8(0x08)

	void ActivateDropState(bool IsValidForDrop); // Function WBP_ItemDropSwitcher.WBP_ItemDropSwitcher_C.ActivateDropState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ClearDropState(); // Function WBP_ItemDropSwitcher.WBP_ItemDropSwitcher_C.ClearDropState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

