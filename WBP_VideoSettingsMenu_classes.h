// WidgetBlueprintGeneratedClass WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C
// Size: 0x738 (Inherited: 0x608)
struct UWBP_VideoSettingsMenu_C : US_WidgetVideoSettingsPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UWBP_MultiOptionLine_C* AntiAliasing; // 0x610(0x08)
	struct UWBP_SliderLine_C* CustomResolutionScale; // 0x618(0x08)
	struct UWBP_ToggleButtonLine_C* DirectXVersion; // 0x620(0x08)
	struct UWBP_MultiOptionLine_C* DLSSMode; // 0x628(0x08)
	struct UWBP_MultiOptionLine_C* Effects; // 0x630(0x08)
	struct UWBP_MultiOptionLine_C* Foliage; // 0x638(0x08)
	struct UWBP_MultiOptionLine_C* postprocessing; // 0x640(0x08)
	struct UWBP_MultiOptionLine_C* Quality; // 0x648(0x08)
	struct UWBP_MultiOptionLine_C* Resolution; // 0x650(0x08)
	struct UWBP_MultiOptionLine_C* ResolutionScalingMode; // 0x658(0x08)
	struct UWBP_MultiOptionLine_C* Shadows; // 0x660(0x08)
	struct UWBP_MultiOptionLine_C* Textures; // 0x668(0x08)
	struct UVerticalBox* VerticalBox_74; // 0x670(0x08)
	struct UScrollBox* VideoSettingsScrollBox; // 0x678(0x08)
	struct UWBP_MultiOptionLine_C* ViewDistance; // 0x680(0x08)
	struct UWBP_ToggleButtonLine_C* Vsync; // 0x688(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_SettingsSectionHeader; // 0x690(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_SettingsSectionHeader_2; // 0x698(0x08)
	struct UWBP_SettingsSectionHeader_C* WBP_SettingsSectionHeader_3; // 0x6a0(0x08)
	struct UWBP_MultiOptionLine_C* WindowMode; // 0x6a8(0x08)
	struct TMap<int32_t, struct FIntPoint> ResolutionMap; // 0x6b0(0x50)
	enum class EWindowMode PreApplyWindowMode; // 0x700(0x01)
	char pad_701[0x3]; // 0x701(0x03)
	struct FIntPoint PreApplyResolution; // 0x704(0x08)
	bool DefaultsBeingSet; // 0x70c(0x01)
	char pad_70D[0x3]; // 0x70d(0x03)
	struct TArray<struct FText> Resolutions; // 0x710(0x10)
	bool UpdatingValues; // 0x720(0x01)
	char pad_721[0x7]; // 0x721(0x07)
	struct FDataTableRowHandle DX12ResolutionScalingHandle; // 0x728(0x10)

	void ResetVideoSettingsToDefaults(); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.ResetVideoSettingsToDefaults // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RegisterModifiers(); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.RegisterModifiers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event BindButtonEvents(); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.Event BindButtonEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnBroadcastOptionChanged(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.Event OnBroadcastOptionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleSettingsMenuOpened_BP(); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.HandleSettingsMenuOpened_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleSettingsChanged_BP(); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.HandleSettingsChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnGameUserSettingsUINeedsUpdate(); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.OnGameUserSettingsUINeedsUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__CustomResolutionScale_K2Node_ComponentBoundEvent_13_S_OnSliderValueChanged__DelegateSignature(float NewSliderValue); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__CustomResolutionScale_K2Node_ComponentBoundEvent_13_S_OnSliderValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Quality_K2Node_ComponentBoundEvent_11_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__Quality_K2Node_ComponentBoundEvent_11_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__DLSSMode_K2Node_ComponentBoundEvent_17_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__DLSSMode_K2Node_ComponentBoundEvent_17_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ResolutionScalingMode_K2Node_ComponentBoundEvent_19_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__ResolutionScalingMode_K2Node_ComponentBoundEvent_19_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WindowMode_K2Node_ComponentBoundEvent_23_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__WindowMode_K2Node_ComponentBoundEvent_23_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ViewDistance_K2Node_ComponentBoundEvent_25_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__ViewDistance_K2Node_ComponentBoundEvent_25_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Textures_K2Node_ComponentBoundEvent_27_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__Textures_K2Node_ComponentBoundEvent_27_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Shadows_K2Node_ComponentBoundEvent_29_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__Shadows_K2Node_ComponentBoundEvent_29_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Resolution_K2Node_ComponentBoundEvent_31_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__Resolution_K2Node_ComponentBoundEvent_31_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__PostProcessing_K2Node_ComponentBoundEvent_33_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_33_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Effects_K2Node_ComponentBoundEvent_35_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__Effects_K2Node_ComponentBoundEvent_35_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_37_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_37_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Foliage_K2Node_ComponentBoundEvent_39_S_OnMultiOptionChanged__DelegateSignature(int32_t NewIndex); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__Foliage_K2Node_ComponentBoundEvent_39_S_OnMultiOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__VSync_K2Node_ComponentBoundEvent_1_S_OnBroadcastOptionChanged__DelegateSignature(struct US_WidgetGenericSettingsSlot* SettingSlot); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__VSync_K2Node_ComponentBoundEvent_1_S_OnBroadcastOptionChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyNewFocusWidget_BP(struct US_WidgetMinimal* NewlyFocusedWidget); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.NotifyNewFocusWidget_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__DirectXVersion_K2Node_ComponentBoundEvent_0_S_OnToggleStateChanged__DelegateSignature(bool NewToggleState); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.BndEvt__DirectXVersion_K2Node_ComponentBoundEvent_0_S_OnToggleStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleResetRequest_BP(); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.HandleResetRequest_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_VideoSettingsMenu(int32_t EntryPoint); // Function WBP_VideoSettingsMenu.WBP_VideoSettingsMenu_C.ExecuteUbergraph_WBP_VideoSettingsMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

