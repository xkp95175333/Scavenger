// WidgetBlueprintGeneratedClass WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C
// Size: 0x91c (Inherited: 0x880)
struct UWBP_QuickItemsPanelItem_C : US_WidgetQuickItemItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UWBP_InventoryStackQuantityCounter_C* AmmoCounter_2; // 0x888(0x08)
	struct UBorder* Background; // 0x890(0x08)
	struct UImage* EquippedIcon; // 0x898(0x08)
	struct UWBP_ItemDropSwitcher_C* ItemDropSwitcher; // 0x8a0(0x08)
	struct US_RichTextBlock* NameRichText_2; // 0x8a8(0x08)
	struct UWBP_CommonScavengerButton_C* QuickItemButton; // 0x8b0(0x08)
	struct UImage* RarityStripImage; // 0x8b8(0x08)
	struct UOverlay* SwapStateOverlay; // 0x8c0(0x08)
	struct UImage* Ximage; // 0x8c8(0x08)
	enum class ES_EquipmentSlot SlotType; // 0x8d0(0x01)
	char pad_8D1[0x3]; // 0x8d1(0x03)
	struct FLinearColor LastBrushColor; // 0x8d4(0x10)
	char pad_8E4[0x4]; // 0x8e4(0x04)
	struct UMaterialInstanceDynamic* BackgroundDynamicMaterial; // 0x8e8(0x08)
	struct FText QuantityStyle; // 0x8f0(0x18)
	bool equipped; // 0x908(0x01)
	char pad_909[0x7]; // 0x909(0x07)
	struct UBorder* RarityBorder; // 0x910(0x08)
	float RarityOpacity; // 0x918(0x04)

	void ClearDragState(); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.ClearDragState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateVisualState(struct FS_ItemState NewItemState, struct FS_ItemMetadata newItemMetadata); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.UpdateVisualState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemDropAccepted(enum class ES_InventoryScreenArea sourceAreaType, int32_t sourceId, struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.NotifyDragItemDropAccepted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemLeave(); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.NotifyDragItemLeave // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemDropRejected(); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.NotifyDragItemDropRejected // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragCancelled(); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.NotifyDragCancelled // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemEnter(bool bIsValidForDrop, enum class ES_InventoryScreenArea SourceType, int32_t sourceId, struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.NotifyDragItemEnter // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySlotSelected(); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.NotifySlotSelected // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySlotUnselected(); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.NotifySlotUnselected // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySlotEquipped(struct FS_ItemState NewItemState, struct FS_ItemMetadata newItemMetadata); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.NotifySlotEquipped // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySlotUnequipped(); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.NotifySlotUnequipped // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyItemChanged(struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.NotifyItemChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyInitialized(struct US_WidgetInventoryScreen* inventoryScreen, int32_t Index, struct FS_ItemState NewItemState, struct FS_ItemMetadata newItemMetadata); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.NotifyInitialized // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__QuickItemButton_K2Node_ComponentBoundEvent_1_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.BndEvt__QuickItemButton_K2Node_ComponentBoundEvent_1_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__QuickItemButton_K2Node_ComponentBoundEvent_2_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.BndEvt__QuickItemButton_K2Node_ComponentBoundEvent_2_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyPendingSwapState(bool isSwapPending); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.NotifyPendingSwapState // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_QuickItemsPanelItem(int32_t EntryPoint); // Function WBP_QuickItemsPanelItem.WBP_QuickItemsPanelItem_C.ExecuteUbergraph_WBP_QuickItemsPanelItem // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

