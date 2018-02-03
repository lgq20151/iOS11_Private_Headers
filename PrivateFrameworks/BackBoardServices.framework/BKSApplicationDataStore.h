/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSApplicationDataStore : NSObject {
    FBSApplicationDataStore * _fbsApplicationDataStore;
}

@property (nonatomic, readonly, retain) NSString *bundleID;

+ (id)applicationsWithAvailableStores;
+ (void)setPrefetchedKeys:(id)arg1;
+ (id)storeForApplication:(id)arg1;
+ (void)synchronize;

- (id)_initWithFBSApplicationDataStore:(id)arg1;
- (id)archivedObjectForKey:(id)arg1;
- (void)archivedObjectForKey:(id)arg1 withResult:(id /* block */)arg2;
- (id)bundleID;
- (void)dealloc;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)objectForKey:(id)arg1 withResult:(id /* block */)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(id /* block */)arg3;
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(id /* block */)arg3;
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
