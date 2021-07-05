// WidgetBlueprintGeneratedClass WBP_RecommendedSpecWarning.WBP_RecommendedSpecWarning_C
// Size: 0x6e1 (Inherited: 0x680)
struct UWBP_RecommendedSpecWarning_C : US_WidgetMessagePrompt {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct UWBP_CommonBevelledButton_Emphasis_C* Accept; // 0x688(0x08)
	struct UTextBlock* CpuName; // 0x690(0x08)
	struct UWBP_CommonBevelledButton_NonEmphasis_C* Decline; // 0x698(0x08)
	struct UTextBlock* GpuName; // 0x6a0(0x08)
	struct UImage* Image_141; // 0x6a8(0x08)
	struct UTextBlock* MemoryAmount; // 0x6b0(0x08)
	struct US_RichTextBlock* Message; // 0x6b8(0x08)
	struct UTextBlock* TextBlock_1780; // 0x6c0(0x08)
	struct UTextBlock* TextBlock_1782; // 0x6c8(0x08)
	struct US_RichTextBlock* Title; // 0x6d0(0x08)
	struct UWBP_GenericDialogueBoxContainer_C* WBP_GenericDialogueBoxContainer; // 0x6d8(0x08)
	bool WasShowingCursor; // 0x6e0(0x01)

	void FillSpecsData(); // Function WBP_RecommendedSpecWarning.WBP_RecommendedSpecWarning_C.FillSpecsData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyRegisterMessagePrompt(struct FS_MessagePrompt prompt, struct FS_MessagePromptArguments arguments); // Function WBP_RecommendedSpecWarning.WBP_RecommendedSpecWarning_C.NotifyRegisterMessagePrompt // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Accept_K2Node_ComponentBoundEvent_1_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_RecommendedSpecWarning.WBP_RecommendedSpecWarning_C.BndEvt__Accept_K2Node_ComponentBoundEvent_1_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Decline_K2Node_ComponentBoundEvent_3_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_RecommendedSpecWarning.WBP_RecommendedSpecWarning_C.BndEvt__Decline_K2Node_ComponentBoundEvent_3_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyPreRegisterMessagePrompt(); // Function WBP_RecommendedSpecWarning.WBP_RecommendedSpecWarning_C.NotifyPreRegisterMessagePrompt // (Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_RecommendedSpecWarning.WBP_RecommendedSpecWarning_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void ExecuteUbergraph_WBP_RecommendedSpecWarning(int32_t EntryPoint); // Function WBP_RecommendedSpecWarning.WBP_RecommendedSpecWarning_C.ExecuteUbergraph_WBP_RecommendedSpecWarning // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff800928d00000
};

