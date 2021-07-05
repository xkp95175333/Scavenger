// WidgetBlueprintGeneratedClass WBP_AbilityItem.WBP_AbilityItem_C
// Size: 0x538 (Inherited: 0x510)
struct UWBP_AbilityItem_C : US_WidgetAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct URetainerBox* AbilityChargeEffect; // 0x518(0x08)
	struct UImage* Backer; // 0x520(0x08)
	struct UImage* BackerBorder; // 0x528(0x08)
	struct UImage* BackerRarity; // 0x530(0x08)

	void NotifyAbilityReady(bool bInitializing); // Function WBP_AbilityItem.WBP_AbilityItem_C.NotifyAbilityReady // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyAbilityActivated(); // Function WBP_AbilityItem.WBP_AbilityItem_C.NotifyAbilityActivated // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyAbilityEnteredCooldown(); // Function WBP_AbilityItem.WBP_AbilityItem_C.NotifyAbilityEnteredCooldown // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyAbilityActivateFailed(); // Function WBP_AbilityItem.WBP_AbilityItem_C.NotifyAbilityActivateFailed // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_AbilityItem(int32_t EntryPoint); // Function WBP_AbilityItem.WBP_AbilityItem_C.ExecuteUbergraph_WBP_AbilityItem // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

