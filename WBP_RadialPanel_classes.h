// WidgetBlueprintGeneratedClass WBP_RadialPanel.WBP_RadialPanel_C
// Size: 0x591 (Inherited: 0x558)
struct UWBP_RadialPanel_C : US_WidgetRadialPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UHorizontalBox* ActivateTooltip; // 0x560(0x08)
	struct UImage* Image_2; // 0x568(0x08)
	struct UInvalidationBox* InvalidationBox_15; // 0x570(0x08)
	struct US_RichTextBlock* S_RichTextBlock; // 0x578(0x08)
	struct US_RichTextBlock* S_RichTextBlock_58; // 0x580(0x08)
	struct UMaterialInstanceDynamic* NewVar_1; // 0x588(0x08)
	enum class ES_EquipmentSlot CurrentQuickItemSlot; // 0x590(0x01)

	void NotifyInputAngleChanged(float Angle); // Function WBP_RadialPanel.WBP_RadialPanel_C.NotifyInputAngleChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCurrentSelectionIndexChanged(int32_t oldSelectionIndex, int32_t newSelectionIndex); // Function WBP_RadialPanel.WBP_RadialPanel_C.NotifyCurrentSelectionIndexChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyNumberOfItemsChanged(int32_t numberOfItems); // Function WBP_RadialPanel.WBP_RadialPanel_C.NotifyNumberOfItemsChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_RadialPanel(int32_t EntryPoint); // Function WBP_RadialPanel.WBP_RadialPanel_C.ExecuteUbergraph_WBP_RadialPanel // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

