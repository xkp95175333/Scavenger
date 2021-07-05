// WidgetBlueprintGeneratedClass WBP_PhotosensitivityWarning.WBP_PhotosensitivityWarning_C
// Size: 0x709 (Inherited: 0x680)
struct UWBP_PhotosensitivityWarning_C : US_WidgetMessagePrompt {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct US_RichTextBlock* ContinueText; // 0x688(0x08)
	struct UImage* Image_141; // 0x690(0x08)
	struct US_RichTextBlock* Message; // 0x698(0x08)
	struct US_RichTextBlock* Title; // 0x6a0(0x08)
	struct UWBP_CommonScavengerButton_C* WBP_CommonScavengerButton; // 0x6a8(0x08)
	struct UWBP_GenericDialogueBoxContainer_C* WBP_GenericDialogueBoxContainer; // 0x6b0(0x08)
	struct TMap<struct US_WidgetCommonScavengerButton*, struct FString> CultureToButton; // 0x6b8(0x50)
	bool WasShowingCursor; // 0x708(0x01)

	void NotifyRegisterMessagePrompt(struct FS_MessagePrompt prompt, struct FS_MessagePromptArguments arguments); // Function WBP_PhotosensitivityWarning.WBP_PhotosensitivityWarning_C.NotifyRegisterMessagePrompt // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyPreRegisterMessagePrompt(); // Function WBP_PhotosensitivityWarning.WBP_PhotosensitivityWarning_C.NotifyPreRegisterMessagePrompt // (Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__WBP_CommonScavengerButton_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_PhotosensitivityWarning.WBP_PhotosensitivityWarning_C.BndEvt__WBP_CommonScavengerButton_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void Construct(); // Function WBP_PhotosensitivityWarning.WBP_PhotosensitivityWarning_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void Event OnInputTypeChanged(bool bUsingGamepad); // Function WBP_PhotosensitivityWarning.WBP_PhotosensitivityWarning_C.Event OnInputTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyAnyKeyActionPressed_BP(); // Function WBP_PhotosensitivityWarning.WBP_PhotosensitivityWarning_C.NotifyAnyKeyActionPressed_BP // (Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void ExecuteUbergraph_WBP_PhotosensitivityWarning(int32_t EntryPoint); // Function WBP_PhotosensitivityWarning.WBP_PhotosensitivityWarning_C.ExecuteUbergraph_WBP_PhotosensitivityWarning // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff800928d00000
};

