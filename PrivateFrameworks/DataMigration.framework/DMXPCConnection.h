/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DMXPCConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1;
- (id)connection;
- (void)handleMessage:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)resume;
- (void)sendMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
