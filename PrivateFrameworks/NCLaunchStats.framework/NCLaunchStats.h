/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NCLaunchStats.framework/NCLaunchStats
 */

@interface NCLaunchStats : NSObject {
    NSMutableDictionary * _appUpdateTimes;
    NSMutableDictionary * _appsRequestingRefresh;
    id /* block */  _asyncRecommendHandler;
    _DASActivity * _historyDeletionActivity;
    NSObject<OS_os_log> * _ncLog;
    _DKPredictionTimeline * _predictionTimeline;
    _DASActivity * _predictionUpdateActivity;
    _DKPredictor * _predictor;
    <_DASActivityScheduler> * _scheduler;
    <_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> * _store;
    NSObject<OS_dispatch_queue> * _syncQueue;
    _DASActivity * _widgetPrewarmActivity;
    _DKEventStream * _widgetStream;
    NSMutableDictionary * _widgetViewTime;
    int  appSpecificTriggerToken;
    bool  backgroundAppRefreshSwitchedOn;
    CDAttribute * bundleAttr;
    int  classCLockedToken;
    int  generatePredictionToken;
    bool  isClassCLocked;
    double  kTimeGuardBand;
    NSMutableDictionary * launchTracker;
    long long  numPrewarmedLaunches;
    long long  numRepeatedPrewarms;
    int  predictedWidgetsToken;
    NSMutableDictionary * prewarmDurationTracker;
    NSMutableDictionary * prewarmTimeTracker;
    NSMutableDictionary * seqTracker;
    CDSession * sessionDuet;
}

@property (nonatomic, retain) NSMutableDictionary *appUpdateTimes;
@property (nonatomic, retain) NSMutableDictionary *appsRequestingRefresh;
@property (nonatomic, copy) id /* block */ asyncRecommendHandler;
@property (nonatomic, retain) _DASActivity *historyDeletionActivity;
@property (nonatomic, retain) NSObject<OS_os_log> *ncLog;
@property (nonatomic, retain) _DKPredictionTimeline *predictionTimeline;
@property (nonatomic, retain) _DASActivity *predictionUpdateActivity;
@property (nonatomic, retain) _DKPredictor *predictor;
@property (nonatomic, retain) <_DASActivityScheduler> *scheduler;
@property (nonatomic, retain) <_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> *store;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) _DASActivity *widgetPrewarmActivity;
@property (nonatomic, retain) _DKEventStream *widgetStream;
@property (nonatomic, retain) NSMutableDictionary *widgetViewTime;

// Image: /System/Library/PrivateFrameworks/NCLaunchStats.framework/NCLaunchStats

+ (double)minTimeBetweenRefreshes;
+ (void)scheduleDeletionActivity:(id)arg1 store:(id)arg2 stream:(id)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)appUpdateTimes;
- (id)appsRequestingRefresh;
- (id /* block */)asyncRecommendHandler;
- (bool)canUpdateWidgetsUnsafe;
- (void)cancelRequestedRefreshForWidget:(id)arg1;
- (void)dealloc;
- (id)earliestRequestedRefresh:(id)arg1 atDate:(id)arg2;
- (void)endEvent:(id)arg1;
- (id)historyDeletionActivity;
- (bool)immediateUpdatesAllowedForWidgetUnsafe:(id)arg1;
- (id)init;
- (void)initAfterClassCUnlocked;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)ncLog;
- (id)nextPredictedRefreshDate:(id)arg1 afterDate:(id)arg2;
- (void)preWarmHasEnded:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)preWarmHasStarted:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (id)predictedWidgetUsage;
- (id)predictedWidgetsForDate:(id)arg1 withTimeline:(id)arg2;
- (id)predictionTimeline;
- (id)predictionUpdateActivity;
- (id)predictor;
- (void)recordPrewarmStatisticsRaw:(id)arg1;
- (void)requestRefreshForWidget:(id)arg1 afterDate:(id)arg2;
- (void)schedulePredictionUpdateBeforeDate:(id)arg1;
- (void)scheduleWidgetRefresh:(id)arg1 withRequestedRefreshes:(id)arg2;
- (void)scheduleWidgetRefresh:(id)arg1 withRequestedRefreshes:(id)arg2 cancelExisting:(bool)arg3;
- (id)scheduler;
- (void)setAppUpdateTimes:(id)arg1;
- (void)setAppsRequestingRefresh:(id)arg1;
- (void)setAsyncRecommendHandler:(id /* block */)arg1;
- (void)setHistoryDeletionActivity:(id)arg1;
- (void)setNCLaunchRecommendationHandler:(id /* block */)arg1;
- (void)setNCLaunchRecommendationHandlerWithCompletion:(id /* block */)arg1;
- (void)setNcLog:(id)arg1;
- (void)setPredictionTimeline:(id)arg1;
- (void)setPredictionUpdateActivity:(id)arg1;
- (void)setPredictor:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setWidgetPrewarmActivity:(id)arg1;
- (void)setWidgetStream:(id)arg1;
- (void)setWidgetViewTime:(id)arg1;
- (void)startEvent:(id)arg1;
- (id)store;
- (id)syncQueue;
- (void)unprotectedRemoveAllRequestsBeforeDate:(id)arg1;
- (void)unprotectedRemoveRequestsForWidget:(id)arg1 beforeDate:(id)arg2;
- (void)updateBARSwitch;
- (void)updateWidgetsAtDate:(id)arg1 withTimeline:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)widgetPrewarmActivity;
- (id)widgetStream;
- (id)widgetViewTime;
- (id)widgetsToRefreshAtDate:(id)arg1 withTimeline:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets

+ (void)wg_configureSharedInstanceWithRecommendationHandler:(id /* block */)arg1;
+ (id)wg_sharedInstance;

@end