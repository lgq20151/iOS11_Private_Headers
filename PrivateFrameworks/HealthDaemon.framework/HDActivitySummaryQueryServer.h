/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivitySummaryQueryServer : HDQueryServer {
    bool  _deliversUpdates;
    HDSQLitePredicate * _filterPredicate;
    bool  _hasSentInitialResults;
    long long  _lastProcessedAnchor;
    HDActivitySummaryQueryHelper * _queryHelper;
    bool  _shouldIncludePrivateProperties;
}

- (void).cxx_destruct;
- (void)_queue_deliverActivitySummariesToClient:(id)arg1;
- (void)_queue_deliverErrorToClient:(id)arg1;
- (void)_queue_deliverResultsWithActivitySummaries:(id)arg1 error:(id)arg2;
- (void)_queue_start;
- (void)_queue_stop;
- (void)_setUpInitialQueryHelper;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (id)requiredEntitlements;

@end