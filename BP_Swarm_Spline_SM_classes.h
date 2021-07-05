// BlueprintGeneratedClass BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C
// Size: 0x2f9 (Inherited: 0x288)
struct ABP_Swarm_Spline_SM_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UParticleSystemComponent* PS_Idle; // 0x290(0x08)
	struct USplineComponent* Spline1; // 0x298(0x08)
	float Dematerialize_MaterialFade_BBA871F64E338C522041F6AB9C03C021; // 0x2a0(0x04)
	float Dematerialize_Alpha_BBA871F64E338C522041F6AB9C03C021; // 0x2a4(0x04)
	enum class ETimelineDirection Dematerialize__Direction_BBA871F64E338C522041F6AB9C03C021; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UTimelineComponent* Dematerialize; // 0x2b0(0x08)
	float Scrap Search Radius; // 0x2b8(0x04)
	struct FVector PlayerPosition; // 0x2bc(0x0c)
	int32_t Number of Meshes; // 0x2c8(0x04)
	struct FLinearColor Item Color; // 0x2cc(0x10)
	float Alpha; // 0x2dc(0x04)
	struct USkeletalMeshComponent* Player Mesh; // 0x2e0(0x08)
	struct FName Player Mesh Socket; // 0x2e8(0x08)
	struct UParticleSystem* Particle FX; // 0x2f0(0x08)
	bool FX Absolute Rotation; // 0x2f8(0x01)

	void BeginPlayPostStreamingCalledWithNotification(bool StreamingCalled, bool StreamingCalledOut); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.BeginPlayPostStreamingCalledWithNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsFreezing(bool IsFreezing); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.GetIsFreezing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsStarving(bool IsStarving); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.GetIsStarving // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetLastHitByAbiltiyActor(struct AActor* LastHitByAbilityActor); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.GetLastHitByAbiltiyActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetLastHitByAbilityActor(struct AActor* ActorPerformingTheHIt, struct AActor* Actor); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.SetLastHitByAbilityActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetCharacterAbility(bool NewParam); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.GetCharacterAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetGameVars(struct UBP_PlayerCharacterGameVarsTemplate_C* NewParam); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.GetGameVars // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	int32_t GetDataRevision(); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.GetDataRevision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xffff8008e4a10000
	void Dematerialize__FinishedFunc(); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.Dematerialize__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Dematerialize__UpdateFunc(); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.Dematerialize__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Dematerialize__CollideEvent__EventFunc(); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.Dematerialize__CollideEvent__EventFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void FreedFromCocoon(); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.FreedFromCocoon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GearUpgrade(struct USkeletalMesh* New Skeletal Mesh, struct FActiveGameplayEffectHandle Gameplay Effect); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.GearUpgrade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BankingFX(); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.BankingFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void 1upFX(); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.1upFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_Swarm_Spline_SM(int32_t EntryPoint); // Function BP_Swarm_Spline_SM.BP_Swarm_Spline_SM_C.ExecuteUbergraph_BP_Swarm_Spline_SM // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

