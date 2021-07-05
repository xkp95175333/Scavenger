// BlueprintGeneratedClass BP_PROJ_FragGrenade.BP_PROJ_FragGrenade_C
// Size: 0x572 (Inherited: 0x562)
struct ABP_PROJ_FragGrenade_C : ABP_PROJ_Grenade_Base_C {
	char pad_562[0x6]; // 0x562(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	enum class ECollisionChannel NewVar_0_1; // 0x570(0x01)
	enum class ECollisionEnabled CollisionEnabledSetting_1; // 0x571(0x01)

	void OnImpact(struct FHitResult ImpactResult); // Function BP_PROJ_FragGrenade.BP_PROJ_FragGrenade_C.OnImpact // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_PROJ_FragGrenade.BP_PROJ_FragGrenade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_OnExplode(struct UPhysicalMaterial* hitMaterial); // Function BP_PROJ_FragGrenade.BP_PROJ_FragGrenade_C.BP_OnExplode // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_PROJ_FragGrenade(int32_t EntryPoint); // Function BP_PROJ_FragGrenade.BP_PROJ_FragGrenade_C.ExecuteUbergraph_BP_PROJ_FragGrenade // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

