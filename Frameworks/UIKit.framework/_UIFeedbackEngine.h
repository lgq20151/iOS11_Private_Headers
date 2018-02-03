/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFeedbackEngine : NSObject {
    unsigned long long  _backgroundTaskIdentifier;
    NSMutableDictionary * _completionBlocks;
    unsigned long long  _numberOfClients;
    long long  _prewarmCount;
    long long  _state;
    bool  _suspended;
    long long  _suspensionState;
    NSTimer * _suspensionTimer;
}

@property (nonatomic, readonly) NSString *_stats_key;
@property (getter=_backgroundTaskIdentifier, setter=_setBackgroundTaskIdentifier:, nonatomic) unsigned long long backgroundTaskIdentifier;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, readonly) unsigned long long numberOfClients;
@property (nonatomic) long long prewarmCount;
@property (getter=_state, setter=_setState:, nonatomic) long long state;
@property (getter=_isSuspended, setter=_setSuspended:, nonatomic) bool suspended;
@property (getter=_suspensionState, nonatomic, readonly) long long suspensionState;

+ (bool)_supportsPlayingFeedback:(id)arg1;
+ (id)engineForFeedback:(id)arg1;
+ (id)sharedEngine;

- (void).cxx_destruct;
- (void)_activateEngine;
- (void)_activateUnderlyingPlayerWithCompletion:(id /* block */)arg1;
- (void)_activateWithCompletionBlock:(id /* block */)arg1;
- (id)_activationCountStatistics;
- (id)_activationDurationStatistics;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidResume:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationWillSuspend:(id)arg1;
- (unsigned long long)_backgroundTaskIdentifier;
- (bool)_canPlayFeedback:(id)arg1;
- (void)_cooldown;
- (void)_cooldownEngineIfPossible;
- (bool)_cooldownUnderlyingPlayerIfPossible;
- (void)_deactivate;
- (void)_deactivateEngineIfPossible;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)arg1;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (bool)_isSuspended;
- (id)_outOfChannelsCountStatistics;
- (void)_performAtState:(long long)arg1 block:(id /* block */)arg2;
- (id)_prewarmCountStatistics;
- (id)_prewarmDurationStatistics;
- (void)_prewarmEngine;
- (void)_prewarmUnderlyingPlayerWithCompletion:(id /* block */)arg1;
- (void)_prewarmWithCompletionBlock:(id /* block */)arg1;
- (void)_removeViewControllerWillDisconnect:(id)arg1;
- (void)_serviceBlocksForState:(long long)arg1 withSuccess:(bool)arg2;
- (void)_setBackgroundTaskIdentifier:(unsigned long long)arg1;
- (void)_setState:(long long)arg1;
- (void)_setSuspended:(bool)arg1;
- (void)_setupBackgroundTask;
- (void)_startWarmingFeedbacks:(id)arg1;
- (long long)_state;
- (id)_statsSuffix;
- (id)_stats_key;
- (void)_stats_outOfChannels;
- (void)_stats_stateDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)_stopWarmingFeedbacks:(id)arg1;
- (void)_suspendEngineNow;
- (long long)_suspensionState;
- (void)_teardownBackgroundTask;
- (bool)_teardownUnderlyingPlayerIfPossible;
- (void)_updateSuspension;
- (void)_willCancelFeedback:(id)arg1;
- (void)_willPlayFeedback:(id)arg1 atTime:(double)arg2;
- (double)currentTime;
- (id)description;
- (id)init;
- (unsigned long long)numberOfClients;
- (long long)prewarmCount;
- (void)runWhenReady:(id /* block */)arg1;
- (void)setPrewarmCount:(long long)arg1;

@end
