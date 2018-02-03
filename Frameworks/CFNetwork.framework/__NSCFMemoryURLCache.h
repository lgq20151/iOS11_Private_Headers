/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFMemoryURLCache : NSObject {
    unsigned long long  _currentLength;
    id  _internal;
    unsigned long long  _memoryCapacity;
    NSObject<OS_dispatch_queue> * _memoryQueue;
    NSMutableDictionary * _memoryStorage;
    NSMutableArray * _memoryStorageLRU;
}

+ (void)initialize;

- (id)cachedResponseForRequest:(id)arg1;
- (unsigned long long)currentDiskUsage;
- (unsigned long long)currentMemoryUsage;
- (void)dealloc;
- (id)description;
- (unsigned long long)diskCapacity;
- (id)initByCallingSuperSuperInit;
- (id)initEmptyCache;
- (id)initMemoryCache;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;
- (unsigned long long)memoryCapacity;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)setDiskCapacity:(unsigned long long)arg1;
- (void)setMemoryCapacity:(unsigned long long)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;

@end