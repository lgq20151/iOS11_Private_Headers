/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementDefinitionLoader : NSObject {
    NSArray * _allDefinitions;
    NSDictionary * _allDefinitionsByIdentifier;
    _HKMobileAssetDownloadManager * _assetDownloadManager;
    NSMutableArray * _blocksToRunAfterInitialization;
    NSDictionary * _builtinDefinitionsByIdentifier;
    bool  _didCompleteInitialLoad;
    NSDictionary * _dynamicDefinitionsByIdentifier;
    int  _externalDefinitionsChangedNotificationCount;
    NSDictionary * _injectedTestDefinitionsByIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _remoteDefinitionsByIdentifier;
    NSDictionary * _resourcesPathURLsByIdentifier;
    NSDictionary * _stickersPathURLsByIdentifier;
}

+ (id)_achievementAssetPathURLsByIdentifier:(id)arg1;
+ (id)_assetsGroupedByDefinitionIdentifier:(id)arg1;
+ (id)_definitionIdentifiersFromAssets:(id)arg1;
+ (id)_dynamicDefinitionLoader;
+ (id)_findAchievementAssetsToDownload:(id*)arg1 remove:(id*)arg2 installed:(id*)arg3 amongAssets:(id)arg4 definitions:(id)arg5 withFilterBlock:(id /* block */)arg6;
+ (void)_getDefinitionsAsset:(id*)arg1 resourcesAssets:(id*)arg2 stickersAssets:(id*)arg3 installedOnly:(bool)arg4 fromCombinedAssets:(id)arg5;
+ (void)_getNewestAsset:(id*)arg1 olderAssets:(id*)arg2 installedOnly:(bool)arg3 fromAssets:(id)arg4;
+ (id)_loadAchievementDefinitionsFromAsset:(id)arg1;
+ (void)_loadLoadsRemoteDefinitions;
+ (bool)_loadsRemoteDefinitions;
+ (id)_perMonthDefinitionIdentifiers;
+ (id)_perWorkoutTypeDefinitionIdentifiers;
+ (void)_setAndNotifyStickersAvailable:(bool)arg1;
+ (void)_setLoadsRemoteDefinitions:(bool)arg1;
+ (id)_suppressedDefinitionIdentifiers;
+ (void)initialize;
+ (id)serverURLWithError:(id*)arg1;
+ (void)setDynamicAchievementDefinitionLoader:(id)arg1;
+ (void)setDynamicDefinitionLoaderInitializationDisabled:(bool)arg1;
+ (void)setServerURL:(id)arg1;
+ (id)sharedLoader;

- (void).cxx_destruct;
- (void)_achievementAssetsDidChangeWithAssets:(id)arg1 postDarwinNotification:(bool)arg2;
- (id)_achievementDefinitionsByIdentifier;
- (void)_achievementDefinitionsChangedExternally;
- (id)_allAchievementResourcesPredicate;
- (id)_allAchievementStickersPredicate;
- (void)_clearCaches;
- (void)_clearInjectedDefinitionsForTesting;
- (id)_compatibilityVersionPredicate;
- (id)_definitionsPlistPredicate;
- (void)_dynamicAchievementDefinitionsChangedExternally;
- (void)_fetchCurrentAssetsWithCompletion:(id /* block */)arg1;
- (void)_injectDefinitionsForTesting:(id)arg1;
- (void)_queue_clearCaches;
- (bool)_queue_isDefinitionWithIdentifierRemotelyDefined:(id)arg1;
- (void)_queue_rebuildAllDefinitionsByIdentifierDictionary;
- (void)_queue_updateStickerAvailabilityWithInstalledAssets:(id)arg1 downloadedAssets:(id)arg2 removedAssets:(id)arg3 usingFilter:(id)arg4;
- (void)_updateDynamicAchievementDefinitions;
- (id)achievementDefinitionForIdentifier:(id)arg1;
- (id)allAchievementDefinitionIdentifiers;
- (id)allAchievementDefinitions;
- (id)allRemotelyDefinedDefinitionIdentifiers;
- (id)dynamicDefinitions;
- (id)init;
- (bool)isDefinitionWithIdentifierLoaded:(id)arg1;
- (bool)isDefinitionWithIdentifierRemotelyDefined:(id)arg1;
- (id)loadedRemotelyDefinedDefinitionIdentifiers;
- (id)resourcesBundleForIdentifier:(id)arg1;
- (void)runBlockAfterInitialization:(id /* block */)arg1;
- (id)stickersBundleForIdentifier:(id)arg1;
- (void)updateAchievementResourcesAssetsRemovingExpired:(bool)arg1 withFilter:(id)arg2 completion:(id /* block */)arg3;
- (void)updateAchievementStickersAssetsRemovingExpired:(bool)arg1 withFilter:(id)arg2 completion:(id /* block */)arg3;
- (void)updateDefinitionsAssetWithCompletion:(id /* block */)arg1;

@end
