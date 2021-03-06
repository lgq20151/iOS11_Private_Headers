/* made by EzioChiu.
 */

@protocol HDDataCollector <NSObject>

@required

- (void)beginCollectionForDataAggregator:(HDDataAggregator *)arg1 lastPersistedSensorDatum:(HDDataCollectorSensorDatum *)arg2;
- (void)dataAggregator:(HDDataAggregator *)arg1 wantsCollectionWithConfiguration:(HDDataCollectorConfiguration *)arg2;
- (HKDevice *)deviceForDataAggregator:(HDDataAggregator *)arg1;
- (NSString *)identifierForDataAggregator:(HDDataAggregator *)arg1;
- (HKSource *)sourceForDataAggregator:(HDDataAggregator *)arg1;

@end
