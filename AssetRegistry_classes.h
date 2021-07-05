// Class AssetRegistry.AssetRegistryImpl
// Size: 0x7b8 (Inherited: 0x28)
struct UAssetRegistryImpl : UObject {
	char pad_28[0x790]; // 0x28(0x790)
};

// Class AssetRegistry.AssetRegistryHelpers
// Size: 0x28 (Inherited: 0x28)
struct UAssetRegistryHelpers : UObject {

	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FARFilter SetFilterTagsAndValues(struct FARFilter InFilter, struct TArray<struct FTagAndValue> InTagsAndValues); // Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsValid(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsValid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsUAsset(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsUAsset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsRedirector(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsRedirector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsAssetLoaded(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool GetTagValue(struct FAssetData InAssetData, struct FName InTagName, struct FString OutTagValue); // Function AssetRegistry.AssetRegistryHelpers.GetTagValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FString GetFullName(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetFullName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FString GetExportTextName(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetExportTextName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UObject* GetClass(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetClass // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct TScriptInterface<None> GetAssetRegistry(); // Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct UObject* GetAsset(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetAsset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FAssetData CreateAssetData(struct UObject* InAsset, bool bAllowBlueprintClass); // Function AssetRegistry.AssetRegistryHelpers.CreateAssetData // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
};

// Class AssetRegistry.AssetRegistry
// Size: 0x28 (Inherited: 0x28)
struct UAssetRegistry : UInterface {

	void WaitForCompletion(); // Function AssetRegistry.AssetRegistry.WaitForCompletion // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void UseFilterToExcludeAssets(struct TArray<struct FAssetData> AssetDataList, struct FARFilter Filter); // Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	void SearchAllAssets(bool bSynchronousSearch); // Function AssetRegistry.AssetRegistry.SearchAllAssets // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ScanPathsSynchronous(struct TArray<struct FString> InPaths, bool bForceRescan); // Function AssetRegistry.AssetRegistry.ScanPathsSynchronous // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ScanModifiedAssetFiles(struct TArray<struct FString> InFilePaths); // Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ScanFilesSynchronous(struct TArray<struct FString> InFilePaths, bool bForceRescan); // Function AssetRegistry.AssetRegistry.ScanFilesSynchronous // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RunAssetsThroughFilter(struct TArray<struct FAssetData> AssetDataList, struct FARFilter Filter); // Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	void PrioritizeSearchPath(struct FString PathToPrioritize); // Function AssetRegistry.AssetRegistry.PrioritizeSearchPath // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool K2_GetReferencers(struct FName PackageName, struct FAssetRegistryDependencyOptions ReferenceOptions, struct TArray<struct FName> OutReferencers); // Function AssetRegistry.AssetRegistry.K2_GetReferencers // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	bool K2_GetDependencies(struct FName PackageName, struct FAssetRegistryDependencyOptions DependencyOptions, struct TArray<struct FName> OutDependencies); // Function AssetRegistry.AssetRegistry.K2_GetDependencies // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	bool IsLoadingAssets(); // Function AssetRegistry.AssetRegistry.IsLoadingAssets // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool HasAssets(struct FName PackagePath, bool bRecursive); // Function AssetRegistry.AssetRegistry.HasAssets // (Native|Public|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	void GetSubPaths(struct FString InBasePath, struct TArray<struct FString> OutPathList, bool bInRecurse); // Function AssetRegistry.AssetRegistry.GetSubPaths // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	bool GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData> OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPath // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	bool GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData> OutAssetData, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPackageName // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	bool GetAssetsByClass(struct FName ClassName, struct TArray<struct FAssetData> OutAssetData, bool bSearchSubClasses); // Function AssetRegistry.AssetRegistry.GetAssetsByClass // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	bool GetAssets(struct FARFilter Filter, struct TArray<struct FAssetData> OutAssetData); // Function AssetRegistry.AssetRegistry.GetAssets // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetByObjectPath // (Native|Public|HasDefaults|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	void GetAllCachedPaths(struct TArray<struct FString> OutPathList); // Function AssetRegistry.AssetRegistry.GetAllCachedPaths // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
	bool GetAllAssets(struct TArray<struct FAssetData> OutAssetData, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAllAssets // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xffff8008e4a10000
};

