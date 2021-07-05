// WidgetBlueprintGeneratedClass WBP_InitialSettings.WBP_InitialSettings_C
// Size: 0x5a5 (Inherited: 0x550)
struct UWBP_InitialSettings_C : US_WidgetInitialSettings {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* ErrorMessageFade; // 0x558(0x08)
	struct UWBP_MultiOptionLine_C* ChatInputMode; // 0x560(0x08)
	struct UWBP_MultiOptionLine_C* PreferredRegion; // 0x568(0x08)
	struct US_RichTextBlock* Title; // 0x570(0x08)
	struct UWBP_GenericDialogueBoxContainer_C* WBP_GenericDialogueBoxContainer; // 0x578(0x08)
	struct FMulticastInlineDelegate OnInitialSettingsCreated_1; // 0x580(0x10)
	bool SettingWidgetValues; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	struct FTimerHandle RegionPingTimer; // 0x598(0x08)
	int32_t Ping Count; // 0x5a0(0x04)
	bool Is Editing in Progress; // 0x5a4(0x01)

	void UpdateRegionIfPinged(); // Function WBP_InitialSettings.WBP_InitialSettings_C.UpdateRegionIfPinged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void SetPreferredRegion(); // Function WBP_InitialSettings.WBP_InitialSettings_C.SetPreferredRegion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void AreLobbyEndpointsPinged(bool ArePinged); // Function WBP_InitialSettings.WBP_InitialSettings_C.AreLobbyEndpointsPinged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Update Region Settings(int32_t RegionIndex); // Function WBP_InitialSettings.WBP_InitialSettings_C.Update Region Settings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	int32_t GetPreferredRegionIndex(); // Function WBP_InitialSettings.WBP_InitialSettings_C.GetPreferredRegionIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff800928d00000
	void SetWidgetValuesFromSettings(); // Function WBP_InitialSettings.WBP_InitialSettings_C.SetWidgetValuesFromSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Construct(); // Function WBP_InitialSettings.WBP_InitialSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__SubmitSettings_K2Node_ComponentBoundEvent_5_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_InitialSettings.WBP_InitialSettings_C.BndEvt__SubmitSettings_K2Node_ComponentBoundEvent_5_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__PreferredRegion_K2Node_ComponentBoundEvent_1_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_InitialSettings.WBP_InitialSettings_C.BndEvt__PreferredRegion_K2Node_ComponentBoundEvent_1_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__ChatInputMode_K2Node_ComponentBoundEvent_3_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_InitialSettings.WBP_InitialSettings_C.BndEvt__ChatInputMode_K2Node_ComponentBoundEvent_3_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__DisplayNameSlot_K2Node_ComponentBoundEvent_0_EditingInProgress__DelegateSignature(bool isEditingInProgress); // Function WBP_InitialSettings.WBP_InitialSettings_C.BndEvt__DisplayNameSlot_K2Node_ComponentBoundEvent_0_EditingInProgress__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__DisplayNameSlot_K2Node_ComponentBoundEvent_2_TextEdited__DelegateSignature(bool TextNotEmpty); // Function WBP_InitialSettings.WBP_InitialSettings_C.BndEvt__DisplayNameSlot_K2Node_ComponentBoundEvent_2_TextEdited__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__DisplayNameSlot_K2Node_ComponentBoundEvent_4_OptionChanged__DelegateSignature(struct FText OptionText); // Function WBP_InitialSettings.WBP_InitialSettings_C.BndEvt__DisplayNameSlot_K2Node_ComponentBoundEvent_4_OptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void InternalSetSubmitButtonState(bool CanTrySubmit); // Function WBP_InitialSettings.WBP_InitialSettings_C.InternalSetSubmitButtonState // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void ExecuteUbergraph_WBP_InitialSettings(int32_t EntryPoint); // Function WBP_InitialSettings.WBP_InitialSettings_C.ExecuteUbergraph_WBP_InitialSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff800928d00000
	void OnInitialSettingsCreated_0__DelegateSignature(); // Function WBP_InitialSettings.WBP_InitialSettings_C.OnInitialSettingsCreated_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
};

