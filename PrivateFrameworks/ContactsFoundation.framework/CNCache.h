/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNCache : NSObject {
    <CNScheduler> * _resourceScheduler;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) <CNScheduler> *resourceScheduler;
@property (nonatomic, readonly) NSMutableDictionary *storage;

+ (id)atomicCache;
+ (id)cache;

- (void).cxx_destruct;
- (id)allKeys;
- (id)allObjects;
- (id)init;
- (id)initWithResourceScheduler:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 onCacheMiss:(id /* block */)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)performWithResourceLock:(id /* block */)arg1;
- (void)removeAllObjects;
- (id)resourceScheduler;
- (id)resultWithResourceLock:(id /* block */)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)storage;

@end
