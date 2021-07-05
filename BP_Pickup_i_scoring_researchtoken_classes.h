// BlueprintGeneratedClass BP_Pickup_i_scoring_researchtoken.BP_Pickup_i_scoring_researchtoken_C
// Size: 0x658 (Inherited: 0x5d8)
struct ABP_Pickup_i_scoring_researchtoken_C : AS_ItemPickup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d8(0x08)
	struct UBP_AutoPing_LooseSample_C* BP_AutoPing_LooseSample; // 0x5e0(0x08)
	float Expiry; // 0x5e8(0x04)
	float blinkDur; // 0x5ec(0x04)
	struct ABP_Swarm_Spline_Spawn_SM_C* Idle FX; // 0x5f0(0x08)
	struct FLinearColor Item Color; // 0x5f8(0x10)
	struct TMap<int32_t, struct UParticleSystem*> IdleFX; // 0x608(0x50)

	void SetSize(int32_t SizeIndex); // Function BP_Pickup_i_scoring_researchtoken.BP_Pickup_i_scoring_researchtoken_C.SetSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_Pickup_i_scoring_researchtoken.BP_Pickup_i_scoring_researchtoken_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Pending Destruction(); // Function BP_Pickup_i_scoring_researchtoken.BP_Pickup_i_scoring_researchtoken_C.Pending Destruction // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_Pickup_i_scoring_researchtoken.BP_Pickup_i_scoring_researchtoken_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void blink(); // Function BP_Pickup_i_scoring_researchtoken.BP_Pickup_i_scoring_researchtoken_C.blink // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetLifetimeTimer(); // Function BP_Pickup_i_scoring_researchtoken.BP_Pickup_i_scoring_researchtoken_C.SetLifetimeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void StartMeshDestruction(); // Function BP_Pickup_i_scoring_researchtoken.BP_Pickup_i_scoring_researchtoken_C.StartMeshDestruction // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveDestroyed(); // Function BP_Pickup_i_scoring_researchtoken.BP_Pickup_i_scoring_researchtoken_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_Pickup_i_scoring_researchtoken(int32_t EntryPoint); // Function BP_Pickup_i_scoring_researchtoken.BP_Pickup_i_scoring_researchtoken_C.ExecuteUbergraph_BP_Pickup_i_scoring_researchtoken // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

