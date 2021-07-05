// BlueprintGeneratedClass GC_Speed_Boost_Social_Hub.GC_Speed_Boost_Social_Hub_C
// Size: 0x5bc (Inherited: 0x530)
struct AGC_Speed_Boost_Social_Hub_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* Center PS; // 0x538(0x08)
	struct UParticleSystemComponent* Left PS 02; // 0x540(0x08)
	struct UParticleSystemComponent* Left PS 01; // 0x548(0x08)
	struct UParticleSystemComponent* Right PS 02; // 0x550(0x08)
	struct UParticleSystemComponent* Right PS 01; // 0x558(0x08)
	struct UArrowComponent* Arrow; // 0x560(0x08)
	struct FVector Move Placement To Front; // 0x568(0x0c)
	int32_t Number Of Loops; // 0x574(0x04)
	bool Is Moving?; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct ABP_Tailwind_Wake_Row_C* Last Grid Line; // 0x580(0x08)
	struct FVector StoredDirectionalVector; // 0x588(0x0c)
	float Grid Size; // 0x594(0x04)
	float Particle Height Offset Amount; // 0x598(0x04)
	float Move PS Over Time; // 0x59c(0x04)
	enum class EDrawDebugTrace Trace Draw Debug Type; // 0x5a0(0x01)
	char pad_5A1[0x3]; // 0x5a1(0x03)
	float Trace Draw Time; // 0x5a4(0x04)
	struct FVector Half Trace distance; // 0x5a8(0x0c)
	float Wake to Player Speed; // 0x5b4(0x04)
	float Snow Particle Height Offset Amount; // 0x5b8(0x04)

	void Move FX(); // Function GC_Speed_Boost_Social_Hub.GC_Speed_Boost_Social_Hub_C.Move FX // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Speed_Boost_Social_Hub.GC_Speed_Boost_Social_Hub_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_Speed_Boost_Social_Hub(int32_t EntryPoint); // Function GC_Speed_Boost_Social_Hub.GC_Speed_Boost_Social_Hub_C.ExecuteUbergraph_GC_Speed_Boost_Social_Hub // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

