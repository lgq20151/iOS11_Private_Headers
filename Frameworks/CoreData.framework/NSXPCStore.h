/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStore : NSIncrementalStore {
    int  _assertion;
    NSGenerationalRowCache * _cache;
    NSMutableDictionary * _changeCache;
    NSSQLCore * _core;
    NSGenerationToken * _identifier;
    NSSQLModel * _model;
    NSXPCStoreConnection * _myConnection;
    NSXPCStoreNotificationObserver * _observer;
    NSString * _remoteStoreChangedNotificationName;
    NSString * _sanityCheckToken;
}

@property (readonly, copy) NSString *remoteStoreChangedNotificationName;

+ (bool)_isOnExtendedTimeout;
+ (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
+ (int)debugDefault;
+ (void)initialize;
+ (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
+ (void)setDebugDefault:(int)arg1;

- (id)_cacheNodePropertiesFromObject:(id)arg1;
- (id)_cachedRowForObjectWithID:(id)arg1 generation:(id)arg2;
- (id)_cachedRowForRelationship:(id)arg1 onObjectWithID:(id)arg2 generation:(id)arg3;
- (void)_clearCachedRowForObjectWithID:(id)arg1 generation:(id)arg2;
- (void)_commitChangesForRequest:(id)arg1;
- (id)_createAndCacheRowForObjectWithID:(id)arg1 propertyValues:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
- (id)_executeSaveRequest:(id)arg1 forceInsertsToUpdates:(bool)arg2 withContext:(id)arg3 interrupts:(unsigned long long*)arg4 error:(id*)arg5;
- (void)_freeQueryGenerationWithIdentifier:(id)arg1;
- (id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2;
- (Class)_objectIDClass;
- (id)_sanityCheckToken;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (void)_updateRollbackCacheForObjectWithID:(id)arg1 relationship:(id)arg2 withValuesFrom:(id)arg3;
- (void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 generation:(id)arg4;
- (void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 withTimestamp:(double)arg4 generation:(id)arg5;
- (void)cacheFetchedRows:(id)arg1 forManagedObjects:(id)arg2 generation:(id)arg3;
- (id)currentQueryGeneration;
- (void)dealloc;
- (void)decodePrefetchArray:(id)arg1 forSources:(id)arg2 context:(id)arg3;
- (void)decodePrefetchResult:(id)arg1 forSources:(id)arg2 context:(id)arg3;
- (id)decodeResults:(id)arg1 forFaultOfObjectWithID:(id)arg2 context:(id)arg3 error:(id*)arg4;
- (id)decodeResults:(id)arg1 forFetch:(id)arg2 context:(id)arg3 error:(id*)arg4;
- (id)decodeValue:(id)arg1 forRelationship:(id)arg2 onSource:(id)arg3 inContext:(id)arg4 error:(id*)arg5;
- (void)disconnect;
- (void)disconnectConnection:(id)arg1;
- (id)encodeObjectsForSave:(id)arg1 forDelete:(bool)arg2;
- (id)encodeSaveRequest:(id)arg1 forceInsertsToUpdates:(bool)arg2;
- (id)entityForEntityDescription:(id)arg1;
- (id)executeBatchDeleteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeFetchRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executePersistentHistoryRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executePullChangesRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeSaveRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)freeQueryGenerationWithIdentifier:(id)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (bool)load:(id*)arg1;
- (bool)loadMetadata:(id*)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)model;
- (struct _NSScalarObjectID { Class x1; }*)newForeignKeyID:(long long)arg1 entity:(id)arg2;
- (struct _NSScalarObjectID { Class x1; }*)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)objectIDFactoryForEntity:(id)arg1;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)remoteStoreChangedNotificationName;
- (id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (id)retainedConnection;
- (id)sendMessage:(id)arg1 fromContext:(id)arg2 interrupts:(unsigned long long*)arg3 error:(id*)arg4;
- (id)serviceName;
- (void)setIdentifier:(id)arg1;
- (void)setSQLCore:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setupRemoteStoreObserver;
- (id)sqlCore;
- (bool)supportsGenerationalQuerying;
- (id)type;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;

@end
