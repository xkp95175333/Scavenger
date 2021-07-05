// WidgetBlueprintGeneratedClass WBP_PlayerSurvivalStatBar.WBP_PlayerSurvivalStatBar_C
// Size: 0x678 (Inherited: 0x628)
struct UWBP_PlayerSurvivalStatBar_C : US_WidgetPlayerSurvivalStatBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x628(0x08)
	struct UWidgetAnimation* FlashCriticalState; // 0x630(0x08)
	struct UWidgetAnimation* ScaleIcon; // 0x638(0x08)
	struct UImage* FakeMaskImage; // 0x640(0x08)
	struct FText IconName; // 0x648(0x18)
	struct FText HelperIcon; // 0x660(0x18)

	void OnResurrected(); // Function WBP_PlayerSurvivalStatBar.WBP_PlayerSurvivalStatBar_C.OnResurrected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetAllStatBarsToValue(float StatValue); // Function WBP_PlayerSurvivalStatBar.WBP_PlayerSurvivalStatBar_C.SetAllStatBarsToValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_PlayerSurvivalStatBar.WBP_PlayerSurvivalStatBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerSurvivalStatBar.WBP_PlayerSurvivalStatBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnTerminal(struct US_StatsComponent* StatsComponent, enum class ES_StatsState OldState, enum class ES_StatsState NewState); // Function WBP_PlayerSurvivalStatBar.WBP_PlayerSurvivalStatBar_C.OnTerminal // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyShowWarningChanged(bool bShouldShowWarning, enum class ES_StatType StatType); // Function WBP_PlayerSurvivalStatBar.WBP_PlayerSurvivalStatBar_C.NotifyShowWarningChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_PlayerSurvivalStatBar(int32_t EntryPoint); // Function WBP_PlayerSurvivalStatBar.WBP_PlayerSurvivalStatBar_C.ExecuteUbergraph_WBP_PlayerSurvivalStatBar // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

