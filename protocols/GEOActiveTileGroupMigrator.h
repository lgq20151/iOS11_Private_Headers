/* made by EzioChiu.
 */

@protocol GEOActiveTileGroupMigrator <NSObject>

@required

- (id)initWithManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 mapLayerDataManager:(GEOMapLayerDataManager *)arg2;
- (<GEOActiveTileGroupMigrationTask> *)taskForNewTileGroup:(GEOTileGroup *)arg1 inResourceManifest:(GEOResources *)arg2 oldTileGroup:(GEOActiveTileGroup *)arg3 activeScales:(NSSet *)arg4 activeScenarios:(NSSet *)arg5 updateType:(long long)arg6;

@optional

- (<GEOActiveTileGroupMigrationTask> *)opportunisticTaskForNewTileGroup:(GEOTileGroup *)arg1 inResourceManifest:(GEOResources *)arg2 oldTileGroup:(GEOActiveTileGroup *)arg3 activeScales:(NSSet *)arg4 activeScenarios:(NSSet *)arg5;

@end
