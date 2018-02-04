/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCServiceConnection : NSObject {
    NSObject<OS_xpc_object> * _client;
    <NSObject> * _context;
    <XPCServiceConnectionDelegate> * _delegate;
    XPCServiceListener * _serviceListener;
    NSString * _serviceName;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *client;
@property (nonatomic, retain) <NSObject> *context;
@property (nonatomic) <XPCServiceConnectionDelegate> *delegate;
@property (nonatomic) XPCServiceListener *serviceListener;
@property (nonatomic, readonly, retain) NSString *serviceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)client;
- (id)context;
- (id)debugDescription;
- (id)delegate;
- (id)initWithServiceName:(id)arg1 client:(id)arg2 queue:(id)arg3;
- (void)resume;
- (void)sendMessage:(id)arg1 withHandler:(id /* block */)arg2;
- (id)serviceListener;
- (id)serviceName;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setServiceListener:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)shutDownCompletionBlock:(id /* block */)arg1;
- (id)workQueue;
- (void)workQueueHandleIncomingMessage:(id)arg1;
- (void)workQueueShutDown;

@end