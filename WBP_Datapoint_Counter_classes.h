// WidgetBlueprintGeneratedClass WBP_Datapoint_Counter.WBP_Datapoint_Counter_C
// Size: 0x4f8 (Inherited: 0x4b8)
struct UWBP_Datapoint_Counter_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* CounterTrigger-ExplorerLost; // 0x4c0(0x08)
	struct UWidgetAnimation* CounterTrigger-YouDied; // 0x4c8(0x08)
	struct UWidgetAnimation* CounterTrigger-Victory; // 0x4d0(0x08)
	struct US_RichTextBlock* datapoints; // 0x4d8(0x08)
	float Duration; // 0x4e0(0x04)
	int32_t CurrentValue; // 0x4e4(0x04)
	int32_t TargetValue; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct FTimerHandle TickTimer; // 0x4f0(0x08)

	void SequenceEvent__ENTRYPOINTWBP_Datapoint_Counter_2(); // Function WBP_Datapoint_Counter.WBP_Datapoint_Counter_C.SequenceEvent__ENTRYPOINTWBP_Datapoint_Counter_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SequenceEvent__ENTRYPOINTWBP_Datapoint_Counter_1(); // Function WBP_Datapoint_Counter.WBP_Datapoint_Counter_C.SequenceEvent__ENTRYPOINTWBP_Datapoint_Counter_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PlayAnimationExplorerLost(); // Function WBP_Datapoint_Counter.WBP_Datapoint_Counter_C.PlayAnimationExplorerLost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PlayAnimationVictory(); // Function WBP_Datapoint_Counter.WBP_Datapoint_Counter_C.PlayAnimationVictory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Set Datapoint Target(int32_t TargetValue); // Function WBP_Datapoint_Counter.WBP_Datapoint_Counter_C.Set Datapoint Target // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event UpdateTickText(); // Function WBP_Datapoint_Counter.WBP_Datapoint_Counter_C.Event UpdateTickText // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Trigger Counter(); // Function WBP_Datapoint_Counter.WBP_Datapoint_Counter_C.Trigger Counter // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_Datapoint_Counter(int32_t EntryPoint); // Function WBP_Datapoint_Counter.WBP_Datapoint_Counter_C.ExecuteUbergraph_WBP_Datapoint_Counter // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

