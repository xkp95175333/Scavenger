// WidgetBlueprintGeneratedClass WBP_WeaponPanelItem.WBP_WeaponPanelItem_C
// Size: 0x950 (Inherited: 0x880)
struct UWBP_WeaponPanelItem_C : US_WidgetWeaponItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UWBP_WeaponPanelItemAmmoCounter_C* AmmoCounter; // 0x888(0x08)
	struct UBorder* Background; // 0x890(0x08)
	struct UWBP_CommonProgressBar_C* CraftingFill; // 0x898(0x08)
	struct US_RichTextBlock* craftingTime; // 0x8a0(0x08)
	struct UImage* EquippedIcon; // 0x8a8(0x08)
	struct UWBP_ItemDropSwitcher_C* ItemDropSwitcher; // 0x8b0(0x08)
	struct UBorder* RarityBorder; // 0x8b8(0x08)
	struct UImage* RarityStripImage; // 0x8c0(0x08)
	struct UWBP_CommonScavengerButton_C* WeaponItemButton; // 0x8c8(0x08)
	struct UImage* Ximage; // 0x8d0(0x08)
	enum class ES_EquipmentSlot SlotType; // 0x8d8(0x01)
	char pad_8D9[0x7]; // 0x8d9(0x07)
	struct FText NameStyle; // 0x8e0(0x18)
	struct FText QuantityStyle; // 0x8f8(0x18)
	struct FText ClipAmmoStyle; // 0x910(0x18)
	struct FText TotalAmmoStyle; // 0x928(0x18)
	float RarityOpacity; // 0x940(0x04)
	char pad_944[0x4]; // 0x944(0x04)
	struct FTimerHandle CraftingInProgressTimerHandle; // 0x948(0x08)

	void ClearDragState(); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.ClearDragState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateVisualState(struct FS_ItemState NewItemState, struct FS_ItemMetadata newItemMetadata); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.UpdateVisualState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetupAmmoCounter(enum class ES_EquipmentSlot EquipmentSlot); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.SetupAmmoCounter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyFilledSlotPinged(); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifyFilledSlotPinged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyEmptySlotPinged(); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifyEmptySlotPinged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCraftingStarted(struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata, int32_t craftingTime); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifyCraftingStarted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCraftingStopped(struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifyCraftingStopped // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemDropRejected(); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifyDragItemDropRejected // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemDropAccepted(enum class ES_InventoryScreenArea sourceAreaType, int32_t sourceId, struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifyDragItemDropAccepted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySlotEmptied(); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifySlotEmptied // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemEnter(bool bIsValidForDrop, enum class ES_InventoryScreenArea SourceType, int32_t sourceId, struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifyDragItemEnter // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySlotUnequipped(); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifySlotUnequipped // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyItemChanged(struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifyItemChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySlotEquipped(struct FS_ItemState NewItemState, struct FS_ItemMetadata newItemMetadata); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifySlotEquipped // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySlotUnselected(); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifySlotUnselected // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySlotSelected(); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifySlotSelected // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyInitialized(struct US_WidgetInventoryScreen* inventoryScreen, int32_t Index, struct FS_ItemState NewItemState, struct FS_ItemMetadata newItemMetadata); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifyInitialized // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragCancelled(); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifyDragCancelled // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemLeave(); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.NotifyDragItemLeave // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WeaponItemButton_K2Node_ComponentBoundEvent_0_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.BndEvt__WeaponItemButton_K2Node_ComponentBoundEvent_0_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WeaponItemButton_K2Node_ComponentBoundEvent_1_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.BndEvt__WeaponItemButton_K2Node_ComponentBoundEvent_1_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_WeaponPanelItem(int32_t EntryPoint); // Function WBP_WeaponPanelItem.WBP_WeaponPanelItem_C.ExecuteUbergraph_WBP_WeaponPanelItem // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

