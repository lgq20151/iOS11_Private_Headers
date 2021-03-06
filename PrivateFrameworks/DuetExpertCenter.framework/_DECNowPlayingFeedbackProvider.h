/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECNowPlayingFeedbackProvider : NSObject {
    NSString * _bundleId;
    <_DECNowPlayingFeedbackProviderProtocol> * _delegate;
    double  _engagementTimeout;
    bool  _engagementTimerTimedOut;
    double  _minimumPlayDuration;
    NSObject<OS_dispatch_source> * _minimumPlayDurationTimer;
    bool  _monitoringForFeedback;
    NSDate * _mostRecentPredictionPlaybackTime;
    NSObject<OS_dispatch_source> * _predictionEngagementTimer;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _userEngaged;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) <_DECNowPlayingFeedbackProviderProtocol> *delegate;
@property (nonatomic) double engagementTimeout;
@property (nonatomic) bool engagementTimerTimedOut;
@property (nonatomic) double minimumPlayDuration;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *minimumPlayDurationTimer;
@property (nonatomic) bool monitoringForFeedback;
@property (nonatomic, retain) NSDate *mostRecentPredictionPlaybackTime;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *predictionEngagementTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool userEngaged;

- (void).cxx_destruct;
- (void)_cancelMinimumPlayDurationTimerFire;
- (void)_cancelPredictionEngagementTimer;
- (void)_handleLockStateDidChange;
- (void)_onMinimumPlayDurationTimerFire;
- (void)_onPredictionEngagementTimerFire;
- (void)_setupMinimumPlayDurationTimer:(double)arg1;
- (void)_setupPredictionEngagementTimer:(double)arg1;
- (void)_updateUserEngagement:(bool)arg1;
- (id)bundleId;
- (void)dealloc;
- (id)delegate;
- (double)engagementTimeout;
- (bool)engagementTimerTimedOut;
- (void)handleLockStateDidChange;
- (id)init;
- (id)initWithBundleId:(id)arg1 engagementTimeout:(double)arg2 minimumPlayDuration:(double)arg3;
- (double)minimumPlayDuration;
- (id)minimumPlayDurationTimer;
- (bool)monitoringForFeedback;
- (id)mostRecentPredictionPlaybackTime;
- (id)predictionEngagementTimer;
- (id)queue;
- (void)setBundleId:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEngagementTimeout:(double)arg1;
- (void)setEngagementTimerTimedOut:(bool)arg1;
- (void)setMinimumPlayDuration:(double)arg1;
- (void)setMinimumPlayDurationTimer:(id)arg1;
- (void)setMonitoringForFeedback:(bool)arg1;
- (void)setMostRecentPredictionPlaybackTime:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setPredictionEngagementTimer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUserEngaged:(bool)arg1;
- (void)startMonitoringForFeedback;
- (void)stopMonitoringForFeedback;
- (bool)userDidEngage;
- (bool)userEngaged;

@end
