// BlueprintGeneratedClass BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C
// Size: 0x1064 (Inherited: 0xfe1)
struct ABP_WPN_Player_Halberd_Thunderblade_C : ABP_WPN_Player_Halberd_Base_C {
	char pad_FE1[0x7]; // 0xfe1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfe8(0x08)
	struct UParticleSystemComponent* P_Electrified_Halberd_Base; // 0xff0(0x08)
	struct USceneComponent* Scene; // 0xff8(0x08)
	bool ElectricityActive; // 0x1000(0x01)
	char pad_1001[0x7]; // 0x1001(0x07)
	struct TArray<struct AActor*> UpcomingElectrifiedEnemies; // 0x1008(0x10)
	struct AActor* PendingElectrifiedActor; // 0x1018(0x08)
	struct AActor* PreviousElectrifiedActor; // 0x1020(0x08)
	float TimeBetweenLightningJump; // 0x1028(0x04)
	float LightningDamageFromJump; // 0x102c(0x04)
	struct FTimerHandle ElectricityDisableTimer; // 0x1030(0x08)
	float ElectricityDisableTime; // 0x1038(0x04)
	char pad_103C[0x4]; // 0x103c(0x04)
	struct ABP_TRI_Halberd_Electric_C* CauseTrigger; // 0x1040(0x08)
	bool ChainLightningPerformed; // 0x1048(0x01)
	char pad_1049[0x7]; // 0x1049(0x07)
	struct AS_PlayerController* PlayerController; // 0x1050(0x08)
	int32_t ChainLightningJumps; // 0x1058(0x04)
	float ChainLightningDamage; // 0x105c(0x04)
	float ChainLightningJumpDistance; // 0x1060(0x04)

	void OnCriticalDamage(float RandRoll, float normalDamage, struct FHitResult HitResult, struct AActor* DamagedActor, struct AS_CharacterBase* causeCharacter, enum class ES_TriggerType triggerType, float CriticalDamage); // Function BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C.OnCriticalDamage // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool HasHeroAmmo(); // Function BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C.HasHeroAmmo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void FindChainTargets(struct AActor* DamageDealer, struct AActor* InitialTarget, int32_t NumberTargets, float LightningJumpDistance); // Function BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C.FindChainTargets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ElectrifyTarget(); // Function BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C.ElectrifyTarget // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetElectricity(bool IsActive); // Function BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C.SetElectricity // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnAttack(enum class ES_TriggerType triggerType, enum class ES_AttackEvent attackEvent); // Function BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C.OnAttack // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ElectricityTimeOut(); // Function BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C.ElectricityTimeOut // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HitEnemy(struct AActor* DamagedActor, float UnmodifiedDamageAmount, float ArmorDamageAmount, float HealthDamageAmount, struct FDamageEvent DamageEvent, struct AActor* CauseActor, char DamageModifiersApplied, bool Critical); // Function BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C.HitEnemy // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ItemAdded(struct FS_ItemState ItemState); // Function BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C.ItemAdded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CrossServerHitEnemy(struct AActor* DamagedActor, struct AActor* CauseActor); // Function BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C.CrossServerHitEnemy // (Net|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_WPN_Player_Halberd_Thunderblade(int32_t EntryPoint); // Function BP_WPN_Player_Halberd_Thunderblade.BP_WPN_Player_Halberd_Thunderblade_C.ExecuteUbergraph_BP_WPN_Player_Halberd_Thunderblade // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

