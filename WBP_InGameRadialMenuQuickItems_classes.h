// WidgetBlueprintGeneratedClass WBP_InGameRadialMenuQuickItems.WBP_InGameRadialMenuQuickItems_C
// Size: 0x700 (Inherited: 0x6d0)
struct UWBP_InGameRadialMenuQuickItems_C : US_InGameRadialMenuQuickItems {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6d0(0x08)
	struct FDataTableRowHandle SelectedItemNameFormatHandle; // 0x6d8(0x10)
	struct FDataTableRowHandle SelectedItemDescriptionFormatHandle; // 0x6e8(0x10)
	int32_t NumberOfEquippedQuickItems; // 0x6f8(0x04)
	int32_t CurrentlySelectedSlotIndex; // 0x6fc(0x04)

	void SetNumberOfEquippedQuickItems(struct US_EquipmentComponent* EquipmentComponent); // Function WBP_InGameRadialMenuQuickItems.WBP_InGameRadialMenuQuickItems_C.SetNumberOfEquippedQuickItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleOnItemEquipped(enum class ES_EquipmentSlot SlotType, struct FS_ItemState ItemState); // Function WBP_InGameRadialMenuQuickItems.WBP_InGameRadialMenuQuickItems_C.HandleOnItemEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleOnItemUnequipped(enum class ES_EquipmentSlot SlotType, struct FS_ItemState OldItemState); // Function WBP_InGameRadialMenuQuickItems.WBP_InGameRadialMenuQuickItems_C.HandleOnItemUnequipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOnClose(); // Function WBP_InGameRadialMenuQuickItems.WBP_InGameRadialMenuQuickItems_C.NotifyOnClose // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_InGameRadialMenuQuickItems.WBP_InGameRadialMenuQuickItems_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__RadialPanel_K2Node_ComponentBoundEvent_0_S_OnRadialPanelSelectionChanged__DelegateSignature(int32_t OldSelection, int32_t NewSelection); // Function WBP_InGameRadialMenuQuickItems.WBP_InGameRadialMenuQuickItems_C.BndEvt__RadialPanel_K2Node_ComponentBoundEvent_0_S_OnRadialPanelSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyQuickItemSlotChanged(int32_t quickItemIndex); // Function WBP_InGameRadialMenuQuickItems.WBP_InGameRadialMenuQuickItems_C.NotifyQuickItemSlotChanged // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_InGameRadialMenuQuickItems(int32_t EntryPoint); // Function WBP_InGameRadialMenuQuickItems.WBP_InGameRadialMenuQuickItems_C.ExecuteUbergraph_WBP_InGameRadialMenuQuickItems // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

