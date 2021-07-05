// BlueprintGeneratedClass GC_Ability_StunTrap.GC_Ability_StunTrap_C
// Size: 0x560 (Inherited: 0x530)
struct AGC_Ability_StunTrap_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x538(0x08)
	float FlashBirghtness_Alpha_D2B49B1D47316FD5BC2094B06388D2D6; // 0x540(0x04)
	float FlashBirghtness_Brightness_D2B49B1D47316FD5BC2094B06388D2D6; // 0x544(0x04)
	enum class ETimelineDirection FlashBirghtness__Direction_D2B49B1D47316FD5BC2094B06388D2D6; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct UTimelineComponent* FlashBirghtness; // 0x550(0x08)
	struct UMaterialInstanceDynamic* PP_MID; // 0x558(0x08)

	void FlashBirghtness__FinishedFunc(); // Function GC_Ability_StunTrap.GC_Ability_StunTrap_C.FlashBirghtness__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void FlashBirghtness__UpdateFunc(); // Function GC_Ability_StunTrap.GC_Ability_StunTrap_C.FlashBirghtness__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function GC_Ability_StunTrap.GC_Ability_StunTrap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Ability_StunTrap.GC_Ability_StunTrap_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_Ability_StunTrap(int32_t EntryPoint); // Function GC_Ability_StunTrap.GC_Ability_StunTrap_C.ExecuteUbergraph_GC_Ability_StunTrap // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

