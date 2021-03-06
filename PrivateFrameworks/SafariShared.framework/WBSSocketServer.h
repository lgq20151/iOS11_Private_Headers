/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSocketServer : NSObject {
    NSMutableArray * _blocksAwaitingPortAssignment;
    unsigned long long  _port;
    NSObject<OS_dispatch_queue> * _queue;
    int  _socketDescriptor;
    NSObject<OS_dispatch_source> * _source;
}

@property unsigned long long port;

- (void).cxx_destruct;
- (id)_acceptConnectionOnInternalQueue;
- (void)_closeOnInternalQueue;
- (void)dealloc;
- (id)init;
- (id)initWithPort:(unsigned long long)arg1;
- (unsigned long long)port;
- (void)setPort:(unsigned long long)arg1;
- (void)startAcceptingConnectionsWithHandler:(id /* block */)arg1;
- (void)waitForPortAssignmentWithCompletionHandler:(id /* block */)arg1;

@end
