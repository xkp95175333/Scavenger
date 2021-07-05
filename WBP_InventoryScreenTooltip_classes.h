// WidgetBlueprintGeneratedClass WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C
// Size: 0xa48 (Inherited: 0x518)
struct UWBP_InventoryScreenTooltip_C : US_WidgetInventoryTooltip {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UImage* AmmoType; // 0x520(0x08)
	struct UBorder* BackgroundBorder; // 0x528(0x08)
	struct US_RichTextBlock* ButtonRichText_Drop; // 0x530(0x08)
	struct US_RichTextBlock* ButtonRichText_Equip; // 0x538(0x08)
	struct US_RichTextBlock* ButtonRichText_Swap; // 0x540(0x08)
	struct US_RichTextBlock* ButtonRichText_Unequip; // 0x548(0x08)
	struct US_RichTextBlock* CategoryBorderRichText; // 0x550(0x08)
	struct US_RichTextBlock* CategoryRichText; // 0x558(0x08)
	struct UWBP_CommonCircularFill_C* DropFillButton; // 0x560(0x08)
	struct UWBP_CommonKey_C* DropKey; // 0x568(0x08)
	struct UHorizontalBox* DropLabel; // 0x570(0x08)
	struct UWBP_CommonKey_C* EquipButton; // 0x578(0x08)
	struct UHorizontalBox* EquipLabel; // 0x580(0x08)
	struct US_RichTextBlock* ItemCountRichText; // 0x588(0x08)
	struct US_RichTextBlock* ItemDescriptionRichText; // 0x590(0x08)
	struct UImage* ItemImage; // 0x598(0x08)
	struct UOverlay* ItemInfoOverlay; // 0x5a0(0x08)
	struct US_RichTextBlock* ItemNameRichText; // 0x5a8(0x08)
	struct UBorder* ItemRarity; // 0x5b0(0x08)
	struct US_RichTextBlock* RarityRichText; // 0x5b8(0x08)
	struct UVerticalBox* StatBarsVerticalBox; // 0x5c0(0x08)
	struct US_RichTextBlock* StatRichText; // 0x5c8(0x08)
	struct UWBP_CommonKey_C* SwapKey; // 0x5d0(0x08)
	struct UHorizontalBox* SwapLabel; // 0x5d8(0x08)
	struct UHorizontalBox* TierCategoryHorizontalBox; // 0x5e0(0x08)
	struct UWBP_CommonKey_C* UnequipButton; // 0x5e8(0x08)
	struct UHorizontalBox* UnequipLabel; // 0x5f0(0x08)
	enum class ES_InventoryScreenArea sourceAreaType; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	int32_t sourceId; // 0x5fc(0x04)
	struct FS_ItemState ItemState; // 0x600(0x40)
	struct FS_ItemMetadata itemMetadata; // 0x640(0x320)
	bool bUsingGamepad; // 0x960(0x01)
	char pad_961[0x7]; // 0x961(0x07)
	struct US_WidgetInventoryScreen* inventoryScreen; // 0x968(0x08)
	struct UMaterialInstanceDynamic* IconDynamicMaterial; // 0x970(0x08)
	struct UMaterialInstanceDynamic* BackgroundDynamicMaterial; // 0x978(0x08)
	struct FText NameStyle; // 0x980(0x18)
	struct FText CountStyle; // 0x998(0x18)
	struct FText RarityStyle; // 0x9b0(0x18)
	struct FText CategoryStyle; // 0x9c8(0x18)
	struct FText CategoryBorderStyle; // 0x9e0(0x18)
	struct FText DescriptionStyle; // 0x9f8(0x18)
	struct FText StatStyle; // 0xa10(0x18)
	struct FText ButtonDescriptorStyle; // 0xa28(0x18)
	struct US_RichTextBlock* CategoryRichText_1; // 0xa40(0x08)

	void SetItemText(struct FS_ItemState ItemState); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.SetItemText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetRichText(struct US_RichTextBlock* RichTextBlock, struct FText RichTextFormat, struct FText Text); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.SetRichText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetBackgroundGradient(bool IsValid, enum class ES_ItemRarity Rarity); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.SetBackgroundGradient // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIconMaterial(struct US_ItemData* ItemData, enum class ES_ItemRarity Rarity, struct UMaterialInstanceDynamic* IconDynamicMaterial); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.GetIconMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void Set Icon Material(struct US_ItemData* ItemData, struct FS_ItemMetadata itemMetadata); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.Set Icon Material // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AllocateDynamicMaterials(); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.AllocateDynamicMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetupLabel(struct URichTextBlock* RichText, struct FText KeyboardAndMouseLabel, struct FText GamepadLabel); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.SetupLabel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetupLabelIcons(); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.SetupLabelIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Setup(enum class ES_InventoryScreenArea sourceAreaType, int32_t sourceId, struct FS_ItemState LocalItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetupLabelVisibility(); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.SetupLabelVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySourceChanged(enum class ES_InventoryScreenArea sourceAreaType, int32_t sourceId, struct FS_ItemState ItemState, struct FS_ItemMetadata itemMetadata); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.NotifySourceChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_HandleInputTypeChanged(bool bUsingGamepad); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.BP_HandleInputTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyInitialized(struct US_WidgetInventoryScreen* inventoryScreen, struct US_WidgetInventoryDragDrop* OwningWidget); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.NotifyInitialized // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDropProgressChanged(float percentComplete); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.NotifyDropProgressChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOwningPlayerPawnChanged_BP(struct APawn* oldPawn, struct APawn* NewPawn); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.NotifyOwningPlayerPawnChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySwapAvailability(bool isSwapAvailable); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.NotifySwapAvailability // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_InventoryScreenTooltip(int32_t EntryPoint); // Function WBP_InventoryScreenTooltip.WBP_InventoryScreenTooltip_C.ExecuteUbergraph_WBP_InventoryScreenTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

