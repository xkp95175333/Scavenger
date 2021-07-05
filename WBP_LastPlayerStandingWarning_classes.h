// WidgetBlueprintGeneratedClass WBP_LastPlayerStandingWarning.WBP_LastPlayerStandingWarning_C
// Size: 0x680 (Inherited: 0x640)
struct UWBP_LastPlayerStandingWarning_C : US_UMGHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x640(0x08)
	struct UWidgetAnimation* HiddenWarning; // 0x648(0x08)
	struct UWidgetAnimation* HideWarning; // 0x650(0x08)
	struct UWidgetAnimation* ShowWarning; // 0x658(0x08)
	struct UCanvasPanel* CANVAS_Main; // 0x660(0x08)
	struct US_RichTextBlock* Message; // 0x668(0x08)
	int32_t TeamAliveCount; // 0x670(0x04)
	char pad_674[0x4]; // 0x674(0x04)
	struct FTimerHandle UpdateSurviveTimerHandle; // 0x678(0x08)

	void UpdateSurviveTimer(); // Function WBP_LastPlayerStandingWarning.WBP_LastPlayerStandingWarning_C.UpdateSurviveTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReactToNewLiveCount(int32_t Count); // Function WBP_LastPlayerStandingWarning.WBP_LastPlayerStandingWarning_C.ReactToNewLiveCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetTeamLiveCount(int32_t Count); // Function WBP_LastPlayerStandingWarning.WBP_LastPlayerStandingWarning_C.GetTeamLiveCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_LastPlayerStandingWarning.WBP_LastPlayerStandingWarning_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void On New Live Player Count Event(int32_t newLivePlayerCount); // Function WBP_LastPlayerStandingWarning.WBP_LastPlayerStandingWarning_C.On New Live Player Count Event // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_LastPlayerStandingWarning(int32_t EntryPoint); // Function WBP_LastPlayerStandingWarning.WBP_LastPlayerStandingWarning_C.ExecuteUbergraph_WBP_LastPlayerStandingWarning // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

