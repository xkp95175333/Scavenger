// WidgetBlueprintGeneratedClass WBP_YouDied.WBP_YouDied_C
// Size: 0x588 (Inherited: 0x530)
struct UWBP_YouDied_C : US_WidgetGameResolutionSubscreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UWidgetAnimation* YouLostAnimation; // 0x538(0x08)
	struct US_RichTextBlock* Text_YouDied; // 0x540(0x08)
	struct UImage* TriangleTransition; // 0x548(0x08)
	struct UImage* YouLostGlow; // 0x550(0x08)
	struct FText YOU LOST; // 0x558(0x18)
	struct FText TEAM ELIMINATED; // 0x570(0x18)

	void NotifyPresentationStarted_BP_2(); // Function WBP_YouDied.WBP_YouDied_C.NotifyPresentationStarted_BP_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySubscreenStepStarted(); // Function WBP_YouDied.WBP_YouDied_C.NotifySubscreenStepStarted // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_YouDied(int32_t EntryPoint); // Function WBP_YouDied.WBP_YouDied_C.ExecuteUbergraph_WBP_YouDied // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

