// Class AppleARKit.AppleARKitSettings
// Size: 0xc0 (Inherited: 0x28)
struct UAppleARKitSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	bool bRequireARKitSupport; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString FaceTrackingLogDir; // 0x38(0x10)
	struct TArray<enum class ELivelinkTrackingType> LivelinkTrackingTypes; // 0x48(0x10)
	bool bFaceTrackingLogData; // 0x58(0x01)
	bool bFaceTrackingWriteEachFrame; // 0x59(0x01)
	enum class EARFaceTrackingFileWriterType FaceTrackingFileWriterType; // 0x5a(0x01)
	bool bShouldWriteCameraImagePerFrame; // 0x5b(0x01)
	float WrittenCameraImageScale; // 0x5c(0x04)
	int32_t WrittenCameraImageQuality; // 0x60(0x04)
	enum class ETextureRotationDirection WrittenCameraImageRotation; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t LiveLinkPublishingPort; // 0x68(0x04)
	struct FName DefaultFaceTrackingLiveLinkSubjectName; // 0x6c(0x08)
	struct FName DefaultPoseTrackingLiveLinkSubjectName; // 0x74(0x08)
	enum class EARFaceTrackingDirection DefaultFaceTrackingDirection; // 0x7c(0x01)
	bool bAdjustThreadPrioritiesDuringARSession; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	int32_t GameThreadPriorityOverride; // 0x80(0x04)
	int32_t RenderThreadPriorityOverride; // 0x84(0x04)
	struct FString ARKitTimecodeProvider; // 0x88(0x10)
	char pad_98[0x28]; // 0x98(0x28)
};

// Class AppleARKit.AppleARKitTextureCameraImage
// Size: 0x108 (Inherited: 0x100)
struct UAppleARKitTextureCameraImage : UARTextureCameraImage {
	char pad_100[0x8]; // 0x100(0x08)
};

// Class AppleARKit.AppleARKitTextureCameraDepth
// Size: 0x108 (Inherited: 0x108)
struct UAppleARKitTextureCameraDepth : UARTextureCameraDepth {
};

// Class AppleARKit.AppleARKitEnvironmentCaptureProbeTexture
// Size: 0x160 (Inherited: 0x158)
struct UAppleARKitEnvironmentCaptureProbeTexture : UAREnvironmentCaptureProbeTexture {
	char pad_158[0x8]; // 0x158(0x08)
};

// Class AppleARKit.AppleARKitOcclusionTexture
// Size: 0x108 (Inherited: 0x100)
struct UAppleARKitOcclusionTexture : UARTexture {
	char pad_100[0x8]; // 0x100(0x08)
};

// Class AppleARKit.AppleARKitCameraVideoTexture
// Size: 0x108 (Inherited: 0x100)
struct UAppleARKitCameraVideoTexture : UARTextureCameraImage {
	char pad_100[0x8]; // 0x100(0x08)
};

// Class AppleARKit.AppleARKitTimecodeProvider
// Size: 0x38 (Inherited: 0x30)
struct UAppleARKitTimecodeProvider : UTimecodeProvider {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AppleARKit.AppleARKitEnvironmentCaptureProbe
// Size: 0x120 (Inherited: 0x110)
struct UAppleARKitEnvironmentCaptureProbe : UAREnvironmentCaptureProbe {
	struct UAppleARKitEnvironmentCaptureProbeTexture* ARKitEnvironmentTexture; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)
};

// Class AppleARKit.ARKitCameraOverlayMaterialLoader
// Size: 0x50 (Inherited: 0x28)
struct UARKitCameraOverlayMaterialLoader : UObject {
	struct UMaterialInterface* DefaultCameraOverlayMaterial; // 0x28(0x08)
	struct UMaterialInterface* DepthOcclusionOverlayMaterial; // 0x30(0x08)
	struct UMaterialInterface* MatteOcclusionOverlayMaterial; // 0x38(0x08)
	struct UMaterialInterface* SceneDepthOcclusionMaterial; // 0x40(0x08)
	struct UMaterialInterface* SceneDepthColorationMaterial; // 0x48(0x08)
};

// Class AppleARKit.ARKitGeoTrackingSupport
// Size: 0x28 (Inherited: 0x28)
struct UARKitGeoTrackingSupport : UARGeoTrackingSupport {
};

// Class AppleARKit.ARKitMeshGeometry
// Size: 0x100 (Inherited: 0x100)
struct UARKitMeshGeometry : UARMeshGeometry {
};

// Class AppleARKit.MaterialExpressionARKitPassthroughCamera
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionARKitPassthroughCamera : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x40(0x0c)
	char pad_4C[0x8]; // 0x4c(0x08)
	uint32_t ConstCoordinate; // 0x54(0x04)
	enum class EARKitTextureType TextureType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

