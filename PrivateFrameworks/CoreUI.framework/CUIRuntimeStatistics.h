/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRuntimeStatistics : NSObject {
    int  _notify_token;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _shortCircuitImageLookup;
    long long  _total_lookup;
    long long  _total_size;
    long long  _wasted_size;
}

+ (void)generateLog;
+ (id)sharedRuntimeStatistics;

- (void)_logStatistics:(int)arg1;
- (void)addStatisticAllocatedImageSize:(unsigned long long)arg1 roundedSize:(unsigned long long)arg2;
- (void)dealloc;
- (void)incrementStatisticDidShortCircuitImageLookup;
- (void)incrementStatisticLookup;
- (id)init;

@end
