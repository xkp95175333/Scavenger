// BlueprintGeneratedClass BP_GameStateScavengers.BP_GameStateScavengers_C
// Size: 0xf25 (Inherited: 0xde0)
struct ABP_GameStateScavengers_C : AS_GameState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xde0(0x08)
	struct UBP_PlayerStatusEffects_C* m_playerStatusEffects; // 0xde8(0x08)
	struct US_HarvestManagerComponent* ScavengerHarvestManagerComponent; // 0xdf0(0x08)
	struct UPostProcessComponent* StormPostProcessComponent; // 0xdf8(0x08)
	struct US_DecalManagerComponent* ScavengerDecalManager; // 0xe00(0x08)
	bool bIsRoundEnding; // 0xe08(0x01)
	char pad_E09[0x3]; // 0xe09(0x03)
	int32_t TotalLivingPlayers; // 0xe0c(0x04)
	float LastTimeOfDay; // 0xe10(0x04)
	float MatchEndTime; // 0xe14(0x04)
	enum class EMatchPhase matchPhase; // 0xe18(0x01)
	char pad_E19[0x7]; // 0xe19(0x07)
	struct FMulticastInlineDelegate OnNewMatchPhase; // 0xe20(0x10)
	struct TArray<int32_t> ScrapScores; // 0xe30(0x10)
	struct FMulticastInlineDelegate OnStormCat1; // 0xe40(0x10)
	struct FMulticastInlineDelegate OnStormCat2; // 0xe50(0x10)
	struct FMulticastInlineDelegate OnStormCat3; // 0xe60(0x10)
	struct FMulticastInlineDelegate OnStormCat4; // 0xe70(0x10)
	struct FMulticastInlineDelegate OnStormCat5; // 0xe80(0x10)
	struct FMulticastInlineDelegate FireWarmupObjectiveToast; // 0xe90(0x10)
	struct FMulticastInlineDelegate OnSupplyDrop; // 0xea0(0x10)
	enum class ES_DropshipWaves DropshipWave; // 0xeb0(0x01)
	char pad_EB1[0x7]; // 0xeb1(0x07)
	struct FMulticastInlineDelegate OnNewDropshipWave; // 0xeb8(0x10)
	struct TArray<struct AS_PlayerController*> TutorializedCold; // 0xec8(0x10)
	struct FMulticastInlineDelegate OnShuttleSealed; // 0xed8(0x10)
	struct FMulticastInlineDelegate OnShuttleEngaged; // 0xee8(0x10)
	struct FMulticastInlineDelegate OnShuttleOpened; // 0xef8(0x10)
	struct FMulticastInlineDelegate OnStormsInit; // 0xf08(0x10)
	int32_t AIPhase; // 0xf18(0x04)
	struct FName GlobalAlertLevel; // 0xf1c(0x08)
	enum class ES_LocationDifficultyTier GlobalDifficulty; // 0xf24(0x01)

	void GetClearedText_BPI(struct FName locdText); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.GetClearedText_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetBannerData_BPI(struct FName Subtitle, enum class ES_LocationDifficultyTier Diff); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.GetBannerData_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetPlayerStatusEffects(struct UBP_PlayerStatusEffects_C* PlayerStatusEffects); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.GetPlayerStatusEffects // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetGradListCold_BPI(struct TArray<struct AS_PlayerController*> ColdGrads); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.GetGradListCold_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateAIPhaseData(int32_t newPhase); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.UpdateAIPhaseData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetupAlphaPostProcess(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.SetupAlphaPostProcess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_DropshipWave(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnRep_DropshipWave // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_OnStormCat5(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnRep_OnStormCat5 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	int32_t GetTeamScrapCollected_BP(int32_t TeamIndex); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.GetTeamScrapCollected_BP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetTeamScrapScore(int32_t TeamIndex, int32_t ScrapScore); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.GetTeamScrapScore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AddTeamScrapScore(int32_t TeamIndex, int32_t ScrapValue); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.AddTeamScrapScore // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_MatchPhase(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnRep_MatchPhase // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetTeamInLead(int32_t LeadTeamIndex, int32_t LeadTeamScore); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.GetTeamInLead // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void UpdateDayNightAnnouncements(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.UpdateDayNightAnnouncements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventStormCat1(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.EventStormCat1 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventStormCat2(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.EventStormCat2 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventStormCat3(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.EventStormCat3 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventStormCat4(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.EventStormCat4 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventStormCat5(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.EventStormCat5 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventWarmupToast(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.EventWarmupToast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventSupplyDrop(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.EventSupplyDrop // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void TutorializedCold_BPI(struct AS_PlayerController* TutorializedPlayer); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.TutorializedCold_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventShuttleSealed(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.EventShuttleSealed // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventShuttleEngaged(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.EventShuttleEngaged // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventShuttleOpened(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.EventShuttleOpened // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InitStorm(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.InitStorm // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateAiPhase(int32_t Phase); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.UpdateAiPhase // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_GameStateScavengers(int32_t EntryPoint); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.ExecuteUbergraph_BP_GameStateScavengers // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
	void OnStormsInit__DelegateSignature(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnStormsInit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnShuttleOpened__DelegateSignature(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnShuttleOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnShuttleEngaged__DelegateSignature(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnShuttleEngaged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnShuttleSealed__DelegateSignature(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnShuttleSealed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnNewDropshipWave__DelegateSignature(enum class ES_DropshipWaves Wave); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnNewDropshipWave__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnSupplyDrop__DelegateSignature(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnSupplyDrop__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void FireWarmupObjectiveToast__DelegateSignature(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.FireWarmupObjectiveToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnStormCat5__DelegateSignature(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnStormCat5__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnStormCat4__DelegateSignature(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnStormCat4__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnStormCat3__DelegateSignature(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnStormCat3__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnStormCat2__DelegateSignature(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnStormCat2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnStormCat1__DelegateSignature(); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnStormCat1__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnNewMatchPhase__DelegateSignature(enum class EMatchPhase newPhase); // Function BP_GameStateScavengers.BP_GameStateScavengers_C.OnNewMatchPhase__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

