// WidgetBlueprintGeneratedClass WBP_InventoryDragVisual.WBP_InventoryDragVisual_C
// Size: 0x550 (Inherited: 0x510)
struct UWBP_InventoryDragVisual_C : US_WidgetInventoryDragVisual {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct UImage* Icon; // 0x518(0x08)
	struct UTextBlock* Quantity; // 0x520(0x08)
	struct US_RichTextBlock* QuantityRichText; // 0x528(0x08)
	struct UMaterialInstanceDynamic* IconDynamicMaterial; // 0x530(0x08)
	struct FText QuantityStyle; // 0x538(0x18)

	void AllocateDynamicMaterials(); // Function WBP_InventoryDragVisual.WBP_InventoryDragVisual_C.AllocateDynamicMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetIconBrush(struct FS_ItemState S_ItemState); // Function WBP_InventoryDragVisual.WBP_InventoryDragVisual_C.SetIconBrush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyInitialized(enum class ES_InventoryScreenArea sourceAreaType, int32_t sourceId, struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_InventoryDragVisual.WBP_InventoryDragVisual_C.NotifyInitialized // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_InventoryDragVisual(int32_t EntryPoint); // Function WBP_InventoryDragVisual.WBP_InventoryDragVisual_C.ExecuteUbergraph_WBP_InventoryDragVisual // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

