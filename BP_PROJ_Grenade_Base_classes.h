// BlueprintGeneratedClass BP_PROJ_Grenade_Base.BP_PROJ_Grenade_Base_C
// Size: 0x562 (Inherited: 0x4e8)
struct ABP_PROJ_Grenade_Base_C : AS_GrenadeProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	struct UAkComponent* AkSound; // 0x4f0(0x08)
	struct UPointLightComponent* PointLight; // 0x4f8(0x08)
	struct UParticleSystemComponent* PS_Grenade_Trail; // 0x500(0x08)
	struct UStaticMeshComponent* GrenadeMesh; // 0x508(0x08)
	struct FS_DialogueContext Grenade VO Context; // 0x510(0x50)
	bool BlockWarningBeep; // 0x560(0x01)
	bool AlertPlayersOnImpact; // 0x561(0x01)

	void FindNearbyCharacterForVO(struct AS_CharacterBase* AsS Character Base); // Function BP_PROJ_Grenade_Base.BP_PROJ_Grenade_Base_C.FindNearbyCharacterForVO // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnImpact(struct FHitResult ImpactResult); // Function BP_PROJ_Grenade_Base.BP_PROJ_Grenade_Base_C.OnImpact // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_PROJ_Grenade_Base.BP_PROJ_Grenade_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_PROJ_Grenade_Base(int32_t EntryPoint); // Function BP_PROJ_Grenade_Base.BP_PROJ_Grenade_Base_C.ExecuteUbergraph_BP_PROJ_Grenade_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

