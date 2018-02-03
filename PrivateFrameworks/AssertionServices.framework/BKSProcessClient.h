/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessClient : BSBaseXPCClient {
    <BKSProcessClientDelegate> * _delegate;
}

@property (nonatomic, readonly) <BKSProcessClientDelegate> *delegate;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_queue_handleDebuggingStateChanged:(id)arg1;
- (void)_queue_handleExited:(id)arg1;
- (void)_queue_handleExpirationWarning:(id)arg1;
- (void)_queue_handleSuspendedStateChanged:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)queue;
- (void)queue_connectionWasInterrupted;
- (void)queue_handleMessage:(id)arg1;

@end
