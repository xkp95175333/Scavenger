// WidgetBlueprintGeneratedClass WBP_InspectorList.WBP_InspectorList_C
// Size: 0x288 (Inherited: 0x270)
struct UWBP_InspectorList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBorder* Border_86; // 0x278(0x08)
	struct UTextBlock* TextBlock_1; // 0x280(0x08)

	struct FLinearColor GetBrushColor_1(); // Function WBP_InspectorList.WBP_InspectorList_C.GetBrushColor_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FText GetText_1(); // Function WBP_InspectorList.WBP_InspectorList_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void BP_OnEntryReleased(); // Function WBP_InspectorList.WBP_InspectorList_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_InspectorList.WBP_InspectorList_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_InspectorList.WBP_InspectorList_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_InspectorList.WBP_InspectorList_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_InspectorList(int32_t EntryPoint); // Function WBP_InspectorList.WBP_InspectorList_C.ExecuteUbergraph_WBP_InspectorList // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

