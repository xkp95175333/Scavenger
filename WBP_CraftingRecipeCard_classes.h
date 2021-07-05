// WidgetBlueprintGeneratedClass WBP_CraftingRecipeCard.WBP_CraftingRecipeCard_C
// Size: 0x660 (Inherited: 0x638)
struct UWBP_CraftingRecipeCard_C : US_WidgetCraftingRecipeCard {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x638(0x08)
	struct UWidgetAnimation* LockedClick; // 0x640(0x08)
	struct URetainerBox* CardMask; // 0x648(0x08)
	struct URetainerBox* RetainerBox_1; // 0x650(0x08)
	struct URichTextBlock* RichTextBlock_1; // 0x658(0x08)

	void BndEvt__ButtonOverlay_K2Node_ComponentBoundEvent_2_S_DispatchOnActiveHoveredDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_CraftingRecipeCard.WBP_CraftingRecipeCard_C.BndEvt__ButtonOverlay_K2Node_ComponentBoundEvent_2_S_DispatchOnActiveHoveredDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ButtonOverlay_K2Node_ComponentBoundEvent_3_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_CraftingRecipeCard.WBP_CraftingRecipeCard_C.BndEvt__ButtonOverlay_K2Node_ComponentBoundEvent_3_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ButtonOverlay_K2Node_ComponentBoundEvent_0_S_DispatchOnInteractionStateChangedDelegate__DelegateSignature(enum class ES_ButtonInteractionState oldInteractionState, enum class ES_ButtonInteractionState newInteractionState); // Function WBP_CraftingRecipeCard.WBP_CraftingRecipeCard_C.BndEvt__ButtonOverlay_K2Node_ComponentBoundEvent_0_S_DispatchOnInteractionStateChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyPotentialAvailabilityChange_BP(bool RequirementsMet); // Function WBP_CraftingRecipeCard.WBP_CraftingRecipeCard_C.NotifyPotentialAvailabilityChange_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_CommonScavengerButton_K2Node_ComponentBoundEvent_1_S_DispatchOnUnhoveredDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_CraftingRecipeCard.WBP_CraftingRecipeCard_C.BndEvt__WBP_CommonScavengerButton_K2Node_ComponentBoundEvent_1_S_DispatchOnUnhoveredDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ButtonOverlay_K2Node_ComponentBoundEvent_4_S_DispatchOnInactiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_CraftingRecipeCard.WBP_CraftingRecipeCard_C.BndEvt__ButtonOverlay_K2Node_ComponentBoundEvent_4_S_DispatchOnInactiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_CraftingRecipeCard(int32_t EntryPoint); // Function WBP_CraftingRecipeCard.WBP_CraftingRecipeCard_C.ExecuteUbergraph_WBP_CraftingRecipeCard // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

