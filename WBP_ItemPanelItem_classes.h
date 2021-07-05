// WidgetBlueprintGeneratedClass WBP_ItemPanelItem.WBP_ItemPanelItem_C
// Size: 0xc04 (Inherited: 0xba0)
struct UWBP_ItemPanelItem_C : US_WidgetInventoryItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xba0(0x08)
	struct UWBP_InventoryStackQuantityCounter_C* AmmoCounter_2; // 0xba8(0x08)
	struct UBorder* Background; // 0xbb0(0x08)
	struct UWBP_CommonScavengerButton_C* ItemButton; // 0xbb8(0x08)
	struct UWBP_ItemDropSwitcher_C* ItemDropSwitcher; // 0xbc0(0x08)
	struct US_RichTextBlock* NameRichText_2; // 0xbc8(0x08)
	struct UImage* Ximage; // 0xbd0(0x08)
	struct UMaterialInstanceDynamic* BackgroundDynamicMaterial; // 0xbd8(0x08)
	struct UMaterialInstanceDynamic* IconDynamicMaterial; // 0xbe0(0x08)
	struct FText QuantityStyle; // 0xbe8(0x18)
	float EmptyStackOpacity; // 0xc00(0x04)

	void ClearDragState(); // Function WBP_ItemPanelItem.WBP_ItemPanelItem_C.ClearDragState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateVisualState(struct FS_ItemState NewItemState, struct FS_ItemMetadata newItemMetadata); // Function WBP_ItemPanelItem.WBP_ItemPanelItem_C.UpdateVisualState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyInitialized(struct US_WidgetInventoryScreen* inventoryScreen, int32_t Index, struct FS_ItemState NewItemState, struct FS_ItemMetadata newItemMetadata); // Function WBP_ItemPanelItem.WBP_ItemPanelItem_C.NotifyInitialized // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyItemChanged(struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_ItemPanelItem.WBP_ItemPanelItem_C.NotifyItemChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemEnter(bool bIsValidForDrop, enum class ES_InventoryScreenArea SourceType, int32_t sourceId, struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_ItemPanelItem.WBP_ItemPanelItem_C.NotifyDragItemEnter // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragCancelled(); // Function WBP_ItemPanelItem.WBP_ItemPanelItem_C.NotifyDragCancelled // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemDropAccepted(enum class ES_InventoryScreenArea sourceAreaType, int32_t sourceId, struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_ItemPanelItem.WBP_ItemPanelItem_C.NotifyDragItemDropAccepted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemDropRejected(); // Function WBP_ItemPanelItem.WBP_ItemPanelItem_C.NotifyDragItemDropRejected // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemLeave(); // Function WBP_ItemPanelItem.WBP_ItemPanelItem_C.NotifyDragItemLeave // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyItemRemoved(); // Function WBP_ItemPanelItem.WBP_ItemPanelItem_C.NotifyItemRemoved // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_ItemPanelItem(int32_t EntryPoint); // Function WBP_ItemPanelItem.WBP_ItemPanelItem_C.ExecuteUbergraph_WBP_ItemPanelItem // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

