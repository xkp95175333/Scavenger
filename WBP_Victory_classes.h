// WidgetBlueprintGeneratedClass WBP_Victory.WBP_Victory_C
// Size: 0x600 (Inherited: 0x530)
struct UWBP_Victory_C : US_WidgetGameResolutionSubscreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UWidgetAnimation* PlexusAnimationLarge; // 0x538(0x08)
	struct UWidgetAnimation* DatapointAnimation; // 0x540(0x08)
	struct UWidgetAnimation* PlexusAnimationSmall; // 0x548(0x08)
	struct UWidgetAnimation* ToastFadeIn; // 0x550(0x08)
	struct UWidgetAnimation* VictoryAnimation; // 0x558(0x08)
	struct UImage* Plexus; // 0x560(0x08)
	struct UImage* Plexus_L; // 0x568(0x08)
	struct US_RichTextBlock* Text_Datapoints; // 0x570(0x08)
	struct UTextBlock* Text_Victory; // 0x578(0x08)
	struct UWBP_Datapoint_Counter_C* WBP_Datapoint_Counter; // 0x580(0x08)
	struct UCurveFloat* TrackingCurve; // 0x588(0x08)
	struct FTimerHandle Tracking TImer; // 0x590(0x08)
	int32_t Datapoint Variable; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct FText Victory; // 0x5a0(0x18)
	struct FText 2ND PLACE; // 0x5b8(0x18)
	struct FText 3RD PLACE; // 0x5d0(0x18)
	struct FText MISSION COMPLETE; // 0x5e8(0x18)

	void SequenceEvent__ENTRYPOINTWBP_Victory_4(); // Function WBP_Victory.WBP_Victory_C.SequenceEvent__ENTRYPOINTWBP_Victory_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SequenceEvent__ENTRYPOINTWBP_Victory_3(struct UWBP_Datapoint_Counter_C* WBP_Datapoint_Counter); // Function WBP_Victory.WBP_Victory_C.SequenceEvent__ENTRYPOINTWBP_Victory_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SequenceEvent__ENTRYPOINTWBP_Victory_2(); // Function WBP_Victory.WBP_Victory_C.SequenceEvent__ENTRYPOINTWBP_Victory_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SequenceEvent__ENTRYPOINTWBP_Victory_1(); // Function WBP_Victory.WBP_Victory_C.SequenceEvent__ENTRYPOINTWBP_Victory_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EndTextTracking(); // Function WBP_Victory.WBP_Victory_C.EndTextTracking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateTextTracking(); // Function WBP_Victory.WBP_Victory_C.UpdateTextTracking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BeginTextTracking(); // Function WBP_Victory.WBP_Victory_C.BeginTextTracking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetDatapointTarget(struct UWBP_Datapoint_Counter_C* WBP_Datapoint_Counter); // Function WBP_Victory.WBP_Victory_C.SetDatapointTarget // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ContributionTrigger(); // Function WBP_Victory.WBP_Victory_C.ContributionTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySubscreenStepStarted(); // Function WBP_Victory.WBP_Victory_C.NotifySubscreenStepStarted // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_Victory(int32_t EntryPoint); // Function WBP_Victory.WBP_Victory_C.ExecuteUbergraph_WBP_Victory // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

