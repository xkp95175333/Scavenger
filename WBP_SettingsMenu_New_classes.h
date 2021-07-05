// WidgetBlueprintGeneratedClass WBP_SettingsMenu_New.WBP_SettingsMenu_New_C
// Size: 0x8a0 (Inherited: 0x640)
struct UWBP_SettingsMenu_New_C : US_UMGHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x640(0x08)
	struct US_RichTextBlock* BodyRichText; // 0x648(0x08)
	struct US_RichTextBlock* HeaderRichText; // 0x650(0x08)
	struct UWidgetSwitcher* Settings; // 0x658(0x08)
	struct UWBP_ScreenInputDisplay_C* SettingsMenuInputDisplay; // 0x660(0x08)
	struct UWBP_AudioSettingsMenu_C* WBP_AudioSettingsMenu; // 0x668(0x08)
	struct UWBP_ControlsSettingsMenu_C* WBP_ControlsSettingsMenu; // 0x670(0x08)
	struct UWBP_GameSettingsMenu_C* WBP_GameSettingsMenu; // 0x678(0x08)
	struct UWBP_SettingsNavBar_C* WBP_SettingsNavBar; // 0x680(0x08)
	struct UWBP_VideoSettingsMenu_C* WBP_VideoSettingsMenu; // 0x688(0x08)
	struct FMulticastInlineDelegate OnBroadcastExitMenu; // 0x690(0x10)
	bool bVideoSettingsChanged; // 0x6a0(0x01)
	bool bGameSettingsChanged; // 0x6a1(0x01)
	bool bAudioSettingsChanged; // 0x6a2(0x01)
	bool bInputSettingsChanged; // 0x6a3(0x01)
	char pad_6A4[0x4]; // 0x6a4(0x04)
	struct FS_UserSettings InitialSettings; // 0x6a8(0x1b8)
	struct FText RichTextFormat; // 0x860(0x18)
	int32_t ActiveSettingsPanelIndex; // 0x878(0x04)
	char pad_87C[0x4]; // 0x87c(0x04)
	struct FText HeaderRichTextFormat; // 0x880(0x18)
	struct UWBP_ConfirmationMessage_C* CachedConfirmPrompt; // 0x898(0x08)

	void UpdateHeaderText(struct FText nameText, struct FText DescriptionText); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.UpdateHeaderText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateDescriptionText(struct FText nameText, struct FText DescriptionText); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.UpdateDescriptionText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool AnySettingsHaveChanged(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.AnySettingsHaveChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void ShowPanelIndex(int32_t NewPanelIndex); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.ShowPanelIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ApplySettingsIfAnythingChanged(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.ApplySettingsIfAnythingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CloseSettings(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.CloseSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SnapshotSettings(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.SnapshotSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RevertSettingsToSnapshot(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.RevertSettingsToSnapshot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ApplySettings(bool SaveUserSettingsToDisk); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.ApplySettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InitSettingsPanel(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.InitSettingsPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event BindEvents(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.Event BindEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnWidgetRemovedFromNavStack(struct US_WidgetMinimal* RemovedWidget, struct US_WidgetMinimal* NewTopWidget); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.Event OnWidgetRemovedFromNavStack // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_AudioSettingsMenu_K2Node_ComponentBoundEvent_21_OnDispatchOptionRequiresApply__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_AudioSettingsMenu_K2Node_ComponentBoundEvent_21_OnDispatchOptionRequiresApply__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_ControlsSettingsMenu_K2Node_ComponentBoundEvent_22_OnDispatchOptionRequiresApply__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_ControlsSettingsMenu_K2Node_ComponentBoundEvent_22_OnDispatchOptionRequiresApply__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_GameSettingsMenu_K2Node_ComponentBoundEvent_23_OnDispatchOptionRequiresApply__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_GameSettingsMenu_K2Node_ComponentBoundEvent_23_OnDispatchOptionRequiresApply__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_VideoSettingsMenu_K2Node_ComponentBoundEvent_24_OnDispatchOptionRequiresApply__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_VideoSettingsMenu_K2Node_ComponentBoundEvent_24_OnDispatchOptionRequiresApply__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_VideoSettingsMenu_K2Node_ComponentBoundEvent_6_OnDispatchOptionChanged__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_VideoSettingsMenu_K2Node_ComponentBoundEvent_6_OnDispatchOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_GameSettingsMenu_K2Node_ComponentBoundEvent_7_OnDispatchOptionChanged__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_GameSettingsMenu_K2Node_ComponentBoundEvent_7_OnDispatchOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_ControlsSettingsMenu_K2Node_ComponentBoundEvent_8_OnDispatchOptionChanged__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_ControlsSettingsMenu_K2Node_ComponentBoundEvent_8_OnDispatchOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_AudioSettingsMenu_K2Node_ComponentBoundEvent_9_OnDispatchOptionChanged__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_AudioSettingsMenu_K2Node_ComponentBoundEvent_9_OnDispatchOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyMenuInputPressed_BP(enum class ES_GameInputActionType ActionType); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.NotifyMenuInputPressed_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnAcceptApplySettings(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.Event OnAcceptApplySettings // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnRejectApplySettings(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.Event OnRejectApplySettings // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_VideoSettingsMenu_K2Node_ComponentBoundEvent_10_S_OnDispatchSettingsSaved__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_VideoSettingsMenu_K2Node_ComponentBoundEvent_10_S_OnDispatchSettingsSaved__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventCloseSettingsInGame(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.EventCloseSettingsInGame // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_SettingsNavBar_K2Node_ComponentBoundEvent_0_S_OnButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button, int32_t Index); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_SettingsNavBar_K2Node_ComponentBoundEvent_0_S_OnButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyWidgetAddedToNavStack_BP(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.NotifyWidgetAddedToNavStack_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_AudioSettingsMenu_K2Node_ComponentBoundEvent_1_S_OnSettingsRowHovered__DelegateSignature(struct FText Name, struct FText DescriptionText); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_AudioSettingsMenu_K2Node_ComponentBoundEvent_1_S_OnSettingsRowHovered__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_ControlsSettingsMenu_K2Node_ComponentBoundEvent_3_S_OnSettingsRowHovered__DelegateSignature(struct FText Name, struct FText DescriptionText); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_ControlsSettingsMenu_K2Node_ComponentBoundEvent_3_S_OnSettingsRowHovered__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_ControlsSettingsMenu_K2Node_ComponentBoundEvent_4_S_OnSettingsRowUnhovered__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_ControlsSettingsMenu_K2Node_ComponentBoundEvent_4_S_OnSettingsRowUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_GameSettingsMenu_K2Node_ComponentBoundEvent_5_S_OnSettingsRowHovered__DelegateSignature(struct FText Name, struct FText DescriptionText); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_GameSettingsMenu_K2Node_ComponentBoundEvent_5_S_OnSettingsRowHovered__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_GameSettingsMenu_K2Node_ComponentBoundEvent_12_S_OnSettingsRowUnhovered__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_GameSettingsMenu_K2Node_ComponentBoundEvent_12_S_OnSettingsRowUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_VideoSettingsMenu_K2Node_ComponentBoundEvent_13_S_OnSettingsRowHovered__DelegateSignature(struct FText Name, struct FText DescriptionText); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_VideoSettingsMenu_K2Node_ComponentBoundEvent_13_S_OnSettingsRowHovered__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_VideoSettingsMenu_K2Node_ComponentBoundEvent_14_S_OnSettingsRowUnhovered__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_VideoSettingsMenu_K2Node_ComponentBoundEvent_14_S_OnSettingsRowUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_AudioSettingsMenu_K2Node_ComponentBoundEvent_15_S_OnSettingsRowUnhovered__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.BndEvt__WBP_AudioSettingsMenu_K2Node_ComponentBoundEvent_15_S_OnSettingsRowUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetApplyActionDisplayEnabled(bool bIsApplyActionEnabled); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.SetApplyActionDisplayEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_SettingsMenu_New(int32_t EntryPoint); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.ExecuteUbergraph_WBP_SettingsMenu_New // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void OnBroadcastExitMenu__DelegateSignature(); // Function WBP_SettingsMenu_New.WBP_SettingsMenu_New_C.OnBroadcastExitMenu__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

