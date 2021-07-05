// WidgetBlueprintGeneratedClass WBP_PlayerStatus.WBP_PlayerStatus_C
// Size: 0xab8 (Inherited: 0x990)
struct UWBP_PlayerStatus_C : US_WidgetPlayerStatus {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x990(0x08)
	struct UWidgetAnimation* FlashDownedWarning; // 0x998(0x08)
	struct UWidgetAnimation* FlashColdWarning; // 0x9a0(0x08)
	struct UWidgetAnimation* ShieldReboot; // 0x9a8(0x08)
	struct UWidgetAnimation* ShowExtracted; // 0x9b0(0x08)
	struct UWidgetAnimation* ShareItem; // 0x9b8(0x08)
	struct UBorder* BackgroundBorderColor; // 0x9c0(0x08)
	struct UHorizontalBox* BGFill_HorizontalBox; // 0x9c8(0x08)
	struct UHorizontalBox* BGStroke_HorizontalBox; // 0x9d0(0x08)
	struct UImage* DatapointsIcon; // 0x9d8(0x08)
	struct UImage* IconBGCircle; // 0x9e0(0x08)
	struct UImage* IconDownedWarning; // 0x9e8(0x08)
	struct UImage* IconWarningStatus; // 0x9f0(0x08)
	struct UImage* ImageCold; // 0x9f8(0x08)
	struct UImage* MidFillImg; // 0xa00(0x08)
	struct UImage* MidStrokeImg; // 0xa08(0x08)
	struct US_RichTextBlock* ResurrectionTimer; // 0xa10(0x08)
	struct UImage* RightFillImg; // 0xa18(0x08)
	struct UImage* RightStrokeImg; // 0xa20(0x08)
	struct UScaleBox* ScaleBox; // 0xa28(0x08)
	struct UImage* SpeakerIcon; // 0xa30(0x08)
	struct UImage* StatusColorOverlay; // 0xa38(0x08)
	struct US_RichTextBlock* StatusText; // 0xa40(0x08)
	struct USpacer* SurvivalSpacer; // 0xa48(0x08)
	struct UVerticalBox* VerticalBox_HealthAndArmor; // 0xa50(0x08)
	struct UWBP_CommonCircularFill_C* WBP_CommonCircularFill; // 0xa58(0x08)
	struct UWBP_GameplayEffects_C* WBP_GameplayEffects; // 0xa60(0x08)
	struct US_StatsComponent* CachedStatsComponent; // 0xa68(0x08)
	bool Downed; // 0xa70(0x01)
	char pad_A71[0x7]; // 0xa71(0x07)
	struct FMulticastInlineDelegate OnDragEnded; // 0xa78(0x10)
	enum class ES_StatsState LastPlayerStatsState; // 0xa88(0x01)
	char pad_A89[0x3]; // 0xa89(0x03)
	float NotTalkingOpacity; // 0xa8c(0x04)
	struct UObject* MyTeammateInfo; // 0xa90(0x08)
	struct FTimerHandle TimerHandle; // 0xa98(0x08)
	struct UWBP_CorePlayerStatsBar_C* WBP_CorePlayerStatsBar; // 0xaa0(0x08)
	struct UDataTable* LocalizedTextDataTable; // 0xaa8(0x08)
	float TotalRespawnTime; // 0xab0(0x04)
	float rezTimestamp; // 0xab4(0x04)

	void ShowColdWarning(bool ShouldShowWarning); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.ShowColdWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetTimerText(float Timer); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetTimerText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnVivoxPlayerTalkingUpdated(struct FString ChannelName, struct FString PlayerId, bool IsTalking); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.OnVivoxPlayerTalkingUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnVivoxPlayerRemoved(struct FString ChannelName, struct FString PlayerId); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.OnVivoxPlayerRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnVivoxPlayerAdded(struct FString ChannelName, struct FString PlayerId); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.OnVivoxPlayerAdded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetCocooned(bool IsCocooned); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetCocooned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetExtracted(); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetExtracted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDead(); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetDead // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetResurrected(); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetResurrected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDowned(bool IsDowned); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetDowned // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOwningPlayerStatePointerChanged_BP(struct AS_PlayerState* PlayerState); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.NotifyOwningPlayerStatePointerChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_HandlePlayerGameStateChanged(enum class ES_PlayerGameState PlayerGameState); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.BP_HandlePlayerGameStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyShieldBreak_BP(); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.NotifyShieldBreak_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOnShieldRebootEnd_BP(); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.NotifyOnShieldRebootEnd_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyHealthPercentageChanged_BP(float HealthPercentage); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.NotifyHealthPercentageChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyStateChanged_BP(enum class ES_StatsState OldState, enum class ES_StatsState NewState); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.NotifyStateChanged_BP // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyTemperaturePercentageChanged_BP(float TemperaturePercentage); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.NotifyTemperaturePercentageChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyRespawnTimestampChanged_BP(float rezTimestamp); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.NotifyRespawnTimestampChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateRezTimer(); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.UpdateRezTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyTeammateInfoIndexSet_BP(); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.NotifyTeammateInfoIndexSet_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOnShieldAdded_BP(); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.NotifyOnShieldAdded_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_PlayerStatus(int32_t EntryPoint); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.ExecuteUbergraph_WBP_PlayerStatus // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void OnDragEnded__DelegateSignature(); // Function WBP_PlayerStatus.WBP_PlayerStatus_C.OnDragEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

