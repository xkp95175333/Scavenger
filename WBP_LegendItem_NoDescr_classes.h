// WidgetBlueprintGeneratedClass WBP_LegendItem_NoDescr.WBP_LegendItem_NoDescr_C
// Size: 0x51c (Inherited: 0x4b8)
struct UWBP_LegendItem_NoDescr_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UImage* Background; // 0x4c0(0x08)
	struct UImage* Icon; // 0x4c8(0x08)
	struct US_RichTextBlock* TitleRichText; // 0x4d0(0x08)
	struct FText TitleText; // 0x4d8(0x18)
	struct UObject* LegendIcon; // 0x4f0(0x08)
	struct FText TitleRichTextFormat; // 0x4f8(0x18)
	enum class ESlateVisibility BackgroundDiamondVisibility; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	struct FVector2D SizeOverride; // 0x514(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_LegendItem_NoDescr.WBP_LegendItem_NoDescr_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_LegendItem_NoDescr(int32_t EntryPoint); // Function WBP_LegendItem_NoDescr.WBP_LegendItem_NoDescr_C.ExecuteUbergraph_WBP_LegendItem_NoDescr // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

