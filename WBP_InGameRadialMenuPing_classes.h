// WidgetBlueprintGeneratedClass WBP_InGameRadialMenuPing.WBP_InGameRadialMenuPing_C
// Size: 0x728 (Inherited: 0x700)
struct UWBP_InGameRadialMenuPing_C : US_InGameRadialMenuPing {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct FDataTableRowHandle SelectedItemNameFormatHandle; // 0x708(0x10)
	struct FDataTableRowHandle SelectedItemDescriptionFormatHandle; // 0x718(0x10)

	void NotifyOnClose(); // Function WBP_InGameRadialMenuPing.WBP_InGameRadialMenuPing_C.NotifyOnClose // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__RadialPanel_K2Node_ComponentBoundEvent_0_S_OnRadialPanelSelectionChanged__DelegateSignature(int32_t OldSelection, int32_t NewSelection); // Function WBP_InGameRadialMenuPing.WBP_InGameRadialMenuPing_C.BndEvt__RadialPanel_K2Node_ComponentBoundEvent_0_S_OnRadialPanelSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_InGameRadialMenuPing(int32_t EntryPoint); // Function WBP_InGameRadialMenuPing.WBP_InGameRadialMenuPing_C.ExecuteUbergraph_WBP_InGameRadialMenuPing // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

