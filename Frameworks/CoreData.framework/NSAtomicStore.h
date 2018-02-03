/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAtomicStore : NSPersistentStore {
    NSMutableDictionary * _entityCache;
    long long  _nextReference;
    NSMutableDictionary * _nodeCache;
    void * _reserved4;
    void * _reserved5;
    NSMutableDictionary * _storeMetadata;
}

+ (void)initialize;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;

- (void)_addObject:(id)arg1;
- (void)_deleteNodeFromEntityCache:(id)arg1;
- (void)_deleteNodeFromMainCache:(id)arg1;
- (void)_didLoadMetadata;
- (id)_getNewIDForObject:(id)arg1;
- (void)_insertNodeIntoEntityCache:(id)arg1;
- (void)_insertNodeIntoMainCache:(id)arg1;
- (void)_preflightCrossCheck;
- (id)_rawMetadata__;
- (void)_registerCacheNode:(id)arg1;
- (void)_removeObject:(id)arg1;
- (id)_retainedObjectIDForEntity:(id)arg1 referenceObject:(id)arg2;
- (id)_retrieveNodeForObject:(id)arg1;
- (id)_retrieveNodeForObjectID:(id)arg1;
- (id)_retrieveNodesSatisfyingRequest:(id)arg1;
- (void)_storeNextReferenceInMetadata;
- (void)_updateObject:(id)arg1;
- (void)addCacheNodes:(id)arg1;
- (id)cacheNodeForObjectID:(id)arg1;
- (id)cacheNodes;
- (void)dealloc;
- (id)executeCountRequest:(id)arg1 withContext:(id)arg2;
- (id)executeFetchRequest:(id)arg1 withContext:(id)arg2;
- (id)executeRefreshRequest:(id)arg1 withContext:(id)arg2;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeSaveChangesRequest:(id)arg1 withContext:(id)arg2;
- (id)init;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (bool)load:(id*)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (id)metadata;
- (id)newCacheNodeForManagedObject:(id)arg1;
- (id)newReferenceObjectForManagedObject:(id)arg1;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)objectIDForEntity:(id)arg1 referenceObject:(id)arg2;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)referenceObjectForObjectID:(id)arg1;
- (bool)save:(id*)arg1;
- (void)setMetadata:(id)arg1;
- (void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2;
- (void)willRemoveCacheNodes:(id)arg1;

@end
