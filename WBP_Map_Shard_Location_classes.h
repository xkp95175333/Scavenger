// WidgetBlueprintGeneratedClass WBP_Map_Shard_Location.WBP_Map_Shard_Location_C
// Size: 0x728 (Inherited: 0x6e8)
struct UWBP_Map_Shard_Location_C : US_WidgetMapIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6e8(0x08)
	struct UWidgetAnimation* PulseEffect; // 0x6f0(0x08)
	struct UCanvasPanel* IconPanel; // 0x6f8(0x08)
	struct UImage* IMG_Background; // 0x700(0x08)
	struct UImage* IMG_PulseEffect; // 0x708(0x08)
	struct UImage* IMG_Side_Panel; // 0x710(0x08)
	struct URetainerBox* RetainerBox_5; // 0x718(0x08)
	struct UMaterialInstanceDynamic* IconMaterial; // 0x720(0x08)

	void OnZoomStateChanged(enum class ESlateVisibility slateVisibility); // Function WBP_Map_Shard_Location.WBP_Map_Shard_Location_C.OnZoomStateChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_Map_Shard_Location(int32_t EntryPoint); // Function WBP_Map_Shard_Location.WBP_Map_Shard_Location_C.ExecuteUbergraph_WBP_Map_Shard_Location // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

