/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalDeviceLockObserver : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _internalHasBeenUnlockedSinceBoot;
    CalDarwinNotificationListener * _notificationListener;
    id /* block */  _stateChangedCallback;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) bool hasBeenUnlockedSinceBoot;
@property (nonatomic) bool internalHasBeenUnlockedSinceBoot;
@property (nonatomic, retain) CalDarwinNotificationListener *notificationListener;
@property (nonatomic, copy) id /* block */ stateChangedCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
+ (id)stateChangedNotificationName;

- (void).cxx_destruct;
- (void)_notificationReceived;
- (id)callbackQueue;
- (bool)hasBeenUnlockedSinceBoot;
- (id)init;
- (id)initWithStateChangedCallback:(id /* block */)arg1;
- (bool)internalHasBeenUnlockedSinceBoot;
- (id)notificationListener;
- (void)setCallbackQueue:(id)arg1;
- (void)setInternalHasBeenUnlockedSinceBoot:(bool)arg1;
- (void)setNotificationListener:(id)arg1;
- (void)setStateChangedCallback:(id /* block */)arg1;
- (void)setWorkQueue:(id)arg1;
- (id /* block */)stateChangedCallback;
- (id)workQueue;

@end
