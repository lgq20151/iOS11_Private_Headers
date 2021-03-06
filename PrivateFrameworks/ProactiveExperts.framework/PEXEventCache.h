/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXEventCache : NSObject {
    id /* block */  _backfiller;
    NSArray * _cachedEvents;
    NSMutableIndexSet * _cachedRanges;
    PEXEventCacheEvictionManager * _evictionManager;
    unsigned long long  _extraSecondsToBackfill;
    NSObject<OS_dispatch_queue> * _metricsQueue;
}

@property (nonatomic) unsigned long long extraSecondsToBackfill;

- (void).cxx_destruct;
- (void)evictAllExceptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)extraSecondsToBackfill;
- (id)initWithBackfiller:(id /* block */)arg1;
- (id)initWithBackfiller:(id /* block */)arg1 evictionManager:(id)arg2;
- (id)objectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeAllObjects;
- (void)setExtraSecondsToBackfill:(unsigned long long)arg1;

@end
