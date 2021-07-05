// WidgetBlueprintGeneratedClass WBP_ShotBlocked.WBP_ShotBlocked_C
// Size: 0x4d8 (Inherited: 0x4b8)
struct UWBP_ShotBlocked_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UImage* ShotBlockedImage; // 0x4c0(0x08)
	struct UCurveFloat* DistanceFloatCurve; // 0x4c8(0x08)
	struct APawn* NewVar_1; // 0x4d0(0x08)

	void BP_HandleCharacterShotUnblocked(enum class ES_TriggerType triggerType); // Function WBP_ShotBlocked.WBP_ShotBlocked_C.BP_HandleCharacterShotUnblocked // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOwningPlayerPawnChanged_BP(struct APawn* oldPawn, struct APawn* NewPawn); // Function WBP_ShotBlocked.WBP_ShotBlocked_C.NotifyOwningPlayerPawnChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_HandleCharacterShotBlocked(enum class ES_TriggerType triggerType, struct FVector BlockedLocation); // Function WBP_ShotBlocked.WBP_ShotBlocked_C.BP_HandleCharacterShotBlocked // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_ShotBlocked(int32_t EntryPoint); // Function WBP_ShotBlocked.WBP_ShotBlocked_C.ExecuteUbergraph_WBP_ShotBlocked // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

