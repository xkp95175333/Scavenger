// WidgetBlueprintGeneratedClass WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C
// Size: 0x5a9 (Inherited: 0x508)
struct UWBP_AudioSettingsMenu_C : US_WidgetGenericSettingsPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UScrollBox* AudoSettingsScrollBox; // 0x510(0x08)
	struct UWBP_MultiOptionLine_C* ChatEnabled; // 0x518(0x08)
	struct UWBP_MultiOptionLine_C* ChatInputMode; // 0x520(0x08)
	struct UWBP_SliderLine_C* ChatInputVolume; // 0x528(0x08)
	struct UWBP_SliderLine_C* ChatOutputVolume; // 0x530(0x08)
	struct UWBP_MultiOptionLine_C* InputDevice; // 0x538(0x08)
	struct UWBP_SliderLine_C* MasterVolume; // 0x540(0x08)
	struct UWBP_SliderLine_C* MusicVolume; // 0x548(0x08)
	struct UWBP_SliderLine_C* SFXVolume; // 0x550(0x08)
	struct UWBP_ToggleButtonLine_C* Subtitles; // 0x558(0x08)
	struct UWBP_MultiOptionLine_C* SubtitleSize; // 0x560(0x08)
	struct UVerticalBox* VerticalBox_74; // 0x568(0x08)
	struct UWBP_SliderLine_C* VoiceVolume; // 0x570(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_SettingsSectionHeader; // 0x578(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_SettingsSectionHeader_2; // 0x580(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_SettingsSectionHeader_201; // 0x588(0x08)
	struct FMulticastInlineDelegate OnDispatchHovered; // 0x590(0x10)
	struct US_GameInstance* GameInstance; // 0x5a0(0x08)
	bool bCanSetSettings; // 0x5a8(0x01)

	void ResetSubtitleSettings(); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.ResetSubtitleSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RefreshVoiceInputDeviceList(); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.RefreshVoiceInputDeviceList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetWidgetValuesFromSettings(); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.SetWidgetValuesFromSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event BindButtonEvents(); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.Event BindButtonEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnBroadcastOptionChanged(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.Event OnBroadcastOptionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveSwitcherFocus_BP(); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.ReceiveSwitcherFocus_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleSettingsMenuOpened_BP(); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.HandleSettingsMenuOpened_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleSettingsChanged_BP(); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.HandleSettingsChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleResetRequest_BP(); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.HandleResetRequest_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleAudioDevicesChanged(struct TArray<struct FString> InputDevices, struct TArray<struct FString> OutputDevices); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.HandleAudioDevicesChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__MasterVolume_K2Node_ComponentBoundEvent_11_S_OnSliderValueChanged__DelegateSignature(float NewSliderValue); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.BndEvt__MasterVolume_K2Node_ComponentBoundEvent_11_S_OnSliderValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__SFXVolume_K2Node_ComponentBoundEvent_13_S_OnSliderValueChanged__DelegateSignature(float NewSliderValue); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.BndEvt__SFXVolume_K2Node_ComponentBoundEvent_13_S_OnSliderValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__VoiceVolume_K2Node_ComponentBoundEvent_15_S_OnSliderValueChanged__DelegateSignature(float NewSliderValue); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.BndEvt__VoiceVolume_K2Node_ComponentBoundEvent_15_S_OnSliderValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__MusicVolume_K2Node_ComponentBoundEvent_17_S_OnSliderValueChanged__DelegateSignature(float NewSliderValue); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.BndEvt__MusicVolume_K2Node_ComponentBoundEvent_17_S_OnSliderValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ChatOutputVolume_K2Node_ComponentBoundEvent_19_S_OnSliderValueChanged__DelegateSignature(float NewSliderValue); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.BndEvt__ChatOutputVolume_K2Node_ComponentBoundEvent_19_S_OnSliderValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ChatInputVolume_K2Node_ComponentBoundEvent_21_S_OnSliderValueChanged__DelegateSignature(float NewSliderValue); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.BndEvt__ChatInputVolume_K2Node_ComponentBoundEvent_21_S_OnSliderValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__SubtitleSize_K2Node_ComponentBoundEvent_0_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.BndEvt__SubtitleSize_K2Node_ComponentBoundEvent_0_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Subtitles_K2Node_ComponentBoundEvent_2_S_OnToggleStateChanged__DelegateSignature(bool NewToggleState); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.BndEvt__Subtitles_K2Node_ComponentBoundEvent_2_S_OnToggleStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__InputDevice_K2Node_ComponentBoundEvent_4_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.BndEvt__InputDevice_K2Node_ComponentBoundEvent_4_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ChatInputMode_K2Node_ComponentBoundEvent_12_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.BndEvt__ChatInputMode_K2Node_ComponentBoundEvent_12_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ChatEnabled_K2Node_ComponentBoundEvent_16_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.BndEvt__ChatEnabled_K2Node_ComponentBoundEvent_16_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyNewFocusWidget_BP(struct US_WidgetMinimal* NewlyFocusedWidget); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.NotifyNewFocusWidget_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_AudioSettingsMenu(int32_t EntryPoint); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.ExecuteUbergraph_WBP_AudioSettingsMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void OnDispatchHovered__DelegateSignature(); // Function WBP_AudioSettingsMenu.WBP_AudioSettingsMenu_C.OnDispatchHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

