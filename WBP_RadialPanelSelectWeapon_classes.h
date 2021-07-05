// WidgetBlueprintGeneratedClass WBP_RadialPanelSelectWeapon.WBP_RadialPanelSelectWeapon_C
// Size: 0x590 (Inherited: 0x558)
struct UWBP_RadialPanelSelectWeapon_C : US_WidgetRadialPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UHorizontalBox* ActivateTooltip; // 0x560(0x08)
	struct UImage* Image_2; // 0x568(0x08)
	struct UInvalidationBox* InvalidationBox_15; // 0x570(0x08)
	struct US_RichTextBlock* S_RichTextBlock; // 0x578(0x08)
	struct US_RichTextBlock* S_RichTextBlock_58; // 0x580(0x08)
	struct US_RichTextBlock* S_RichTextBlock_102; // 0x588(0x08)

	void NotifyInputAngleChanged(float Angle); // Function WBP_RadialPanelSelectWeapon.WBP_RadialPanelSelectWeapon_C.NotifyInputAngleChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCurrentSelectionIndexChanged(int32_t oldSelectionIndex, int32_t newSelectionIndex); // Function WBP_RadialPanelSelectWeapon.WBP_RadialPanelSelectWeapon_C.NotifyCurrentSelectionIndexChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyNumberOfItemsChanged(int32_t numberOfItems); // Function WBP_RadialPanelSelectWeapon.WBP_RadialPanelSelectWeapon_C.NotifyNumberOfItemsChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_RadialPanelSelectWeapon(int32_t EntryPoint); // Function WBP_RadialPanelSelectWeapon.WBP_RadialPanelSelectWeapon_C.ExecuteUbergraph_WBP_RadialPanelSelectWeapon // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

