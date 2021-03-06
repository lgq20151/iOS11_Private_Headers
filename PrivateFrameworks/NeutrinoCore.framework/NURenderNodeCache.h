/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURenderNodeCache : NSObject {
    NSHashTable * _cache;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addNode:(id)arg1;
- (void)addNode:(id)arg1;
- (id)cachedNodeForNode:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)retrieveAndCacheNode:(id)arg1;

@end
