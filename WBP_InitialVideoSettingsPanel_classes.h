// WidgetBlueprintGeneratedClass WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C
// Size: 0x668 (Inherited: 0x608)
struct UWBP_InitialVideoSettingsPanel_C : US_WidgetVideoSettingsPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UWBP_MultiOptionLine_C* AntiAliasing; // 0x610(0x08)
	struct UWBP_MultiOptionLine_C* Effects; // 0x618(0x08)
	struct UWBP_MultiOptionLine_C* Foliage; // 0x620(0x08)
	struct UWBP_MultiOptionLine_C* postprocessing; // 0x628(0x08)
	struct UWBP_MultiOptionLine_C* Quality; // 0x630(0x08)
	struct UWBP_MultiOptionLine_C* Shadows; // 0x638(0x08)
	struct UWBP_MultiOptionLine_C* Textures; // 0x640(0x08)
	struct UWBP_MultiOptionLine_C* ViewDistance; // 0x648(0x08)
	struct UWBP_ToggleButtonLine_C* Vsync; // 0x650(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_SettingsSectionHeader_5; // 0x658(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_SettingsSectionHeader_6; // 0x660(0x08)

	void Construct(); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__VSync_K2Node_ComponentBoundEvent_0_S_OnBroadcastOptionChanged__DelegateSignature(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.BndEvt__VSync_K2Node_ComponentBoundEvent_0_S_OnBroadcastOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Quality_K2Node_ComponentBoundEvent_1_S_OnBroadcastOptionChanged__DelegateSignature(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.BndEvt__Quality_K2Node_ComponentBoundEvent_1_S_OnBroadcastOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__ViewDistance_K2Node_ComponentBoundEvent_2_S_OnBroadcastOptionChanged__DelegateSignature(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.BndEvt__ViewDistance_K2Node_ComponentBoundEvent_2_S_OnBroadcastOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_S_OnBroadcastOptionChanged__DelegateSignature(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_S_OnBroadcastOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__PostProcessing_K2Node_ComponentBoundEvent_4_S_OnBroadcastOptionChanged__DelegateSignature(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_4_S_OnBroadcastOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Shadows_K2Node_ComponentBoundEvent_5_S_OnBroadcastOptionChanged__DelegateSignature(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.BndEvt__Shadows_K2Node_ComponentBoundEvent_5_S_OnBroadcastOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Textures_K2Node_ComponentBoundEvent_6_S_OnBroadcastOptionChanged__DelegateSignature(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.BndEvt__Textures_K2Node_ComponentBoundEvent_6_S_OnBroadcastOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Effects_K2Node_ComponentBoundEvent_7_S_OnBroadcastOptionChanged__DelegateSignature(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.BndEvt__Effects_K2Node_ComponentBoundEvent_7_S_OnBroadcastOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__Foliage_K2Node_ComponentBoundEvent_8_S_OnBroadcastOptionChanged__DelegateSignature(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.BndEvt__Foliage_K2Node_ComponentBoundEvent_8_S_OnBroadcastOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void HandleSettingsChanged_BP(); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.HandleSettingsChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff800928d00000
	void HandleSettingsMenuOpened_BP(); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.HandleSettingsMenuOpened_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__VSync_K2Node_ComponentBoundEvent_9_S_OnSliderValueChanged__DelegateSignature(float NewSliderValue); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.BndEvt__VSync_K2Node_ComponentBoundEvent_9_S_OnSliderValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void ExecuteUbergraph_WBP_InitialVideoSettingsPanel(int32_t EntryPoint); // Function WBP_InitialVideoSettingsPanel.WBP_InitialVideoSettingsPanel_C.ExecuteUbergraph_WBP_InitialVideoSettingsPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff800928d00000
};

