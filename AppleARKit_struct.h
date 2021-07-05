// Enum AppleARKit.ELivelinkTrackingType
enum class ELivelinkTrackingType : uint8 {
	FaceTracking,
	PoseTracking,
	ELivelinkTrackingType_MAX,
};

// Enum AppleARKit.EARFaceTrackingFileWriterType
enum class EARFaceTrackingFileWriterType : uint8 {
	None,
	CSV,
	JSON,
	EARFaceTrackingFileWriterType_MAX,
};

// Enum AppleARKit.EARKitTextureType
enum class EARKitTextureType : uint8 {
	TextureY,
	TextureCbCr,
	EARKitTextureType_MAX,
};

// ScriptStruct AppleARKit.AppleARKitCamera
// Size: 0x80 (Inherited: 0x00)
struct FAppleARKitCamera {
	enum class EARTrackingQuality TrackingQuality; // 0x00(0x01)
	enum class EARTrackingQualityReason TrackingQualityReason; // 0x01(0x01)
	char pad_2[0xe]; // 0x02(0x0e)
	struct FTransform Transform; // 0x10(0x30)
	struct FQuat Orientation; // 0x40(0x10)
	struct FVector Translation; // 0x50(0x0c)
	struct FVector2D ImageResolution; // 0x5c(0x08)
	struct FVector2D FocalLength; // 0x64(0x08)
	struct FVector2D PrincipalPoint; // 0x6c(0x08)
	char pad_74[0xc]; // 0x74(0x0c)
};

// ScriptStruct AppleARKit.AppleARKitFrame
// Size: 0x100 (Inherited: 0x00)
struct FAppleARKitFrame {
	char pad_0[0x100]; // 0x00(0x100)
};

// ScriptStruct AppleARKit.AppleARKitLightEstimate
// Size: 0x0c (Inherited: 0x00)
struct FAppleARKitLightEstimate {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AmbientIntensity; // 0x04(0x04)
	float AmbientColorTemperatureKelvin; // 0x08(0x04)
};

