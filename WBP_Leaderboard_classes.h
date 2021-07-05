// WidgetBlueprintGeneratedClass WBP_Leaderboard.WBP_Leaderboard_C
// Size: 0x4d0 (Inherited: 0x4b8)
struct UWBP_Leaderboard_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWBP_Scoreboard_C* Scoreboard; // 0x4c0(0x08)
	struct UWBP_ScoreboardHeaders_C* WBP_ScoreboardHeaders; // 0x4c8(0x08)

	void NotifyWidgetAddedToNavStack_BP(); // Function WBP_Leaderboard.WBP_Leaderboard_C.NotifyWidgetAddedToNavStack_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyWidgetRemovedFromNavStack_BP(); // Function WBP_Leaderboard.WBP_Leaderboard_C.NotifyWidgetRemovedFromNavStack_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_Leaderboard(int32_t EntryPoint); // Function WBP_Leaderboard.WBP_Leaderboard_C.ExecuteUbergraph_WBP_Leaderboard // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

