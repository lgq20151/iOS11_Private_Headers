/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextLogger : NSObject {
    NSObject<OS_dispatch_queue> * _logQueue;
    NSMapTable * _loggables;
    NSRecursiveLock * _loggablesLock;
}

+ (id)sharedLogger;

- (void).cxx_destruct;
- (void)addLoggable:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeLoggable:(id)arg1;

@end
