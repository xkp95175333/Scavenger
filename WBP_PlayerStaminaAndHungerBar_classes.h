// WidgetBlueprintGeneratedClass WBP_PlayerStaminaAndHungerBar.WBP_PlayerStaminaAndHungerBar_C
// Size: 0x1220 (Inherited: 0x508)
struct UWBP_PlayerStaminaAndHungerBar_C : US_WidgetPlayerStaminaAndHungerBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UWidgetAnimation* FlashCriticalStamina; // 0x510(0x08)
	struct US_RichTextBlock* S_RichTextBlock_205; // 0x518(0x08)
	struct FProgressBarStyle LowStaminaBarStyle; // 0x520(0x1a0)
	struct FProgressBarStyle CriticalHungerBarStyle; // 0x6c0(0x1a0)
	struct FProgressBarStyle CriticalStaminaRecoveryBarStyle; // 0x860(0x1a0)
	struct FProgressBarStyle DefaultStaminaRecoveryBarStyle; // 0xa00(0x1a0)
	struct FProgressBarStyle DefaultHungerBarStyle; // 0xba0(0x1a0)
	struct FProgressBarStyle DefaultStaminaBarStyle; // 0xd40(0x1a0)
	struct FProgressBarStyle LowHungerRecoveryNew; // 0xee0(0x1a0)
	struct FProgressBarStyle LowStaminaBarStyleNew; // 0x1080(0x1a0)

	void StaminaThresholdEvent_BP(enum class ES_StaminaThresholdEvent staminaThesholdEventType, float StaminaPercentage); // Function WBP_PlayerStaminaAndHungerBar.WBP_PlayerStaminaAndHungerBar_C.StaminaThresholdEvent_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void StaminaChangeEvent_BP(enum class ES_StaminaChangeEvent staminaChangeEventType, float StaminaPercentage); // Function WBP_PlayerStaminaAndHungerBar.WBP_PlayerStaminaAndHungerBar_C.StaminaChangeEvent_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDead(); // Function WBP_PlayerStaminaAndHungerBar.WBP_PlayerStaminaAndHungerBar_C.SetDead // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_PlayerStaminaAndHungerBar(int32_t EntryPoint); // Function WBP_PlayerStaminaAndHungerBar.WBP_PlayerStaminaAndHungerBar_C.ExecuteUbergraph_WBP_PlayerStaminaAndHungerBar // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

