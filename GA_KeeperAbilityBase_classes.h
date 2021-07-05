// BlueprintGeneratedClass GA_KeeperAbilityBase.GA_KeeperAbilityBase_C
// Size: 0x44c (Inherited: 0x3b8)
struct UGA_KeeperAbilityBase_C : US_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct AS_PlayerCharacter* playerCharacter; // 0x3c0(0x08)
	struct ABP_Keeper_C* Keeper; // 0x3c8(0x08)
	bool KeeperAbilitySucceeded; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct UAnimMontage* PlayerAnimMontage; // 0x3d8(0x08)
	struct AS_PlayerController* PlayerController; // 0x3e0(0x08)
	bool BlockedWhileDowned; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct UAnimMontage* KeeperAnimMontage; // 0x3f0(0x08)
	struct FGameplayAbilityTargetDataHandle MyTargetData; // 0x3f8(0x28)
	struct US_AbilitySystemComponent* AbilitySystemComponent; // 0x420(0x08)
	float AbilityCooldown; // 0x428(0x04)
	float AbilityDuration; // 0x42c(0x04)
	struct FName KeeperActivatedFacingTask; // 0x430(0x08)
	enum class ES_AbilityTimerIndex TimerIndex; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	struct FName KeeperActivatedMontageTask; // 0x43c(0x08)
	struct FName KeeperResetFacingTask; // 0x444(0x08)

	void SelectTargets(struct FGameplayAbilityTargetDataHandle TargetData); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.SelectTargets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void KeeperPerformAction(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.KeeperPerformAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void KeeperFinishedAnimation(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.KeeperFinishedAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void KeeperGetMoveToLocation(bool KeeperPerformMoveTo, struct FVector KeeperMoveToLocation, bool KeeperPerformFacing, struct FVector KeeperFaceLocation); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.KeeperGetMoveToLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void KeeperFinishedMoving(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.KeeperFinishedMoving // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xffff8008e4a10000
	void OnFinish_89B44ADD439E2D815FB7898D489CF3D0(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnFinish_89B44ADD439E2D815FB7898D489CF3D0 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnTargetLocationReached_C24410454E307086C46B449B33CEF2B4(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnTargetLocationReached_C24410454E307086C46B449B33CEF2B4 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnFaced_787E37D845DD505423F47BAA52F828D2(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnFaced_787E37D845DD505423F47BAA52F828D2 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnCancelled_148C8E974C2298194E62DD8860C5DCC5(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnCancelled_148C8E974C2298194E62DD8860C5DCC5 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnInterrupted_148C8E974C2298194E62DD8860C5DCC5(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnInterrupted_148C8E974C2298194E62DD8860C5DCC5 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnBlendOut_148C8E974C2298194E62DD8860C5DCC5(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnBlendOut_148C8E974C2298194E62DD8860C5DCC5 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnCompleted_148C8E974C2298194E62DD8860C5DCC5(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnCompleted_148C8E974C2298194E62DD8860C5DCC5 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnFaced_02F4F3444C154A24D3DD6382CE5098D8(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnFaced_02F4F3444C154A24D3DD6382CE5098D8 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnCancelled_58AFF59F4FA24B93F1C2C69D18C7CCFE(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnCancelled_58AFF59F4FA24B93F1C2C69D18C7CCFE // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnInterrupted_58AFF59F4FA24B93F1C2C69D18C7CCFE(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnInterrupted_58AFF59F4FA24B93F1C2C69D18C7CCFE // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnBlendOut_58AFF59F4FA24B93F1C2C69D18C7CCFE(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnBlendOut_58AFF59F4FA24B93F1C2C69D18C7CCFE // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnCompleted_58AFF59F4FA24B93F1C2C69D18C7CCFE(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnCompleted_58AFF59F4FA24B93F1C2C69D18C7CCFE // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_ActivateAbility(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnKeeperPerformAction(); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnKeeperPerformAction // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnAbilityDurationExipred(enum class ES_AbilityTimerIndex AbilityTimerIndex); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.OnAbilityDurationExipred // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GA_KeeperAbilityBase(int32_t EntryPoint); // Function GA_KeeperAbilityBase.GA_KeeperAbilityBase_C.ExecuteUbergraph_GA_KeeperAbilityBase // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

