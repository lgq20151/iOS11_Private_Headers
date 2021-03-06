/* made by EzioChiu.
 */

@protocol NTTodayEventTracker <NSObject>

@required

- (void)userDidReadHeadlineWithAnalyticsElement:(id <NTHeadlineAnalyticsElementProviding>)arg1 atDate:(NSDate *)arg2;
- (void)userDidSeeHeadlinesWithAnalyticsElements:(NSArray *)arg1 atDate:(NSDate *)arg2;

@end
