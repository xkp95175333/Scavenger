// WidgetBlueprintGeneratedClass WBP_UnseenItemBadge.WBP_UnseenItemBadge_C
// Size: 0x4d8 (Inherited: 0x4b8)
struct UWBP_UnseenItemBadge_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UImage* NewBadge; // 0x4c0(0x08)
	struct URetainerBox* RetainerBox_1; // 0x4c8(0x08)
	struct FVector2D BadgeSize; // 0x4d0(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_UnseenItemBadge.WBP_UnseenItemBadge_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_UnseenItemBadge(int32_t EntryPoint); // Function WBP_UnseenItemBadge.WBP_UnseenItemBadge_C.ExecuteUbergraph_WBP_UnseenItemBadge // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

