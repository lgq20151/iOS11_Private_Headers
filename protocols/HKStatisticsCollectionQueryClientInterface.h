/* made by EzioChiu.
 */

@protocol HKStatisticsCollectionQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverStatisticsBatch:(NSArray *)arg1 resetStatistics:(bool)arg2 isFinal:(bool)arg3 anchor:(NSNumber *)arg4 query:(NSUUID *)arg5;
- (void)client_deliverUpdatedStatistics:(HKStatistics *)arg1 anchor:(NSNumber *)arg2 query:(NSUUID *)arg3;

@end
