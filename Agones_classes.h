// Class Agones.AgonesSettings
// Size: 0x40 (Inherited: 0x28)
struct UAgonesSettings : UObject {
	bool bHealthPingEnabled; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float HealthPingSeconds; // 0x2c(0x04)
	bool bDebugLogEnabled; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	uint32_t RequestRetryLimit; // 0x34(0x04)
	bool bAgonesEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};
