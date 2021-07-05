// WidgetBlueprintGeneratedClass WBP_GameplayNavBar.WBP_GameplayNavBar_C
// Size: 0x5b8 (Inherited: 0x580)
struct UWBP_GameplayNavBar_C : US_WidgetNavBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UWBP_CommonScavengerButton_C* CraftingButton; // 0x588(0x08)
	struct UHorizontalBox* CycleButtonIcons; // 0x590(0x08)
	struct UWBP_CommonScavengerButton_C* InventoryButton; // 0x598(0x08)
	struct UWBP_CommonScavengerButton_C* LeaderboardButton; // 0x5a0(0x08)
	struct UWBP_CommonScavengerButton_C* MapButton; // 0x5a8(0x08)
	struct UWBP_CommonScavengerButton_C* SquadButton; // 0x5b0(0x08)

	void NotifyOwningPlayerPawnChanged_BP(struct APawn* oldPawn, struct APawn* NewPawn); // Function WBP_GameplayNavBar.WBP_GameplayNavBar_C.NotifyOwningPlayerPawnChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyInputTypeChanged_BP(bool bUsingGamepad); // Function WBP_GameplayNavBar.WBP_GameplayNavBar_C.NotifyInputTypeChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_GameplayNavBar.WBP_GameplayNavBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateCycleIconVisibility(bool bShowIcons); // Function WBP_GameplayNavBar.WBP_GameplayNavBar_C.UpdateCycleIconVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_GameplayNavBar(int32_t EntryPoint); // Function WBP_GameplayNavBar.WBP_GameplayNavBar_C.ExecuteUbergraph_WBP_GameplayNavBar // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

