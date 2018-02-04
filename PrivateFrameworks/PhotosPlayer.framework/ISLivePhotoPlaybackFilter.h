/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLivePhotoPlaybackFilter : ISObservable {
    NSMutableSet * __playbackDisabledReasons;
    double  _hintProgress;
    bool  _isPerformingInputChanges;
    bool  _playIsSticky;
    bool  _playbackDisabled;
    long long  _state;
}

@property (nonatomic, readonly) NSMutableSet *_playbackDisabledReasons;
@property (nonatomic, readonly) double hintProgress;
@property (setter=_setPerformingInputChanges:, nonatomic) bool isPerformingInputChanges;
@property (nonatomic) bool playIsSticky;
@property (getter=isPlaybackDisabled, setter=_setPlaybackDisabled:, nonatomic) bool playbackDisabled;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (id)_playbackDisabledReasons;
- (void)_setPerformingInputChanges:(bool)arg1;
- (void)_setPlaybackDisabled:(bool)arg1;
- (void)_setState:(long long)arg1;
- (double)hintProgress;
- (id)init;
- (bool)isPerformingInputChanges;
- (bool)isPlaybackDisabled;
- (id)mutableChangeObject;
- (bool)playIsSticky;
- (void)reset;
- (void)setHintProgress:(double)arg1;
- (void)setPlayIsSticky:(bool)arg1;
- (void)setPlaybackDisabled:(bool)arg1 forReason:(id)arg2;
- (void)setState:(long long)arg1;
- (long long)state;

@end