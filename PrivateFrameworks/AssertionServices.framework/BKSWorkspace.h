/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSWorkspace : NSObject {
    NSMutableSet * _clientConnections;
    NSMutableSet * _hostConnections;
    NSObject<OS_xpc_object> * _listenerConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedConnection;
+ (id)sharedInstance;
+ (id)sharedQueue;

- (void)_queue_handleClientMessage:(id)arg1;
- (void)_queue_handleConnectToHostMessage:(id)arg1;
- (void)_queue_handleServerMessage:(id)arg1;
- (id)init;

@end
