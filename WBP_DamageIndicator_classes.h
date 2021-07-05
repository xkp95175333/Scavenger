// WidgetBlueprintGeneratedClass WBP_DamageIndicator.WBP_DamageIndicator_C
// Size: 0x530 (Inherited: 0x4b8)
struct UWBP_DamageIndicator_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* Shrink; // 0x4c0(0x08)
	struct UWidgetAnimation* FadeRedToInvisible; // 0x4c8(0x08)
	struct UImage* IMG_Indicator; // 0x4d0(0x08)
	float TotalLifetime; // 0x4d8(0x04)
	float CurrentLifetime; // 0x4dc(0x04)
	struct APawn* Attacker; // 0x4e0(0x08)
	struct FRotator InitialRotation; // 0x4e8(0x0c)
	int32_t ArrayLocation; // 0x4f4(0x04)
	struct FVector AttackLocation; // 0x4f8(0x0c)
	char pad_504[0x4]; // 0x504(0x04)
	struct AS_PlayerController* CachedPlayerController; // 0x508(0x08)
	struct FLinearColor IndicatorTint; // 0x510(0x10)
	float FrameTime; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct UWBP_DirectionalDamage_C* DirectionalDamage; // 0x528(0x08)

	void SetTint(struct FLinearColor Color); // Function WBP_DamageIndicator.WBP_DamageIndicator_C.SetTint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetCachedPlayerController(struct AS_PlayerController* Player Controller); // Function WBP_DamageIndicator.WBP_DamageIndicator_C.GetCachedPlayerController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetAttackerLocation(struct FVector AttackerPos); // Function WBP_DamageIndicator.WBP_DamageIndicator_C.SetAttackerLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_DamageIndicator.WBP_DamageIndicator_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_DamageIndicator.WBP_DamageIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_DamageIndicator(int32_t EntryPoint); // Function WBP_DamageIndicator.WBP_DamageIndicator_C.ExecuteUbergraph_WBP_DamageIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

