// WidgetBlueprintGeneratedClass WBP_RespawnBar.WBP_RespawnBar_C
// Size: 0x571 (Inherited: 0x560)
struct UWBP_RespawnBar_C : US_WidgetRespawnBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UWidgetAnimation* AnimateBarIn; // 0x568(0x08)
	bool FadeBarIn; // 0x570(0x01)

	void NotifyTimerRatio_BP(float timeLeftRatio); // Function WBP_RespawnBar.WBP_RespawnBar_C.NotifyTimerRatio_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_RespawnBar.WBP_RespawnBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_RespawnBar(int32_t EntryPoint); // Function WBP_RespawnBar.WBP_RespawnBar_C.ExecuteUbergraph_WBP_RespawnBar // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

