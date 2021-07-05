// WidgetBlueprintGeneratedClass WBP_SplashScreen.WBP_SplashScreen_C
// Size: 0x735 (Inherited: 0x640)
struct UWBP_SplashScreen_C : US_UMGHUDSplashScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x640(0x08)
	struct UWidgetAnimation* LaunchFadeIn; // 0x648(0x08)
	struct UWidgetAnimation* FadeSplashPanel; // 0x650(0x08)
	struct UVerticalBox* ChangeProfileVBox; // 0x658(0x08)
	struct UImage* ConnectingIcon; // 0x660(0x08)
	struct UBorder* ConnectingPrompt; // 0x668(0x08)
	struct UTextBlock* ConnectingText; // 0x670(0x08)
	struct UWBP_CommonBevelledButton_Emphasis_C* ContinueButtonWidget; // 0x678(0x08)
	struct UWBP_CommonScavengerButton_C* ExitButton; // 0x680(0x08)
	struct UImage* Image_124; // 0x688(0x08)
	struct UWBP_CommonScavengerButton_C* LoginButton; // 0x690(0x08)
	struct UBorder* LogInContainer; // 0x698(0x08)
	struct UVerticalBox* LoginPanel; // 0x6a0(0x08)
	struct UImage* Logo; // 0x6a8(0x08)
	struct USizeBox* QuitButton; // 0x6b0(0x08)
	struct UCanvasPanel* SplashPanel; // 0x6b8(0x08)
	struct UWBP_CommonScavengerButton_C* SplashScreenSkip; // 0x6c0(0x08)
	struct UBorder* SplashScreenVideo; // 0x6c8(0x08)
	struct UWBP_CommonBevelledButton_NonEmphasis_C* SwitchProfileButtonWidget; // 0x6d0(0x08)
	struct UEditableText* TestAccountIDBox; // 0x6d8(0x08)
	struct US_RichTextBlock* Title; // 0x6e0(0x08)
	struct UImage* VideoSource; // 0x6e8(0x08)
	struct UWBP_PlatformUserContext_C* WBP_PlatformUserContext; // 0x6f0(0x08)
	bool bLoginPanelVisible; // 0x6f8(0x01)
	char pad_6F9[0x7]; // 0x6f9(0x07)
	struct UAkAudioEvent* LoginSuccessAkEvent; // 0x700(0x08)
	float LoginSuccessDelay; // 0x708(0x04)
	char pad_70C[0x4]; // 0x70c(0x04)
	struct UMediaPlayer* SplashScreenMediaPlayer; // 0x710(0x08)
	struct UMediaSource* MediaSource; // 0x718(0x08)
	struct TArray<struct UMediaSource*> SplashScreenQueue; // 0x720(0x10)
	int32_t SplashScreenIndex; // 0x730(0x04)
	bool SteamLoginAttempted; // 0x734(0x01)

	void CheckPatchResult(enum class ES_UserPrivilege privilege, enum class ES_UserPrivilegeResult PrivilegeResult); // Function WBP_SplashScreen.WBP_SplashScreen_C.CheckPatchResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void CheckPatchAvailable(); // Function WBP_SplashScreen.WBP_SplashScreen_C.CheckPatchAvailable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Check Launched Correctly(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Check Launched Correctly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void BeginLoginSteps(); // Function WBP_SplashScreen.WBP_SplashScreen_C.BeginLoginSteps // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void HandleOnPhotosensitivityWarningAccepted(); // Function WBP_SplashScreen.WBP_SplashScreen_C.HandleOnPhotosensitivityWarningAccepted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Auto Login Sim Players(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Auto Login Sim Players // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void HandleOnPreLoginDataRetrieved(); // Function WBP_SplashScreen.WBP_SplashScreen_C.HandleOnPreLoginDataRetrieved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	bool UsesSimplayerLogin(); // Function WBP_SplashScreen.WBP_SplashScreen_C.UsesSimplayerLogin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff800928d00000
	void ExitAfterAccountBanned(); // Function WBP_SplashScreen.WBP_SplashScreen_C.ExitAfterAccountBanned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void AccountBanned(); // Function WBP_SplashScreen.WBP_SplashScreen_C.AccountBanned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	bool MeetsRecommendedSpecs(); // Function WBP_SplashScreen.WBP_SplashScreen_C.MeetsRecommendedSpecs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff800928d00000
	bool HasAutoJoinLogin(); // Function WBP_SplashScreen.WBP_SplashScreen_C.HasAutoJoinLogin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff800928d00000
	void LoginFailed(struct FDelegate PrimaryAttemptFailedEvent, struct FDelegate SecondAttemptFailedEvent); // Function WBP_SplashScreen.WBP_SplashScreen_C.LoginFailed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void HideLoginBox(); // Function WBP_SplashScreen.WBP_SplashScreen_C.HideLoginBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void ShowLoginBox(); // Function WBP_SplashScreen.WBP_SplashScreen_C.ShowLoginBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void DevModeChanged(bool DevModeIsActive); // Function WBP_SplashScreen.WBP_SplashScreen_C.DevModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void XsollaLoginFailure(); // Function WBP_SplashScreen.WBP_SplashScreen_C.XsollaLoginFailure // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void LoginSuccess(); // Function WBP_SplashScreen.WBP_SplashScreen_C.LoginSuccess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	struct FText GetErrorMessage(); // Function WBP_SplashScreen.WBP_SplashScreen_C.GetErrorMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff800928d00000
	void ApplyResolutionLock(); // Function WBP_SplashScreen.WBP_SplashScreen_C.ApplyResolutionLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void ToggleReadOnlyFields(bool bReadOnly); // Function WBP_SplashScreen.WBP_SplashScreen_C.ToggleReadOnlyFields // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_SplashScreen.WBP_SplashScreen_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void FinishLoadingAnimation(); // Function WBP_SplashScreen.WBP_SplashScreen_C.FinishLoadingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void DoLogin(); // Function WBP_SplashScreen.WBP_SplashScreen_C.DoLogin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void UpdateAccountFields(); // Function WBP_SplashScreen.WBP_SplashScreen_C.UpdateAccountFields // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void GetGameInstanceAndLocalPlayer(struct US_GameInstance* GameInstance, struct ULocalPlayer* OwningLocalPlayer); // Function WBP_SplashScreen.WBP_SplashScreen_C.GetGameInstanceAndLocalPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff800928d00000
	void GetScavengerGameInstance(struct US_GameInstance* AsS Game Instance); // Function WBP_SplashScreen.WBP_SplashScreen_C.GetScavengerGameInstance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff800928d00000
	void BndEvt__SplashScreenMediaPlayer_K2Node_ComponentBoundEvent_3_OnMediaPlayerMediaOpened__DelegateSignature(struct FString OpenedUrl); // Function WBP_SplashScreen.WBP_SplashScreen_C.BndEvt__SplashScreenMediaPlayer_K2Node_ComponentBoundEvent_3_OnMediaPlayerMediaOpened__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__SplashScreenMediaPlayer_K2Node_ComponentBoundEvent_5_OnMediaPlayerMediaEvent__DelegateSignature(); // Function WBP_SplashScreen.WBP_SplashScreen_C.BndEvt__SplashScreenMediaPlayer_K2Node_ComponentBoundEvent_5_OnMediaPlayerMediaEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__SplashScreenSkip_K2Node_ComponentBoundEvent_7_S_DispatchOnActiveClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_SplashScreen.WBP_SplashScreen_C.BndEvt__SplashScreenSkip_K2Node_ComponentBoundEvent_7_S_DispatchOnActiveClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void NextVideo(); // Function WBP_SplashScreen.WBP_SplashScreen_C.NextVideo // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__SplashScreenMediaPlayer_K2Node_ComponentBoundEvent_6_OnMediaPlayerMediaOpenFailed__DelegateSignature(struct FString FailedUrl); // Function WBP_SplashScreen.WBP_SplashScreen_C.BndEvt__SplashScreenMediaPlayer_K2Node_ComponentBoundEvent_6_OnMediaPlayerMediaOpenFailed__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void Event BindEvents(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event BindEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void OnLoginFailed(); // Function WBP_SplashScreen.WBP_SplashScreen_C.OnLoginFailed // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event LoginInitiated(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event LoginInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Destruct(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__WBP_CommonScavengerButton_K2Node_ComponentBoundEvent_1_DispatchOnClicked__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_SplashScreen.WBP_SplashScreen_C.BndEvt__WBP_CommonScavengerButton_K2Node_ComponentBoundEvent_1_DispatchOnClicked__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void WidgetAnimationEvt_LaunchFadeIn_K2Node_WidgetAnimationEvent_3(); // Function WBP_SplashScreen.WBP_SplashScreen_C.WidgetAnimationEvt_LaunchFadeIn_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0xffff800928d00000
	void WidgetAnimationEvt_FadeSplashPanel_K2Node_WidgetAnimationEvent_4(); // Function WBP_SplashScreen.WBP_SplashScreen_C.WidgetAnimationEvt_FadeSplashPanel_K2Node_WidgetAnimationEvent_4 // (BlueprintEvent) // @ game+0xffff800928d00000
	void Event DismissServersDown(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event DismissServersDown // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event LaunchIntoMenu(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event LaunchIntoMenu // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event DismissChangeList(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event DismissChangeList // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__LoginButton_K2Node_ComponentBoundEvent_1_S_DispatchOnClickedDelegate__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_SplashScreen.WBP_SplashScreen_C.BndEvt__LoginButton_K2Node_ComponentBoundEvent_1_S_DispatchOnClickedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void InitializeMediaSource(); // Function WBP_SplashScreen.WBP_SplashScreen_C.InitializeMediaSource // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event OnDisplayNameChanged(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event OnDisplayNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event OpenSourceFailed(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event OpenSourceFailed // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Construct(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void Event SplashScreenQueueEmpty(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event SplashScreenQueueEmpty // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event OnAcceptTos(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event OnAcceptTos // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event OnRejectTos(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event OnRejectTos // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event OnAcceptRecommendedSpec(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event OnAcceptRecommendedSpec // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void OnPreLoginDataRetrieved(); // Function WBP_SplashScreen.WBP_SplashScreen_C.OnPreLoginDataRetrieved // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event OnAcceptPlaytestWarning(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event OnAcceptPlaytestWarning // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event OnRejectPlaytestWarning(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event OnRejectPlaytestWarning // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event OnAcceptVideoSettings(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event OnAcceptVideoSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event OnRejectRecommendedSpec(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event OnRejectRecommendedSpec // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event DismissAuthPrompt(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event DismissAuthPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void HandleTransition(struct US_GameTransitionManager* TransitionManager, enum class ES_GameLocation Location); // Function WBP_SplashScreen.WBP_SplashScreen_C.HandleTransition // (Event|Protected|BlueprintEvent) // @ game+0xffff800928d00000
	void HandleEulaAccept(struct US_GameTransitionManager* TransitionManager); // Function WBP_SplashScreen.WBP_SplashScreen_C.HandleEulaAccept // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void HandleEulaReject(struct US_GameTransitionManager* TransitionManager); // Function WBP_SplashScreen.WBP_SplashScreen_C.HandleEulaReject // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Event OnBadLauncher(); // Function WBP_SplashScreen.WBP_SplashScreen_C.Event OnBadLauncher // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__ContinueButtonWidget_K2Node_ComponentBoundEvent_4_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_SplashScreen.WBP_SplashScreen_C.BndEvt__ContinueButtonWidget_K2Node_ComponentBoundEvent_4_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__SwitchProfileButtonWidget_K2Node_ComponentBoundEvent_8_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_SplashScreen.WBP_SplashScreen_C.BndEvt__SwitchProfileButtonWidget_K2Node_ComponentBoundEvent_8_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__ContinueButtonWidget_K2Node_ComponentBoundEvent_9_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_SplashScreen.WBP_SplashScreen_C.BndEvt__ContinueButtonWidget_K2Node_ComponentBoundEvent_9_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__SwitchProfileButtonWidget_K2Node_ComponentBoundEvent_10_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_SplashScreen.WBP_SplashScreen_C.BndEvt__SwitchProfileButtonWidget_K2Node_ComponentBoundEvent_10_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void ExecuteUbergraph_WBP_SplashScreen(int32_t EntryPoint); // Function WBP_SplashScreen.WBP_SplashScreen_C.ExecuteUbergraph_WBP_SplashScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff800928d00000
};

