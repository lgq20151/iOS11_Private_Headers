/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigCaptureDeviceVendor : NSObject {
    NSObject<OS_os_transaction> * _activeForClientAssertion;
    NSMutableArray * _controlledStreams;
    struct OpaqueFigCaptureDevice { } * _device;
    BWFigCaptureDeviceClient * _deviceClient;
    double  _deviceCloseTimeoutSeconds;
    NSObject<OS_dispatch_source> * _deviceCloseTimer;
    int (* _deviceCreateFunction;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    int  _deviceUsageCount;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableArray * _streamsControlledByOtherClients;
    NSMutableArray * _victimizedDeviceClients;
}

+ (bool)activeDeviceEquals:(struct OpaqueFigCaptureDevice { }*)arg1;
+ (struct OpaqueFigCaptureDevice { }*)copyDefaultVideoDeviceWithStealingBehavior:(int)arg1 forPID:(int)arg2 clientIDOut:(int*)arg3 withDeviceAvailabilityChangedHandler:(id /* block */)arg4;
+ (struct OpaqueFigCaptureStream { }*)copyStreamForFlashlightWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3;
+ (struct OpaqueFigCaptureStream { }*)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3;
+ (struct OpaqueFigCaptureStream { }*)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3 errOut:(int*)arg4;
+ (id)copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3;
+ (id)copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3 errOut:(int*)arg4;
+ (void)initialize;
+ (void)invalidateVideoDevice:(struct OpaqueFigCaptureDevice { }*)arg1 forPID:(int)arg2;
+ (void)prewarmDefaultVideoDeviceForPID:(int)arg1;
+ (void)resumeSystemPressuredDevice;
+ (id)sharedInstance;
+ (void)shutDownSystemPressuredDevice:(struct OpaqueFigCaptureDevice { }*)arg1;
+ (float)structuredLightProjectorStandbyTemperatureWithError:(int*)arg1;
+ (void)takeBackVideoDevice:(struct OpaqueFigCaptureDevice { }*)arg1 forPID:(int)arg2 requestDeviceWhenAvailableAgain:(bool)arg3 informOtherClients:(bool)arg4;
+ (void)unregisterCallbacksForClient:(int)arg1;
+ (bool)videoCaptureDeviceFirmwareIsLoaded;

- (void)_createDevice:(const char *)arg1 clientPID:(int)arg2;
- (void)_deviceAvailabilityChangedForClient:(id)arg1 available:(bool)arg2 postNotification:(bool)arg3 causedBySystemPressure:(bool)arg4;
- (void)_dumpInventory;
- (void)_handleDeviceUnrecoverableError:(int)arg1 fromDevice:(struct OpaqueFigCaptureDevice { }*)arg2;
- (void)_handleStreamControlTakenByAnotherClientNotification:(struct OpaqueFigCaptureStream { }*)arg1;
- (void)_handleStreamRelinquishedByAnotherClientNotification:(struct OpaqueFigCaptureStream { }*)arg1;
- (id)_moveDeviceClientToVictimizedList;
- (void)_performBlockOnDeviceQueue:(id /* block */)arg1;
- (void)_performBlockOnDeviceQueueSynchronously:(id /* block */)arg1;
- (id)_popLatestVictimizedDeviceClient;
- (void)_registerForDeviceNotifications:(struct OpaqueFigCaptureDevice { }*)arg1;
- (void)_registerForStreamControlNotifications:(struct OpaqueFigCaptureStream { }*)arg1;
- (void)_registerNewDeviceClientForPID:(int)arg1 clientIDOut:(int*)arg2 deviceAvailabilityChangedHandler:(id /* block */)arg3;
- (void)_releaseDevice;
- (void)_relinquishControlOfStreams;
- (void)_removeDeviceClient;
- (void)_removeVictimizedDeviceClientWithClientID:(int)arg1;
- (int)_requestControlOfStreams:(id)arg1 device:(struct OpaqueFigCaptureDevice { }*)arg2;
- (void)_resetDeviceCloseTimer;
- (void)_setupDeviceCloseTimer;
- (void)_unregisterForDeviceNotifications:(struct OpaqueFigCaptureDevice { }*)arg1;
- (void)_unregisterForStreamControlNotifications:(struct OpaqueFigCaptureStream { }*)arg1;
- (bool)activeDeviceEquals:(struct OpaqueFigCaptureDevice { }*)arg1;
- (struct OpaqueFigCaptureDevice { }*)copyDefaultVideoDeviceWithStealingBehavior:(int)arg1 forPID:(int)arg2 clientIDOut:(int*)arg3 withDeviceAvailabilityChangedHandler:(id /* block */)arg4;
- (struct OpaqueFigCaptureStream { }*)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3 requestControl:(bool)arg4 errOut:(int*)arg5;
- (id)copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3 requestControl:(bool)arg4 errOut:(int*)arg5;
- (void)dealloc;
- (id)init;
- (void)invalidateVideoDevice:(struct OpaqueFigCaptureDevice { }*)arg1 forPID:(int)arg2;
- (void)prewarmDefaultVideoDeviceForPID:(int)arg1;
- (void)resumeSystemPressuredDevice;
- (void)shutDownSystemPressuredDevice:(struct OpaqueFigCaptureDevice { }*)arg1;
- (float)structuredLightProjectorStandbyTemperatureWithError:(int*)arg1;
- (void)takeBackVideoDevice:(struct OpaqueFigCaptureDevice { }*)arg1 forPID:(int)arg2 requestDeviceWhenAvailableAgain:(bool)arg3 informOtherClients:(bool)arg4;
- (void)unregisterCallbacksForClient:(int)arg1;

@end
