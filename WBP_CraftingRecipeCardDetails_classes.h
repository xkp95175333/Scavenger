// WidgetBlueprintGeneratedClass WBP_CraftingRecipeCardDetails.WBP_CraftingRecipeCardDetails_C
// Size: 0x5b0 (Inherited: 0x588)
struct UWBP_CraftingRecipeCardDetails_C : US_WidgetCraftingRecipeCardDetails {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x588(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x590(0x08)
	struct URetainerBox* RetainerBox_1; // 0x598(0x08)
	struct URetainerBox* RetainerBox_2; // 0x5a0(0x08)
	struct UWBP_CraftingInput_C* WBP_CraftingInput_371; // 0x5a8(0x08)

	void OnLoaded_6F9240304C20A62AF4BE0B9139588CE8(struct UObject* Loaded); // Function WBP_CraftingRecipeCardDetails.WBP_CraftingRecipeCardDetails_C.OnLoaded_6F9240304C20A62AF4BE0B9139588CE8 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event TestChanging(bool IsAvailable); // Function WBP_CraftingRecipeCardDetails.WBP_CraftingRecipeCardDetails_C.Event TestChanging // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyItemChanged_BP(struct FName OldOnlineItemId, struct FName NewOnlineItemId); // Function WBP_CraftingRecipeCardDetails.WBP_CraftingRecipeCardDetails_C.NotifyItemChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_CraftingRecipeCardDetails(int32_t EntryPoint); // Function WBP_CraftingRecipeCardDetails.WBP_CraftingRecipeCardDetails_C.ExecuteUbergraph_WBP_CraftingRecipeCardDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

