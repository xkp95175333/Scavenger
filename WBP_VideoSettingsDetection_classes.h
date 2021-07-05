// WidgetBlueprintGeneratedClass WBP_VideoSettingsDetection.WBP_VideoSettingsDetection_C
// Size: 0x729 (Inherited: 0x680)
struct UWBP_VideoSettingsDetection_C : US_WidgetMessagePrompt {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct UWBP_CommonBevelledButton_Emphasis_C* Accept; // 0x688(0x08)
	struct UWidgetSwitcher* ConfirmationSwitcher; // 0x690(0x08)
	struct UWBP_CommonBevelledButton_NonEmphasis_C* Decline; // 0x698(0x08)
	struct UImage* Image_141; // 0x6a0(0x08)
	struct US_RichTextBlock* Message; // 0x6a8(0x08)
	struct UWBP_CommonBevelledButton_Emphasis_C* SubmitSettings; // 0x6b0(0x08)
	struct US_RichTextBlock* Title; // 0x6b8(0x08)
	struct US_RichTextBlock* VideoSettingsTitle; // 0x6c0(0x08)
	struct UWBP_GenericDialogueBoxContainer_C* WBP_GenericDialogueBoxContainer_2; // 0x6c8(0x08)
	struct UWBP_InitialVideoSettingsPanel_C* WBP_InitialVideoSettings; // 0x6d0(0x08)
	struct TMap<struct US_WidgetCommonScavengerButton*, struct FString> CultureToButton; // 0x6d8(0x50)
	bool WasShowingCursor; // 0x728(0x01)

	void HandleOnChooseLanguage(struct US_WidgetCommonScavengerButton* Button); // Function WBP_VideoSettingsDetection.WBP_VideoSettingsDetection_C.HandleOnChooseLanguage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyRegisterMessagePrompt(struct FS_MessagePrompt prompt, struct FS_MessagePromptArguments arguments); // Function WBP_VideoSettingsDetection.WBP_VideoSettingsDetection_C.NotifyRegisterMessagePrompt // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff800928d00000
	void NotifyPreRegisterMessagePrompt(); // Function WBP_VideoSettingsDetection.WBP_VideoSettingsDetection_C.NotifyPreRegisterMessagePrompt // (Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Accept_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_VideoSettingsDetection.WBP_VideoSettingsDetection_C.BndEvt__Accept_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Decline_K2Node_ComponentBoundEvent_1_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_VideoSettingsDetection.WBP_VideoSettingsDetection_C.BndEvt__Decline_K2Node_ComponentBoundEvent_1_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__SubmitSettings_K2Node_ComponentBoundEvent_2_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_VideoSettingsDetection.WBP_VideoSettingsDetection_C.BndEvt__SubmitSettings_K2Node_ComponentBoundEvent_2_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void ExecuteUbergraph_WBP_VideoSettingsDetection(int32_t EntryPoint); // Function WBP_VideoSettingsDetection.WBP_VideoSettingsDetection_C.ExecuteUbergraph_WBP_VideoSettingsDetection // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff800928d00000
};

