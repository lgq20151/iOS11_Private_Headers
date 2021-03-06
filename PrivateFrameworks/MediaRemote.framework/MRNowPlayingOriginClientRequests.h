/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {
    NSMutableArray * _nowPlayingClients;
    void * _origin;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _transactionCallbacks;
}

@property (nonatomic, readonly) void*origin;

- (void)dealloc;
- (id)initWithOrigin:(void*)arg1;
- (id)nowPlayingClientRequestsForPlayerPath:(void*)arg1;
- (id)nowPlayingClients;
- (void*)origin;
- (void)removeClient:(void*)arg1;
- (void)restoreNowPlayingClientState;
- (void)setTransactionCallback:(id /* block */)arg1 forName:(unsigned long long)arg2;
- (id /* block */)transactionCallbackForName:(unsigned long long)arg1;

@end
