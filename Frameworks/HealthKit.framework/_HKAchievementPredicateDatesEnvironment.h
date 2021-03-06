/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementPredicateDatesEnvironment : _HKBaseAchievementPredicateEnvironment {
    NSCalendar * _calendar;
    double  _currentTimeZoneOffset;
    long long  _dayOfFitnessWeekToday;
    long long  _dayOfMonthToday;
    long long  _dayOfWeekToday;
    NSDate * _endOfCurrentFitnessWeek;
    NSDate * _endOfCurrentMonth;
    NSDate * _endOfToday;
    long long  _firstDayOfFitnessWeek;
    NSDate * _firstWristOnDateToday;
    NSDate * _now;
    long long  _numberOfDaysInCurrentMonth;
    NSDate * _startOfCurrentFitnessWeek;
    NSDate * _startOfCurrentMonth;
    NSDate * _startOfToday;
    NSDate * _startOfYesterday;
}

@property (nonatomic, readonly) double currentTimeZoneOffset;
@property (nonatomic, readonly) long long dayOfFitnessWeekToday;
@property (nonatomic, readonly) long long dayOfMonthToday;
@property (nonatomic, readonly) long long dayOfWeekToday;
@property (nonatomic, readonly) NSNumber *endOfCurrentFitnessWeek;
@property (nonatomic, readonly) NSNumber *endOfToday;
@property (nonatomic, readonly) long long firstDayOfFitnessWeek;
@property (nonatomic, readonly) NSNumber *firstWristOnDateToday;
@property (nonatomic, readonly) long long lastDayOfFitnessWeek;
@property (nonatomic, readonly) NSNumber *now;
@property (nonatomic, readonly) long long numberOfDaysInCurrentMonth;
@property (nonatomic, readonly) NSNumber *startOfCurrentFitnessWeek;
@property (nonatomic, readonly) NSNumber *startOfToday;
@property (nonatomic, readonly) NSNumber *startOfYesterday;

- (void).cxx_destruct;
- (void)_clearDateCaches;
- (id)_endOfCurrentFitnessWeek;
- (id)_endOfToday;
- (id)_startOfCurrentFitnessWeek;
- (id)_startOfToday;
- (id)_startOfYesterday;
- (void)_updateCurrentMonthStartEnd;
- (double)currentTimeZoneOffset;
- (long long)dayOfFitnessWeekToday;
- (long long)dayOfMonthToday;
- (long long)dayOfWeekToday;
- (id)endOfCurrentFitnessWeek;
- (id)endOfCurrentMonth;
- (id)endOfToday;
- (long long)firstDayOfFitnessWeek;
- (id)firstWristOnDateToday;
- (id)init;
- (long long)lastDayOfFitnessWeek;
- (id)now;
- (long long)numberOfDaysInCurrentMonth;
- (void)setCalendar:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (id)startOfCurrentFitnessWeek;
- (id)startOfCurrentMonth;
- (id)startOfToday;
- (id)startOfYesterday;

@end
