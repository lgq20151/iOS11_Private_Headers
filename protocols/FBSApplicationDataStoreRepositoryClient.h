/* made by EzioChiu.
 */

@protocol FBSApplicationDataStoreRepositoryClient <NSObject>

@required

- (void)addObserver:(id <FBSApplicationDataStoreRepositoryClientObserver>)arg1;
- (void)addPrefetchedKeys:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)availableDataStores:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)invalidate;
- (void)objectForKey:(void *)arg1 forApplication:(void *)arg2 withResult:(void *)arg3; // needs 3 arg types, found 12: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)objectForKey:(void *)arg1 forApplication:(void *)arg2 withResult:(void *)arg3 checkPrefetch:(void *)arg4; // needs 4 arg types, found 13: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*, bool
- (bool)prefetchedObjectIfAvailableForKey:(NSString *)arg1 application:(NSString *)arg2 outObject:(id*)arg3;
- (void)removeAllObjectsForApplication:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeObjectForKey:(void *)arg1 forApplication:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeObserver:(id <FBSApplicationDataStoreRepositoryClientObserver>)arg1;
- (void)removePrefetchedKeys:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setObject:(void *)arg1 forKey:(void *)arg2 forApplication:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: id, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)synchronizeWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (id)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2 checkPrefetch:(bool)arg3;

@end
