// WidgetBlueprintGeneratedClass WBP_InGameMenuPause.WBP_InGameMenuPause_C
// Size: 0x6e0 (Inherited: 0x6a8)
struct UWBP_InGameMenuPause_C : US_UMGInGamePauseMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6a8(0x08)
	struct UWBP_CommonScavengerButton_C* LeaveSessionButton; // 0x6b0(0x08)
	struct UWBP_CommonScavengerButton_C* PlayerReport; // 0x6b8(0x08)
	struct UWBP_CommonScavengerButton_C* QuitToDesktopButton; // 0x6c0(0x08)
	struct UWBP_CommonScavengerButton_C* ResumeButton; // 0x6c8(0x08)
	struct UWBP_CommonScavengerButton_C* SettingsButton; // 0x6d0(0x08)
	struct UWBP_PlayerReporting_C* PlayerReportWindow; // 0x6d8(0x08)

	void HandleOnRejectQuitPrompt(); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.HandleOnRejectQuitPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleOnAcceptLeaveSession(); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.HandleOnAcceptLeaveSession // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleOnAcceptQuitToDesktop(); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.HandleOnAcceptQuitToDesktop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleCloseChildMenus(bool ChildWasClosed); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.HandleCloseChildMenus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__PlayerReport_K2Node_ComponentBoundEvent_2_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.BndEvt__PlayerReport_K2Node_ComponentBoundEvent_2_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyWidgetBecameTopOfNavStack_BP(); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.NotifyWidgetBecameTopOfNavStack_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyMenuInputPressed_BP(enum class ES_GameInputActionType ActionType); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.NotifyMenuInputPressed_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__QuitToDesktopButton_K2Node_ComponentBoundEvent_6_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.BndEvt__QuitToDesktopButton_K2Node_ComponentBoundEvent_6_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOnRequestClose(); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.NotifyOnRequestClose // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__WBP_CommonScavengerButton_442_K2Node_ComponentBoundEvent_1_DispatchOnClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.BndEvt__WBP_CommonScavengerButton_442_K2Node_ComponentBoundEvent_1_DispatchOnClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOnClose(); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.NotifyOnClose // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_9_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_9_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_0_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event NotifySoftWidgetCreated(struct US_WidgetMinimal* AddedWidget); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.Event NotifySoftWidgetCreated // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event NotifyOnBroadcastExitMenu(); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.Event NotifyOnBroadcastExitMenu // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_InGameMenuPause(int32_t EntryPoint); // Function WBP_InGameMenuPause.WBP_InGameMenuPause_C.ExecuteUbergraph_WBP_InGameMenuPause // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

