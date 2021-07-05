// WidgetBlueprintGeneratedClass WBP_XPBar.WBP_XPBar_C
// Size: 0x590 (Inherited: 0x4b8)
struct UWBP_XPBar_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UBorder* Border_XPBlock; // 0x4c0(0x08)
	struct UImage* bottomline_image_2; // 0x4c8(0x08)
	struct UBorder* Fill; // 0x4d0(0x08)
	struct UImage* negativebarfill_image; // 0x4d8(0x08)
	struct UImage* negativebarfill_image_2; // 0x4e0(0x08)
	struct UImage* pip_left_image; // 0x4e8(0x08)
	struct UImage* pip_right_image; // 0x4f0(0x08)
	struct URetainerBox* RetainerBox_1; // 0x4f8(0x08)
	struct US_RichTextBlock* RichTextPlayerLevel; // 0x500(0x08)
	struct US_RichTextBlock* RichTextXPAmount; // 0x508(0x08)
	struct UImage* rightedge_image; // 0x510(0x08)
	struct US_UMGProgressBar* XPBar; // 0x518(0x08)
	struct FTimerHandle TickUpDataHandle; // 0x520(0x08)
	int32_t CurrentXP; // 0x528(0x04)
	float ActiveTimer; // 0x52c(0x04)
	struct AS_PlayerCharacter* CachedPlayerCharacter; // 0x530(0x08)
	struct AS_PlayerController* CachedPlayerController; // 0x538(0x08)
	bool bXPBarIsVisible; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	int32_t LastXP; // 0x544(0x04)
	struct FTimerHandle BindTimer; // 0x548(0x08)
	float TickUpTime; // 0x550(0x04)
	float TimeToFade; // 0x554(0x04)
	bool MaxLevel; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct FDataTableRowHandle CurrentLevelTextHandle; // 0x560(0x10)
	struct FDataTableRowHandle interfaceColorHandle; // 0x570(0x10)
	struct FDataTableRowHandle XPTextHandle; // 0x580(0x10)

	void HandleOnCurrentXpChanged(int32_t CurrentXP); // Function WBP_XPBar.WBP_XPBar_C.HandleOnCurrentXpChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleOnLevelUp(int32_t CurrentXPLevel); // Function WBP_XPBar.WBP_XPBar_C.HandleOnLevelUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateXPCount(float CurrentPercentage); // Function WBP_XPBar.WBP_XPBar_C.UpdateXPCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event BindEvents(); // Function WBP_XPBar.WBP_XPBar_C.Event BindEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_XPBar.WBP_XPBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__XPBar_K2Node_ComponentBoundEvent_1_S_OnBarUpdated__DelegateSignature(float CurrentPercentage); // Function WBP_XPBar.WBP_XPBar_C.BndEvt__XPBar_K2Node_ComponentBoundEvent_1_S_OnBarUpdated__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyOwningPlayerPawnChanged_BP(struct APawn* oldPawn, struct APawn* NewPawn); // Function WBP_XPBar.WBP_XPBar_C.NotifyOwningPlayerPawnChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_XPBar(int32_t EntryPoint); // Function WBP_XPBar.WBP_XPBar_C.ExecuteUbergraph_WBP_XPBar // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

