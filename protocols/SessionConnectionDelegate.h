/* made by EzioChiu.
 */

@protocol SessionConnectionDelegate <NSObject, NSCopying>

@required

- (void)connection:(__NSCFURLSessionConnection *)arg1 _conditionalRequirementsChanged:(bool)arg2;
- (void)connection:(void *)arg1 _willSendRequestForEstablishedConnection:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: __NSCFURLSessionConnection *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*
- (void)connection:(void *)arg1 challenged:(void *)arg2 authCallback:(void *)arg3; // needs 3 arg types, found 9: __NSCFURLSessionConnection *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)connection:(void *)arg1 didFinishCollectingMetrics:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: __NSCFURLSessionConnection *, NSURLSessionTaskMetrics *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)connection:(__NSCFURLSessionConnection *)arg1 didFinishLoadingWithError:(NSError *)arg2;
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct shared_ptr<NetworkProxy> { struct NetworkProxy {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; struct shared_ptr<const __CFString> { struct __CFString {} *x_12_1_1; struct __shared_weak_count {} *x_12_1_2; } x12; int x13; int x14; }*)arg2;
- (void)connection:(void *)arg1 didReceiveData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: __NSCFURLSessionConnection *, NSObject<OS_dispatch_data> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)connection:(void *)arg1 didReceiveResponse:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: __NSCFURLSessionConnection *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct SessionResponseOptions { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned long long x5; unsigned long long x6; }, void*
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveSocketInputStream:(NSInputStream *)arg2 outputStream:(id)arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveTCPConnection:(struct shared_ptr<TCPIOConnection> { struct TCPIOConnection {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (void)connection:(void *)arg1 needConnectedSocketToHost:(void *)arg2 port:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: __NSCFURLSessionConnection *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, struct { long long x1; int x2; }, void*
- (void)connection:(void *)arg1 request:(void *)arg2 needsNewBodyStreamCallback:(void *)arg3; // needs 3 arg types, found 8: __NSCFURLSessionConnection *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSInputStream *, void*
- (void)connection:(__NSCFURLSessionConnection *)arg1 sentBodyBytes:(NSNumber *)arg2 totalBytes:(NSNumber *)arg3 expectedBytes:(NSNumber *)arg4;
- (void)connection:(__NSCFURLSessionConnection *)arg1 waitingWithReason:(long long)arg2;
- (void)connection:(void *)arg1 wasRedirected:(void *)arg2 newRequest:(void *)arg3 responseCallback:(void *)arg4; // needs 4 arg types, found 9: __NSCFURLSessionConnection *, NSHTTPURLResponse *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*
- (void)connection:(void *)arg1 willCacheResponse:(void *)arg2 responseCallback:(void *)arg3; // needs 3 arg types, found 8: __NSCFURLSessionConnection *, NSCachedURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSCachedURLResponse *, void*
- (void)connectionWillFinishLoading:(__NSCFURLSessionConnection *)arg1;

@end
