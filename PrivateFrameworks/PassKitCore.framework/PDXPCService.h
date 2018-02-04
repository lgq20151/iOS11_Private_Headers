/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface> {
    bool  _callbacksSuspended;
    NSString * _className;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
    NSString * _remoteProcessApplicationIdentifier;
    int  _remoteProcessIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *remoteProcessApplicationIdentifier;
@property (nonatomic, readonly) NSString *remoteProcessBundleIdentifier;
@property (nonatomic, readonly) int remoteProcessIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearConnectionReference;
- (id)connection;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)remoteProcessApplicationIdentifier;
- (id)remoteProcessBundleIdentifier;
- (int)remoteProcessIdentifier;
- (void)serviceResumed;
- (void)serviceSuspended;

@end