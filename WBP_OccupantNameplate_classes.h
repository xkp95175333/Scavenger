// WidgetBlueprintGeneratedClass WBP_OccupantNameplate.WBP_OccupantNameplate_C
// Size: 0x4c9 (Inherited: 0x4b8)
struct UWBP_OccupantNameplate_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct US_RichTextBlock* OccupantName; // 0x4c0(0x08)
	bool LeftSideNameplate; // 0x4c8(0x01)

	void UpdateDisplayName(struct FText Name); // Function WBP_OccupantNameplate.WBP_OccupantNameplate_C.UpdateDisplayName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_OccupantNameplate.WBP_OccupantNameplate_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_OccupantNameplate(int32_t EntryPoint); // Function WBP_OccupantNameplate.WBP_OccupantNameplate_C.ExecuteUbergraph_WBP_OccupantNameplate // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

