// BlueprintGeneratedClass BPI_PlayerController.BPI_PlayerController_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_PlayerController_C : UInterface {

	void ControlledPawnTerminal_BPI(); // Function BPI_PlayerController.BPI_PlayerController_C.ControlledPawnTerminal_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetForceSuppressVO(bool Value, bool Unused); // Function BPI_PlayerController.BPI_PlayerController_C.SetForceSuppressVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PlayLocationMusic_BPI(enum class ES_LocationType LocType, enum class ES_LocationFaction faction); // Function BPI_PlayerController.BPI_PlayerController_C.PlayLocationMusic_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsColdEnoughForHearthPing_BPI(bool yep); // Function BPI_PlayerController.BPI_PlayerController_C.GetIsColdEnoughForHearthPing_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ChangeBankingState(bool Banking, struct AActor* BankActor); // Function BPI_PlayerController.BPI_PlayerController_C.ChangeBankingState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsHungryEnoughForAutoping_BPI(bool yep); // Function BPI_PlayerController.BPI_PlayerController_C.GetIsHungryEnoughForAutoping_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsColdEnoughForAutoping_BPI(bool yep); // Function BPI_PlayerController.BPI_PlayerController_C.GetIsColdEnoughForAutoping_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsInVehicle_BPI(bool IsInVehicle); // Function BPI_PlayerController.BPI_PlayerController_C.GetIsInVehicle_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetScrapCount_BPI(int32_t CarriedScrap); // Function BPI_PlayerController.BPI_PlayerController_C.GetScrapCount_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetHasWeapon_BPI(bool HasWeapon); // Function BPI_PlayerController.BPI_PlayerController_C.GetHasWeapon_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetHasWeapon_BPI(); // Function BPI_PlayerController.BPI_PlayerController_C.SetHasWeapon_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetWasTutoredForHunger_BPI(); // Function BPI_PlayerController.BPI_PlayerController_C.SetWasTutoredForHunger_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetWasTutoredForCold_BPI(); // Function BPI_PlayerController.BPI_PlayerController_C.SetWasTutoredForCold_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetReceivedHungerBlip_BPI(bool ReceivedBlip); // Function BPI_PlayerController.BPI_PlayerController_C.GetReceivedHungerBlip_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetReceivedColdBlip_BPI(bool ReceivedBlip); // Function BPI_PlayerController.BPI_PlayerController_C.GetReceivedColdBlip_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetReceivedHungerBlip_BPI(); // Function BPI_PlayerController.BPI_PlayerController_C.SetReceivedHungerBlip_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetReceivedColdBlip_BPI(); // Function BPI_PlayerController.BPI_PlayerController_C.SetReceivedColdBlip_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetWasTutoredForHunger_BPI(bool OughttaKnow); // Function BPI_PlayerController.BPI_PlayerController_C.GetWasTutoredForHunger_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetWasTutoredForCold_BPI(bool KnowsBetter); // Function BPI_PlayerController.BPI_PlayerController_C.GetWasTutoredForCold_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsPlayerCriticallyHungry_BPI(bool IsCriticallyHungry); // Function BPI_PlayerController.BPI_PlayerController_C.GetIsPlayerCriticallyHungry_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsPlayerCriticallyCold_BPI(bool IsCriticallyCold); // Function BPI_PlayerController.BPI_PlayerController_C.GetIsPlayerCriticallyCold_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsPlayerStarving_BPI(bool IsStarving); // Function BPI_PlayerController.BPI_PlayerController_C.GetIsPlayerStarving_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsPlayerFreezing_BPI(bool IsFreezing); // Function BPI_PlayerController.BPI_PlayerController_C.GetIsPlayerFreezing_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetKeeperOccupied_BPI(bool Occupied); // Function BPI_PlayerController.BPI_PlayerController_C.GetKeeperOccupied_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetKeeperOccupied_BPI(bool Occupied); // Function BPI_PlayerController.BPI_PlayerController_C.SetKeeperOccupied_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetDistanceToShard_BPI(int32_t Distance); // Function BPI_PlayerController.BPI_PlayerController_C.GetDistanceToShard_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetKeeferHealth_BPI(float CurrentHealth); // Function BPI_PlayerController.BPI_PlayerController_C.SetKeeferHealth_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetHarvestTimeRemaining_BPI(float HarvestTimeRemaining); // Function BPI_PlayerController.BPI_PlayerController_C.SetHarvestTimeRemaining_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetHarvestTimeMax_BPI(float HarvestTimeMax); // Function BPI_PlayerController.BPI_PlayerController_C.SetHarvestTimeMax_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDistanceToShardWarning_BPI(int32_t DistanceToShardWarning); // Function BPI_PlayerController.BPI_PlayerController_C.SetDistanceToShardWarning_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDistanceToShard_BPI(int32_t DistanceToShard); // Function BPI_PlayerController.BPI_PlayerController_C.SetDistanceToShard_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetItemBeingInteractedWith_BPI(struct AActor* ItemBeingInteractedWith); // Function BPI_PlayerController.BPI_PlayerController_C.SetItemBeingInteractedWith_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetCurrentKeeperInteractable_BPI(enum class ES_KeeperInteractables Type, struct AActor* KI); // Function BPI_PlayerController.BPI_PlayerController_C.SetCurrentKeeperInteractable_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

