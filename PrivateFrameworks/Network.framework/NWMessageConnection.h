/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWMessageConnection : NWConnection

- (void)readMessageWithMaximumCount:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)writeCloseWithCompletionHandler:(id /* block */)arg1;
- (void)writeMessage:(id)arg1 completionHandler:(id /* block */)arg2;

@end
