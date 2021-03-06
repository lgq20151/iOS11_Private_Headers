/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCyclerSecondaryDeviceCoordinator : NSObject {
    WBSSocket * _connection;
    <WBSCyclerSecondaryDeviceCoordinatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property <WBSCyclerSecondaryDeviceCoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (void)_didConnect;
- (void)_didEncounterError:(id)arg1;
- (void)_didReceiveData:(id)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_timeoutTimerDidFire;
- (void)connectToPrimaryDeviceAtAddress:(id)arg1 port:(unsigned long long)arg2 timeout:(double)arg3;
- (id)delegate;
- (id)init;
- (void)sendDataToPrimaryDevice:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
