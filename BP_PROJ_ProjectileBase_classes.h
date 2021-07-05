// BlueprintGeneratedClass BP_PROJ_ProjectileBase.BP_PROJ_ProjectileBase_C
// Size: 0x484 (Inherited: 0x3f0)
struct ABP_PROJ_ProjectileBase_C : AS_BulletProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UParticleSystemComponent* Vapor Trail; // 0x3f8(0x08)
	struct UStaticMeshComponent* Projectile Mesh; // 0x400(0x08)
	struct USceneComponent* Scene; // 0x408(0x08)
	float Projectile Width; // 0x410(0x04)
	float Projectile Width Min; // 0x414(0x04)
	float Projectile Width Max; // 0x418(0x04)
	struct FVector CurrentPosition; // 0x41c(0x0c)
	struct FVector PreviousPosition; // 0x428(0x0c)
	bool Is Projectile a Tracer; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	float Trail Draw Distance; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UParticleSystem* Weapon Custom Impact; // 0x440(0x08)
	bool Attach Custom Impact FX; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct UParticleSystem* Trail Particle System; // 0x450(0x08)
	struct UMaterialInterface* Tracer Material; // 0x458(0x08)
	struct UMaterialInterface* Decal; // 0x460(0x08)
	float Decal Lifetime; // 0x468(0x04)
	float Decal Fade Delay; // 0x46c(0x04)
	float Decal Fade Duration; // 0x470(0x04)
	struct FVector Decal Size; // 0x474(0x0c)
	float Impact Delay Offset; // 0x480(0x04)

	void Spawn Impact VFX(struct FHitResult Hit, struct UParticleSystem* Impact Effect, struct UMaterialInterface* DecalMaterial); // Function BP_PROJ_ProjectileBase.BP_PROJ_ProjectileBase_C.Spawn Impact VFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Spawn Impact VFX Attached(struct FHitResult Hit, struct UParticleSystem* Impact Effect, struct UMaterialInterface* DecalMaterial); // Function BP_PROJ_ProjectileBase.BP_PROJ_ProjectileBase_C.Spawn Impact VFX Attached // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void LandscapeImpactFX(struct FVector WorldPosition, enum class EPhysicalSurface SurfaceType); // Function BP_PROJ_ProjectileBase.BP_PROJ_ProjectileBase_C.LandscapeImpactFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UserConstructionScript(); // Function BP_PROJ_ProjectileBase.BP_PROJ_ProjectileBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnImpact(struct FHitResult ImpactResult); // Function BP_PROJ_ProjectileBase.BP_PROJ_ProjectileBase_C.OnImpact // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_PROJ_ProjectileBase.BP_PROJ_ProjectileBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnSpawnFromPool(); // Function BP_PROJ_ProjectileBase.BP_PROJ_ProjectileBase_C.OnSpawnFromPool // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnReturnToPool(); // Function BP_PROJ_ProjectileBase.BP_PROJ_ProjectileBase_C.OnReturnToPool // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnImpactWithLandscape(struct FHitResult ImpactResult, float SnowDepth); // Function BP_PROJ_ProjectileBase.BP_PROJ_ProjectileBase_C.OnImpactWithLandscape // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_PROJ_ProjectileBase.BP_PROJ_ProjectileBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_PROJ_ProjectileBase(int32_t EntryPoint); // Function BP_PROJ_ProjectileBase.BP_PROJ_ProjectileBase_C.ExecuteUbergraph_BP_PROJ_ProjectileBase // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

