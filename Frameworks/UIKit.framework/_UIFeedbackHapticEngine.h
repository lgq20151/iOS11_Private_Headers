/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFeedbackHapticEngine : _UIFeedbackEngine {
    AVHapticPlayer * _feedbackPlayer;
    NSTimer * _finishTimeoutTimer;
    NSMutableIndexSet * _freeChannelIndexes;
    NSMutableSet * _playersInUse;
    bool  _serverDown;
}

@property (nonatomic, retain) AVHapticPlayer *feedbackPlayer;
@property (nonatomic, retain) NSTimer *finishTimeoutTimer;
@property (nonatomic) bool serverDown;

+ (void)_setHapticPlayerCreationBlock:(id /* block */)arg1;
+ (bool)_supportsPlayingFeedback:(id)arg1;
+ (id)sharedEngine;

- (void).cxx_destruct;
- (void)_activateUnderlyingPlayerWithCompletion:(id /* block */)arg1;
- (bool)_cooldownUnderlyingPlayerIfPossible;
- (id)_createFeedbackPlayer;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)arg1;
- (void)_feedbackPlayerDidFail:(id)arg1;
- (void)_finishAndRecyclePlayers;
- (void)_initializeFeedbackPlayerWithCompletion:(id /* block */)arg1;
- (bool)_isSuspended;
- (void)_prewarmUnderlyingPlayerWithCompletion:(id /* block */)arg1;
- (void)_recycleFeedbackPlayers:(id)arg1;
- (void)_releaseRenderResourcesIfPossible;
- (void)_resetChannelIndexes;
- (void)_resetHapticPlayer;
- (void)_restartFeedbackPlayerAfterFailure:(id)arg1;
- (void)_startRunningFeedbackPlayerWithCompletion:(id /* block */)arg1;
- (id)_stats_key;
- (void)_subscribeToFeedbackServerFailureNotifications;
- (bool)_teardownUnderlyingPlayerIfPossible;
- (double)currentTime;
- (id)feedbackPlayer;
- (id)finishTimeoutTimer;
- (id)init;
- (bool)serverDown;
- (void)setFeedbackPlayer:(id)arg1;
- (void)setFinishTimeoutTimer:(id)arg1;
- (void)setServerDown:(bool)arg1;

@end
