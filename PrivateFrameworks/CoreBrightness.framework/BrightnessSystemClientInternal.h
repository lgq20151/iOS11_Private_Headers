/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystemClientInternal : NSThread {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_semaphore> * _initSemaphore;
    bool  _initializationComplete;
    id  _remote;
    struct __CFRunLoop { } * _rl;
    NSTimer * _timer;
    NSArray * clientProperties;
    BrightnessSystemClientExportedObj * exportedObj;
    bool  shouldKeepRunning;
}

- (id)copyPropertyForKey:(id)arg1;
- (void)dealloc;
- (void)destroyClient;
- (id)init;
- (void)initializationCompleted;
- (void)main;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)registerNotificationBlock:(id /* block */)arg1 forProperties:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)timerFire:(id)arg1;
- (void)waitForInitialization;

@end
