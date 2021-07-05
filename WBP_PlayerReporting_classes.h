// WidgetBlueprintGeneratedClass WBP_PlayerReporting.WBP_PlayerReporting_C
// Size: 0x770 (Inherited: 0x740)
struct UWBP_PlayerReporting_C : US_WidgetPlayerReporting {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x740(0x08)
	struct UImage* Image_51; // 0x748(0x08)
	struct US_RichTextBlock* PlayerSelectText; // 0x750(0x08)
	struct US_RichTextBlock* ReportReasonText; // 0x758(0x08)
	struct US_RichTextBlock* Title; // 0x760(0x08)
	struct UWBP_GenericDialogueBoxContainer_C* WBP_GenericDialogueBoxContainer; // 0x768(0x08)

	void NotifyMenuInputPressed_BP(enum class ES_GameInputActionType ActionType); // Function WBP_PlayerReporting.WBP_PlayerReporting_C.NotifyMenuInputPressed_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_PlayerReporting(int32_t EntryPoint); // Function WBP_PlayerReporting.WBP_PlayerReporting_C.ExecuteUbergraph_WBP_PlayerReporting // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

