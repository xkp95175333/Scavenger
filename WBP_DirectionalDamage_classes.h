// WidgetBlueprintGeneratedClass WBP_DirectionalDamage.WBP_DirectionalDamage_C
// Size: 0x4d4 (Inherited: 0x4b8)
struct UWBP_DirectionalDamage_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct TArray<struct UWBP_DamageIndicator_C*> Indicators; // 0x4c0(0x10)
	int32_t MaxIndicators; // 0x4d0(0x04)

	void DestroyAllIndicators(); // Function WBP_DirectionalDamage.WBP_DirectionalDamage_C.DestroyAllIndicators // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnDamageTaken(struct AActor* Attacked, struct AActor* Attacker, float ArmorDamage, float HealthDamage); // Function WBP_DirectionalDamage.WBP_DirectionalDamage_C.OnDamageTaken // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Remove Indicator(struct UWBP_DamageIndicator_C* Indicator); // Function WBP_DirectionalDamage.WBP_DirectionalDamage_C.Remove Indicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnHit(struct FVector AttackerPos, enum class ES_StatType StatType); // Function WBP_DirectionalDamage.WBP_DirectionalDamage_C.OnHit // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnChangedFocusedCharacterPawn(struct APawn* oldPawn, struct APawn* NewPawn); // Function WBP_DirectionalDamage.WBP_DirectionalDamage_C.OnChangedFocusedCharacterPawn // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_DirectionalDamage.WBP_DirectionalDamage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnPreTakePointDamage(struct AActor* DamagedActor, float UnmodifiedDamageAmount, float ArmorDamageAmount, float HealthDamageAmount, struct FPointDamageEvent PointDamageEvent, struct FHitResult HitResult, struct AActor* CauseActor, char DamageModifiersApplied, bool Critical); // Function WBP_DirectionalDamage.WBP_DirectionalDamage_C.OnPreTakePointDamage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_DirectionalDamage(int32_t EntryPoint); // Function WBP_DirectionalDamage.WBP_DirectionalDamage_C.ExecuteUbergraph_WBP_DirectionalDamage // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

