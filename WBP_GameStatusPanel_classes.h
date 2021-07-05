// WidgetBlueprintGeneratedClass WBP_GameStatusPanel.WBP_GameStatusPanel_C
// Size: 0x5d0 (Inherited: 0x4b8)
struct UWBP_GameStatusPanel_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x4c0(0x08)
	struct UBorder* Border_Label; // 0x4c8(0x08)
	struct URichTextBlock* CTABoardingStatus; // 0x4d0(0x08)
	struct URichTextBlock* RTB_Description; // 0x4d8(0x08)
	struct URichTextBlock* RTB_Label; // 0x4e0(0x08)
	struct USizeBox* SizeBox_Label; // 0x4e8(0x08)
	int32_t LastObjectiveID; // 0x4f0(0x04)
	int32_t MainObjectiveID; // 0x4f4(0x04)
	float ObjProgressPercentage; // 0x4f8(0x04)
	struct FS_PlayerObjectiveBase LastObjectiveState; // 0x4fc(0x4c)
	bool b_PlayingToast; // 0x548(0x01)
	bool b_CountdownActive; // 0x549(0x01)
	char pad_54A[0x2]; // 0x54a(0x02)
	struct FName QueuedObjLabel; // 0x54c(0x08)
	struct FName QueuedObjDesc; // 0x554(0x08)
	enum class EMatchPhase QueuedObjHint; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct FName MainObjectiveLabel; // 0x560(0x08)
	struct FName MainObjectiveDesc; // 0x568(0x08)
	int32_t TargetShards; // 0x570(0x04)
	int32_t CurrentShards; // 0x574(0x04)
	struct FName MainObjectiveUpdateLabel; // 0x578(0x08)
	struct FName MainObjectiveCompleteLabel; // 0x580(0x08)
	struct FName ChachedCountdownObjLabel; // 0x588(0x08)
	struct FName CachedCountdownObjCountdown; // 0x590(0x08)
	struct FTimerHandle DistanceTimer; // 0x598(0x08)
	struct FTimespan Seconds; // 0x5a0(0x08)
	struct FTimespan RoundEndTime; // 0x5a8(0x08)
	struct UObject* GameModeTuningData; // 0x5b0(0x08)
	bool IsEscapeObjective; // 0x5b8(0x01)
	char pad_5B9[0x7]; // 0x5b9(0x07)
	struct FTimespan CountdownDuration; // 0x5c0(0x08)
	struct FTimerHandle CountdownTimerHandle; // 0x5c8(0x08)

	void HandleBoardingStateChanged(bool isInBoardingArea); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleBoardingStateChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleEndgameAdded(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleEndgameAdded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateCountdownTimer(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.UpdateCountdownTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleCountdownAdded(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleCountdownAdded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleGenericAdded(struct FName ObjLabel, struct FName ObjDescription); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleGenericAdded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleMainAdded(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleMainAdded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleObjectiveAdded(struct FS_PlayerObjectiveBase PlayerObjective); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleObjectiveAdded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyConstructed_BP(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.NotifyConstructed_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_HandleObjectiveAdded(struct FS_PlayerObjectiveBase baseState); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.BP_HandleObjectiveAdded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyGameStatePointerChanged_BP(struct AS_GameState* GameState); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.NotifyGameStatePointerChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleCat1Storm(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleCat1Storm // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleCat2Storm(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleCat2Storm // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleCat3Storm(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleCat3Storm // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleCat4Storm(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleCat4Storm // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleCat15Storm(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleCat15Storm // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleSupplyDrop(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleSupplyDrop // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleShuttleEngaged(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleShuttleEngaged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleShuttleOpened(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleShuttleOpened // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleShuttleSealed(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.HandleShuttleSealed // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOwningPlayerPawnChanged_BP(struct APawn* oldPawn, struct APawn* NewPawn); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.NotifyOwningPlayerPawnChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOwningPlayerPawnSet_BP(struct APawn* NewPawn); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.NotifyOwningPlayerPawnSet_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1(); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_GameStatusPanel(int32_t EntryPoint); // Function WBP_GameStatusPanel.WBP_GameStatusPanel_C.ExecuteUbergraph_WBP_GameStatusPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

