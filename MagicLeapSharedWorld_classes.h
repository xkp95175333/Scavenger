// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// Size: 0x458 (Inherited: 0x388)
struct AMagicLeapSharedWorldGameMode : AGameMode {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x388(0x10)
	struct FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x398(0x10)
	float PinSelectionConfidenceThreshold; // 0x3a8(0x04)
	char pad_3AC[0xa4]; // 0x3ac(0xa4)
	struct AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x450(0x08)

	bool SendSharedWorldDataToClients(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SelectChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xffff8008e4a10000
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData NewSharedWorldData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData // (BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// Size: 0x358 (Inherited: 0x318)
struct AMagicLeapSharedWorldGameState : AGameState {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x318(0x10)
	struct FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x328(0x10)
	struct FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x338(0x10)
	struct FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x348(0x10)

	void OnReplicate_SharedWorldData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData // (Final|Native|Private) // @ game+0xffff8008e4a10000
	void OnReplicate_AlignmentTransforms(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms // (Final|Native|Private) // @ game+0xffff8008e4a10000
	void MagicLeapSharedWorldEvent__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xffff8008e4a10000
	struct FTransform CalculateXRCameraRootTransform(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// Size: 0x608 (Inherited: 0x5f0)
struct AMagicLeapSharedWorldPlayerController : APlayerController {
	char pad_5F0[0x18]; // 0x5f0(0x18)

	void ServerSetLocalWorldData(struct FMagicLeapSharedWorldLocalData LocalWorldReplicationData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ServerSetAlignmentTransforms(struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void ClientSetChosenOne(bool bChosenOne); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClientMarkReadyForSendingLocalData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xffff8008e4a10000
	bool CanSendLocalDataToServer(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

