/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState, MRTransactionSourceDelegate> {
    void * _capabilities;
    MRNowPlayingPlayerClientCallbacks * _clientCallbacks;
    bool  _coalescingInvalidations;
    bool  _coalescingRequests;
    NSMutableDictionary * _coelscingTransactionPackets;
    double  _invalidatationTimestamp;
    MRNowPlayingArtwork * _nowPlayingArtwork;
    NSDictionary * _nowPlayingInfo;
    void * _playbackQueue;
    MRPlaybackQueuePlayerClient * _playbackQueueClient;
    unsigned int  _playbackState;
    double  _playbackStateSetToPlayTimestamp;
    void * _playerPath;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSArray * _supportedCommands;
    NSMutableArray * _transactionSources;
    bool  _triggerInvalidation;
}

@property (nonatomic) void*capabilities;
@property (nonatomic, readonly) MRNowPlayingPlayerClientCallbacks *clientCallbacks;
@property (nonatomic) double invalidatationTimestamp;
@property (nonatomic, retain) MRNowPlayingArtwork *nowPlayingArtwork;
@property (nonatomic, readonly) void*nowPlayingContentItem;
@property (nonatomic, copy) NSDictionary *nowPlayingInfo;
@property (nonatomic) void*playbackQueue;
@property (nonatomic, readonly) MRPlaybackQueuePlayerClient *playbackQueueClient;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic, readonly) void*playerPath;
@property (nonatomic, copy) NSArray *supportedCommands;

- (void*)_onQueue_nowPlayingContentItem;
- (void)_onQueue_sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2;
- (void)beginSendingTransactions;
- (void*)capabilities;
- (id)clientCallbacks;
- (void)contentItemsUpdatedNotification:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)endSendingTransactions;
- (id)initWithPlayerPath:(void*)arg1;
- (double)invalidatationTimestamp;
- (id)nowPlayingArtwork;
- (void*)nowPlayingContentItem;
- (id)nowPlayingInfo;
- (void*)playbackQueue;
- (id)playbackQueueClient;
- (unsigned int)playbackState;
- (void*)playerPath;
- (void)preProcessChangePlaybackRateCommandWithOptions:(struct __CFDictionary { }*)arg1;
- (void)preProcessCommand:(unsigned int)arg1 options:(struct __CFDictionary { }*)arg2;
- (void)restoreNowPlayingClientState;
- (void)sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2;
- (void)setCapabilities:(void*)arg1;
- (void)setInvalidatationTimestamp:(double)arg1;
- (void)setNowPlayingArtwork:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaybackQueue:(void*)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setSupportedCommands:(id)arg1;
- (id)supportedCommands;
- (bool)testAndSetCoalescingInvalidations;
- (bool)testAndSetCoalescingRequests;
- (void)transactionDidEnd:(id)arg1;
- (void)unsetCoalescingInvalidations;
- (bool)unsetCoalescingRequests;
- (void)updateCacheWithItem:(void*)arg1;
- (void)updateCacheWithPlaybackQueue:(void*)arg1;

@end
