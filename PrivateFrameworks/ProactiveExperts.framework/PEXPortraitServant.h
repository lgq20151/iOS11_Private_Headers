/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXPortraitServant : PEXServant {
    NSDate * _lastRecentEntityQueryDate;
}

- (void).cxx_destruct;
- (id)_makeLastQueryDate;
- (id)init;
- (unsigned char)loadNamesWithNamedEntityHandler:(id /* block */)arg1 contactNameItemHandler:(id /* block */)arg2 detectedSince:(id)arg3;
- (unsigned char)loadRecentNamesWithNamedEntityHandler:(id /* block */)arg1 contactNameItemHandler:(id /* block */)arg2 source:(unsigned char)arg3 objects:(id)arg4;
- (id)nameItemsWithLimit:(unsigned long long)arg1;
- (id)quickTypeItemsForCriteria:(id)arg1 limit:(unsigned long long)arg2;

@end
