// BlueprintGeneratedClass BP_WPN_WeaponBase.BP_WPN_WeaponBase_C
// Size: 0xfe1 (Inherited: 0xf68)
struct ABP_WPN_WeaponBase_C : AS_WeaponBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf68(0x08)
	bool WantsVOAnnounceReload; // 0xf70(0x01)
	char pad_F71[0xf]; // 0xf71(0x0f)
	struct FTransform HandGrip_L_temp; // 0xf80(0x30)
	struct FTransform ReloadGrip_L_temp; // 0xfb0(0x30)
	bool UseHandGrip_Override_temp; // 0xfe0(0x01)

	void OnWeaponDoAttack(); // Function BP_WPN_WeaponBase.BP_WPN_WeaponBase_C.OnWeaponDoAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_WPN_WeaponBase.BP_WPN_WeaponBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnAttackEvent_Shell_Eject(enum class ES_TriggerType triggerType, enum class ES_AttackEvent attackEvent); // Function BP_WPN_WeaponBase.BP_WPN_WeaponBase_C.OnAttackEvent_Shell_Eject // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnAttackEventForVO(enum class ES_TriggerType triggerType, enum class ES_AttackEvent attackEvent); // Function BP_WPN_WeaponBase.BP_WPN_WeaponBase_C.OnAttackEventForVO // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_WPN_WeaponBase(int32_t EntryPoint); // Function BP_WPN_WeaponBase.BP_WPN_WeaponBase_C.ExecuteUbergraph_BP_WPN_WeaponBase // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

