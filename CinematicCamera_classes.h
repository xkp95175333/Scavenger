// Class CinematicCamera.CameraRig_Crane
// Size: 0x2b8 (Inherited: 0x288)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x288(0x04)
	float CraneYaw; // 0x28c(0x04)
	float CraneArmLength; // 0x290(0x04)
	bool bLockMountPitch; // 0x294(0x01)
	bool bLockMountYaw; // 0x295(0x01)
	char pad_296[0x2]; // 0x296(0x02)
	struct USceneComponent* TransformComponent; // 0x298(0x08)
	struct USceneComponent* CraneYawControl; // 0x2a0(0x08)
	struct USceneComponent* CranePitchControl; // 0x2a8(0x08)
	struct USceneComponent* CraneCameraMount; // 0x2b0(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x2a8 (Inherited: 0x288)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x288(0x04)
	bool bLockOrientationToRail; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct USceneComponent* TransformComponent; // 0x290(0x08)
	struct USplineComponent* RailSplineComponent; // 0x298(0x08)
	struct USceneComponent* RailCameraMount; // 0x2a0(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
};

// Class CinematicCamera.CineCameraActor
// Size: 0x870 (Inherited: 0x810)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x810(0x50)
	char pad_860[0x10]; // 0x860(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class CinematicCamera.CineCameraComponent
// Size: 0x8c0 (Inherited: 0x7c0)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x7c0(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x7cc(0x0c)
	struct FCameraLensSettings LensSettings; // 0x7d8(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x7f0(0x58)
	float CurrentFocalLength; // 0x848(0x04)
	float CurrentAperture; // 0x84c(0x04)
	float CurrentFocusDistance; // 0x850(0x04)
	char pad_854[0xc]; // 0x854(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x860(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x870(0x10)
	struct FString DefaultFilmbackPresetName; // 0x880(0x10)
	struct FString DefaultFilmbackPreset; // 0x890(0x10)
	struct FString DefaultLensPresetName; // 0x8a0(0x10)
	float DefaultLensFocalLength; // 0x8b0(0x04)
	float DefaultLensFStop; // 0x8b4(0x04)
	char pad_8B8[0x8]; // 0x8b8(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

