/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVWaitForNotificationOrDeallocationOperation : NSOperation <AVObjectMonitoring> {
    bool  _finished;
    NSObject<OS_dispatch_semaphore> * _monitoringIsFinishedSemaphore;
    NSArray * _notificationNames;
    NSObject<OS_dispatch_queue> * _operationStateSerializationQueue;
    bool  _registeredForObjectNotifications;
    bool  _started;
    AVWeakReference * _weakReferenceToMonitoredObject;
    AVWeakReference * _weakReferenceToSelf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_balanceMonitoringIsFinishedSemaphore;
- (id)_monitoredObject;
- (void)_registerForObjectNotifications;
- (void)_signalMonitoringIsFinishedIfNeeded;
- (void)_unregisterForObjectNotifications;
- (void)_waitUntilFinishedIfNeeded;
- (void)cancel;
- (void)dealloc;
- (void)finalize;
- (id)initWithObject:(id)arg1 notificationNames:(id)arg2;
- (void)main;
- (void)monitoredObjectHasDeparted;

@end
