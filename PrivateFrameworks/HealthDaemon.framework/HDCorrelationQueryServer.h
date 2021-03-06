/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCorrelationQueryServer : HDBatchedQueryServer {
    NSDictionary * _dataFilters;
    bool  _permitPartiallyFilteredCorrelations;
    bool  _suspended;
}

@property (nonatomic, readonly) NSDictionary *dataFilters;

- (void).cxx_destruct;
- (void)_queue_start;
- (bool)_queue_validateConfiguration:(id*)arg1;
- (id)dataFilters;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (id)requiredEntitlements;

@end
