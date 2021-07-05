// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// Size: 0x33e4 (Inherited: 0x2d80)
struct ABP_PlayerCharacter_C : AS_PlayerCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d80(0x08)
	struct UBP_PriorityAudioInstigatorComponent_C* PriorityAudioInstigatorComponent; // 0x2d88(0x08)
	struct UPostProcessComponent* DamageIndicatorPP; // 0x2d90(0x08)
	struct USkeletalMeshComponent* Backpack; // 0x2d98(0x08)
	struct USC_CollisionDamageReciver* SC_CollisionDamageReciver; // 0x2da0(0x08)
	struct US_SpringArmComponent* Camera Stick; // 0x2da8(0x08)
	struct UAudioComponent* StormAmbience; // 0x2db0(0x08)
	struct UAudioComponent* LocalAmbience; // 0x2db8(0x08)
	struct UCameraComponent* Camera; // 0x2dc0(0x08)
	struct US_BoneDataComponent* BoneDataComponent; // 0x2dc8(0x08)
	float Scanline_Scanline_ACBF929E4FF261F455E85784A665119C; // 0x2dd0(0x04)
	enum class ETimelineDirection Scanline__Direction_ACBF929E4FF261F455E85784A665119C; // 0x2dd4(0x01)
	char pad_2DD5[0x3]; // 0x2dd5(0x03)
	struct UTimelineComponent* Scanline; // 0x2dd8(0x08)
	float ScanStripes_ScanFX_7652BA42464DFB13D9C5C5BBF96F700D; // 0x2de0(0x04)
	enum class ETimelineDirection ScanStripes__Direction_7652BA42464DFB13D9C5C5BBF96F700D; // 0x2de4(0x01)
	char pad_2DE5[0x3]; // 0x2de5(0x03)
	struct UTimelineComponent* ScanStripes; // 0x2de8(0x08)
	float TL_RecentDamageFade_Opacity_537FF3C242B71D93FD0737A085A18F90; // 0x2df0(0x04)
	enum class ETimelineDirection TL_RecentDamageFade__Direction_537FF3C242B71D93FD0737A085A18F90; // 0x2df4(0x01)
	char pad_2DF5[0x3]; // 0x2df5(0x03)
	struct UTimelineComponent* TL_RecentDamageFade; // 0x2df8(0x08)
	float CurrentDamageIndicator; // 0x2e00(0x04)
	float DeltaTime; // 0x2e04(0x04)
	float DesiredDamageIndicator; // 0x2e08(0x04)
	float DamageIndicatorSpeed; // 0x2e0c(0x04)
	float LowHealthIndicatorPower; // 0x2e10(0x04)
	float DamageDirection; // 0x2e14(0x04)
	bool isDebugCam; // 0x2e18(0x01)
	bool IsUnderCeiling; // 0x2e19(0x01)
	char pad_2E1A[0x6]; // 0x2e1a(0x06)
	struct AActor* LastEnemy; // 0x2e20(0x08)
	float BlendWeight; // 0x2e28(0x04)
	char pad_2E2C[0x4]; // 0x2e2c(0x04)
	struct UCurveLinearColor* StormOverlayColorCurve; // 0x2e30(0x08)
	float IK Foot Scale; // 0x2e38(0x04)
	char pad_2E3C[0x4]; // 0x2e3c(0x04)
	struct FS_CameraArmSettings DebugCameraSettingsAnimations; // 0x2e40(0x170)
	struct UMaterialInstanceDynamic* RecentDamageMaterialInstance; // 0x2fb0(0x08)
	bool IsInDropshipSanctuary; // 0x2fb8(0x01)
	char CurrentStencilValue; // 0x2fb9(0x01)
	bool TeammateStencilInitialized; // 0x2fba(0x01)
	char pad_2FBB[0x5]; // 0x2fbb(0x05)
	struct TArray<struct AActor*> Companions; // 0x2fc0(0x10)
	bool LooksLikeSprinting; // 0x2fd0(0x01)
	char pad_2FD1[0x3]; // 0x2fd1(0x03)
	float ShaderOpacity; // 0x2fd4(0x04)
	int32_t TeammateInfoIndex; // 0x2fd8(0x04)
	char pad_2FDC[0x4]; // 0x2fdc(0x04)
	struct ACharacter* Revive Target; // 0x2fe0(0x08)
	char pad_2FE8[0x8]; // 0x2fe8(0x08)
	struct FTransform T_PrimaryStow_R; // 0x2ff0(0x30)
	struct FTransform T_PrimaryStow_L; // 0x3020(0x30)
	struct UMaterialInstanceDynamic* MI_StormOverlay; // 0x3050(0x08)
	bool IsInfected; // 0x3058(0x01)
	bool IsFreezing; // 0x3059(0x01)
	bool IsStarving; // 0x305a(0x01)
	char pad_305B[0x1]; // 0x305b(0x01)
	float Time; // 0x305c(0x04)
	float MovementSpeed; // 0x3060(0x04)
	char pad_3064[0xc]; // 0x3064(0x0c)
	struct FTransform T_Backpack_Center; // 0x3070(0x30)
	bool BeginPlayPostStreamingCalled; // 0x30a0(0x01)
	char pad_30A1[0x7]; // 0x30a1(0x07)
	struct FMulticastInlineDelegate OnGearUpgrade; // 0x30a8(0x10)
	struct FMulticastInlineDelegate OnTimeUntilStormUpgradeValid; // 0x30b8(0x10)
	struct USC_SkeletalMeshComponent* FakeKeeperMeshTwo; // 0x30c8(0x08)
	struct TArray<struct FString> MatFilters; // 0x30d0(0x10)
	struct TSoftObjectPtr<struct ABP_CameraEffects_C> CameraEffects; // 0x30e0(0x28)
	struct FName CharacterId; // 0x3108(0x08)
	float BoardingTime; // 0x3110(0x04)
	char pad_3114[0x4]; // 0x3114(0x04)
	struct UBP_PlayerCharacterGameVarsTemplate_C* GameVars; // 0x3118(0x08)
	bool TutorColdGracePeriod; // 0x3120(0x01)
	bool DiedOnPlanet; // 0x3121(0x01)
	char pad_3122[0x6]; // 0x3122(0x06)
	struct FS_StatusAlertSoundEffect HungerStatusAlert; // 0x3128(0x10)
	struct FS_StatusLoopSoundEffect ExhaustionStatusLoop; // 0x3138(0x18)
	struct FS_StatusLoopSoundEffect HealthStatusLoop; // 0x3150(0x18)
	struct FS_StatusAlertSoundEffect ColdStatusAlert; // 0x3168(0x10)
	struct FS_StatusLoopSoundEffect ColdStatusLoop_Female; // 0x3178(0x18)
	struct FS_StatusLoopSoundEffect ColdStatusLoop_Male; // 0x3190(0x18)
	struct FS_StatusAlertSoundEffect InfectionStatusAlert; // 0x31a8(0x10)
	struct FS_StatusLoopSoundEffect InfectionStatusLoop; // 0x31b8(0x18)
	struct AActor* TestingActor; // 0x31d0(0x08)
	float DirectionalParticleEffectNextAllowed; // 0x31d8(0x04)
	enum class ES_StatType StatType; // 0x31dc(0x01)
	char pad_31DD[0x3]; // 0x31dd(0x03)
	struct UMatineeCameraShake* LandingCameraShake; // 0x31e0(0x08)
	float LandingCameraShakeScale; // 0x31e8(0x04)
	float LandingCameraShakeVelocityDeltaMin; // 0x31ec(0x04)
	float LandingCameraShakeVelocityDeltaMax; // 0x31f0(0x04)
	int32_t BunnyJumpCountDebuffLimit; // 0x31f4(0x04)
	float BunnyJumpTimerDuration; // 0x31f8(0x04)
	float BunnyJumpVelocityMultiplier; // 0x31fc(0x04)
	struct UGameplayEffect* BunnyJumpDebuffGameplayEffect; // 0x3200(0x08)
	struct FTimerHandle BunnyJumpTimerHandle; // 0x3208(0x08)
	int32_t BunnyJumpCounter; // 0x3210(0x04)
	bool IsSliding; // 0x3214(0x01)
	bool JaeUIToggle; // 0x3215(0x01)
	char pad_3216[0xa]; // 0x3216(0x0a)
	struct FTransform ItemMasterTransform; // 0x3220(0x30)
	float HealthMPC; // 0x3250(0x04)
	bool isInStorm; // 0x3254(0x01)
	bool IsExecutionCamera_01; // 0x3255(0x01)
	char pad_3256[0x2]; // 0x3256(0x02)
	struct AActor* LastHitByAbilityActor; // 0x3258(0x08)
	bool IsInvolvedInExecution; // 0x3260(0x01)
	char pad_3261[0x3]; // 0x3261(0x03)
	struct FVector CurrentCharacterScale; // 0x3264(0x0c)
	bool OnExecution_HideWeapons; // 0x3270(0x01)
	char pad_3271[0x3]; // 0x3271(0x03)
	float DOT Fire Removed On Dodge; // 0x3274(0x04)
	enum class ES_Character_ID ExplorerClassID; // 0x3278(0x01)
	char pad_3279[0x7]; // 0x3279(0x07)
	struct UParticleSystemComponent* Breath Particles; // 0x3280(0x08)
	char pad_3288[0x8]; // 0x3288(0x08)
	struct FS_CameraSettingOverride Camera Overrides; // 0x3290(0xa0)
	struct FS_DialogueContextValue CharacterClassDialogueContext; // 0x3330(0x08)
	struct FTimerHandle Breath Handle; // 0x3338(0x08)
	struct FS_CameraSettingOverride Camera Overrides_JumpSlide; // 0x3340(0xa0)
	float FreezingThreshold; // 0x33e0(0x04)

	bool GetPingDialogueContext(struct AS_PlayerController* pingingPlayerController, struct FS_DialogueContext OutContext); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPingDialogueContext // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BeginPlayPostStreamingCalledWithNotification(bool StreamingCalled, bool StreamingCalledOut); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BeginPlayPostStreamingCalledWithNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BankingFX(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BankingFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GearUpgrade(struct USkeletalMesh* New Skeletal Mesh, struct FActiveGameplayEffectHandle Gameplay Effect); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GearUpgrade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsFreezing(bool IsFreezing); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsFreezing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsStarving(bool IsStarving); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsStarving // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetLastHitByAbiltiyActor(struct AActor* LastHitByAbilityActor); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLastHitByAbiltiyActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetLastHitByAbilityActor(struct AActor* ActorPerformingTheHIt, struct AActor* Actor); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLastHitByAbilityActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetCharacterAbility(bool NewParam); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCharacterAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetGameVars(struct UBP_PlayerCharacterGameVarsTemplate_C* NewParam); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetGameVars // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Get Revive Target(struct AActor* Revive Target); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Revive Target // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Get Revive Initiator(struct AActor* Revive Initiator); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Revive Initiator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetAllCompanions(struct TArray<struct AActor*> Companions); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAllCompanions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xffff8008e4a10000
	void OnRep_OnExecution_ShowWeapons(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_OnExecution_ShowWeapons // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_OnExecution_HideWeapons(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_OnExecution_HideWeapons // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_IsInvolvedInExecution(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_IsInvolvedInExecution // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UnregisterSubtitleName(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnregisterSubtitleName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RegisterSubtitleName(bool bDidRegister); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.RegisterSubtitleName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_JaeUIToggle(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_JaeUIToggle // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdatePlayerCollectionParameters(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerCollectionParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BunnyJumpLanding(enum class EMovementMode InputPin, enum class EMovementMode InputPin2); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BunnyJumpLanding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BunnyJumpCheck(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BunnyJumpCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BunnyJumpResetCounter(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BunnyJumpResetCounter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool IsBunnyHopping(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsBunnyHopping // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void OnRep_CharacterId(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_CharacterId // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SelectAndModifyDodge(struct FVector InWorldDir, float LocalYawHeading, int32_t CustomDodgeIdx, struct FVector OutWorldDir); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectAndModifyDodge // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void GetTeammates(struct TArray<struct AS_PlayerController*> teamControllers); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetTeammates // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void TeamIndex(int32_t Index); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeamIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void HandleCocooned(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.HandleCocooned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ChangeShield(int32_t Shield Level); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeShield // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InitializeBotTakeover(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitializeBotTakeover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetPawnIncludingOwners(struct AActor* Actor, struct APawn* NewParam); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPawnIncludingOwners // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FS_DialogueVoiceValue GetDialogueSpeakerVoice(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDialogueSpeakerVoice // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void FindDialogueAudioEvents(struct FS_DialogueEventValue Event, struct FS_DialogueContext Context, struct FString TeamEvent, struct FString EnemyEvent); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.FindDialogueAudioEvents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetGender(enum class ES_PlayerClassGender Gender); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetGender // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void BeginBoarding(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BeginBoarding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetClassAbilityDuration(float Cooldown); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetClassAbilityDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ClearSurvivalEffects(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClearSurvivalEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_CurrentTier(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_CurrentTier // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_BeginPlayPostStreamingCalled(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_BeginPlayPostStreamingCalled // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateBackpackStowLocations(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateBackpackStowLocations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BreathFX(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BreathFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetContextPingType(struct AActor* HitActor, enum class ES_PingInfoType PingType); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetContextPingType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void ProcessHarmfulStats(float OldStatValue, float NewStatValue, float OldStatThreshold, float NewStatThreshold, bool NewParam, bool DangerLevelReached, bool OutOfDanger); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ProcessHarmfulStats // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void FootParticleFX(struct FVector WorldPosition, enum class EPhysicalSurface SurfaceType); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.FootParticleFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void IHaveStandingToReportRogueActs(bool bool); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.IHaveStandingToReportRogueActs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void TickCollectCameraData(bool IsSprinting); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickCollectCameraData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ChangeGear(int32_t Tier, struct USkeletalMesh* NewSkeletalMesh); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeGear // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetTeammateStencil(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetTeammateStencil // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetRogueStencil(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetRogueStencil // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RemoveScreenFX(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveScreenFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SnitchOnRogueFromEvent(struct APlayerController* Agressor); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SnitchOnRogueFromEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SnitchOnRogueFromDamage(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SnitchOnRogueFromDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ToggleDebugCamera(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleDebugCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void IK FootTrace(float TraceDistance, struct FName Socket, float IK Offset); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.IK FootTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void DummyGameplayEffectMatchDelegate(struct FActiveGameplayEffect GameplayEffect, bool Match); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.DummyGameplayEffectMatchDelegate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetClassAbilityCooldown(float Cooldown); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetClassAbilityCooldown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_CachedPlayerClass(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_CachedPlayerClass // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_CharacterClassMap(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_CharacterClassMap // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateBlizzardEffects(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateBlizzardEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateScreenFX(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateScreenFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ResetCollision(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_bIsLaunching(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_bIsLaunching // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateGeiger(float DeltaRadiation); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGeiger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateCameraSettings(bool ADSActive, bool DodgeActive, bool CrouchActive, bool SprintActive, bool DiedOnPlanet, enum class ES_StatsState StateState, bool SlideActive); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateCameraSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Scavenger Update Camera Blends(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Scavenger Update Camera Blends // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UserConstructionScript(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void TL_RecentDamageFade__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TL_RecentDamageFade__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void TL_RecentDamageFade__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TL_RecentDamageFade__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ScanStripes__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ScanStripes__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ScanStripes__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ScanStripes__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Scanline__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Scanline__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Scanline__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Scanline__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_Divide_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Divide_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_Multiply_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Multiply_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_Debug_DamagePlayer_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Debug_DamagePlayer_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_Cheat_DebugCamera_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Cheat_DebugCamera_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void CreateRecentDamageMaterialInstance(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateRecentDamageMaterialInstance // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnStatsComponentStateChange(struct US_StatsComponent* StatsComponent, enum class ES_StatsState OldState, enum class ES_StatsState NewState); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnStatsComponentStateChange // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyStatsStateChangedBy_BP(struct FS_EventParameterControllerVariant ChangeCausingController, enum class ES_StatsState OldState, enum class ES_StatsState NewState, struct FS_ActorStatsStateChangedParameters ActorStatsStateChangedParameters); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.NotifyStatsStateChangedBy_BP // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyDamagedBy_BP(struct FS_EventParameterControllerVariant DamagingController, float DamageDealt); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.NotifyDamagedBy_BP // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ClientShowDirectionalDamage(struct FVector AttackerPos, enum class ES_StatType DamageStatType); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientShowDirectionalDamage // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySeatExited_BP(struct USC_Seat* Seat); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.NotifySeatExited_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifySeatEntered_BP(struct USC_Seat* Seat); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.NotifySeatEntered_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EventOnLevelUp(int32_t NewExperienceLevel); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.EventOnLevelUp // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AddCompanion(struct AActor* Companion); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddCompanion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void RemoveCompanion(struct AActor* Companion); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveCompanion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void FadeRogueStencil(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.FadeRogueStencil // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ServerDown(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerDown // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ServerSuicide(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerSuicide // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AbilityCooldownDisabledCheat(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.AbilityCooldownDisabledCheat // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void MultiEnterRagdoll(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MultiEnterRagdoll // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Update Stow Location(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Update Stow Location // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event EnteredDropship(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event EnteredDropship // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyBoneEnteredSnow_BP(struct FName BoneName, struct FVector GroundPosition, float SnowHeight, struct UPhysicalMaterial* PhysicalMaterial); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.NotifyBoneEnteredSnow_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyBoneLeftSnow_BP(struct FName BoneName, struct FVector GroundPosition, float SnowHeight, struct UPhysicalMaterial* PhysicalMaterial); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.NotifyBoneLeftSnow_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ApplyScourgeInfection(struct AActor* DamagedActor, float UnmodifiedDamageAmount, float ArmorDamageAmount, float HealthDamageAmount, struct FDamageEvent DamageEvent, struct AActor* CauseActor, char DamageModifiersApplied, struct AController* InstigatorController, struct FS_PreTakeDamageInfo DamageInfo); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyScourgeInfection // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnGearUpgrade(struct USkeletalMesh* NewSkeletalMesh, struct FActiveGameplayEffectHandle GameplayEffectHandle); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event OnGearUpgrade // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event-Backpack_OnMantleUpdate(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event-Backpack_OnMantleUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void 1upFX(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.1upFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void FreedFromCocoon(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.FreedFromCocoon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event CheckTimeUntilStormUpgrade(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event CheckTimeUntilStormUpgrade // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnTimeUntilStormUpgradeValid(float Seconds); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event OnTimeUntilStormUpgradeValid // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceivePossessed(struct AController* NewController); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HungerSurvivalEffects(float NewStatValue, float OldStatValue, float StatValueChange); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.HungerSurvivalEffects // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ColdSurvivalEffects(float NewStatValue, float OldStatValue, float StatValueChange); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ColdSurvivalEffects // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InfectionSurvivalEffects(float NewStatValue, float OldStatValue, float StatValueChange); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InfectionSurvivalEffects // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void On Crafting Completed(int32_t RecipeIndex, struct FS_RecipeMetadata RecipeMetadata); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Crafting Completed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void TheGoopyGetup(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TheGoopyGetup // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void TheGoopyGetdown(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TheGoopyGetdown // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void MultiEnterRagdollInvisible(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MultiEnterRagdollInvisible // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyReplicatedExecutor_BP(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.NotifyReplicatedExecutor_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetupPlayerClass_BP(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetupPlayerClass_BP // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Handle OnDowned(struct US_StatsComponent* StatsComponent, enum class ES_StatsState OldState, enum class ES_StatsState NewState); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Handle OnDowned // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnSimpleStatChange(enum class ES_StatType StatType, float OldStatValue, float StatValueChange, float NewStatValue); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSimpleStatChange // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HealthSurvivalEffects(float NewStatValue, float OldStatValue, float StatValueChange); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.HealthSurvivalEffects // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ResolveAndQueueDialogueEvent(struct FS_DialogueEventValue DialogueEvent, struct FS_DialogueContext Context, struct FS_PriorityAudioSettings PrioritySettings); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResolveAndQueueDialogueEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCocooned_BP(struct FS_PlayerCocoonedParameters PlayerCocoonedParameters); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.NotifyCocooned_BP // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyFreedFromCocoon_BP(struct FS_PlayerFreedFromCocoonParameters PlayerFreedFromCocoonParameters); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.NotifyFreedFromCocoon_BP // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyPlayerCharacterTerminal_BP(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.NotifyPlayerCharacterTerminal_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BankFx(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BankFx // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CustomEvent_1(int32_t NewLevel); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.CustomEvent_1 // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void On Pre Take Point Damage(struct AActor* DamagedActor, float UnmodifiedDamageAmount, float ArmorDamageAmount, float HealthDamageAmount, struct FPointDamageEvent PointDamageEvent, struct FHitResult HitResult, struct AActor* CauseActor, char DamageModifiersApplied, bool Critical); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Pre Take Point Damage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Apply Client Damage Effects(float UnmodifiedDamageAmount, float Armor_Shield_DamageAmount, float Health_DamageAmount, struct FHitResult Hit Result, struct AActor* Cause Actor, struct FPointDamageEvent Point Damage Event); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Apply Client Damage Effects // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnJumped(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnJumped // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnSprintUpdated(bool IsSprintOn); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSprintUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void On Slide Updated(enum class ES_Slide NewSlide, int32_t NewCustomIdx, enum class ES_Slide OldSlide, int32_t OldCustomIdx); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Slide Updated // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void music_PlayerDowned(struct US_StatsComponent* StatsComponent, enum class ES_StatsState OldState, enum class ES_StatsState NewState); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.music_PlayerDowned // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void music_PlayerDied(struct US_StatsComponent* StatsComponent, enum class ES_StatsState OldState, enum class ES_StatsState NewState); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.music_PlayerDied // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Jae_Helmet_Toggle(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Jae_Helmet_Toggle // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnAbilityActivated(struct FGameplayAbilitySpecHandle GameplayAbilitySpecHandle, struct UGameplayAbility* GameplayAbility); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnAbilityActivated // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnTakeDamageForVO(enum class ES_StatChangeCauseType StatChangeCauseType, float Damage, float OldStatValue, float NewStatValue); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnTakeDamageForVO // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VO Stat Events(enum class ES_StatType StatType, float OldStatValue, float StatValueChange, float NewStatValue); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.VO Stat Events // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnColdStatUpdate(float OldValue, float NewValue); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnColdStatUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyItemDropped_BP(struct FS_ItemState ItemState, struct FS_EventParameterVariant ItemPickup); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.NotifyItemDropped_BP // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExhaustionSurvivalEffects(float NewStatValue, float OldStatValue, float StatValueChange); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExhaustionSurvivalEffects // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Spawn Breath FX(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Spawn Breath FX // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__m_statsComponent_K2Node_ComponentBoundEvent_1_OnStateChange__DelegateSignature(struct US_StatsComponent* StatsComponent, enum class ES_StatsState OldState, enum class ES_StatsState NewState); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__m_statsComponent_K2Node_ComponentBoundEvent_1_OnStateChange__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnSlideUpdate(enum class ES_Slide NewSlide, int32_t NewCustomIdx, enum class ES_Slide OldSlide, int32_t OldCustomIdx); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSlideUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnNewMatchPhase(enum class EMatchPhase newPhase); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnNewMatchPhase // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CollectCameraDataEvent(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.CollectCameraDataEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnMantleUpdated_BP(bool IsMantlingOn); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMantleUpdated_BP // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnForceUpdateCameraSettings(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnForceUpdateCameraSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnDowned_Event(struct US_StatsComponent* StatsComponent, enum class ES_StatsState OldState, enum class ES_StatsState NewState); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDowned_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnCrouchUpdatedEvent(bool IsCrouchOn); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCrouchUpdatedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnDodgeUpdated_Event(bool IsDodgeOn, int32_t customIdx); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDodgeUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnADSUpdated_Event(bool IsADSOn); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnADSUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InteractStop(Revive)(enum class ES_Interaction interactionType, bool isTimedInteraction, struct AActor* Actor, struct UPrimitiveComponent* Component, int32_t instanceIndex); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractStop(Revive) // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InteractStart(Revive)(enum class ES_Interaction interactionType, bool isTimedInteraction, struct AActor* Actor, struct UPrimitiveComponent* Component, int32_t instanceIndex); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractStart(Revive) // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void On State Change(struct US_StatsComponent* StatsComponent, enum class ES_StatsState OldState, enum class ES_StatsState NewState); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.On State Change // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnEmoteEnd_Event_1(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEmoteEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnEmoteBegin_Event_1(struct FS_EmoteMontageTableRow EmoteData); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEmoteBegin_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecBegin(struct FS_ExecutionMontageTableRow ExeuctionData); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecBegin // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecEnded(bool Interrupted); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnDodgeUpdated_2(bool IsDodgeOn, int32_t customIdx); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDodgeUpdated_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void OnTimeUntilStormUpgradeValid__DelegateSignature(float Seconds); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnTimeUntilStormUpgradeValid__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnGearUpgrade__DelegateSignature(struct USkeletalMesh* NewSkeletalMesh, struct FActiveGameplayEffectHandle GameplayEffectHandle); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnGearUpgrade__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

