/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFPrefsSynchronizer : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _CFPrefsDirtySourcesLock;
    bool  _active;
    struct __CFSet { } * _dirtySources;
    NSObject<OS_dispatch_queue> * _synchQueue;
    NSObject<OS_dispatch_source> * _synchTimer;
}

+ (id)sharedInstance;

- (void)clear;
- (void)clear_alreadyLocked;
- (const struct __CFSet { }*)copyDirtySourcesSnapshotAndClear;
- (void)disableTimer_alreadyLocked;
- (void)enableTimer_alreadyLocked;
- (id)init;
- (void)noteDirtySource:(id)arg1;
- (void)synchronize;
- (void)synchronizeForDaemonTermination;

@end
