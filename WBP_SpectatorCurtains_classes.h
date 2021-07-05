// WidgetBlueprintGeneratedClass WBP_SpectatorCurtains.WBP_SpectatorCurtains_C
// Size: 0x67c (Inherited: 0x640)
struct UWBP_SpectatorCurtains_C : US_WidgetPresentationHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x640(0x08)
	struct UWidgetAnimation* CloseImmediately; // 0x648(0x08)
	struct UWidgetAnimation* Open; // 0x650(0x08)
	struct UWidgetAnimation* Close; // 0x658(0x08)
	float DelayToCloseFromTerminal; // 0x660(0x04)
	bool IsTransitioning; // 0x664(0x01)
	bool IsClosed; // 0x665(0x01)
	char pad_666[0x2]; // 0x666(0x02)
	struct APawn* SpectatorTarget; // 0x668(0x08)
	float LocationVisibleRadiusCheck; // 0x670(0x04)
	float MinimumClosedTime; // 0x674(0x04)
	float LastClosedTime; // 0x678(0x04)

	void OnCurtainsFinishedClosing(); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.OnCurtainsFinishedClosing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CloseCurtainsImmediately(); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.CloseCurtainsImmediately // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool Check Open Conditions for Actor(struct AActor* Actor); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.Check Open Conditions for Actor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateSpectatorTarget(struct APawn* NewTargetPawn); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.UpdateSpectatorTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CheckOpenConditions(bool ShouldOpen); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.CheckOpenConditions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OpenCurtains(); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.OpenCurtains // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CloseCurtains(); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.CloseCurtains // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyPresentationStarted_BP(); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.NotifyPresentationStarted_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CurtainsClosed(); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.CurtainsClosed // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CurtainsOpened(); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.CurtainsOpened // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOwningPlayerPawnChanged_BP(struct APawn* oldPawn, struct APawn* NewPawn); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.NotifyOwningPlayerPawnChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void On Spectator Pawn Target Changed(struct APawn* PreviousPawn, struct APawn* NewPawn); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.On Spectator Pawn Target Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_SpectatorCurtains(int32_t EntryPoint); // Function WBP_SpectatorCurtains.WBP_SpectatorCurtains_C.ExecuteUbergraph_WBP_SpectatorCurtains // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

