// Enum DLSSBlueprint.UDLSSMode
enum class UDLSSMode : uint8 {
	Off,
	UltraPerformance,
	Performance,
	Balanced,
	Quality,
	UltraQuality,
	UDLSSMode_MAX,
};

// Enum DLSSBlueprint.UDLSSSupport
enum class UDLSSSupport : uint8 {
	Supported,
	NotSupported,
	NotSupportedIncompatibleHardware,
	NotSupportedDriverOutOfDate,
	NotSupportedOperatingSystemOutOfDate,
	UDLSSSupport_MAX,
};

