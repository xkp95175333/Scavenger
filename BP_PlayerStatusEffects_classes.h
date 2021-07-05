// BlueprintGeneratedClass BP_PlayerStatusEffects.BP_PlayerStatusEffects_C
// Size: 0xe0 (Inherited: 0xb0)
struct UBP_PlayerStatusEffects_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct US_StatsComponent* M Stats Component; // 0xb8(0x08)
	float LowHealthTriggerPercent; // 0xc0(0x04)
	float FrostinessTriggerThreshold; // 0xc4(0x04)
	bool StayFrosty; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FS_StatusAlertSoundEffect FrostyScreenAlert; // 0xd0(0x10)

	void UpdateStatusFX(struct APawn* Pawn, struct APawn* ViewportOwner, bool IsSpectating, float Delta Time, float CurrentHealthMPC, bool HasViewport, float NewHealthMPC); // Function BP_PlayerStatusEffects.BP_PlayerStatusEffects_C.UpdateStatusFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_PlayerStatusEffects.BP_PlayerStatusEffects_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerStatusEffects.BP_PlayerStatusEffects_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_PlayerStatusEffects(int32_t EntryPoint); // Function BP_PlayerStatusEffects.BP_PlayerStatusEffects_C.ExecuteUbergraph_BP_PlayerStatusEffects // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

