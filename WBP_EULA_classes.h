// WidgetBlueprintGeneratedClass WBP_EULA.WBP_EULA_C
// Size: 0x6b0 (Inherited: 0x688)
struct UWBP_EULA_C : US_WidgetEula {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x688(0x08)
	struct UScrollBox* ScrollBoxTOS; // 0x690(0x08)
	struct US_RichTextBlock* Title; // 0x698(0x08)
	struct UWBP_GenericDialogueBoxContainer_C* WBP_GenericDialogueBoxContainer; // 0x6a0(0x08)
	bool WasShowingCursor; // 0x6a8(0x01)
	char pad_6A9[0x3]; // 0x6a9(0x03)
	float ScrollScalingFactor; // 0x6ac(0x04)

	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function WBP_EULA.WBP_EULA_C.OnAnalogValueChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyPreRegisterMessagePrompt(); // Function WBP_EULA.WBP_EULA_C.NotifyPreRegisterMessagePrompt // (Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyRegisterMessagePrompt(struct FS_MessagePrompt prompt, struct FS_MessagePromptArguments arguments); // Function WBP_EULA.WBP_EULA_C.NotifyRegisterMessagePrompt // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff800928d00000
	void ScrollAgreement(float ScrollDelta); // Function WBP_EULA.WBP_EULA_C.ScrollAgreement // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__RejectButton_K2Node_ComponentBoundEvent_2_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_EULA.WBP_EULA_C.BndEvt__RejectButton_K2Node_ComponentBoundEvent_2_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_EULA.WBP_EULA_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void ExecuteUbergraph_WBP_EULA(int32_t EntryPoint); // Function WBP_EULA.WBP_EULA_C.ExecuteUbergraph_WBP_EULA // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff800928d00000
};

