/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCAVController : MPAVController {
    bool  _allowsNewPlaybackErrorItem;
    MPAVItem * _firstPlaybackErrorItem;
    MPCPlaybackEngine * _playbackEngine;
}

@property (nonatomic) bool allowsNewPlaybackErrorItem;
@property (nonatomic, retain) MPAVItem *firstPlaybackErrorItem;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) long long upNextItemCount;

+ (Class)playlistManagerClass;

- (void).cxx_destruct;
- (void)_connectAVPlayer;
- (void)_contentsChanged;
- (id)_expectedAssetTypesForPlaybackMode:(long long)arg1;
- (void)_itemDidChange:(id)arg1;
- (void)_itemWillChange:(id)arg1;
- (void)_playbackErrorNotification:(id)arg1;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1;
- (void)_setState:(long long)arg1;
- (void)addPlaybackContext:(id)arg1 toQueueWithInsertionType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)allowsNewPlaybackErrorItem;
- (id)firstPlaybackErrorItem;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)playWithOptions:(unsigned long long)arg1;
- (id)playbackEngine;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAllowsNewPlaybackErrorItem:(bool)arg1;
- (void)setFirstPlaybackErrorItem:(id)arg1;
- (void)setRepeatType:(long long)arg1;
- (void)setShuffleType:(long long)arg1;
- (long long)upNextItemCount;

@end
