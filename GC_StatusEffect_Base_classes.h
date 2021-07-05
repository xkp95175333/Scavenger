// BlueprintGeneratedClass GC_StatusEffect_Base.GC_StatusEffect_Base_C
// Size: 0x530 (Inherited: 0x2e8)
struct AGC_StatusEffect_Base_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UStaticMeshComponent* SM_Status_Effect_Card; // 0x2f0(0x08)
	struct UPostProcessComponent* PostProcess; // 0x2f8(0x08)
	struct UParticleSystemComponent* Expired Emitter; // 0x300(0x08)
	struct UParticleSystemComponent* Active Emitter; // 0x308(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x310(0x08)
	float PostProcess_EaseOut_BlendWeight_763D03B14204C930ECE5ED9B2CC9569D; // 0x318(0x04)
	enum class ETimelineDirection PostProcess_EaseOut__Direction_763D03B14204C930ECE5ED9B2CC9569D; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct UTimelineComponent* PostProcess EaseOut; // 0x320(0x08)
	float PostProcess_EaseIn_BlendWeight_67D78BD6436500F0370A9294401ACB6B; // 0x328(0x04)
	enum class ETimelineDirection PostProcess_EaseIn__Direction_67D78BD6436500F0370A9294401ACB6B; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct UTimelineComponent* PostProcess EaseIn; // 0x330(0x08)
	bool Use Mesh Emit; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	struct FName Emiit from Mesh Parameter; // 0x33c(0x08)
	char pad_344[0x4]; // 0x344(0x04)
	struct UParticleSystem* Active Particle Emitter; // 0x348(0x08)
	struct UParticleSystem* Expired Particle Emitter; // 0x350(0x08)
	bool Attatch to Socket; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	struct FName Attach Socket Name; // 0x35c(0x08)
	bool Is Burst GC; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	float Burst Destroy Time; // 0x368(0x04)
	bool Use Post Process Overrides; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	struct UCurveFloat* Post Process Ease In Curve; // 0x370(0x08)
	float Post Process EaseIn Duration; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct UCurveFloat* Post Process Ease Out Curve; // 0x380(0x08)
	float Post Process EaseOut Duration; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct UParticleSystemComponent* NewVar_1; // 0x390(0x08)
	struct AS_PlayerCharacter* S_PlayerChar; // 0x398(0x08)
	struct AActor* My Target; // 0x3a0(0x08)
	struct UMaterialInterface* Shell Material; // 0x3a8(0x08)
	struct UMaterialInterface* Post Process Material; // 0x3b0(0x08)
	int32_t Shell ID; // 0x3b8(0x04)
	float Shell Lifetime; // 0x3bc(0x04)
	struct UCurveFloat* Shell Easse In Curve; // 0x3c0(0x08)
	float Shell Ease In Time; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UCurveFloat* Shell Ease Out Curve; // 0x3d0(0x08)
	float Shell Ease Out Time; // 0x3d8(0x04)
	struct FName Shell Fade Param; // 0x3dc(0x08)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct US_VFXManagerComponent* VFX Manager; // 0x3e8(0x08)
	struct US_VFXManagerComponent* NewVar_2; // 0x3f0(0x08)
	struct UParticleSystem* Keeper Active Emitter; // 0x3f8(0x08)
	struct FName Keeper Attach Socket; // 0x400(0x08)
	enum class EGameplayCueEvent Event Type; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UMaterialInstanceDynamic* Post Process MID; // 0x410(0x08)
	struct UMaterialInstanceDynamic* Edge Material MID; // 0x418(0x08)
	struct UMaterialInterface* Status Effect Material; // 0x420(0x08)
	struct UMaterialInstanceDynamic* Status Effect MID; // 0x428(0x08)
	float Inner Edge Distance Multiplier; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UParticleSystemComponent* Expired Emitter_1; // 0x438(0x08)
	struct UParticleSystem* Camera Attachecd Particle Emitter; // 0x440(0x08)
	bool Reset On Start; // 0x448(0x01)
	bool Exclude GC with Tag; // 0x449(0x01)
	char pad_44A[0x6]; // 0x44a(0x06)
	struct FGameplayTagContainer Tag To Exclude; // 0x450(0x20)
	struct FGameplayCueParameters Parameters; // 0x470(0xb8)
	struct UParticleSystemComponent* KeeperFXSpawned; // 0x528(0x08)

	void Spawn Effect Attached(struct UParticleSystem* Particle Sys, struct USceneComponent* AttachToComponent, struct FName SocketName, struct UParticleSystemComponent* Particle Efect); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.Spawn Effect Attached // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Block by Tag(bool Contains Tag To Block); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.Block by Tag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Destory Active Shell(int32_t ShellId); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.Destory Active Shell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Set Shell Fade(int32_t ShellId, struct UCurveFloat* FloatCurve, float AnimationDuration); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.Set Shell Fade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Set Camera Card(struct UMaterialInstanceDynamic* Status Effect MID); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.Set Camera Card // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void DebugEvents(enum class EGameplayCueEvent Selection); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.DebugEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Get Camera Data(struct AActor* Target, struct FVector Camera Position, struct FRotator Camera Rotation, float Camera FOV, float Camera Aspect Ratio, struct APlayerCameraManager* Camera); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.Get Camera Data // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Set Post Proccess Material(struct UMaterialInstanceDynamic* Post Process MID); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.Set Post Proccess Material // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Set Shell Material(struct AActor* BaseObject, struct UMaterialInterface* Shell Material, int32_t Shell ID); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.Set Shell Material // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void KeeperVFX(struct AS_PlayerCharacter* Target); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.KeeperVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Control FX Attached(struct AS_CharacterBase* Target, struct UParticleSystemComponent* Particle Effect, bool Emit From Mesh, bool Attach to Something, struct FName SocketName, enum class EGameplayCueEvent Selection, bool bReset); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.Control FX Attached // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UserConstructionScript(); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PostProcess EaseIn__FinishedFunc(); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.PostProcess EaseIn__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void PostProcess EaseIn__UpdateFunc(); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.PostProcess EaseIn__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void PostProcess EaseOut__FinishedFunc(); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.PostProcess EaseOut__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void PostProcess EaseOut__UpdateFunc(); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.PostProcess EaseOut__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_StatusEffect_Base(int32_t EntryPoint); // Function GC_StatusEffect_Base.GC_StatusEffect_Base_C.ExecuteUbergraph_GC_StatusEffect_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

