// WidgetBlueprintGeneratedClass WBP_DownedState.WBP_DownedState_C
// Size: 0x510 (Inherited: 0x4b8)
struct UWBP_DownedState_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UImage* StateIcon; // 0x4c0(0x08)
	struct URichTextBlock* StateRichText; // 0x4c8(0x08)
	struct UWBP_CommonCircularFill_C* WBP_CommonCircularFill; // 0x4d0(0x08)
	struct US_StatsComponent* StatComponent; // 0x4d8(0x08)
	float ReviveTime; // 0x4e0(0x04)
	bool bBeingRevived; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	float ReviveTimer; // 0x4e8(0x04)
	bool Downed; // 0x4ec(0x01)
	char pad_4ED[0x3]; // 0x4ed(0x03)
	struct FLinearColor DownedFillColor; // 0x4f0(0x10)
	struct FLinearColor RevivingFillColor; // 0x500(0x10)

	void ReviveStarted(struct APlayerState* ReviverPlayerState, float ReviveTime); // Function WBP_DownedState.WBP_DownedState_C.ReviveStarted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_DownedState.WBP_DownedState_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnReviveStarted(struct APawn* ReviverPawn, struct AS_PlayerState* ReviverPlayerState, float ReviveTime); // Function WBP_DownedState.WBP_DownedState_C.Event OnReviveStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnReviveStopped(); // Function WBP_DownedState.WBP_DownedState_C.Event OnReviveStopped // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnStateChange(struct US_StatsComponent* StatsComponent, enum class ES_StatsState OldState, enum class ES_StatsState NewState); // Function WBP_DownedState.WBP_DownedState_C.Event OnStateChange // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_DownedState.WBP_DownedState_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_DownedState(int32_t EntryPoint); // Function WBP_DownedState.WBP_DownedState_C.ExecuteUbergraph_WBP_DownedState // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

