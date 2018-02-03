/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitStoreMonitor : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _aliveLock;
    bool  _declaredDead;
    NSObject<OS_dispatch_group> * _monitorGroup;
    NSPersistentStore * _monitoredStore;
    int  _retryCount;
    bool  _storeIsAlive;
    int  _timeoutSeconds;
}

@property (nonatomic, readonly) bool declaredDead;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *monitorGroup;
@property (nonatomic, readonly) NSPersistentStore *monitoredStore;
@property (nonatomic, readonly) int retryCount;
@property (nonatomic, readonly) bool storeIsAlive;
@property (nonatomic, readonly) int timeoutSeconds;

- (void).cxx_destruct;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (void)dealloc;
- (void)declareStoreDead;
- (bool)declaredDead;
- (id)initForStore:(id)arg1;
- (id)monitorGroup;
- (id)monitoredStore;
- (void)performBlock:(id /* block */)arg1;
- (void)pfcloudstoremonitor_is_holding_your_store_open_waiting_for_cloudkit_activity_to_finish;
- (int)retryCount;
- (bool)storeIsAlive;
- (int)timeoutSeconds;

@end
