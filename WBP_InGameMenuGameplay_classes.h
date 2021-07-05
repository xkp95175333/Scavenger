// WidgetBlueprintGeneratedClass WBP_InGameMenuGameplay.WBP_InGameMenuGameplay_C
// Size: 0x710 (Inherited: 0x6d0)
struct UWBP_InGameMenuGameplay_C : US_UMGInGameGameplayMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6d0(0x08)
	struct UWidgetAnimation* TakeDamage; // 0x6d8(0x08)
	struct UWBP_CraftingScreen_C* WBP_Crafting_1; // 0x6e0(0x08)
	struct UWBP_EarlyAccessBadge_C* WBP_EarlyAccessBadge; // 0x6e8(0x08)
	struct UWBP_Inventory_C* WBP_Inventory_C_1; // 0x6f0(0x08)
	struct UWBP_Leaderboard_C* WBP_Leaderboard; // 0x6f8(0x08)
	struct UWBP_Map_C* WBP_Map; // 0x700(0x08)
	struct UWBP_SquadMenu_C* WBP_SquadMenu; // 0x708(0x08)

	void ChangeCurrentPage(struct FName PageName); // Function WBP_InGameMenuGameplay.WBP_InGameMenuGameplay_C.ChangeCurrentPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_InGameMenuGameplay.WBP_InGameMenuGameplay_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyPageChange(struct FName PageName); // Function WBP_InGameMenuGameplay.WBP_InGameMenuGameplay_C.NotifyPageChange // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOnOpen(); // Function WBP_InGameMenuGameplay.WBP_InGameMenuGameplay_C.NotifyOnOpen // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOnClose(); // Function WBP_InGameMenuGameplay.WBP_InGameMenuGameplay_C.NotifyOnClose // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOnRequestClose(); // Function WBP_InGameMenuGameplay.WBP_InGameMenuGameplay_C.NotifyOnRequestClose // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_InGameMenuGameplay(int32_t EntryPoint); // Function WBP_InGameMenuGameplay.WBP_InGameMenuGameplay_C.ExecuteUbergraph_WBP_InGameMenuGameplay // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

