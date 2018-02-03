/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedMessagingCenter : NSObject {
    NSOperationQueue * _asyncQueue;
    NSMutableDictionary * _callouts;
    NSString * _centerName;
    CPDistributedMessagingCallout * _currentCallout;
    bool  _delayedReply;
    NSLock * _lock;
    unsigned int  _parkedServerPort;
    bool  _portPassing;
    unsigned int  _replyPort;
    bool  _requireLookupByPID;
    NSString * _requiredEntitlement;
    unsigned int  _sendPort;
    struct __CFRunLoopSource { } * _serverSource;
    int  _targetPID;
}

+ (id)_centerNamed:(id)arg1 requireLookupByPID:(bool)arg2;
+ (id)centerNamed:(id)arg1;
+ (id)pidRestrictedCenterNamed:(id)arg1;

- (void)_dispatchMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(id*)arg3 auditToken:(struct { unsigned int x1[8]; }*)arg4;
- (id)_initAnonymousServer;
- (id)_initClientWithPort:(unsigned int)arg1;
- (id)_initWithServerName:(id)arg1;
- (id)_initWithServerName:(id)arg1 requireLookupByPID:(bool)arg2;
- (bool)_isTaskEntitled:(struct { unsigned int x1[8]; }*)arg1;
- (id)_requiredEntitlement;
- (bool)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id*)arg3 error:(id*)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void*)arg7;
- (bool)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id*)arg3 error:(id*)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void*)arg7 nonBlocking:(bool)arg8;
- (bool)_sendMessage:(id)arg1 userInfoData:(id)arg2 oolKey:(id)arg3 oolData:(id)arg4 makeServer:(bool)arg5 receiveReply:(id*)arg6 nonBlocking:(bool)arg7 error:(id*)arg8;
- (unsigned int)_sendPort;
- (void)_sendReplyMessage:(id)arg1 portPassing:(bool)arg2 onMachPort:(unsigned int)arg3;
- (unsigned int)_serverPort;
- (void)_setSendPort:(unsigned int)arg1;
- (void)_setupInvalidationSource;
- (void)dealloc;
- (id)delayReply;
- (bool)doesServerExist;
- (id)name;
- (void)registerForMessageName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)runServerOnCurrentThread;
- (void)runServerOnCurrentThreadProtectedByEntitlement:(id)arg1;
- (void)sendDelayedReply:(id)arg1 dictionary:(id)arg2;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 error:(id*)arg3;
- (void)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 toTarget:(id)arg3 selector:(SEL)arg4 context:(void*)arg5;
- (bool)sendMessageName:(id)arg1 userInfo:(id)arg2;
- (bool)sendNonBlockingMessageName:(id)arg1 userInfo:(id)arg2;
- (void)setTargetPID:(int)arg1;
- (void)stopServer;
- (void)unregisterForMessageName:(id)arg1;

@end
