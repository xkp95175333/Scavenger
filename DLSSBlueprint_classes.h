// Class DLSSBlueprint.DLSSLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDLSSLibrary : UBlueprintFunctionLibrary {

	void SetDLSSSharpness(float Sharpness); // Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetDLSSMode(enum class UDLSSMode DLSSMode); // Function DLSSBlueprint.DLSSLibrary.SetDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	enum class UDLSSSupport QueryDLSSSupport(); // Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsDLSSSupported(); // Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsDLSSModeSupported(enum class UDLSSMode DLSSMode); // Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct TArray<enum class UDLSSMode> GetSupportedDLSSModes(); // Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	float GetDLSSSharpness(); // Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void GetDLSSScreenPercentageRange(float MinScreenPercentage, float MaxScreenPercentage); // Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void GetDLSSModeInformation(enum class UDLSSMode DLSSMode, bool bIsSupported, float OptimalScreenPercentage, bool bIsFixedScreenPercentage, float MinScreenPercentage, float MaxScreenPercentage, float OptimalSharpness); // Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	enum class UDLSSMode GetDLSSMode(); // Function DLSSBlueprint.DLSSLibrary.GetDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void GetDLSSMinimumDriverVersion(int32_t MinDriverVersionMajor, int32_t MinDriverVersionMinor); // Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
};

