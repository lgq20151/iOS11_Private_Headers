/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECNowPlayingConsumer : _DECInternalConsumer <_DECNowPlayingFeedbackProviderProtocol> {
    void * _activity;
    _DECNowPlayingFeedbackProvider * _feedbackProvider;
    NSString * _mostRecentPredictionBundleId;
    long long  _mostRecentPredictionReason;
    bool  _providedEngagementFeedback;
    NSObject<OS_dispatch_queue> * _queue;
}

@property void*activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _DECNowPlayingFeedbackProvider *feedbackProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *mostRecentPredictionBundleId;
@property (nonatomic) long long mostRecentPredictionReason;
@property (nonatomic) bool providedEngagementFeedback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupRecommendation;
- (void)_handleNowPlayingApplicationIsPlayingDidChange;
- (void)_provideRecommendationFeedback:(bool)arg1;
- (void)_recommend:(id)arg1;
- (void*)activity;
- (unsigned int)currentPlaybackState;
- (void)dealloc;
- (id)feedbackProvider;
- (void)feedbackProvider:(id)arg1 userEngaged:(bool)arg2;
- (void)fetchMediaRemoteNowPlayingApplicationBundleId:(id /* block */)arg1;
- (void)fetchMediaRemoteNowPlayingApplicationPlaybackState:(id /* block */)arg1;
- (void)handleNowPlayingApplicationIsPlayingDidChange;
- (id)init;
- (bool)isLocked;
- (id)mostRecentPredictionBundleId;
- (long long)mostRecentPredictionReason;
- (bool)providedEngagementFeedback;
- (id)queue;
- (void)receivePrediction:(id)arg1 reply:(id /* block */)arg2;
- (void)setActivity:(void*)arg1;
- (void)setFeedbackProvider:(id)arg1;
- (void)setMostRecentPredictionBundleId:(id)arg1;
- (void)setMostRecentPredictionReason:(long long)arg1;
- (void)setProvidedEngagementFeedback:(bool)arg1;
- (void)setQueue:(id)arg1;

@end
