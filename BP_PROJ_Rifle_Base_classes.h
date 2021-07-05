// BlueprintGeneratedClass BP_PROJ_Rifle_Base.BP_PROJ_Rifle_Base_C
// Size: 0x490 (Inherited: 0x484)
struct ABP_PROJ_Rifle_Base_C : ABP_PROJ_ProjectileBase_C {
	char pad_484[0x4]; // 0x484(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)

	void ReceiveBeginPlay(); // Function BP_PROJ_Rifle_Base.BP_PROJ_Rifle_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_PROJ_Rifle_Base.BP_PROJ_Rifle_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnImpactWithLandscape(struct FHitResult ImpactResult, float SnowDepth); // Function BP_PROJ_Rifle_Base.BP_PROJ_Rifle_Base_C.OnImpactWithLandscape // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnImpact(struct FHitResult ImpactResult); // Function BP_PROJ_Rifle_Base.BP_PROJ_Rifle_Base_C.OnImpact // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_PROJ_Rifle_Base(int32_t EntryPoint); // Function BP_PROJ_Rifle_Base.BP_PROJ_Rifle_Base_C.ExecuteUbergraph_BP_PROJ_Rifle_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

