/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDDataObserver> {
    NSMutableArray * _addedSamples;
    NSNumber * _addedSamplesAnchor;
    NSDate * _anchorDate;
    bool  _deliveredInitialResults;
    bool  _deliversUpdates;
    unsigned long long  _mergeStrategy;
    NSNumber * _startAnchor;
    HDStatisticsBuilder * _statisticsBuilder;
    HKStatisticsCollection * _statisticsCollection;
    unsigned long long  _statisticsOptions;
    id /* block */  _unitTest_queryServerStatisticsEnumerationHandler;
}

@property (nonatomic, readonly) NSDate *anchorDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long statisticsOptions;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_queryServerStatisticsEnumerationHandler;

- (void).cxx_destruct;
- (void)_queue_deliverUpdatedStatistics:(id)arg1 error:(id)arg2;
- (void)_queue_fetchAndDeliverAllStatisticsInitial:(bool)arg1;
- (bool)_queue_objectIsRelevant:(id)arg1;
- (void)_queue_start;
- (void)_queue_updateStatistics;
- (void)_scheduleFetchAndDeliver;
- (void)_scheduleUpdateStatistics;
- (bool)_shouldListenForUpdates;
- (id)anchorDate;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (id)requiredEntitlements;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setUnitTest_queryServerStatisticsEnumerationHandler:(id /* block */)arg1;
- (unsigned long long)statisticsOptions;
- (id /* block */)unitTest_queryServerStatisticsEnumerationHandler;

@end
