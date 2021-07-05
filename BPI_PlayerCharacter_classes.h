// BlueprintGeneratedClass BPI_PlayerCharacter.BPI_PlayerCharacter_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_PlayerCharacter_C : UInterface {

	void 1upFX(); // Function BPI_PlayerCharacter.BPI_PlayerCharacter_C.1upFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BeginPlayPostStreamingCalledWithNotification(bool StreamingCalled, bool StreamingCalledOut); // Function BPI_PlayerCharacter.BPI_PlayerCharacter_C.BeginPlayPostStreamingCalledWithNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BankingFX(); // Function BPI_PlayerCharacter.BPI_PlayerCharacter_C.BankingFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GearUpgrade(struct USkeletalMesh* New Skeletal Mesh, struct FActiveGameplayEffectHandle Gameplay Effect); // Function BPI_PlayerCharacter.BPI_PlayerCharacter_C.GearUpgrade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsFreezing(bool IsFreezing); // Function BPI_PlayerCharacter.BPI_PlayerCharacter_C.GetIsFreezing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsStarving(bool IsStarving); // Function BPI_PlayerCharacter.BPI_PlayerCharacter_C.GetIsStarving // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetLastHitByAbiltiyActor(struct AActor* LastHitByAbilityActor); // Function BPI_PlayerCharacter.BPI_PlayerCharacter_C.GetLastHitByAbiltiyActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetLastHitByAbilityActor(struct AActor* ActorPerformingTheHIt, struct AActor* Actor); // Function BPI_PlayerCharacter.BPI_PlayerCharacter_C.SetLastHitByAbilityActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetCharacterAbility(bool NewParam); // Function BPI_PlayerCharacter.BPI_PlayerCharacter_C.GetCharacterAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void FreedFromCocoon(); // Function BPI_PlayerCharacter.BPI_PlayerCharacter_C.FreedFromCocoon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetGameVars(struct UBP_PlayerCharacterGameVarsTemplate_C* NewParam); // Function BPI_PlayerCharacter.BPI_PlayerCharacter_C.GetGameVars // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

