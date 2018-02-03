/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSBaseXPCClient : NSObject {
    bool  _clientInvalidated;
    NSObject<OS_xpc_object> * _connection;
    BSAtomicSignal * _invalidationSignal;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _serverEndpoint;
    NSString * _serviceName;
    bool  _suspended;
}

@property (getter=isSuspended, nonatomic, readonly) bool suspended;

- (id)_connection;
- (id)_connectionInstanceUUID;
- (id)_errorFromMessageIfAny:(id)arg1;
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;
- (id)_notifyTokenName;
- (void)_sendMessage:(id /* block */)arg1;
- (void)_sendMessage:(id /* block */)arg1 withReplyHandler:(id /* block */)arg2 waitForReply:(bool)arg3 waitDuration:(unsigned long long)arg4;
- (void)_sendMessageReply:(id)arg1 messagePacker:(id /* block */)arg2;
- (void)_sendReply:(id)arg1 messagePacker:(id /* block */)arg2;
- (void)_sendReplyForMessage:(id)arg1 messagePacker:(id /* block */)arg2;
- (void)_setEndpoint:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (void)invalidate;
- (bool)isSuspended;
- (void)queue_clientWasInvalidated;
- (id)queue_connection;
- (void)queue_connectionWasCreated;
- (void)queue_connectionWasDestroyed;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasInvalidated;
- (void)queue_connectionWasResumed;
- (void)queue_connectionWasSuspended;
- (void)queue_handleError:(id)arg1;
- (void)queue_handleMessage:(id)arg1;
- (void)queue_invalidate;
- (bool)queue_isSuspended;
- (void)queue_reconnectToResumedServerIfNecessary;
- (void)queue_registerWithServerIfNecessary;
- (void)queue_reregister;
- (void)queue_resumeConnection;
- (void)queue_suspendConnection;
- (void)reconnectIfNecessary;
- (void)resumeConnection;
- (void)suspendConnection;

@end
