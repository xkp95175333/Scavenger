// WidgetBlueprintGeneratedClass WBP_Minimap.WBP_Minimap_C
// Size: 0x500 (Inherited: 0x4b8)
struct UWBP_Minimap_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UImage* ArrowImage; // 0x4c0(0x08)
	struct UImage* Compass_Background; // 0x4c8(0x08)
	struct UImage* CompassBGTexture; // 0x4d0(0x08)
	struct URetainerBox* RetainerBox_1; // 0x4d8(0x08)
	struct URetainerBox* RetainerBox_2; // 0x4e0(0x08)
	struct UImage* RingGradientImage; // 0x4e8(0x08)
	struct UImage* vertlineimage; // 0x4f0(0x08)
	struct UWBP_MapWidget_C* WBP_Map; // 0x4f8(0x08)

	void Construct(); // Function WBP_Minimap.WBP_Minimap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnInputTypeChanged(bool bUsingGamepad); // Function WBP_Minimap.WBP_Minimap_C.Event OnInputTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_Minimap(int32_t EntryPoint); // Function WBP_Minimap.WBP_Minimap_C.ExecuteUbergraph_WBP_Minimap // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

