/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDXPCListener : NSObject <NSXPCListenerDelegate> {
    <HDXPCListenerDelegate> * _delegate;
    NSMutableDictionary * _exportedObjectsByClient;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCListener * _underlyingListener;
}

@property (readonly, copy) NSArray *allClients;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDXPCListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serviceListener;

- (void).cxx_destruct;
- (id)allClients;
- (id)delegate;
- (id)endpoint;
- (id)init;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithUnderlyingListener:(id)arg1;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)newClientWithConnection:(id)arg1 error:(id*)arg2;
- (void)resume;
- (void)setDelegate:(id)arg1;

@end
