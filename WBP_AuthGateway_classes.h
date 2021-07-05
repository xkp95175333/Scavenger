// WidgetBlueprintGeneratedClass WBP_AuthGateway.WBP_AuthGateway_C
// Size: 0x6c8 (Inherited: 0x680)
struct UWBP_AuthGateway_C : US_WidgetMessagePrompt {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct UWBP_CommonBevelledButton_Emphasis_C* Accept; // 0x688(0x08)
	struct UWBP_CommonBevelledButton_NonEmphasis_C* Decline; // 0x690(0x08)
	struct US_RichTextBlock* Message; // 0x698(0x08)
	struct US_RichTextBlock* Title; // 0x6a0(0x08)
	struct UWBP_CommonBevelledButton_Emphasis_C* URL; // 0x6a8(0x08)
	struct UWBP_GenericDialogueBoxContainer_C* WBP_GenericDialogueBoxContainer; // 0x6b0(0x08)
	bool WasShowingCursor; // 0x6b8(0x01)
	char pad_6B9[0x7]; // 0x6b9(0x07)
	struct FTimerHandle RefreshTimer; // 0x6c0(0x08)

	void NotifyRegisterMessagePrompt(struct FS_MessagePrompt prompt, struct FS_MessagePromptArguments arguments); // Function WBP_AuthGateway.WBP_AuthGateway_C.NotifyRegisterMessagePrompt // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyPreRegisterMessagePrompt(); // Function WBP_AuthGateway.WBP_AuthGateway_C.NotifyPreRegisterMessagePrompt // (Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__URL_K2Node_ComponentBoundEvent_2_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_AuthGateway.WBP_AuthGateway_C.BndEvt__URL_K2Node_ComponentBoundEvent_2_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Accept_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_AuthGateway.WBP_AuthGateway_C.BndEvt__Accept_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Decline_K2Node_ComponentBoundEvent_1_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_AuthGateway.WBP_AuthGateway_C.BndEvt__Decline_K2Node_ComponentBoundEvent_1_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyRejectMessagePrompt(); // Function WBP_AuthGateway.WBP_AuthGateway_C.NotifyRejectMessagePrompt // (Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void Event RefreshTimer(); // Function WBP_AuthGateway.WBP_AuthGateway_C.Event RefreshTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event OnPlayerAccountVerificationStatusUpdated(); // Function WBP_AuthGateway.WBP_AuthGateway_C.Event OnPlayerAccountVerificationStatusUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void ExecuteUbergraph_WBP_AuthGateway(int32_t EntryPoint); // Function WBP_AuthGateway.WBP_AuthGateway_C.ExecuteUbergraph_WBP_AuthGateway // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff800928d00000
};

