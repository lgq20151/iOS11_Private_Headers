/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHSynchronizable : NSObject <CHSynchronizableProtocol> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)execute:(id /* block */)arg1;
- (void)executeSync:(id /* block */)arg1;
- (bool)executeSyncWithBOOL:(id /* block */)arg1;
- (id)executeSyncWithResult:(id /* block */)arg1;
- (id)initWithName:(const char *)arg1;
- (id)initWithQueue:(id)arg1;
- (id)queue;

@end
