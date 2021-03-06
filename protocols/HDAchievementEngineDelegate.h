/* made by EzioChiu.
 */

@protocol HDAchievementEngineDelegate <NSObject>

@required

- (long long)activitySummaryIndexToday;
- (double)briskMinutesToday;
- (double)briskMinutesYesterday;
- (double)caloriesBurnedToday;
- (double)caloriesBurnedYesterday;
- (NSDate *)currentDate;
- (HKQuantity *)energyBurnedGoalToday;
- (HKQuantity *)energyBurnedGoalYesterday;
- (long long)mostRecentWorkoutAnchor;
- (unsigned long long)standingHoursToday;
- (unsigned long long)standingHoursYesterday;
- (unsigned long long)stepsTakenToday;
- (unsigned long long)stepsTakenYesterday;
- (NSArray *)workoutsEndingAfterAnchor:(long long)arg1 newAnchor:(long long*)arg2;

@end
