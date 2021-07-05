// WidgetBlueprintGeneratedClass WBP_BackgroundPanel.WBP_BackgroundPanel_C
// Size: 0x870 (Inherited: 0x850)
struct UWBP_BackgroundPanel_C : US_WidgetBackgroundPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x850(0x08)
	struct UVerticalBox* DefaultState; // 0x858(0x08)
	struct UBorder* DropBorder; // 0x860(0x08)
	struct UWBP_ItemDropSwitcher_C* ItemDropSwitcher; // 0x868(0x08)

	void ClearDragState(); // Function WBP_BackgroundPanel.WBP_BackgroundPanel_C.ClearDragState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void DragStopped(); // Function WBP_BackgroundPanel.WBP_BackgroundPanel_C.DragStopped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void DragStarted(); // Function WBP_BackgroundPanel.WBP_BackgroundPanel_C.DragStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragStarted(); // Function WBP_BackgroundPanel.WBP_BackgroundPanel_C.NotifyDragStarted // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragStopped(); // Function WBP_BackgroundPanel.WBP_BackgroundPanel_C.NotifyDragStopped // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemEnter(bool bIsValidForDrop, enum class ES_InventoryScreenArea SourceType, int32_t sourceId, struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_BackgroundPanel.WBP_BackgroundPanel_C.NotifyDragItemEnter // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragCancelled(); // Function WBP_BackgroundPanel.WBP_BackgroundPanel_C.NotifyDragCancelled // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemDropAccepted(enum class ES_InventoryScreenArea sourceAreaType, int32_t sourceId, struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_BackgroundPanel.WBP_BackgroundPanel_C.NotifyDragItemDropAccepted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragItemDropRejected(); // Function WBP_BackgroundPanel.WBP_BackgroundPanel_C.NotifyDragItemDropRejected // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_BackgroundPanel.WBP_BackgroundPanel_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_BackgroundPanel(int32_t EntryPoint); // Function WBP_BackgroundPanel.WBP_BackgroundPanel_C.ExecuteUbergraph_WBP_BackgroundPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

