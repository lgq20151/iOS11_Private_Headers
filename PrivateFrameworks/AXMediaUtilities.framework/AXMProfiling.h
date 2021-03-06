/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMProfiling : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _queue_memoryTasks;
    NSMutableDictionary * _queue_timingTasks;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_systemReport:(unsigned long long)arg1;
- (void)endMemoryTaskWithIdentifier:(id)arg1 message:(id)arg2;
- (void)endTimingTaskWithIdentifier:(id)arg1 message:(id)arg2;
- (id)init;
- (void)startMemoryTaskWithIdentifier:(id)arg1 message:(id)arg2;
- (void)startTimingTaskWithIdentifier:(id)arg1 message:(id)arg2;

@end
