// WidgetBlueprintGeneratedClass WBP_Inventory.WBP_Inventory_C
// Size: 0x5f0 (Inherited: 0x5b8)
struct UWBP_Inventory_C : US_WidgetInventoryScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b8(0x08)
	struct UWBP_BackgroundPanel_C* BackgroundPanel; // 0x5c0(0x08)
	struct UImage* Image; // 0x5c8(0x08)
	struct UImage* Image_140; // 0x5d0(0x08)
	struct UImage* QuickItemsDecorativeImage; // 0x5d8(0x08)
	struct US_RichTextBlock* S_RichTextBlock_68; // 0x5e0(0x08)
	struct UWBP_GameplayNavBar_C* WBP_GameplayNavBar; // 0x5e8(0x08)

	void NotifyDragStarted_BP(struct US_WidgetInventoryDragDrop* SourceWidget, struct US_WidgetInventoryDragVisual* dragVisual); // Function WBP_Inventory.WBP_Inventory_C.NotifyDragStarted_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDragStopped_BP(struct US_WidgetInventoryDragDrop* SourceWidget, struct US_WidgetInventoryDragVisual* dragVisual); // Function WBP_Inventory.WBP_Inventory_C.NotifyDragStopped_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_Inventory(int32_t EntryPoint); // Function WBP_Inventory.WBP_Inventory_C.ExecuteUbergraph_WBP_Inventory // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

