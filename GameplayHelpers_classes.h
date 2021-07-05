// BlueprintGeneratedClass GameplayHelpers.GameplayHelpers_C
// Size: 0x28 (Inherited: 0x28)
struct UGameplayHelpers_C : UBlueprintFunctionLibrary {

	void Are Actors Teammates(struct AActor* Actor 1, struct AActor* Actor 2, struct UObject* __WorldContext, bool Teammates); // Function GameplayHelpers.GameplayHelpers_C.Are Actors Teammates // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Special Case VO Suppression(struct UObject* __WorldContext, bool Suppress); // Function GameplayHelpers.GameplayHelpers_C.Special Case VO Suppression // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void GiveAmmoFromChest(struct US_ItemData* ItemData, struct FTransform SpawnLoc, struct AGameModeBase* GameModeRef, struct UObject* __WorldContext); // Function GameplayHelpers.GameplayHelpers_C.GiveAmmoFromChest // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PickItemWithRelativeChance(struct UDataTable* LootTable, struct UObject* __WorldContext, struct FSpawnContainerTableRow ItemContainerRow); // Function GameplayHelpers.GameplayHelpers_C.PickItemWithRelativeChance // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AbilityCanActivateAbility(struct AActor* Actor Info Owner Actor, struct AActor* Actor Info Avatar Actor, struct APlayerController* Actor Info Player Controller, struct UAbilitySystemComponent* Actor Info Ability System Component, struct USkeletalMeshComponent* Actor Info Skeletal Mesh Component, struct UAnimInstance* Actor Info Anim Instance, struct UMovementComponent* Actor Info Movement Component, bool Blocked While Downed, enum class ES_AbilityTimerIndex TimerIndex, struct UObject* __WorldContext, struct FGameplayTagContainer Relevant Tags, bool Return Value); // Function GameplayHelpers.GameplayHelpers_C.AbilityCanActivateAbility // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void IsCharacterInCone(struct AS_CharacterBase* TestCharacter, float ConeAngle, struct FVector coneOrigin, struct FVector ConeForward, struct FVector ConeRight, struct UObject* __WorldContext, float AngleFromOrigin, bool IsInRadius); // Function GameplayHelpers.GameplayHelpers_C.IsCharacterInCone // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetHealth(struct AS_CharacterBase* Character, struct UObject* __WorldContext, float Health); // Function GameplayHelpers.GameplayHelpers_C.GetHealth // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void GiveAmmo(struct AS_CharacterBase* Character, bool GiveCurrentWeaponAmmo, enum class ES_AmmoType AmmoType, int32_t change, struct UObject* __WorldContext); // Function GameplayHelpers.GameplayHelpers_C.GiveAmmo // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ChangeHealth(struct AS_CharacterBase* Character, float Amount, bool Change Recovery Limit, bool Percentage Of Max Health, enum class ES_StatChangeCauseType Cause Type, struct AActor* Source Actor, struct AController* Instigator Controller, struct UObject* __WorldContext); // Function GameplayHelpers.GameplayHelpers_C.ChangeHealth // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SelectionSort(struct TArray<struct AActor*> ArrayToSort, struct TArray<float> SortingValues, struct UObject* __WorldContext); // Function GameplayHelpers.GameplayHelpers_C.SelectionSort // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetTeamIndexFromActor(struct AActor* Actor, struct UObject* __WorldContext, int32_t TeamIndex, bool FoundTeam); // Function GameplayHelpers.GameplayHelpers_C.GetTeamIndexFromActor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void RemoveOutlineFromActor(struct AActor* Actor, struct UObject* __WorldContext); // Function GameplayHelpers.GameplayHelpers_C.RemoveOutlineFromActor // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AddOutlineToActor(struct AActor* Actor, struct UObject* __WorldContext); // Function GameplayHelpers.GameplayHelpers_C.AddOutlineToActor // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetActorsInRadius(struct AActor* CenterActor, struct AActor* ActorClass, struct AActor* instigatorActor, float Radius, bool CountTeammates, bool CountEnemies, struct UObject* __WorldContext, struct TArray<struct AActor*> Actors, struct TArray<float> SortingArray); // Function GameplayHelpers.GameplayHelpers_C.GetActorsInRadius // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AngleBetweenVectors(struct FVector A, struct FVector B, struct UObject* __WorldContext, float Float); // Function GameplayHelpers.GameplayHelpers_C.AngleBetweenVectors // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SelectActorsInFront(struct AActor* CenterActor, bool UseCameraLocation, struct AActor* ActorClass, bool UseTargetCapsule, bool DoLineTrace, float MaxAngle, float MaxDistance, float OrderingWeight, int32_t numberOfActors, bool CountTeammates, bool Count Enemies, bool Count Neutral, struct UObject* __WorldContext, struct TArray<struct AActor*> Actors, struct TArray<float> SortingArray); // Function GameplayHelpers.GameplayHelpers_C.SelectActorsInFront // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CountActorsInRadius(struct AActor* CenterActor, struct AActor* ActorClass, float Radius, bool CountTeammates, bool CountEnemies, struct UObject* __WorldContext, int32_t Count); // Function GameplayHelpers.GameplayHelpers_C.CountActorsInRadius // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};
