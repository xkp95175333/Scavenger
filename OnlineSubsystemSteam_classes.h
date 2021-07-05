// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// Size: 0x28 (Inherited: 0x28)
struct USteamAuthComponentModuleInterface : UHandlerComponentFactory {
};

// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x1b98 (Inherited: 0x1b90)
struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1b90(0x01)
	char pad_1B91[0x7]; // 0x1b91(0x07)
};

// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x7e0 (Inherited: 0x7d8)
struct USteamNetDriver : UIpNetDriver {
	char pad_7D8[0x8]; // 0x7d8(0x08)
};

