/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSBaseAssertionClient : NSObject <BKSAssertionClientMultiplexerListening, BKSAssertionClientProtocol> {
    NSMapTable * _assertionHandlersByIdentifier;
    NSObject<OS_dispatch_queue> * _assertionQueue;
    BKSAssertionClientMultiplexer * _multiplexer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *assertionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *supportedAssertionType;

- (void)_assertionQueue_invalidateAllAssertions;
- (void)_assertionQueue_sendEvent:(id)arg1 forEventType:(unsigned long long)arg2 responseHandler:(id /* block */)arg3;
- (void)_assertionQueue_unregisterHandlerWithIdentifier:(id)arg1 andNotify:(bool)arg2;
- (void)_sendMessage:(id /* block */)arg1 withReplyHandler:(id /* block */)arg2;
- (id)assertionQueue;
- (void)assertionQueue_handleDestroyEvent:(id)arg1;
- (void)assertionQueue_handleEvent:(id)arg1 ofType:(unsigned long long)arg2;
- (void)assertionQueue_handleMessage:(id)arg1;
- (void)connectionWasDestroyed;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithMultiplexer:(id)arg1;
- (void)registerClientHandler:(id)arg1 forAssertionIdentifier:(id)arg2;
- (bool)sendCreateEvent:(id)arg1 error:(id*)arg2;
- (void)sendDestroyEvent:(id)arg1;
- (void)sendUpdateEvent:(id)arg1;
- (id)supportedAssertionType;
- (void)unregisterClientHandlerForAssertionIdentifier:(id)arg1;

@end
