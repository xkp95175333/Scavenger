// WidgetBlueprintGeneratedClass WBP_InventoryPanel.WBP_InventoryPanel_C
// Size: 0x580 (Inherited: 0x4c0)
struct UWBP_InventoryPanel_C : US_WidgetGenericInventoryScreenPanelContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UImage* Backer; // 0x4c8(0x08)
	struct UWBP_InventoryPanelHeader_C* Header; // 0x4d0(0x08)
	struct UImage* LowerBorder; // 0x4d8(0x08)
	struct UImage* UpperBorder; // 0x4e0(0x08)
	struct US_WidgetGenericInventoryScreenPanel* InventoryPanelToUse; // 0x4e8(0x08)
	struct FLinearColor BorderColor; // 0x4f0(0x10)
	struct FMargin PanelPadding; // 0x500(0x10)
	struct FMargin BackerPadding; // 0x510(0x10)
	struct FLinearColor BackerColor; // 0x520(0x10)
	float itemWidth; // 0x530(0x04)
	float panelHeight; // 0x534(0x04)
	float spacerHeight; // 0x538(0x04)
	int32_t numberOfSpacers; // 0x53c(0x04)
	int32_t numberOfInventoryItems; // 0x540(0x04)
	char pad_544[0x4]; // 0x544(0x04)
	struct FDataTableRowHandle HeaderTextHandle; // 0x548(0x10)
	float HeaderHeight; // 0x558(0x04)
	struct FMargin HeaderPadding; // 0x55c(0x10)
	struct FLinearColor HeaderBrushColor; // 0x56c(0x10)
	float BorderHeight; // 0x57c(0x04)

	void Rebuild Widget Appearance(); // Function WBP_InventoryPanel.WBP_InventoryPanel_C.Rebuild Widget Appearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_InventoryPanel.WBP_InventoryPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_InventoryPanel(int32_t EntryPoint); // Function WBP_InventoryPanel.WBP_InventoryPanel_C.ExecuteUbergraph_WBP_InventoryPanel // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

