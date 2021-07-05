// WidgetBlueprintGeneratedClass WBP_CraftingInput.WBP_CraftingInput_C
// Size: 0x4f0 (Inherited: 0x4c8)
struct UWBP_CraftingInput_C : US_WidgetCraftingInput {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct US_RichTextBlock* CurrencyText; // 0x4d0(0x08)
	struct UImage* Icon; // 0x4d8(0x08)
	struct UMaterialInstanceDynamic* DynamicIconMaterial; // 0x4e0(0x08)
	struct US_RecipeData* TempRecipe; // 0x4e8(0x08)

	void UpdateInputText(); // Function WBP_CraftingInput.WBP_CraftingInput_C.UpdateInputText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct UWidget* GetTooltipWidget(); // Function WBP_CraftingInput.WBP_CraftingInput_C.GetTooltipWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void OnLoaded_4CD4E6B64FEB0339A40397B4EB9FFF31(struct UObject* Loaded); // Function WBP_CraftingInput.WBP_CraftingInput_C.OnLoaded_4CD4E6B64FEB0339A40397B4EB9FFF31 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRecipeDataChanged_BP(); // Function WBP_CraftingInput.WBP_CraftingInput_C.OnRecipeDataChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_CraftingInput.WBP_CraftingInput_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnCraftingStarted(int32_t RecipeIndex, struct FS_RecipeMetadata RecipeMetadata); // Function WBP_CraftingInput.WBP_CraftingInput_C.Event OnCraftingStarted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnCraftingCompleted(int32_t RecipeIndex, struct FS_RecipeMetadata RecipeMetadata); // Function WBP_CraftingInput.WBP_CraftingInput_C.Event OnCraftingCompleted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnRecipeListChanged(struct TArray<struct US_RecipeData*> recipes); // Function WBP_CraftingInput.WBP_CraftingInput_C.Event OnRecipeListChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleInventoryOnChanged(); // Function WBP_CraftingInput.WBP_CraftingInput_C.HandleInventoryOnChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_CraftingInput(int32_t EntryPoint); // Function WBP_CraftingInput.WBP_CraftingInput_C.ExecuteUbergraph_WBP_CraftingInput // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

