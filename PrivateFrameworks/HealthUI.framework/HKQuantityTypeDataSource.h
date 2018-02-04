/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKQuantityTypeDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */  _mappingFunction;
    unsigned long long  _statisticsOptions;
    HKUnitPreferenceController * _unitController;
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) unsigned long long statisticsOptions;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;
@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_averageByInterval:(id)arg1 startDate:(id)arg2 statistics:(id)arg3;
- (id /* block */)_createMappingFunction;
- (id)_dailyAverageQueriesWithStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completion:(id /* block */)arg4;
- (id)_defaultQueriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithUnitController:(id)arg1 options:(unsigned long long)arg2 displayType:(id)arg3 healthStore:(id)arg4;
- (id /* block */)mappingFunctionForContext:(id)arg1;
- (id)quantityType;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (unsigned long long)statisticsOptions;
- (id)unitController;
- (id /* block */)userInfoCreationBlock;

@end