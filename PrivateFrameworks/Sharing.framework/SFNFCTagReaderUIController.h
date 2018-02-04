/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFNFCTagReaderUIController : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    long long  _mode;
    long long  _nfcTagScanCount;
    bool  _nfcTagScanPending;
    NSString * _purpose;
    CUXPCAgent * _xpcAgent;
    NSXPCConnection * _xpcCnx;
    CUXPCAgentConnection * _xpcUICnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) long long mode;
@property (nonatomic, copy) NSString *purpose;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_nfcTagScannedCount;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (long long)mode;
- (void)nfcTagScanned;
- (void)nfcTagScannedCount:(long long)arg1;
- (id)purpose;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMode:(long long)arg1;
- (void)setPurpose:(id)arg1;
- (void)uiActivatedWithCompletion:(id /* block */)arg1;
- (void)uiInvalidatedWithCompletion:(id /* block */)arg1;

@end