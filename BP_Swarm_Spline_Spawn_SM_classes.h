// BlueprintGeneratedClass BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C
// Size: 0x2c9 (Inherited: 0x288)
struct ABP_Swarm_Spline_Spawn_SM_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UParticleSystemComponent* PS_Idle; // 0x290(0x08)
	float Materialize_Materialize_225DC5474C56215B63EB7B88CAC832B7; // 0x298(0x04)
	enum class ETimelineDirection Materialize__Direction_225DC5474C56215B63EB7B88CAC832B7; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Materialize; // 0x2a0(0x08)
	int32_t Number of Meshes; // 0x2a8(0x04)
	struct FLinearColor Item Color; // 0x2ac(0x10)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UParticleSystem* Particle FX; // 0x2c0(0x08)
	bool FX Absolute Rotation; // 0x2c8(0x01)

	void BeginPlayPostStreamingCalledWithNotification(bool StreamingCalled, bool StreamingCalledOut); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.BeginPlayPostStreamingCalledWithNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsFreezing(bool IsFreezing); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.GetIsFreezing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsStarving(bool IsStarving); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.GetIsStarving // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetLastHitByAbiltiyActor(struct AActor* LastHitByAbilityActor); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.GetLastHitByAbiltiyActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetLastHitByAbilityActor(struct AActor* ActorPerformingTheHIt, struct AActor* Actor); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.SetLastHitByAbilityActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetCharacterAbility(bool NewParam); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.GetCharacterAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetGameVars(struct UBP_PlayerCharacterGameVarsTemplate_C* NewParam); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.GetGameVars // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	int32_t GetDataRevision(); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.GetDataRevision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xffff8008e4a10000
	void Materialize__FinishedFunc(); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.Materialize__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Materialize__UpdateFunc(); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.Materialize__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void FreedFromCocoon(); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.FreedFromCocoon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GearUpgrade(struct USkeletalMesh* New Skeletal Mesh, struct FActiveGameplayEffectHandle Gameplay Effect); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.GearUpgrade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BankingFX(); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.BankingFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void 1upFX(); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.1upFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void TimesUp(); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.TimesUp // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_Swarm_Spline_Spawn_SM(int32_t EntryPoint); // Function BP_Swarm_Spline_Spawn_SM.BP_Swarm_Spline_Spawn_SM_C.ExecuteUbergraph_BP_Swarm_Spline_Spawn_SM // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

