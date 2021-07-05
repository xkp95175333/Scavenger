// WidgetBlueprintGeneratedClass WBP_ControllerDisconnectPrompt.WBP_ControllerDisconnectPrompt_C
// Size: 0x6b1 (Inherited: 0x680)
struct UWBP_ControllerDisconnectPrompt_C : US_WidgetMessagePrompt {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct UWBP_CommonBevelledButton_Emphasis_C* Accept; // 0x688(0x08)
	struct UImage* IconAlert_image; // 0x690(0x08)
	struct US_RichTextBlock* Message; // 0x698(0x08)
	struct US_RichTextBlock* Title; // 0x6a0(0x08)
	struct UWBP_GenericDialogueBoxContainer_C* WBP_GenericDialogueBoxContainer; // 0x6a8(0x08)
	bool WasShowingCursor; // 0x6b0(0x01)

	void NotifyMenuInputPressed_BP(enum class ES_GameInputActionType ActionType); // Function WBP_ControllerDisconnectPrompt.WBP_ControllerDisconnectPrompt_C.NotifyMenuInputPressed_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyRegisterMessagePrompt(struct FS_MessagePrompt prompt, struct FS_MessagePromptArguments arguments); // Function WBP_ControllerDisconnectPrompt.WBP_ControllerDisconnectPrompt_C.NotifyRegisterMessagePrompt // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Accept_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_ControllerDisconnectPrompt.WBP_ControllerDisconnectPrompt_C.BndEvt__Accept_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyPreRegisterMessagePrompt(); // Function WBP_ControllerDisconnectPrompt.WBP_ControllerDisconnectPrompt_C.NotifyPreRegisterMessagePrompt // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_ControllerDisconnectPrompt(int32_t EntryPoint); // Function WBP_ControllerDisconnectPrompt.WBP_ControllerDisconnectPrompt_C.ExecuteUbergraph_WBP_ControllerDisconnectPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

