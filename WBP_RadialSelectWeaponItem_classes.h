// WidgetBlueprintGeneratedClass WBP_RadialSelectWeaponItem.WBP_RadialSelectWeaponItem_C
// Size: 0x530 (Inherited: 0x520)
struct UWBP_RadialSelectWeaponItem_C : US_WidgetRadialEquippedItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWidgetAnimation* ScaleItem; // 0x528(0x08)

	void NotifyReceivedFocus(); // Function WBP_RadialSelectWeaponItem.WBP_RadialSelectWeaponItem_C.NotifyReceivedFocus // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyLostFocus(); // Function WBP_RadialSelectWeaponItem.WBP_RadialSelectWeaponItem_C.NotifyLostFocus // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_RadialSelectWeaponItem(int32_t EntryPoint); // Function WBP_RadialSelectWeaponItem.WBP_RadialSelectWeaponItem_C.ExecuteUbergraph_WBP_RadialSelectWeaponItem // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

