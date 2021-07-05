// WidgetBlueprintGeneratedClass WBP_InGameHUD.WBP_InGameHUD_C
// Size: 0x1018 (Inherited: 0xff0)
struct UWBP_InGameHUD_C : US_UMGHUDInGame {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xff0(0x08)
	struct UWBP_DirectionalDamage_C* WBP_DirectionalDamage; // 0xff8(0x08)
	struct UWBP_EarlyAccessBadge_C* WBP_EarlyAccessBadge; // 0x1000(0x08)
	struct UWBP_ShotBlocked_C* WBP_ShotBlocked; // 0x1008(0x08)
	struct UWBP_TextChatContainer_C* WBP_TextChatContainer; // 0x1010(0x08)

	void Construct(); // Function WBP_InGameHUD.WBP_InGameHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnNewMatchPhase(enum class EMatchPhase newPhase); // Function WBP_InGameHUD.WBP_InGameHUD_C.OnNewMatchPhase // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnToggleHUD(); // Function WBP_InGameHUD.WBP_InGameHUD_C.Event OnToggleHUD // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyGameStatePointerChanged_BP(struct AS_GameState* GameState); // Function WBP_InGameHUD.WBP_InGameHUD_C.NotifyGameStatePointerChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOnDisplayLocationToast_BP(struct FS_NamedLocationMetadata LocationData); // Function WBP_InGameHUD.WBP_InGameHUD_C.NotifyOnDisplayLocationToast_BP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_InGameHUD(int32_t EntryPoint); // Function WBP_InGameHUD.WBP_InGameHUD_C.ExecuteUbergraph_WBP_InGameHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

