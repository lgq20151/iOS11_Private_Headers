/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystemInternal : NSThread <NSXPCListenerDelegate> {
    NSRunLoop * _NS_rl;
    float  _cachedSlider;
    id /* block */  _callback;
    NSMutableDictionary * _clients;
    NSMutableDictionary * _clientsProps;
    NSObject<OS_dispatch_semaphore> * _initSemaphore;
    bool  _initializationComplete;
    NSMutableDictionary * _ownedProps;
    bool  _shouldKeepRunning;
    NSTimer * _timer;
    BLControl * bl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)clientConnectedWithExpObj:(id)arg1;
- (void)clientDisconnectedWithExpObj:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 client:(id)arg2;
- (void)dealloc;
- (void)destroyServer;
- (id)init;
- (void)initializationCompleted;
- (bool)isAlsSupported;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)main;
- (void)notifyClientsForProperty:(id)arg1 key:(id)arg2;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)runXPCServer;
- (void)setOwnedProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (void)stopRL;
- (void)timerFire:(id)arg1;
- (void)undoOwnedPropertiesForClient:(id)arg1;
- (void)waitForInitialization;

@end
