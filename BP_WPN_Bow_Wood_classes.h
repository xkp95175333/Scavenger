// BlueprintGeneratedClass BP_WPN_Bow_Wood.BP_WPN_Bow_Wood_C
// Size: 0x1010 (Inherited: 0xfe1)
struct ABP_WPN_Bow_Wood_C : ABP_WPN_WeaponBase_C {
	char pad_FE1[0x7]; // 0xfe1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfe8(0x08)
	struct UParticleSystemComponent* Arrow_VFX; // 0xff0(0x08)
	struct USC_SkeletalMeshComponent* Arrow; // 0xff8(0x08)
	float Timeline_0_EffectAlpha_640BB58A47E5FE1E630C2C94F83FB755; // 0x1000(0x04)
	enum class ETimelineDirection Timeline_0__Direction_640BB58A47E5FE1E630C2C94F83FB755; // 0x1004(0x01)
	char pad_1005[0x3]; // 0x1005(0x03)
	struct UTimelineComponent* Timeline_1; // 0x1008(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_WPN_Bow_Wood.BP_WPN_Bow_Wood_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Timeline_0__UpdateFunc(); // Function BP_WPN_Bow_Wood.BP_WPN_Bow_Wood_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_WPN_Bow_Wood.BP_WPN_Bow_Wood_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Handle Arrow Visibility(enum class ES_TriggerType triggerType, enum class ES_AttackEvent attackEvent); // Function BP_WPN_Bow_Wood.BP_WPN_Bow_Wood_C.Handle Arrow Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_WPN_Bow_Wood.BP_WPN_Bow_Wood_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_WPN_Bow_Wood(int32_t EntryPoint); // Function BP_WPN_Bow_Wood.BP_WPN_Bow_Wood_C.ExecuteUbergraph_BP_WPN_Bow_Wood // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

