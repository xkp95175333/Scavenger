// WidgetBlueprintGeneratedClass WBP_StormCategoryPanel.WBP_StormCategoryPanel_C
// Size: 0x518 (Inherited: 0x4b8)
struct UWBP_StormCategoryPanel_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* TimerFlash; // 0x4c0(0x08)
	struct UWidgetAnimation* ActivateTimer; // 0x4c8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x4d0(0x08)
	struct US_RichTextBlock* CategoryText; // 0x4d8(0x08)
	struct UHorizontalBox* HorizontalBox_388; // 0x4e0(0x08)
	struct UImage* IconStormImage; // 0x4e8(0x08)
	struct US_RichTextBlock* Timer; // 0x4f0(0x08)
	int32_t CurrentLevel; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
	struct TArray<struct FLinearColor> StormColors; // 0x500(0x10)
	bool TimerActivated; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	float TimerStartValue; // 0x514(0x04)

	void IncreaseStormLevel(); // Function WBP_StormCategoryPanel.WBP_StormCategoryPanel_C.IncreaseStormLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnTimeUntilStormUpgradeValid(float Seconds); // Function WBP_StormCategoryPanel.WBP_StormCategoryPanel_C.Event OnTimeUntilStormUpgradeValid // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnStormCat1(); // Function WBP_StormCategoryPanel.WBP_StormCategoryPanel_C.Event OnStormCat1 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_StormCategoryPanel.WBP_StormCategoryPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnPlayerCharacterSet(struct AS_PlayerCharacter* NewCharacter); // Function WBP_StormCategoryPanel.WBP_StormCategoryPanel_C.Event OnPlayerCharacterSet // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void WidgetAnimationEvt_ActivateTimer_K2Node_WidgetAnimationEvent_2(); // Function WBP_StormCategoryPanel.WBP_StormCategoryPanel_C.WidgetAnimationEvt_ActivateTimer_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void WidgetAnimationEvt_ActivateTimer_K2Node_WidgetAnimationEvent_3(); // Function WBP_StormCategoryPanel.WBP_StormCategoryPanel_C.WidgetAnimationEvt_ActivateTimer_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_StormCategoryPanel.WBP_StormCategoryPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_StormCategoryPanel(int32_t EntryPoint); // Function WBP_StormCategoryPanel.WBP_StormCategoryPanel_C.ExecuteUbergraph_WBP_StormCategoryPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

