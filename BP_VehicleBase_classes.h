// BlueprintGeneratedClass BP_VehicleBase.BP_VehicleBase_C
// Size: 0x829 (Inherited: 0x7c0)
struct ABP_VehicleBase_C : AS_VehiclePawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7c0(0x08)
	struct UBP_AutoPing_Lojack_C* BP_AutoPing_Lojack; // 0x7c8(0x08)
	struct US_RadarBlipComponent* S_RadarBlip; // 0x7d0(0x08)
	enum class VehicleTypeEnum VehicleType; // 0x7d8(0x01)
	char pad_7D9[0x7]; // 0x7d9(0x07)
	struct FS_StatusLoopSoundEffect VehicleHealthStatusLoop; // 0x7e0(0x18)
	bool IsBoosting; // 0x7f8(0x01)
	char pad_7F9[0x3]; // 0x7f9(0x03)
	float DamagePassthroughFactor; // 0x7fc(0x04)
	struct UDamageType* DamagePassthroughDamageType; // 0x800(0x08)
	bool BoostAppliesThrottle; // 0x808(0x01)
	char pad_809[0x7]; // 0x809(0x07)
	struct UGameplayTasksComponent* VehicleTaskComponent; // 0x810(0x08)
	float PowerDownDuration; // 0x818(0x04)
	bool HitByEMP; // 0x81c(0x01)
	char pad_81D[0x3]; // 0x81d(0x03)
	struct USC_SnowRacerMovement* VehicleMovementComponent; // 0x820(0x08)
	bool RecoveringFromEMP; // 0x828(0x01)

	void ProcessLocalInputFilter(bool ShouldProcessInput); // Function BP_VehicleBase.BP_VehicleBase_C.ProcessLocalInputFilter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ProcessInputMoveRight(float InputAxis, float StrafeMulti, struct USC_SnowRacerMovement* SnowRacerMovement); // Function BP_VehicleBase.BP_VehicleBase_C.ProcessInputMoveRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ProcessInputMoveForward(float InputAxis, float FwdThrottleMulti, float BackThrottleMulti, struct USC_SnowRacerMovement* SnowRacerMovement); // Function BP_VehicleBase.BP_VehicleBase_C.ProcessInputMoveForward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ProcessInputBoostButtonReleased(struct USC_SnowRacerMovement* SnowRacerMovement); // Function BP_VehicleBase.BP_VehicleBase_C.ProcessInputBoostButtonReleased // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ProcessInputBoostButtonPressed(float BoostMulti, struct USC_SnowRacerMovement* SnowRacerMovement); // Function BP_VehicleBase.BP_VehicleBase_C.ProcessInputBoostButtonPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ProcessInputDesiredHeading(struct USC_SnowRacerMovement* SnowRacerMovement); // Function BP_VehicleBase.BP_VehicleBase_C.ProcessInputDesiredHeading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PowerDownVehicle(struct USC_SnowRacerMovement* SnowRacerMovement, float PowerDownDuration, bool HitByEMP); // Function BP_VehicleBase.BP_VehicleBase_C.PowerDownVehicle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PowerUpVehicle(struct USC_SnowRacerMovement* SnowRacerMovement); // Function BP_VehicleBase.BP_VehicleBase_C.PowerUpVehicle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_VehicleBase.BP_VehicleBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_VehicleBase.BP_VehicleBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SimpleStatChange(enum class ES_StatType StatType, float OldStatValue, float StatValueChange, float NewStatValue); // Function BP_VehicleBase.BP_VehicleBase_C.SimpleStatChange // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyKilledBy_BP(struct FS_EventParameterControllerVariant KillingController); // Function BP_VehicleBase.BP_VehicleBase_C.NotifyKilledBy_BP // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetLojack(bool Enabled); // Function BP_VehicleBase.BP_VehicleBase_C.SetLojack // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetLojackTeam(int32_t TeamIndex); // Function BP_VehicleBase.BP_VehicleBase_C.SetLojackTeam // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnPostTakeDamage_Event_1(struct AActor* DamagedActor, float DamageAmount, struct FDamageEvent DamageEvent, struct AActor* CauseActor, bool Critical); // Function BP_VehicleBase.BP_VehicleBase_C.OnPostTakeDamage_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VehicleEMPDelay(float DelayTime); // Function BP_VehicleBase.BP_VehicleBase_C.VehicleEMPDelay // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_VehicleBase(int32_t EntryPoint); // Function BP_VehicleBase.BP_VehicleBase_C.ExecuteUbergraph_BP_VehicleBase // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

