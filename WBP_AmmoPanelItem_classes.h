// WidgetBlueprintGeneratedClass WBP_AmmoPanelItem.WBP_AmmoPanelItem_C
// Size: 0xbdc (Inherited: 0xba8)
struct UWBP_AmmoPanelItem_C : US_WidgetAmmoItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xba8(0x08)
	struct UWBP_InventoryAmmoStackQuantityCounter_C* AmmoCounter; // 0xbb0(0x08)
	struct UWBP_CommonScavengerButton_C* AmmoItemButton; // 0xbb8(0x08)
	struct UBorder* Background; // 0xbc0(0x08)
	struct UImage* Image_359; // 0xbc8(0x08)
	struct UWBP_ItemDropSwitcher_C* ItemDropSwitcher; // 0xbd0(0x08)
	float EmptyStackOpacity; // 0xbd8(0x04)

	void ClearDragState(); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.ClearDragState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateVisualState(struct FS_ItemState NewItemState, struct FS_ItemMetadata newItemMetadata); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.UpdateVisualState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyItemChanged(struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.NotifyItemChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyInitialized(struct US_WidgetInventoryScreen* inventoryScreen, int32_t Index, struct FS_ItemState NewItemState, struct FS_ItemMetadata newItemMetadata); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.NotifyInitialized // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyPinged(enum class ES_InventoryCategory InventoryCategory); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.NotifyPinged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemEnter(bool bIsValidForDrop, enum class ES_InventoryScreenArea SourceType, int32_t sourceId, struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.NotifyDragItemEnter // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragCancelled(); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.NotifyDragCancelled // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemDropAccepted(enum class ES_InventoryScreenArea sourceAreaType, int32_t sourceId, struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.NotifyDragItemDropAccepted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemDropRejected(); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.NotifyDragItemDropRejected // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemLeave(); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.NotifyDragItemLeave // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyItemRemoved(); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.NotifyItemRemoved // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyAmmoIsUsedByWeaponSlot(enum class ES_EquipmentSlot EquipmentSlot); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.NotifyAmmoIsUsedByWeaponSlot // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyAmmoStoppedBeingUsedByWeaponSlot(enum class ES_EquipmentSlot EquipmentSlot); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.NotifyAmmoStoppedBeingUsedByWeaponSlot // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_AmmoPanelItem(int32_t EntryPoint); // Function WBP_AmmoPanelItem.WBP_AmmoPanelItem_C.ExecuteUbergraph_WBP_AmmoPanelItem // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

