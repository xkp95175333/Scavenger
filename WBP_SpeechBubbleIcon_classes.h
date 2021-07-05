// WidgetBlueprintGeneratedClass WBP_SpeechBubbleIcon.WBP_SpeechBubbleIcon_C
// Size: 0x4d1 (Inherited: 0x4b8)
struct UWBP_SpeechBubbleIcon_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* Pulse; // 0x4c0(0x08)
	struct US_RichTextBlock* Icon; // 0x4c8(0x08)
	enum class ES_StatType StatType; // 0x4d0(0x01)

	void SetUpIcon(enum class ES_StatType StatType); // Function WBP_SpeechBubbleIcon.WBP_SpeechBubbleIcon_C.SetUpIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_SpeechBubbleIcon.WBP_SpeechBubbleIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_SpeechBubbleIcon(int32_t EntryPoint); // Function WBP_SpeechBubbleIcon.WBP_SpeechBubbleIcon_C.ExecuteUbergraph_WBP_SpeechBubbleIcon // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

