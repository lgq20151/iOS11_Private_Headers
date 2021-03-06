/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAnisetteProvisioningController : NSObject {
    NSXPCConnection * _anisetteServiceConnection;
    NSLock * _connectionLock;
    NSXPCListenerEndpoint * _daemonXPCEndpoint;
    AKDevice * _targetDevice;
}

- (void).cxx_destruct;
- (id)_anisetteServiceConnection;
- (id)_initForDevice:(id)arg1 daemonXPCEndpoint:(id)arg2;
- (void)anisetteDataForURLRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)anisetteDataForURLRequest:(id)arg1 error:(id*)arg2;
- (void)anisetteDataWithCompletion:(id /* block */)arg1;
- (id)anisetteDataWithError:(id*)arg1;
- (void)dealloc;
- (void)eraseWithCompletion:(id /* block */)arg1;
- (id)fetchAnisetteDataAndProvisionIfNecessary:(bool)arg1 error:(id*)arg2;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)initForDevice:(id)arg1;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)provisionWithCompletion:(id /* block */)arg1;
- (void)syncWithSIMData:(id)arg1 completion:(id /* block */)arg2;

@end
