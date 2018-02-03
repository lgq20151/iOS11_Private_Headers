/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeerRangeCache : NSObject {
    NSMutableDictionary * _allEntityRanges;
    NSMutableDictionary * _cachedRanges;
    bool  _cachedStorePeerRanges;
    NSString * _localPeerID;
    NSPersistentStore * _privateStore;
    NSString * _storeName;
    NSMutableDictionary * _translatedGlobalIDs;
}

@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSPersistentStore *privateStore;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) NSDictionary *translatedGlobalIDs;

+ (void)initialize;
+ (long long)integerFromPrimaryKeyString:(id)arg1;
+ (unsigned long long)peerRangeStartForPrimaryKey:(unsigned long long)arg1;

- (bool)cachePeerRanges:(id*)arg1;
- (bool)cacheSQLCorePeerRange:(id)arg1 error:(id*)arg2;
- (id)cachedRangeForLocalPrimaryKey:(unsigned long long)arg1 ofEntityNamed:(id)arg2;
- (id)cachedRangeForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned long long)arg3;
- (id)createGlobalObjectIDForManagedObjectID:(id)arg1;
- (id)createMapOfManagedObjectIDsForGlobalIDs:(id)arg1 count:(long long)arg2 error:(id*)arg3;
- (id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)describeCaches;
- (id)describeCachesVerbose;
- (id)description;
- (id)initWithPrivateStore:(id)arg1 storeName:(id)arg2 andLocalPeerID:(id)arg3;
- (id)localPeerID;
- (unsigned long long)localPrimaryKeyForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned long long)arg3;
- (id)privateStore;
- (bool)refreshPeerRangeCache:(id*)arg1;
- (id)storeName;
- (id)translatedGlobalIDs;

@end
