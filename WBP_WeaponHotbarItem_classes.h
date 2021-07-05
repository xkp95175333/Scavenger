// WidgetBlueprintGeneratedClass WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C
// Size: 0x660 (Inherited: 0x5a0)
struct UWBP_WeaponHotbarItem_C : US_WidgetHotbarItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a0(0x08)
	struct US_RichTextBlock* AmmoIconRichTextBlock; // 0x5a8(0x08)
	struct UWBP_CommonProgressBar_C* CraftingFill; // 0x5b0(0x08)
	struct URetainerBox* CraftingPanelEffect; // 0x5b8(0x08)
	struct US_RichTextBlock* craftingTime; // 0x5c0(0x08)
	struct UImage* FrameLeftImage; // 0x5c8(0x08)
	struct UImage* FrameMiddleImage; // 0x5d0(0x08)
	struct UImage* FrameRightImage; // 0x5d8(0x08)
	struct USizeBox* LeftPanelSizeBox; // 0x5e0(0x08)
	struct USizeBox* RightPanelSizeBox; // 0x5e8(0x08)
	struct UHorizontalBox* WeaponDataHorizBox; // 0x5f0(0x08)
	struct FVector2D RarityBarSize; // 0x5f8(0x08)
	struct FVector2D DividerSize; // 0x600(0x08)
	struct FVector2D QuantityScale; // 0x608(0x08)
	struct FVector2D SizeBoxOverrideSize; // 0x610(0x08)
	bool ShowActionKey; // 0x618(0x01)
	char pad_619[0x7]; // 0x619(0x07)
	struct FTimerHandle CraftingInProgressTimerHandle; // 0x620(0x08)
	struct FDataTableRowHandle CraftingTimeHandle; // 0x628(0x10)
	bool ShowBacker; // 0x638(0x01)
	char pad_639[0x3]; // 0x639(0x03)
	struct FLinearColor BackerColor; // 0x63c(0x10)
	bool ShowBackerTrim; // 0x64c(0x01)
	char pad_64D[0x3]; // 0x64d(0x03)
	struct FLinearColor BackerTrimColor; // 0x650(0x10)

	void BuildWidgetAppearance(); // Function WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C.BuildWidgetAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetFromItemState(struct FS_ItemState InputPin); // Function WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C.SetFromItemState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnInputTypeChanged(bool bUsingGamepad); // Function WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C.OnInputTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyInitialized(enum class ES_EquipmentSlot EquipmentSlot); // Function WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C.NotifyInitialized // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyEquipmentSlotChanged(enum class ES_EquipmentSlot EquipmentSlot); // Function WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C.NotifyEquipmentSlotChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCraftingForSlotStarted(struct FS_ItemState ItemState, int32_t craftingTime); // Function WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C.NotifyCraftingForSlotStarted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyItemChanged(struct FS_ItemState ItemState); // Function WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C.NotifyItemChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCraftingForSlotCompleted(); // Function WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C.NotifyCraftingForSlotCompleted // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCraftingTimeUpdated(int32_t RemainingTime); // Function WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C.NotifyCraftingTimeUpdated // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_WeaponHotbarItem(int32_t EntryPoint); // Function WBP_WeaponHotbarItem.WBP_WeaponHotbarItem_C.ExecuteUbergraph_WBP_WeaponHotbarItem // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

