/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSQueryCache : NSObject {
    NSMutableDictionary * _cache;
    int  _databaseChangeToken;
    NSObject<OS_dispatch_source> * _memPressureSource;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _uniqueObjects;
}

+ (id)sharedCache;

- (id)cacheAndUniquifyQueryResults:(id)arg1;
- (void)cacheLocalObjects:(id)arg1;
- (id)cachedQueryResultsForQueries:(id)arg1;
- (void)clearCache;
- (void)dealloc;
- (id)init;
- (id)uniquifiedObjectNotDispatched:(id)arg1 localObjects:(id)arg2;

@end