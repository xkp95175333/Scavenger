// WidgetBlueprintGeneratedClass WBP_MapLegendPanelHeader.WBP_MapLegendPanelHeader_C
// Size: 0x4e8 (Inherited: 0x4b8)
struct UWBP_MapLegendPanelHeader_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UImage* Image_YellowLine; // 0x4c0(0x08)
	struct URichTextBlock* RichTextBlock_1; // 0x4c8(0x08)
	struct FText HeaderText; // 0x4d0(0x18)

	void PreConstruct(bool IsDesignTime); // Function WBP_MapLegendPanelHeader.WBP_MapLegendPanelHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_MapLegendPanelHeader(int32_t EntryPoint); // Function WBP_MapLegendPanelHeader.WBP_MapLegendPanelHeader_C.ExecuteUbergraph_WBP_MapLegendPanelHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

