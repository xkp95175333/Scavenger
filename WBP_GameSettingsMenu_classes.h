// WidgetBlueprintGeneratedClass WBP_GameSettingsMenu.WBP_GameSettingsMenu_C
// Size: 0x5c0 (Inherited: 0x508)
struct UWBP_GameSettingsMenu_C : US_WidgetGenericSettingsPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UScrollBox* GameSettingsScrollBox; // 0x510(0x08)
	struct UVerticalBox* VerticalBox_74; // 0x518(0x08)
	struct UWBP_ToggleButtonLine_C* WBP_CrossPlayMode; // 0x520(0x08)
	struct UWBP_ToggleButtonLine_C* WBP_CrouchMode; // 0x528(0x08)
	struct UWBP_SliderLine_C* WBP_FOV; // 0x530(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_RegionSectionHeader; // 0x538(0x08)
	struct UWBP_MultiOptionLine_C* WBP_Server; // 0x540(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_SettingsSectionHeader_C_2; // 0x548(0x08)
	struct UWBP_ToggleButtonLine_C* WBP_ShowDamageNumbers; // 0x550(0x08)
	struct UWBP_ToggleButtonLine_C* WBP_StreamerMode; // 0x558(0x08)
	struct FS_UserGameSettings InitialSettings; // 0x560(0x38)
	bool bCanSetSettings; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	int32_t TransientRegionIndex; // 0x59c(0x04)
	struct TArray<struct FString> Cultures; // 0x5a0(0x10)
	struct TArray<struct FText> CultureDisplayNames; // 0x5b0(0x10)

	int32_t GetPreferredRegionIndex(); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.GetPreferredRegionIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ApplyRegionSettings(); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.ApplyRegionSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InitializeRegionSetting(); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.InitializeRegionSetting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetWidgetValuesFromSettings(); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.SetWidgetValuesFromSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event BindButtonEvents(); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.Event BindButtonEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnBroadcastOptionChanged(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.Event OnBroadcastOptionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_FOV_K2Node_ComponentBoundEvent_4_S_OnSliderValueChanged__DelegateSignature(float NewSliderValue); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.BndEvt__WBP_FOV_K2Node_ComponentBoundEvent_4_S_OnSliderValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleSettingsMenuOpened_BP(); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.HandleSettingsMenuOpened_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleSettingsChanged_BP(); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.HandleSettingsChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleResetRequest_BP(); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.HandleResetRequest_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_Server_K2Node_ComponentBoundEvent_6_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.BndEvt__WBP_Server_K2Node_ComponentBoundEvent_6_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_ShowDamageNumbers_K2Node_ComponentBoundEvent_0_S_OnToggleStateChanged__DelegateSignature(bool NewToggleState); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.BndEvt__WBP_ShowDamageNumbers_K2Node_ComponentBoundEvent_0_S_OnToggleStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyNewFocusWidget_BP(struct US_WidgetMinimal* NewlyFocusedWidget); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.NotifyNewFocusWidget_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_CrouchMode_K2Node_ComponentBoundEvent_1_S_OnToggleStateChanged__DelegateSignature(bool NewToggleState); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.BndEvt__WBP_CrouchMode_K2Node_ComponentBoundEvent_1_S_OnToggleStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_StreamerMode_K2Node_ComponentBoundEvent_2_S_OnToggleStateChanged__DelegateSignature(bool NewToggleState); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.BndEvt__WBP_StreamerMode_K2Node_ComponentBoundEvent_2_S_OnToggleStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_CrossPlayMode_K2Node_ComponentBoundEvent_3_S_OnToggleStateChanged__DelegateSignature(bool NewToggleState); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.BndEvt__WBP_CrossPlayMode_K2Node_ComponentBoundEvent_3_S_OnToggleStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_GameSettingsMenu(int32_t EntryPoint); // Function WBP_GameSettingsMenu.WBP_GameSettingsMenu_C.ExecuteUbergraph_WBP_GameSettingsMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

