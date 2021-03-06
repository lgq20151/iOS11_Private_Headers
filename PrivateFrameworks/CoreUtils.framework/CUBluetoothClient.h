/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBluetoothClient : NSObject <CBPeripheralManagerDelegate> {
    id /* block */  _bluetoothAddressChangedHandler;
    struct BTAccessoryManagerImpl { } * _btAccessoryManager;
    NSData * _btAdvertisingAddress;
    struct BTLocalDeviceImpl { } * _btLocalDevice;
    NSData * _btLocalDeviceAddr;
    struct { 
        int (*statusEvent)(); 
        int (*leTestStopped)(); 
        int (*afhMapChanged)(); 
    }  _btLocalDeviceCallbacks;
    bool  _btLocalDeviceCallbacksNeeded;
    bool  _btLocalDeviceCallbacksRegistered;
    struct NSMutableDictionary { Class x1; } * _btPairedDevices;
    bool  _btPairedDevicesInitialized;
    struct BTPairingAgentImpl { } * _btPairingAgent;
    bool  _btPairingAgentNeeded;
    bool  _btPairingAgentStarted;
    CBPeripheralManager * _btPeripheralManager;
    bool  _btPeripheralManagerNeeded;
    struct BTSessionImpl { } * _btSession;
    bool  _btSessionAttaching;
    bool  _btSessionNeeded;
    bool  _btSessionStarted;
    id /* block */  _devicePairedHandler;
    id /* block */  _deviceUnpairedHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _flags;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, copy) id /* block */ bluetoothAddressChangedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ devicePairedHandler;
@property (nonatomic, copy) id /* block */ deviceUnpairedHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_btEnsureStarted;
- (void)_btEnsureStopped;
- (void)_handleBluetoothAddressChanged;
- (void)_handlePairingStatusChanged;
- (void)_interrupted;
- (void)_invalidated;
- (void)activate;
- (id /* block */)bluetoothAddressChangedHandler;
- (void)dealloc;
- (id /* block */)devicePairedHandler;
- (id /* block */)deviceUnpairedHandler;
- (id)dispatchQueue;
- (unsigned int)flags;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)setBluetoothAddressChangedHandler:(id /* block */)arg1;
- (void)setDevicePairedHandler:(id /* block */)arg1;
- (void)setDeviceUnpairedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)updateDevice:(id)arg1 btDevice:(struct BTDeviceImpl { }*)arg2;

@end
