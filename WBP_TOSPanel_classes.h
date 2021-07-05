// WidgetBlueprintGeneratedClass WBP_TOSPanel.WBP_TOSPanel_C
// Size: 0x6b8 (Inherited: 0x680)
struct UWBP_TOSPanel_C : US_WidgetMessagePrompt {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct UWBP_CommonBevelledButton_Emphasis_C* Accept; // 0x688(0x08)
	struct UWBP_CommonBevelledButton_NonEmphasis_C* Decline; // 0x690(0x08)
	struct UScrollBox* ScrollBoxTOS; // 0x698(0x08)
	struct US_RichTextBlock* Title; // 0x6a0(0x08)
	struct UWBP_GenericDialogueBoxContainer_C* WBP_GenericDialogueBoxContainer; // 0x6a8(0x08)
	bool WasShowingCursor; // 0x6b0(0x01)
	char pad_6B1[0x3]; // 0x6b1(0x03)
	float ScrollScalingFactor; // 0x6b4(0x04)

	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function WBP_TOSPanel.WBP_TOSPanel_C.OnAnalogValueChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Accept_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_TOSPanel.WBP_TOSPanel_C.BndEvt__Accept_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Decline_K2Node_ComponentBoundEvent_1_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_TOSPanel.WBP_TOSPanel_C.BndEvt__Decline_K2Node_ComponentBoundEvent_1_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyPreRegisterMessagePrompt(); // Function WBP_TOSPanel.WBP_TOSPanel_C.NotifyPreRegisterMessagePrompt // (Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyRegisterMessagePrompt(struct FS_MessagePrompt prompt, struct FS_MessagePromptArguments arguments); // Function WBP_TOSPanel.WBP_TOSPanel_C.NotifyRegisterMessagePrompt // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff800928d00000
	void ScrollAgreement(float ScrollDelta); // Function WBP_TOSPanel.WBP_TOSPanel_C.ScrollAgreement // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void ExecuteUbergraph_WBP_TOSPanel(int32_t EntryPoint); // Function WBP_TOSPanel.WBP_TOSPanel_C.ExecuteUbergraph_WBP_TOSPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff800928d00000
};

