// WidgetBlueprintGeneratedClass WBP_ReconnectMessage.WBP_ReconnectMessage_C
// Size: 0x730 (Inherited: 0x680)
struct UWBP_ReconnectMessage_C : US_WidgetMessagePrompt {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct UImage* Image_141; // 0x688(0x08)
	struct US_RichTextBlock* Message; // 0x690(0x08)
	struct US_RichTextBlock* Title; // 0x698(0x08)
	struct UWBP_GenericDialogueBoxContainer_C* WBP_GenericDialogueBoxContainer; // 0x6a0(0x08)
	bool WasShowingCursor; // 0x6a8(0x01)
	char pad_6A9[0x7]; // 0x6a9(0x07)
	struct FTimerHandle ReconnectTimerHandle; // 0x6b0(0x08)
	int32_t Timer; // 0x6b8(0x04)
	char pad_6BC[0x4]; // 0x6bc(0x04)
	struct FText OriginalBody; // 0x6c0(0x18)
	struct FS_MessagePrompt MessagePrompt; // 0x6d8(0x58)

	void UpdateTimer(); // Function WBP_ReconnectMessage.WBP_ReconnectMessage_C.UpdateTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyRegisterMessagePrompt(struct FS_MessagePrompt prompt, struct FS_MessagePromptArguments arguments); // Function WBP_ReconnectMessage.WBP_ReconnectMessage_C.NotifyRegisterMessagePrompt // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyPreRegisterMessagePrompt(); // Function WBP_ReconnectMessage.WBP_ReconnectMessage_C.NotifyPreRegisterMessagePrompt // (Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void ExecuteUbergraph_WBP_ReconnectMessage(int32_t EntryPoint); // Function WBP_ReconnectMessage.WBP_ReconnectMessage_C.ExecuteUbergraph_WBP_ReconnectMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff800928d00000
};

