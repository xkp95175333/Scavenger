// BlueprintGeneratedClass GC_DamageType_Blind.GC_DamageType_Blind_C
// Size: 0x558 (Inherited: 0x530)
struct AGC_DamageType_Blind_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x538(0x08)
	float FlashBirghtness_Brightness_3B57C9D74A3E326C77D2AE8F40FE56D6; // 0x540(0x04)
	enum class ETimelineDirection FlashBirghtness__Direction_3B57C9D74A3E326C77D2AE8F40FE56D6; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	struct UTimelineComponent* FlashBirghtness; // 0x548(0x08)
	struct UMaterialInstanceDynamic* PP_MID; // 0x550(0x08)

	void FlashBirghtness__FinishedFunc(); // Function GC_DamageType_Blind.GC_DamageType_Blind_C.FlashBirghtness__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void FlashBirghtness__UpdateFunc(); // Function GC_DamageType_Blind.GC_DamageType_Blind_C.FlashBirghtness__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_DamageType_Blind.GC_DamageType_Blind_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function GC_DamageType_Blind.GC_DamageType_Blind_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_DamageType_Blind(int32_t EntryPoint); // Function GC_DamageType_Blind.GC_DamageType_Blind_C.ExecuteUbergraph_GC_DamageType_Blind // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

