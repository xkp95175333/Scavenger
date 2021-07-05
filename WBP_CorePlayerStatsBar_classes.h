// WidgetBlueprintGeneratedClass WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C
// Size: 0x73c (Inherited: 0x4f0)
struct UWBP_CorePlayerStatsBar_C : US_WidgetPlayerCoreStatsBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UWidgetAnimation* RedPulse; // 0x4f8(0x08)
	struct UBorder* PulsingDownedBorder; // 0x500(0x08)
	struct FText RezTimerTextStyle; // 0x508(0x18)
	struct FProgressBarStyle CurrentRecoveryBarStyle; // 0x520(0x1a0)
	struct FTimerHandle TimerHandle; // 0x6c0(0x08)
	bool HealthIsRecovering; // 0x6c8(0x01)
	char pad_6C9[0x3]; // 0x6c9(0x03)
	float FlashTimer; // 0x6cc(0x04)
	struct FLinearColor DownedHPBarColor; // 0x6d0(0x10)
	struct FLinearColor DefaultHPBarColor; // 0x6e0(0x10)
	struct FLinearColor CurrentRecoveryBarColor; // 0x6f0(0x10)
	struct FLinearColor DefaultRecoveryBarColor; // 0x700(0x10)
	struct FLinearColor DeadHPBarColor; // 0x710(0x10)
	struct FLinearColor CocoonedBarColor; // 0x720(0x10)
	float NewHealthRecoveryLimitMaximum; // 0x730(0x04)
	float DefaultHealthRecoveryLimitMaximum; // 0x734(0x04)
	float CurrentHP; // 0x738(0x04)

	void SetCocooned(bool IsCocooned); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.SetCocooned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CheckForRecovery(float NewHP); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.CheckForRecovery // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	enum class ESlateVisibility GetDebugHealthTextVisibility(); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.GetDebugHealthTextVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void ResetBarValues(float Value); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.ResetBarValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct US_StatsComponent* GetPlayerStats(); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.GetPlayerStats // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void SetResurrected(); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.SetResurrected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Set Downed(bool IsDowned); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.Set Downed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDead(); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.SetDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDead_BP(); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.SetDead_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetResurrected_BP(); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.SetResurrected_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDowned_BP(bool bIsDowned); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.SetDowned_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnResurrect_BP(); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.OnResurrect_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnResurrect(); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.OnResurrect // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateRecoveryBarFlash(); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.UpdateRecoveryBarFlash // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetHealthBars_BP_2(float hp, float maxHealthRecoveryLimit, float maxHP); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.SetHealthBars_BP_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyConstructed_BP(); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.NotifyConstructed_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyStatStartedIncreasing_BP(float oldStat, float newStat); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.NotifyStatStartedIncreasing_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyStatStartedDecreasing_BP(float oldStat, float newStat); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.NotifyStatStartedDecreasing_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnStatMaximumChange(enum class ES_StatType StatType, float OldValue, float NewValue); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.OnStatMaximumChange // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnSimpleStatChange(enum class ES_StatType StatType, float OldStatValue, float StatValueChange, float NewStatValue); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.OnSimpleStatChange // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_CorePlayerStatsBar(int32_t EntryPoint); // Function WBP_CorePlayerStatsBar.WBP_CorePlayerStatsBar_C.ExecuteUbergraph_WBP_CorePlayerStatsBar // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

