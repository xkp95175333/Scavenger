// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// Size: 0x250b (Inherited: 0x1f68)
struct ABP_PlayerController_C : AS_PlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f68(0x08)
	struct US_CraftingComponent* ScavengerCrafting; // 0x1f70(0x08)
	struct US_ItemManagerComponent* ScavengerItemManager; // 0x1f78(0x08)
	struct US_EquipmentComponent* ScavengerEquipment; // 0x1f80(0x08)
	struct US_InventoryComponent* ScavengerInventory; // 0x1f88(0x08)
	struct UAudioComponent* A_GeigerSound; // 0x1f90(0x08)
	float GeigerTotalsThisTick; // 0x1f98(0x04)
	struct FName LastLocation; // 0x1f9c(0x08)
	struct FActiveGameplayEffectHandle StunHandle; // 0x1fa4(0x08)
	bool BaseWeaponInInventory; // 0x1fac(0x01)
	bool UpgradedWeaponInInventory; // 0x1fad(0x01)
	bool BaseWeaponInHands; // 0x1fae(0x01)
	bool UpgradedWeaponInHands; // 0x1faf(0x01)
	struct FTimerHandle RogueEventTimer; // 0x1fb0(0x08)
	struct FTimerHandle RogueDamageTimer; // 0x1fb8(0x08)
	float RogueTimer; // 0x1fc0(0x04)
	float RogueTimerMax; // 0x1fc4(0x04)
	struct FMulticastInlineDelegate OnToggleHUD_1; // 0x1fc8(0x10)
	struct FMulticastInlineDelegate OnShowMouseCursor; // 0x1fd8(0x10)
	struct FMulticastInlineDelegate OnResurrect; // 0x1fe8(0x10)
	struct US_ItemData* CraftedBaseWeaponData; // 0x1ff8(0x08)
	struct TArray<struct US_ItemData*> FullyLoadedItems; // 0x2000(0x10)
	struct FActiveGameplayEffectHandle GearUpgradeHandle; // 0x2010(0x08)
	struct US_ItemData* PocketItem; // 0x2018(0x08)
	int32_t PocketAmmoCount; // 0x2020(0x04)
	char pad_2024[0x4]; // 0x2024(0x04)
	struct AActor* ItemBeingInteractedWith; // 0x2028(0x08)
	struct AS_WeaponBase* CurrentPrimaryLargeWeapon; // 0x2030(0x08)
	struct AS_WeaponBase* CurrentSecondaryLargeWeapon; // 0x2038(0x08)
	struct AS_WeaponBase* CurrentWeaponThrowable; // 0x2040(0x08)
	int32_t DistanceToShardWarning; // 0x2048(0x04)
	int32_t DistanceToShard; // 0x204c(0x04)
	bool PauseMenuActive; // 0x2050(0x01)
	char pad_2051[0x3]; // 0x2051(0x03)
	int32_t SetGearTier; // 0x2054(0x04)
	struct UWBP_TeamStatusTray_C* TeamStatusTrays; // 0x2058(0x08)
	struct FTimerHandle ReportCardTimerHandle; // 0x2060(0x08)
	bool SavingReportCardAndReturningToMenu; // 0x2068(0x01)
	char pad_2069[0x7]; // 0x2069(0x07)
	struct TMap<struct US_RecipeData*, struct US_RecipeData*> CharacterToWpnRecipeUpgrade; // 0x2070(0x50)
	bool WpnRecipeUpgraded; // 0x20c0(0x01)
	char pad_20C1[0x7]; // 0x20c1(0x07)
	struct UDataTable* DTAmmoBox; // 0x20c8(0x08)
	struct FMulticastInlineDelegate OnTierUpgrade; // 0x20d0(0x10)
	struct FMulticastInlineDelegate OnEnterInventoryScreen; // 0x20e0(0x10)
	struct FMulticastInlineDelegate OnEnterCraftingScreen; // 0x20f0(0x10)
	struct FMulticastInlineDelegate OnEnterMapScreen; // 0x2100(0x10)
	struct US_ItemData* CurrentClassWeapon; // 0x2110(0x08)
	struct TArray<struct US_ItemData*> ItemDataOfAllClassWeapons; // 0x2118(0x10)
	bool RecentMusic; // 0x2128(0x01)
	char pad_2129[0x3]; // 0x2129(0x03)
	float RecentMusicPeriod; // 0x212c(0x04)
	enum class ES_MusicCue RecentMusicTrack; // 0x2130(0x01)
	char pad_2131[0x7]; // 0x2131(0x07)
	struct TMap<struct AS_PlayerCharacter*, float> RIFFStencilTimers; // 0x2138(0x50)
	struct TMap<struct AS_PlayerCharacter*, float> RIFFFadeTimers; // 0x2188(0x50)
	struct TArray<struct US_RecipeData*> FullyLoadedRecipeData; // 0x21d8(0x10)
	struct TMap<struct TSoftObjectPtr<struct US_RecipeData>, struct US_RecipeData*> WeaponUpgradeRecipeMap; // 0x21e8(0x50)
	struct TSoftObjectPtr<struct US_RecipeData> RecipeHandle_GearUpgrade01; // 0x2238(0x28)
	struct TSoftObjectPtr<struct US_RecipeData> RecipeHandle_GearUpgrade02; // 0x2260(0x28)
	struct TSoftObjectPtr<struct US_RecipeData> RecipeHandle_WildcardVehicleScout; // 0x2288(0x28)
	struct TArray<struct US_RecipeData*> Current Recipes; // 0x22b0(0x10)
	struct TMap<struct TSoftObjectPtr<struct US_PlayerClassData>, struct US_RecipeData*> CharacterToWeaponRecipe; // 0x22c0(0x50)
	struct TSoftObjectPtr<struct US_RecipeData> AR_Recipe_Handle; // 0x2310(0x28)
	float KeeperInteractionTimeRemaining; // 0x2338(0x04)
	float KeeperInteractionTimeMax; // 0x233c(0x04)
	struct FMulticastInlineDelegate OnDistanceToShardNonZero; // 0x2340(0x10)
	struct FMulticastInlineDelegate OnDistanceToShardZero; // 0x2350(0x10)
	float KeeperInteractionHealth; // 0x2360(0x04)
	enum class ES_KeeperInteractables KIType; // 0x2364(0x01)
	char pad_2365[0x3]; // 0x2365(0x03)
	struct TMap<struct US_ItemData*, int32_t> RezInventory; // 0x2368(0x50)
	struct TSoftObjectPtr<struct US_RecipeData> RecipeHandle_GearUpgrade03; // 0x23b8(0x28)
	struct TSoftObjectPtr<struct US_RecipeData> RecipeHandle_GearUpgrade04; // 0x23e0(0x28)
	float PvPUpgradeTimestamp; // 0x2408(0x04)
	int32_t PvPCurrentPowerRank; // 0x240c(0x04)
	struct FS_ItemState ItemState_PocketAmmo; // 0x2410(0x40)
	struct TArray<struct US_ItemData*> WeaponInventory; // 0x2450(0x10)
	struct TArray<struct US_ItemData*> WeaponInventoryOnRez; // 0x2460(0x10)
	bool KeeperOccupied; // 0x2470(0x01)
	bool BlippedCold; // 0x2471(0x01)
	bool BlippedHunger; // 0x2472(0x01)
	bool KnowsAboutCold; // 0x2473(0x01)
	bool KnowsAboutHunger; // 0x2474(0x01)
	bool HasWeapon; // 0x2475(0x01)
	bool Executed; // 0x2476(0x01)
	char pad_2477[0x1]; // 0x2477(0x01)
	int32_t SetShieldLevel; // 0x2478(0x04)
	bool Banking; // 0x247c(0x01)
	char pad_247D[0x3]; // 0x247d(0x03)
	struct FMulticastInlineDelegate OnBonusMode; // 0x2480(0x10)
	struct AActor* ActiveBankActor; // 0x2490(0x08)
	struct TSet<enum class ES_ItemType> AcquiredItemsThisFrame; // 0x2498(0x50)
	bool Streaming Called; // 0x24e8(0x01)
	bool ForceSuppressVO; // 0x24e9(0x01)
	char pad_24EA[0x6]; // 0x24ea(0x06)
	struct ABP_InGameHUD_C* TEMP_HardRefTo_BP_InGameHUD; // 0x24f0(0x08)
	struct ABP_PlayerState_C* TEMP_HardRefTo_BP_PlayerState; // 0x24f8(0x08)
	struct AActor* KeeperInteractable; // 0x2500(0x08)
	bool HasStoppedDownedAndBleedingMusic; // 0x2508(0x01)
	bool InBankingLoop; // 0x2509(0x01)
	bool bIsBlueprintTickEnabled; // 0x250a(0x01)

	void SetForceSuppressVO(bool Value, bool Unused); // Function BP_PlayerController.BP_PlayerController_C.SetForceSuppressVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsColdEnoughForHearthPing_BPI(bool yep); // Function BP_PlayerController.BP_PlayerController_C.GetIsColdEnoughForHearthPing_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsHungryEnoughForAutoping_BPI(bool yep); // Function BP_PlayerController.BP_PlayerController_C.GetIsHungryEnoughForAutoping_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsColdEnoughForAutoping_BPI(bool yep); // Function BP_PlayerController.BP_PlayerController_C.GetIsColdEnoughForAutoping_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsInVehicle_BPI(bool IsInVehicle); // Function BP_PlayerController.BP_PlayerController_C.GetIsInVehicle_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetScrapCount_BPI(int32_t CarriedScrap); // Function BP_PlayerController.BP_PlayerController_C.GetScrapCount_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetHasWeapon_BPI(bool HasWeapon); // Function BP_PlayerController.BP_PlayerController_C.GetHasWeapon_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetReceivedHungerBlip_BPI(bool ReceivedBlip); // Function BP_PlayerController.BP_PlayerController_C.GetReceivedHungerBlip_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetReceivedColdBlip_BPI(bool ReceivedBlip); // Function BP_PlayerController.BP_PlayerController_C.GetReceivedColdBlip_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetWasTutoredForHunger_BPI(bool OughttaKnow); // Function BP_PlayerController.BP_PlayerController_C.GetWasTutoredForHunger_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetWasTutoredForCold_BPI(bool KnowsBetter); // Function BP_PlayerController.BP_PlayerController_C.GetWasTutoredForCold_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsPlayerCriticallyHungry_BPI(bool IsCriticallyHungry); // Function BP_PlayerController.BP_PlayerController_C.GetIsPlayerCriticallyHungry_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsPlayerCriticallyCold_BPI(bool IsCriticallyCold); // Function BP_PlayerController.BP_PlayerController_C.GetIsPlayerCriticallyCold_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsPlayerStarving_BPI(bool IsStarving); // Function BP_PlayerController.BP_PlayerController_C.GetIsPlayerStarving_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsPlayerFreezing_BPI(bool IsFreezing); // Function BP_PlayerController.BP_PlayerController_C.GetIsPlayerFreezing_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetKeeperOccupied_BPI(bool Occupied); // Function BP_PlayerController.BP_PlayerController_C.GetKeeperOccupied_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetDistanceToShard_BPI(int32_t Distance); // Function BP_PlayerController.BP_PlayerController_C.GetDistanceToShard_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetBankingInterval(float Interval); // Function BP_PlayerController.BP_PlayerController_C.GetBankingInterval // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool CanExitVehicle(); // Function BP_PlayerController.BP_PlayerController_C.CanExitVehicle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PlayPickupAudio(enum class ES_ItemType ItemType, enum class ES_ItemRarity ItemRarity); // Function BP_PlayerController.BP_PlayerController_C.PlayPickupAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateMusicState(); // Function BP_PlayerController.BP_PlayerController_C.UpdateMusicState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleOnNewMatchPhase(enum class EMatchPhase newPhase); // Function BP_PlayerController.BP_PlayerController_C.HandleOnNewMatchPhase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Bank(struct US_ItemData* ScoringToken, enum class ES_BankingMethod Method); // Function BP_PlayerController.BP_PlayerController_C.Bank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_Banking(); // Function BP_PlayerController.BP_PlayerController_C.OnRep_Banking // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleCraftingCompleted(struct FS_RecipeMetadata RecipeMetadata); // Function BP_PlayerController.BP_PlayerController_C.HandleCraftingCompleted // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void DropPocketAmmoForRecipe(struct FS_RecipeMetadata RecipeMetadata); // Function BP_PlayerController.BP_PlayerController_C.DropPocketAmmoForRecipe // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void StoreWeaponData(); // Function BP_PlayerController.BP_PlayerController_C.StoreWeaponData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_DistanceToShard(); // Function BP_PlayerController.BP_PlayerController_C.OnRep_DistanceToShard // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Manage RIFFOutline(); // Function BP_PlayerController.BP_PlayerController_C.Manage RIFFOutline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void TrimAnnouncementQueue(); // Function BP_PlayerController.BP_PlayerController_C.TrimAnnouncementQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleTeammateInfosChanged(struct UObject* TeammateInfo, int32_t TeammateInfoIndex); // Function BP_PlayerController.BP_PlayerController_C.HandleTeammateInfosChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CraftingXP(int32_t oldXPValues); // Function BP_PlayerController.BP_PlayerController_C.CraftingXP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CleanupBoundEvents(); // Function BP_PlayerController.BP_PlayerController_C.CleanupBoundEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateRogueDataforReplication(); // Function BP_PlayerController.BP_PlayerController_C.UpdateRogueDataforReplication // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetEquippedWeapons(); // Function BP_PlayerController.BP_PlayerController_C.GetEquippedWeapons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RogueDamageTimerComplete(); // Function BP_PlayerController.BP_PlayerController_C.RogueDamageTimerComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ClearRogueStatus(); // Function BP_PlayerController.BP_PlayerController_C.ClearRogueStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AddTimeToRogueTimer(float TimeToAddToTimer, bool DamageViolation); // Function BP_PlayerController.BP_PlayerController_C.AddTimeToRogueTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EnterNewLocation(); // Function BP_PlayerController.BP_PlayerController_C.EnterNewLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_ToggleHUD_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ToggleHUD_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_Equals_K2Node_InputKeyEvent_4(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Equals_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_Cheat_RecipeOverride_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Cheat_RecipeOverride_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_3(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_End_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_End_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ServerChangePlayerName(struct FString NewName); // Function BP_PlayerController.BP_PlayerController_C.ServerChangePlayerName // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetPlayerName(); // Function BP_PlayerController.BP_PlayerController_C.SetPlayerName // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetGeigerIntensity(float Intensity); // Function BP_PlayerController.BP_PlayerController_C.SetGeigerIntensity // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerController.BP_PlayerController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ClientSetDownedState(bool bIsDowned); // Function BP_PlayerController.BP_PlayerController_C.ClientSetDownedState // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDownedState(bool bIsDowned); // Function BP_PlayerController.BP_PlayerController_C.SetDownedState // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ServerSetDownedState(bool bIsDowned); // Function BP_PlayerController.BP_PlayerController_C.ServerSetDownedState // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerController.BP_PlayerController_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ClientShowMouseCursor(bool bShowMouseCursor); // Function BP_PlayerController.BP_PlayerController_C.ClientShowMouseCursor // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventInventorySetRandom(); // Function BP_PlayerController.BP_PlayerController_C.EventInventorySetRandom // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ServerRecipeCheatEvent(); // Function BP_PlayerController.BP_PlayerController_C.ServerRecipeCheatEvent // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ToastNewLocation(); // Function BP_PlayerController.BP_PlayerController_C.ToastNewLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ClientSetupInputOnRespawn(); // Function BP_PlayerController.BP_PlayerController_C.ClientSetupInputOnRespawn // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AlsoPoorlyNamed(struct FS_EventParameterVariant InteractableActor, struct FS_EventParameterVariant InteractableComponent, int32_t InteractableIndex, float InteractionPercentage); // Function BP_PlayerController.BP_PlayerController_C.AlsoPoorlyNamed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SoPoorlyNamed(enum class ES_Interaction interactionType, bool isTimedInteraction, struct AActor* Actor, struct UPrimitiveComponent* Component, int32_t instanceIndex); // Function BP_PlayerController.BP_PlayerController_C.SoPoorlyNamed // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ClientLeaveGameAndReturnToMenu(float Timeout, bool Is Early Exit); // Function BP_PlayerController.BP_PlayerController_C.ClientLeaveGameAndReturnToMenu // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleReportCardRequestTimeout(); // Function BP_PlayerController.BP_PlayerController_C.HandleReportCardRequestTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnLocalPingAdded(struct FS_PingItemInstance pingInfo, struct FS_PingItemHandle pingItemHandle); // Function BP_PlayerController.BP_PlayerController_C.OnLocalPingAdded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnLocalPingCleared(); // Function BP_PlayerController.BP_PlayerController_C.OnLocalPingCleared // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleReportCardReceived(struct FS_GameReportCardForPlayer reportCard); // Function BP_PlayerController.BP_PlayerController_C.HandleReportCardReceived // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void StartMusicEvent(int32_t Track); // Function BP_PlayerController.BP_PlayerController_C.StartMusicEvent // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void StopMusic(int32_t Track); // Function BP_PlayerController.BP_PlayerController_C.StopMusic // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BeginPlayPostStreaming_BP(); // Function BP_PlayerController.BP_PlayerController_C.BeginPlayPostStreaming_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ServerRevive(); // Function BP_PlayerController.BP_PlayerController_C.ServerRevive // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReadyForLocMusic(); // Function BP_PlayerController.BP_PlayerController_C.ReadyForLocMusic // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_HandleItemAcquired(struct FS_ItemState ItemState); // Function BP_PlayerController.BP_PlayerController_C.BP_HandleItemAcquired // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnPlayerClassChanged(struct US_PlayerClassData* ClassData); // Function BP_PlayerController.BP_PlayerController_C.Event OnPlayerClassChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetCurrentKeeperInteractable_BPI(enum class ES_KeeperInteractables Type, struct AActor* KI); // Function BP_PlayerController.BP_PlayerController_C.SetCurrentKeeperInteractable_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetItemBeingInteractedWith_BPI(struct AActor* ItemBeingInteractedWith); // Function BP_PlayerController.BP_PlayerController_C.SetItemBeingInteractedWith_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDistanceToShard_BPI(int32_t DistanceToShard); // Function BP_PlayerController.BP_PlayerController_C.SetDistanceToShard_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDistanceToShardWarning_BPI(int32_t DistanceToShardWarning); // Function BP_PlayerController.BP_PlayerController_C.SetDistanceToShardWarning_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetHarvestTimeMax_BPI(float HarvestTimeMax); // Function BP_PlayerController.BP_PlayerController_C.SetHarvestTimeMax_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetHarvestTimeRemaining_BPI(float HarvestTimeRemaining); // Function BP_PlayerController.BP_PlayerController_C.SetHarvestTimeRemaining_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void onPreTakeDamage_Event(struct AActor* DamagedActor, float UnmodifiedDamageAmount, float ArmorDamageAmount, float HealthDamageAmount, struct FDamageEvent DamageEvent, struct AActor* CauseActor, char DamageModifiersApplied, struct AController* InstigatorController, struct FS_PreTakeDamageInfo DamageInfo); // Function BP_PlayerController.BP_PlayerController_C.onPreTakeDamage_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyLocationEntered_BP(struct FS_NamedLocationMetadata LocationData); // Function BP_PlayerController.BP_PlayerController_C.NotifyLocationEntered_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetRezTimestamp(float Timestamp); // Function BP_PlayerController.BP_PlayerController_C.SetRezTimestamp // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyTeammateInfoChanged_BP(int32_t TeammateInfoIndex, struct FS_TeammateInfo TeammateInfo); // Function BP_PlayerController.BP_PlayerController_C.NotifyTeammateInfoChanged_BP // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetKeeferHealth_BPI(float CurrentHealth); // Function BP_PlayerController.BP_PlayerController_C.SetKeeferHealth_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RegisterCraftingEvents(); // Function BP_PlayerController.BP_PlayerController_C.RegisterCraftingEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleClassWeaponCrafting(int32_t RecipeIndex, struct FS_RecipeMetadata RecipeMetadata); // Function BP_PlayerController.BP_PlayerController_C.HandleClassWeaponCrafting // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnUpgrade(int32_t GearLevel, struct FName ID); // Function BP_PlayerController.BP_PlayerController_C.Event OnUpgrade // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRecipeCraftingCompleted(int32_t RecipeIndex, struct FS_RecipeMetadata RecipeMetadata); // Function BP_PlayerController.BP_PlayerController_C.OnRecipeCraftingCompleted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetKeeperOccupied_BPI(bool Occupied); // Function BP_PlayerController.BP_PlayerController_C.SetKeeperOccupied_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetReceivedColdBlip_BPI(); // Function BP_PlayerController.BP_PlayerController_C.SetReceivedColdBlip_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetReceivedHungerBlip_BPI(); // Function BP_PlayerController.BP_PlayerController_C.SetReceivedHungerBlip_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetWasTutoredForCold_BPI(); // Function BP_PlayerController.BP_PlayerController_C.SetWasTutoredForCold_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetWasTutoredForHunger_BPI(); // Function BP_PlayerController.BP_PlayerController_C.SetWasTutoredForHunger_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetHasWeapon_BPI(); // Function BP_PlayerController.BP_PlayerController_C.SetHasWeapon_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ChangeBankingState(bool Banking, struct AActor* BankActor); // Function BP_PlayerController.BP_PlayerController_C.ChangeBankingState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyResurrectedBy_BP(struct FS_EventParameterControllerVariant resurrectingController); // Function BP_PlayerController.BP_PlayerController_C.NotifyResurrectedBy_BP // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void KeeperBankFX(); // Function BP_PlayerController.BP_PlayerController_C.KeeperBankFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnBonusMode_Event(); // Function BP_PlayerController.BP_PlayerController_C.OnBonusMode_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Client_BankingComplete(struct AActor* Bank); // Function BP_PlayerController.BP_PlayerController_C.Client_BankingComplete // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OpeningCrescendo(); // Function BP_PlayerController.BP_PlayerController_C.OpeningCrescendo // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRecipeCraftingStarted(int32_t RecipeIndex, struct FS_RecipeMetadata RecipeMetadata); // Function BP_PlayerController.BP_PlayerController_C.OnRecipeCraftingStarted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PlayLocationMusic_BPI(enum class ES_LocationType LocType, enum class ES_LocationFaction faction); // Function BP_PlayerController.BP_PlayerController_C.PlayLocationMusic_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void StartMusicEventByCue(enum class ES_MusicCue Cue); // Function BP_PlayerController.BP_PlayerController_C.StartMusicEventByCue // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void StopMusicByCue(enum class ES_MusicCue Cue); // Function BP_PlayerController.BP_PlayerController_C.StopMusicByCue // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Server_PingSound(enum class ES_PingItemEvent PingEvent, enum class ES_PingInfoType PingType, enum class ES_AutoPingType AutoPingType, struct AActor* PingActor); // Function BP_PlayerController.BP_PlayerController_C.Server_PingSound // (Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Server_PingClearSound(); // Function BP_PlayerController.BP_PlayerController_C.Server_PingClearSound // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyResurrected_BP(struct FS_EventParameterVariant resurrectedActor); // Function BP_PlayerController.BP_PlayerController_C.NotifyResurrected_BP // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_HandleItemChanged(struct FS_ItemState OldItemState, struct FS_ItemState NewItemState); // Function BP_PlayerController.BP_PlayerController_C.BP_HandleItemChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyClientLeaveGameAndReturnToMainMenu(float Timeout, bool isEarlyExit); // Function BP_PlayerController.BP_PlayerController_C.NotifyClientLeaveGameAndReturnToMainMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_HandleEquipmentChanged(enum class ES_EquipmentSlot SlotType, struct FS_ItemState OldItemState, struct FS_ItemState NewItemState); // Function BP_PlayerController.BP_PlayerController_C.BP_HandleEquipmentChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_HandleEquipmentEquipped(enum class ES_EquipmentSlot SlotType, struct FS_ItemState ItemState); // Function BP_PlayerController.BP_PlayerController_C.BP_HandleEquipmentEquipped // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ControlledPawnTerminal_BPI(); // Function BP_PlayerController.BP_PlayerController_C.ControlledPawnTerminal_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InBankingRadius(); // Function BP_PlayerController.BP_PlayerController_C.InBankingRadius // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnCraftingCompleted(int32_t RecipeIndex, struct FS_RecipeMetadata RecipeMetadata); // Function BP_PlayerController.BP_PlayerController_C.OnCraftingCompleted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnNewMatchPhase(enum class EMatchPhase newPhase); // Function BP_PlayerController.BP_PlayerController_C.OnNewMatchPhase // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_PlayerController(int32_t EntryPoint); // Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void OnBonusMode__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.OnBonusMode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnDistanceToShardZero__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.OnDistanceToShardZero__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnDistanceToShardNonZero__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.OnDistanceToShardNonZero__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnEnterMapScreen__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.OnEnterMapScreen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnEnterCraftingScreen__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.OnEnterCraftingScreen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnEnterInventoryScreen__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.OnEnterInventoryScreen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnTierUpgrade__DelegateSignature(int32_t GearLevel, struct FName ID); // Function BP_PlayerController.BP_PlayerController_C.OnTierUpgrade__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnResurrect__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.OnResurrect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnShowMouseCursor__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.OnShowMouseCursor__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnToggleHUD_0__DelegateSignature(); // Function BP_PlayerController.BP_PlayerController_C.OnToggleHUD_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

