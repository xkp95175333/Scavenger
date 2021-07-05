// WidgetBlueprintGeneratedClass WBP_DamageNumber.WBP_DamageNumber_C
// Size: 0x60c (Inherited: 0x5c8)
struct UWBP_DamageNumber_C : US_HUDDamageNumber {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UWidgetAnimation* Animation_Headshot_L; // 0x5d0(0x08)
	struct UWidgetAnimation* Animation_Headshot_R; // 0x5d8(0x08)
	struct UWidgetAnimation* Animation_Headshot; // 0x5e0(0x08)
	struct UWidgetAnimation* Animation_R; // 0x5e8(0x08)
	struct UWidgetAnimation* Animation_L; // 0x5f0(0x08)
	struct UWidgetAnimation* Animation; // 0x5f8(0x08)
	struct URichTextBlock* HealthDamageNumberText; // 0x600(0x08)
	float Duration; // 0x608(0x04)

	void Reset(); // Function WBP_DamageNumber.WBP_DamageNumber_C.Reset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PickAnimation(struct UWidgetAnimation* Animation); // Function WBP_DamageNumber.WBP_DamageNumber_C.PickAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void SetupDamageText(int32_t UnmodifiedAmount, int32_t ArmorDamageAmount, int32_t HealthDamageAmount); // Function WBP_DamageNumber.WBP_DamageNumber_C.SetupDamageText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyInitialized(struct FVector WorldLocation, int32_t UnmodifiedDamageAmount, int32_t ArmorDamageAmount, int32_t HealthDamageAmount, struct US_DamageTypeBase* DamageType, char DamageModifiersApplied, struct FS_PointDamageEvent DamageEvent); // Function WBP_DamageNumber.WBP_DamageNumber_C.NotifyInitialized // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_DamageNumber(int32_t EntryPoint); // Function WBP_DamageNumber.WBP_DamageNumber_C.ExecuteUbergraph_WBP_DamageNumber // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

