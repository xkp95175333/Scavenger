// WidgetBlueprintGeneratedClass WBP_TacticalHotbarItem.WBP_TacticalHotbarItem_C
// Size: 0x5f0 (Inherited: 0x5a0)
struct UWBP_TacticalHotbarItem_C : US_WidgetHotbarItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a0(0x08)
	struct UImage* CraftingBadge; // 0x5a8(0x08)
	struct UWBP_CommonProgressBar_C* CraftingFill; // 0x5b0(0x08)
	struct URetainerBox* CraftingPanelEffect; // 0x5b8(0x08)
	struct US_RichTextBlock* craftingTime; // 0x5c0(0x08)
	float StartingServerTimestamp; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	struct FTimerHandle CraftingTimer; // 0x5d0(0x08)
	struct FTimerHandle CraftingInProgressTimerHandle; // 0x5d8(0x08)
	struct FDataTableRowHandle CraftingTimeHandle; // 0x5e0(0x10)

	void SetFromItemState(struct FS_ItemState S_ItemState); // Function WBP_TacticalHotbarItem.WBP_TacticalHotbarItem_C.SetFromItemState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_TacticalHotbarItem.WBP_TacticalHotbarItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnInputTypeChanged(bool bUsingGamepad); // Function WBP_TacticalHotbarItem.WBP_TacticalHotbarItem_C.OnInputTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyInitialized(enum class ES_EquipmentSlot EquipmentSlot); // Function WBP_TacticalHotbarItem.WBP_TacticalHotbarItem_C.NotifyInitialized // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyEquipmentSlotChanged(enum class ES_EquipmentSlot EquipmentSlot); // Function WBP_TacticalHotbarItem.WBP_TacticalHotbarItem_C.NotifyEquipmentSlotChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyItemChanged(struct FS_ItemState ItemState); // Function WBP_TacticalHotbarItem.WBP_TacticalHotbarItem_C.NotifyItemChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySelectionStateChanged(bool isSelected); // Function WBP_TacticalHotbarItem.WBP_TacticalHotbarItem_C.NotifySelectionStateChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCraftingForSlotCompleted(); // Function WBP_TacticalHotbarItem.WBP_TacticalHotbarItem_C.NotifyCraftingForSlotCompleted // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCraftingForSlotStarted(struct FS_ItemState ItemState, int32_t craftingTime); // Function WBP_TacticalHotbarItem.WBP_TacticalHotbarItem_C.NotifyCraftingForSlotStarted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCraftingTimeUpdated(int32_t RemainingTime); // Function WBP_TacticalHotbarItem.WBP_TacticalHotbarItem_C.NotifyCraftingTimeUpdated // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_TacticalHotbarItem(int32_t EntryPoint); // Function WBP_TacticalHotbarItem.WBP_TacticalHotbarItem_C.ExecuteUbergraph_WBP_TacticalHotbarItem // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

