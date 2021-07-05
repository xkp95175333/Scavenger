// WidgetBlueprintGeneratedClass WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C
// Size: 0x538 (Inherited: 0x4d0)
struct UWBP_CraftingCompleteToast_C : US_WidgetCraftingNotificationPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UWidgetAnimation* ToastPanelFadeOut; // 0x4d8(0x08)
	struct UWidgetAnimation* CraftingIconFadeOut; // 0x4e0(0x08)
	struct UWidgetAnimation* PulseEffect; // 0x4e8(0x08)
	struct UWidgetAnimation* ToastSlideIn; // 0x4f0(0x08)
	struct UBorder* CraftingIcon; // 0x4f8(0x08)
	struct USizeBox* CraftingKey; // 0x500(0x08)
	struct URichTextBlock* CraftingToastText; // 0x508(0x08)
	struct UBorder* EffectBorder; // 0x510(0x08)
	struct UImage* Image_1; // 0x518(0x08)
	struct USizeBox* ToastSizeBox; // 0x520(0x08)
	struct UWBP_CommonKey_C* WBP_CommonKey; // 0x528(0x08)
	struct FTimerHandle WaitToFadeTimer; // 0x530(0x08)

	void RequirementsMet(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.RequirementsMet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RemoveCraftingReminder(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.RemoveCraftingReminder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NewRecipeToast(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.NewRecipeToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CraftingCompleteToast(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.CraftingCompleteToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetFormattedText(struct FText Message, struct FText Result); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.GetFormattedText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event WaitToFadeToast(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.Event WaitToFadeToast // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnInputTypeChanged(bool bUsingGamepad); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.Event OnInputTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void WidgetAnimationEvt_ToastSlideIn_K2Node_WidgetAnimationEvent_1(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.WidgetAnimationEvt_ToastSlideIn_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void WidgetAnimationEvt_CraftingIconFadeOut_K2Node_WidgetAnimationEvent_2(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.WidgetAnimationEvt_CraftingIconFadeOut_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void WidgetAnimationEvt_ToastSlideIn_K2Node_WidgetAnimationEvent_3(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.WidgetAnimationEvt_ToastSlideIn_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCraftingCompleted(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.NotifyCraftingCompleted // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCraftingRequirementsMet(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.NotifyCraftingRequirementsMet // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCraftingRequirementsNoLongerMet(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.NotifyCraftingRequirementsNoLongerMet // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyNewCraftingRecipeAvailable(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.NotifyNewCraftingRecipeAvailable // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void WidgetAnimationEvt_ToastPanelFadeOut_K2Node_WidgetAnimationEvent_4(); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.WidgetAnimationEvt_ToastPanelFadeOut_K2Node_WidgetAnimationEvent_4 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_CraftingCompleteToast(int32_t EntryPoint); // Function WBP_CraftingCompleteToast.WBP_CraftingCompleteToast_C.ExecuteUbergraph_WBP_CraftingCompleteToast // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

