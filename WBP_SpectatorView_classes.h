// WidgetBlueprintGeneratedClass WBP_SpectatorView.WBP_SpectatorView_C
// Size: 0x841 (Inherited: 0x7d0)
struct UWBP_SpectatorView_C : US_WidgetSpectatorHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UImage* DivLineImage; // 0x7d8(0x08)
	struct URichTextBlock* Exit; // 0x7e0(0x08)
	struct URichTextBlock* SpectateeText; // 0x7e8(0x08)
	struct URichTextBlock* SpectatingText; // 0x7f0(0x08)
	struct UWBP_DirectionalDamage_C* WBP_DirectionalDamage; // 0x7f8(0x08)
	struct UWBP_EarlyAccessBadge_C* WBP_EarlyAccessBadge; // 0x800(0x08)
	struct UWBP_RespawnBar_C* WBP_RespawnBar; // 0x808(0x08)
	struct UWBP_TextChatContainer_C* WBP_TextChatContainer; // 0x810(0x08)
	bool bIsInDropship; // 0x818(0x01)
	char pad_819[0x7]; // 0x819(0x07)
	struct ASpectatorPawn* SpectatorPawn; // 0x820(0x08)
	bool bAlwaysFadeOnTargetChange; // 0x828(0x01)
	bool bIsLevelStreamingOpen; // 0x829(0x01)
	bool CurrentlyInADS; // 0x82a(0x01)
	char pad_82B[0x5]; // 0x82b(0x05)
	struct AS_WeaponBase* CurrentWeapon; // 0x830(0x08)
	struct AS_BasicSpectatorPlayerPawn* PlayerSpectatorPawn; // 0x838(0x08)
	bool bIsTextDirty; // 0x840(0x01)

	void CheckADSChange(bool InADS, struct AS_WeaponBase* weapon); // Function WBP_SpectatorView.WBP_SpectatorView_C.CheckADSChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FText GetPlayerName(); // Function WBP_SpectatorView.WBP_SpectatorView_C.GetPlayerName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void Format Text(); // Function WBP_SpectatorView.WBP_SpectatorView_C.Format Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOwningPlayerPawnChanged_BP(struct APawn* oldPawn, struct APawn* NewPawn); // Function WBP_SpectatorView.WBP_SpectatorView_C.NotifyOwningPlayerPawnChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnNewMatchPhase(enum class EMatchPhase newPhase); // Function WBP_SpectatorView.WBP_SpectatorView_C.OnNewMatchPhase // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyGameStatePointerChanged_BP(struct AS_GameState* GameState); // Function WBP_SpectatorView.WBP_SpectatorView_C.NotifyGameStatePointerChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnADSChange(bool IsADS, struct AS_WeaponBase* weapon); // Function WBP_SpectatorView.WBP_SpectatorView_C.Event OnADSChange // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyTimerRatio_BP(float timeLeftRatio); // Function WBP_SpectatorView.WBP_SpectatorView_C.NotifyTimerRatio_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_0_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_SpectatorView.WBP_SpectatorView_C.BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_0_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_SpectatorView.WBP_SpectatorView_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void On Target Pawn Changed(struct APawn* PreviousPawn, struct APawn* NewPawn); // Function WBP_SpectatorView.WBP_SpectatorView_C.On Target Pawn Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyNativeTick_BP(float deltaTimeInSeconds); // Function WBP_SpectatorView.WBP_SpectatorView_C.NotifyNativeTick_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_SpectatorView(int32_t EntryPoint); // Function WBP_SpectatorView.WBP_SpectatorView_C.ExecuteUbergraph_WBP_SpectatorView // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

