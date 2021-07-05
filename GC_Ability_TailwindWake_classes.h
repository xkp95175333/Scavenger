// BlueprintGeneratedClass GC_Ability_TailwindWake.GC_Ability_TailwindWake_C
// Size: 0x5cc (Inherited: 0x530)
struct AGC_Ability_TailwindWake_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* Center PS; // 0x538(0x08)
	struct UParticleSystemComponent* Left PS 02; // 0x540(0x08)
	struct UParticleSystemComponent* Left PS 01; // 0x548(0x08)
	struct UParticleSystemComponent* Right PS 02; // 0x550(0x08)
	struct UParticleSystemComponent* Right PS 01; // 0x558(0x08)
	struct UArrowComponent* Arrow; // 0x560(0x08)
	float Timeline_0_NewTrack_0_0E5D875A4900774C5F0E4DB2F8F5860F; // 0x568(0x04)
	enum class ETimelineDirection Timeline_0__Direction_0E5D875A4900774C5F0E4DB2F8F5860F; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x570(0x08)
	struct FVector Move Placement To Front; // 0x578(0x0c)
	int32_t Number Of Loops; // 0x584(0x04)
	bool Is Moving?; // 0x588(0x01)
	char pad_589[0x7]; // 0x589(0x07)
	struct ABP_Tailwind_Wake_Row_C* Last Grid Line; // 0x590(0x08)
	struct FVector StoredDirectionalVector; // 0x598(0x0c)
	float Grid Size; // 0x5a4(0x04)
	float Particle Height Offset Amount; // 0x5a8(0x04)
	float Move PS Over Time; // 0x5ac(0x04)
	enum class EDrawDebugTrace Trace Draw Debug Type; // 0x5b0(0x01)
	char pad_5B1[0x3]; // 0x5b1(0x03)
	float Trace Draw Time; // 0x5b4(0x04)
	struct FVector Half Trace distance; // 0x5b8(0x0c)
	float Wake to Player Speed; // 0x5c4(0x04)
	float Snow Particle Height Offset Amount; // 0x5c8(0x04)

	void Timeline_0__FinishedFunc(); // Function GC_Ability_TailwindWake.GC_Ability_TailwindWake_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Timeline_0__UpdateFunc(); // Function GC_Ability_TailwindWake.GC_Ability_TailwindWake_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function GC_Ability_TailwindWake.GC_Ability_TailwindWake_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Ability_TailwindWake.GC_Ability_TailwindWake_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Move FX(); // Function GC_Ability_TailwindWake.GC_Ability_TailwindWake_C.Move FX // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Update(); // Function GC_Ability_TailwindWake.GC_Ability_TailwindWake_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function GC_Ability_TailwindWake.GC_Ability_TailwindWake_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Spawn Grid Line(); // Function GC_Ability_TailwindWake.GC_Ability_TailwindWake_C.Spawn Grid Line // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_Ability_TailwindWake(int32_t EntryPoint); // Function GC_Ability_TailwindWake.GC_Ability_TailwindWake_C.ExecuteUbergraph_GC_Ability_TailwindWake // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

