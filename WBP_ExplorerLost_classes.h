// WidgetBlueprintGeneratedClass WBP_ExplorerLost.WBP_ExplorerLost_C
// Size: 0x690 (Inherited: 0x640)
struct UWBP_ExplorerLost_C : US_WidgetDeathHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x640(0x08)
	struct UWidgetAnimation* ToastFadeIn; // 0x648(0x08)
	struct UImage* Datapoint_PanelGlow; // 0x650(0x08)
	struct UTextBlock* ExplorerLostBlueGlitch; // 0x658(0x08)
	struct UTextBlock* ExplorerLostText; // 0x660(0x08)
	struct US_RichTextBlock* Text_Datapoints; // 0x668(0x08)
	struct UWBP_Datapoint_Counter_C* WBP_Datapoint_Counter; // 0x670(0x08)
	struct UWBP_KilledBy_C* WBP_KilledBy; // 0x678(0x08)
	struct UWBP_RespawnBar_C* WBP_RespawnBar; // 0x680(0x08)
	struct US_ItemData* DroppedDatapointsItemType; // 0x688(0x08)

	void NotifyPresentationStarted_BP(); // Function WBP_ExplorerLost.WBP_ExplorerLost_C.NotifyPresentationStarted_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_ExplorerLost(int32_t EntryPoint); // Function WBP_ExplorerLost.WBP_ExplorerLost_C.ExecuteUbergraph_WBP_ExplorerLost // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

