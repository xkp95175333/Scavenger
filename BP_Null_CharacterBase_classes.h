// BlueprintGeneratedClass BP_Null_CharacterBase.BP_Null_CharacterBase_C
// Size: 0x2670 (Inherited: 0x2650)
struct ABP_Null_CharacterBase_C : AS_AICharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2650(0x08)
	struct US_StatsComponent* scavenger_stats; // 0x2658(0x08)
	struct UStaticMeshComponent* Sphere; // 0x2660(0x08)
	struct ABP_KeeperInteractable_C* ShardOrChestOrWhatever; // 0x2668(0x08)

	float GetPlayerVsAiDamageMultipler(float defaultMultiplier, struct AS_CharacterBase* causeCharacter); // Function BP_Null_CharacterBase.BP_Null_CharacterBase_C.GetPlayerVsAiDamageMultipler // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void OnRep_ShardOrChestOrWhatever(); // Function BP_Null_CharacterBase.BP_Null_CharacterBase_C.OnRep_ShardOrChestOrWhatever // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void KeeferGotAnOwie(struct AActor* Attkr); // Function BP_Null_CharacterBase.BP_Null_CharacterBase_C.KeeferGotAnOwie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_Null_CharacterBase.BP_Null_CharacterBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void KeeferDamaged(); // Function BP_Null_CharacterBase.BP_Null_CharacterBase_C.KeeferDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NullCharacterHit(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct UDamageType* DamageType, struct AActor* DamageCauser); // Function BP_Null_CharacterBase.BP_Null_CharacterBase_C.NullCharacterHit // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_Null_CharacterBase(int32_t EntryPoint); // Function BP_Null_CharacterBase.BP_Null_CharacterBase_C.ExecuteUbergraph_BP_Null_CharacterBase // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

