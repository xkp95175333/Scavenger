// BlueprintGeneratedClass BP_PROJ_OutlanderAR.BP_PROJ_OutlanderAR_C
// Size: 0x4bd (Inherited: 0x490)
struct ABP_PROJ_OutlanderAR_C : ABP_PROJ_Rifle_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FVector CurrentPosition_1; // 0x498(0x0c)
	struct FVector PreviousPosition_1; // 0x4a4(0x0c)
	float Projectile Width_1; // 0x4b0(0x04)
	float Projectile Width Min_1; // 0x4b4(0x04)
	float Projectile Width Max_1; // 0x4b8(0x04)
	bool Has Colided_1; // 0x4bc(0x01)

	void ReceiveBeginPlay(); // Function BP_PROJ_OutlanderAR.BP_PROJ_OutlanderAR_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_PROJ_OutlanderAR.BP_PROJ_OutlanderAR_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnImpactWithLandscape(struct FHitResult ImpactResult, float SnowDepth); // Function BP_PROJ_OutlanderAR.BP_PROJ_OutlanderAR_C.OnImpactWithLandscape // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnImpact(struct FHitResult ImpactResult); // Function BP_PROJ_OutlanderAR.BP_PROJ_OutlanderAR_C.OnImpact // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_PROJ_OutlanderAR(int32_t EntryPoint); // Function BP_PROJ_OutlanderAR.BP_PROJ_OutlanderAR_C.ExecuteUbergraph_BP_PROJ_OutlanderAR // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

