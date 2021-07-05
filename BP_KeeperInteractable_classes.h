// BlueprintGeneratedClass BP_KeeperInteractable.BP_KeeperInteractable_C
// Size: 0x588 (Inherited: 0x2e8)
struct ABP_KeeperInteractable_C : AS_KeeperInteractable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UAkComponent* AkComponent; // 0x2f0(0x08)
	struct US_AmbianceBedComponent* S_AmbianceBedKeeperLoop; // 0x2f8(0x08)
	struct UArrowComponent* KeeperArrow; // 0x300(0x08)
	struct USC_SkeletalMeshComponent* SC_SkeletalMesh_HarvestRig_Base; // 0x308(0x08)
	struct USC_SkeletalMeshComponent* EditorVisualization; // 0x310(0x08)
	struct US_LootComponent* S_Loot; // 0x318(0x08)
	struct US_PingMetadataComponent* S_PingMetadata; // 0x320(0x08)
	struct USceneComponent* InteractionLocation; // 0x328(0x08)
	struct UParticleSystemComponent* PS_BeaconUp; // 0x330(0x08)
	struct UStaticMeshComponent* CylinderInner; // 0x338(0x08)
	struct UStaticMeshComponent* CylinderOuter; // 0x340(0x08)
	struct UArrowComponent* a5; // 0x348(0x08)
	struct UArrowComponent* a4; // 0x350(0x08)
	struct UArrowComponent* a3; // 0x358(0x08)
	struct UArrowComponent* a2; // 0x360(0x08)
	struct UArrowComponent* a1; // 0x368(0x08)
	struct UArrowComponent* A; // 0x370(0x08)
	struct US_OverheadMapIconComponent* S_OverheadMapIcon; // 0x378(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x380(0x08)
	bool DataExhausted; // 0x388(0x01)
	enum class ES_ShardSizes ShardStockpileSize; // 0x389(0x01)
	char pad_38A[0x2]; // 0x38a(0x02)
	int32_t OptionalBonusShards; // 0x38c(0x04)
	int32_t DataContainedTotal; // 0x390(0x04)
	int32_t DataWithdrawn; // 0x394(0x04)
	int32_t PopsTotal; // 0x398(0x04)
	int32_t PopsExecuted; // 0x39c(0x04)
	struct APlayerController* HarvestingPlayer; // 0x3a0(0x08)
	struct TArray<struct AS_PlayerController*> HarvestingTeamControllers; // 0x3a8(0x10)
	int32_t HarvestingTeam; // 0x3b8(0x04)
	int32_t CompletingTeam; // 0x3bc(0x04)
	struct ABP_Null_CharacterBase_C* Keefer; // 0x3c0(0x08)
	struct TMap<struct FString, int32_t> SequenceTimeOverride; // 0x3c8(0x50)
	float BaseSequenceTime; // 0x418(0x04)
	int32_t LeashOverride; // 0x41c(0x04)
	int32_t HarvestLeash; // 0x420(0x04)
	float HarvestInterval; // 0x424(0x04)
	float TimeRemaining; // 0x428(0x04)
	float GoalTimestamp; // 0x42c(0x04)
	int32_t CurrentHaul; // 0x430(0x04)
	float KeeferDmgVar; // 0x434(0x04)
	float KeeferRepairOverTime; // 0x438(0x04)
	float KeeferHealth; // 0x43c(0x04)
	float GracePeriodTimestamp; // 0x440(0x04)
	float GracePeriod; // 0x444(0x04)
	struct FMulticastInlineDelegate BecomeInactive; // 0x448(0x10)
	struct FName OnCompletionEventName; // 0x458(0x08)
	struct FName OnInitEventName; // 0x460(0x08)
	enum class ES_KeeperInteractables ES_KeeperInteractableType; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct AS_PlayerController* InteractingPlayer; // 0x470(0x08)
	struct FS_InteractableData Interaction Data; // 0x478(0x90)
	bool ChosenForDeployment; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct AS_PlayerController* ActivatingPlayer; // 0x510(0x08)
	struct FName EncounterName; // 0x518(0x08)
	int32_t InitiatingPlayerLevel; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct UBP_AutoPing_FirstChest_C* AutoPing_FirstChest; // 0x528(0x08)
	struct UBP_AutoPing_ChestLocator_C* AutoPing_ChestLocator; // 0x530(0x08)
	struct UBP_AutoPing_ShardLocator_C* AutoPing_ShardLocator; // 0x538(0x08)
	struct UBP_AutoPing_SupplyDrop_C* AutoPing_SupplyDrop; // 0x540(0x08)
	struct UBP_AutoPing_Vehicle_C* AutoPing_VehicleGantry; // 0x548(0x08)
	struct UBP_AutoPing_FirstShard_C* AutoPing_FirstShard; // 0x550(0x08)
	struct TArray<struct UArrowComponent*> ItemProducingArrows; // 0x558(0x10)
	bool DelayedActivate; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	struct FName NewVar_1; // 0x56c(0x08)
	bool bKeeperDroneLoop; // 0x574(0x01)
	char pad_575[0x3]; // 0x575(0x03)
	struct AS_AIOverlordActor* overlord; // 0x578(0x08)
	struct UDataTable* LocData; // 0x580(0x08)

	void GetHarvestTimeRemaining_BPI(float HarvestTimeRemaining); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.GetHarvestTimeRemaining_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Game Mode Value Overwrite(int32_t Tweak, int32_t Overwrite); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.Game Mode Value Overwrite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool IsInteractionAllowed(struct AS_PlayerController* PlayerController, struct AActor* InteractableActor, struct UPrimitiveComponent* InteractableComponent, int32_t InteractableIndex, struct FS_InteractableData InteractableData); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.IsInteractionAllowed // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void LootSpawn(struct TArray<struct FS_ItemState> Items); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.LootSpawn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_bKeeperDroneLoop(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.OnRep_bKeeperDroneLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GenerateRandomEncounterName(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.GenerateRandomEncounterName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetHarvestInterval(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.SetHarvestInterval // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Adjust for Bonus Round(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.Adjust for Bonus Round // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GatherArrows(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.GatherArrows // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Set Auto Pings Enabled(bool DisableAll); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.Set Auto Pings Enabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetUpMapIcon(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.SetUpMapIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool IsTeamDead(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.IsTeamDead // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetEncounterLabelText(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.SetEncounterLabelText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InterruptedHUDHack(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.InterruptedHUDHack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateKeeferHealth(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.UpdateKeeferHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void TellPlayerInteractHasEnded(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.TellPlayerInteractHasEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void DisableInteractable(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.DisableInteractable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateHUD(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.UpdateHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InitialMessaging(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.InitialMessaging // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateTimeRemaining(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.UpdateTimeRemaining // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDataOnPlayersForHUDWidget(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.SetDataOnPlayersForHUDWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetHarvestTimeRemaining(float HarvestTimeRemaining); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.GetHarvestTimeRemaining // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnSequenceComplete(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.OnSequenceComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ProduceData(int32_t DataProduced); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.ProduceData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void DidPlayersFail(bool Interrupted); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.DidPlayersFail // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ActivateMontage(struct AS_PlayerController* NewParam); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.ActivateMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetHarvestSequenceData(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.SetHarvestSequenceData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ClearPlayerAndKeeperData(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.ClearPlayerAndKeeperData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetHarvestingPlayerData(struct AS_PlayerController* PlayerActivating); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.SetHarvestingPlayerData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetServerTime(float ServerTime); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.GetServerTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void GetCurrentShardCount(int32_t Shards); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.GetCurrentShardCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateShardIcon(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.UpdateShardIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetShardStockpile(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.SetShardStockpile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Interrupted(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.Interrupted // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReRegister(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.ReRegister // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void DataSpawn(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.DataSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void KeeferGotAnOwie(struct AActor* Attkr); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.KeeferGotAnOwie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyInteractionStarted(struct AS_PlayerController* PlayerController, struct AActor* InteractableActor, struct UPrimitiveComponent* InteractableComponent, int32_t InteractableIndex, struct FS_InteractableData InteractableData); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.NotifyInteractionStarted // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Interacted(struct AS_PlayerController* PlayerController, struct AActor* InteractableActor, struct UPrimitiveComponent* InteractableComponent, int32_t InteractableIndex, float InteractionPercentage); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.Interacted // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnGameModeInit(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.OnGameModeInit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RemoteInteract(struct AS_PlayerController* InteractingPlayer); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.RemoteInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CompletedButRepeatable(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.CompletedButRepeatable // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void DisableLightColumn(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.DisableLightColumn // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RemoteDisable_BPI(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.RemoteDisable_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyInteractionStopped(struct AS_PlayerController* PlayerController, struct AActor* InteractableActor, struct UPrimitiveComponent* InteractableComponent, int32_t InteractableIndex, struct FS_InteractableData InteractableData, float InteractionPercentage); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.NotifyInteractionStopped // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void DelayedActivation(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.DelayedActivation // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CompletionAnnouncement(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.CompletionAnnouncement // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InteractedAnnouncement(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.InteractedAnnouncement // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EnableDataAutopings(enum class EMatchPhase newPhase); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.EnableDataAutopings // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RemoveFromMap(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.RemoveFromMap // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void DataProducerShutdown(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.DataProducerShutdown // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Stormcloaked(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.Stormcloaked // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GameModeValueTweak(int32_t Tweak, int32_t OptionalOverwrite); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.GameModeValueTweak // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VendingMachineMode(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.VendingMachineMode // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RemoteInterrupt_BPI(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.RemoteInterrupt_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_KeeperInteractable(int32_t EntryPoint); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.ExecuteUbergraph_BP_KeeperInteractable // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void BecomeInactive__DelegateSignature(); // Function BP_KeeperInteractable.BP_KeeperInteractable_C.BecomeInactive__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

