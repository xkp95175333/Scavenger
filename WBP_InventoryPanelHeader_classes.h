// WidgetBlueprintGeneratedClass WBP_InventoryPanelHeader.WBP_InventoryPanelHeader_C
// Size: 0x4d0 (Inherited: 0x4b8)
struct UWBP_InventoryPanelHeader_C : US_WidgetMinimal {
	struct UBorder* HeaderBorder; // 0x4b8(0x08)
	struct US_RichTextBlock* HeaderText; // 0x4c0(0x08)
	struct USizeBox* SizeBox_1; // 0x4c8(0x08)

	void RebuildHeader(struct FDataTableRowHandle HeaderTextHandle, float HeaderHeight, struct FMargin HeaderPadding, struct FLinearColor HeaderBorderBrushColor); // Function WBP_InventoryPanelHeader.WBP_InventoryPanelHeader_C.RebuildHeader // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

