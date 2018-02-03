/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSAssertionClientMultiplexer : BSBaseXPCClient {
    NSObject<OS_dispatch_queue> * _assertionQueue;
    NSMutableDictionary * _listeners;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *assertionQueue;

- (void)_assertionQueue_handleEvent:(id)arg1 forListener:(id)arg2;
- (void)addListener:(id)arg1;
- (id)assertionQueue;
- (void)dealloc;
- (id)description;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (void)queue_connectionWasDestroyed;
- (void)queue_handleMessage:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)sendEvent:(id)arg1 withAssertionType:(id)arg2 forEventType:(unsigned long long)arg3 responseHandler:(id /* block */)arg4;
- (void)sendMessage:(id /* block */)arg1 withReplyHandler:(id /* block */)arg2;

@end
