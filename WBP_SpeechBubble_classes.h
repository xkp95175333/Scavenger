// WidgetBlueprintGeneratedClass WBP_SpeechBubble.WBP_SpeechBubble_C
// Size: 0x541 (Inherited: 0x510)
struct UWBP_SpeechBubble_C : US_WidgetSpeechBubble {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct UHorizontalBox* HorizontalBox_Icons; // 0x518(0x08)
	struct UImage* SpeechBubble; // 0x520(0x08)
	int32_t MaxIcons; // 0x528(0x04)
	int32_t CurrentIcons; // 0x52c(0x04)
	float Cold; // 0x530(0x04)
	float Hunger; // 0x534(0x04)
	float Infection; // 0x538(0x04)
	float LowStatThreshold; // 0x53c(0x04)
	bool IsDead; // 0x540(0x01)

	void ClearIcons(); // Function WBP_SpeechBubble.WBP_SpeechBubble_C.ClearIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CheckIfShouldShowWarning(float CurrentStat, enum class ES_StatType StatType); // Function WBP_SpeechBubble.WBP_SpeechBubble_C.CheckIfShouldShowWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CheckIfShouldBeVisible(); // Function WBP_SpeechBubble.WBP_SpeechBubble_C.CheckIfShouldBeVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetStatValues(float SetStatValue, enum class ES_StatType StatType); // Function WBP_SpeechBubble.WBP_SpeechBubble_C.SetStatValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateIcons(); // Function WBP_SpeechBubble.WBP_SpeechBubble_C.UpdateIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RemoveStatusIcon(enum class ES_StatType StatType); // Function WBP_SpeechBubble.WBP_SpeechBubble_C.RemoveStatusIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AddStatusIcon(enum class ES_StatType StatType); // Function WBP_SpeechBubble.WBP_SpeechBubble_C.AddStatusIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_SpeechBubble.WBP_SpeechBubble_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RemoveStatusIcon_BP(enum class ES_StatType StatType); // Function WBP_SpeechBubble.WBP_SpeechBubble_C.RemoveStatusIcon_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AddStatusIcon_BP(enum class ES_StatType StatType); // Function WBP_SpeechBubble.WBP_SpeechBubble_C.AddStatusIcon_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_SpeechBubble(int32_t EntryPoint); // Function WBP_SpeechBubble.WBP_SpeechBubble_C.ExecuteUbergraph_WBP_SpeechBubble // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

