// WidgetBlueprintGeneratedClass WBP_ResolutionConfirmationPrompt.WBP_ResolutionConfirmationPrompt_C
// Size: 0x6d8 (Inherited: 0x680)
struct UWBP_ResolutionConfirmationPrompt_C : US_WidgetMessagePrompt {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct US_RichTextBlock* Body; // 0x688(0x08)
	struct UWBP_CommonScavengerButton_C* CancelButton; // 0x690(0x08)
	struct UImage* Image_78; // 0x698(0x08)
	struct US_RichTextBlock* TimerText; // 0x6a0(0x08)
	struct US_RichTextBlock* Title; // 0x6a8(0x08)
	bool WasShowingCursor; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	struct FMulticastInlineDelegate OnConfirmationCanceled; // 0x6b8(0x10)
	int32_t AutoDismissTime; // 0x6c8(0x04)
	int32_t RemainingAutoDismissTime; // 0x6cc(0x04)
	struct FTimerHandle AutoDismissTimerHandle; // 0x6d0(0x08)

	void SetTimerTextFromCurrentTime(); // Function WBP_ResolutionConfirmationPrompt.WBP_ResolutionConfirmationPrompt_C.SetTimerTextFromCurrentTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_ResolutionConfirmationPrompt.WBP_ResolutionConfirmationPrompt_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_ResolutionConfirmationPrompt.WBP_ResolutionConfirmationPrompt_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void TickDown(); // Function WBP_ResolutionConfirmationPrompt.WBP_ResolutionConfirmationPrompt_C.TickDown // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyRejectMessagePrompt(); // Function WBP_ResolutionConfirmationPrompt.WBP_ResolutionConfirmationPrompt_C.NotifyRejectMessagePrompt // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyAcceptMessagePrompt(); // Function WBP_ResolutionConfirmationPrompt.WBP_ResolutionConfirmationPrompt_C.NotifyAcceptMessagePrompt // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyRegisterMessagePrompt(struct FS_MessagePrompt prompt, struct FS_MessagePromptArguments arguments); // Function WBP_ResolutionConfirmationPrompt.WBP_ResolutionConfirmationPrompt_C.NotifyRegisterMessagePrompt // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_ResolutionConfirmationPrompt(int32_t EntryPoint); // Function WBP_ResolutionConfirmationPrompt.WBP_ResolutionConfirmationPrompt_C.ExecuteUbergraph_WBP_ResolutionConfirmationPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void OnConfirmationCanceled__DelegateSignature(); // Function WBP_ResolutionConfirmationPrompt.WBP_ResolutionConfirmationPrompt_C.OnConfirmationCanceled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

