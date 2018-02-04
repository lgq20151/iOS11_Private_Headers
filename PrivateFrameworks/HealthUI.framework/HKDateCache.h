/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDateCache : NSObject {
    NSCalendar * _calendar;
    NSDate * _currentDate;
    NSDate * _endOfDayMidnight;
    NSDate * _endOfRollingMonthMidnight;
    NSDate * _endOfRollingWeekMidnight;
    NSDate * _endOfRollingYear;
    NSDate * _endOfTomorrowMidnight;
    NSDate * _endOfYesterdayMidnight;
    NSHashTable * _observers;
    NSDate * _oneMinuteBeforeEndOfDayMidnight;
    NSDate * _oneSecondBeforeEndOfDayMidnight;
    NSDate * _startOfDayMidnight;
    NSDate * _startOfRollingMonthMidnight;
    NSDate * _startOfRollingWeekMidnight;
    NSDate * _startOfRollingYear;
    NSDate * _startOfTomorrowMidnight;
    NSDate * _startOfYesterdayMidnight;
    NSSet * _weekendDays;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSDate *endOfDayMidnight;
@property (nonatomic, readonly) NSDate *endOfRollingMonthMidnight;
@property (nonatomic, readonly) NSDate *endOfRollingWeekMidnight;
@property (nonatomic, readonly) NSDate *endOfRollingYearMidnight;
@property (nonatomic, readonly) NSDate *endOfTomorrowMidnight;
@property (nonatomic, readonly) NSDate *endOfYesterdayMidnight;
@property (nonatomic, readonly) NSDate *oneMinuteBeforeEndOfDayMidnight;
@property (nonatomic, readonly) NSDate *oneSecondBeforeEndOfDayMidnight;
@property (nonatomic, readonly) NSDate *startOfDayMidnight;
@property (nonatomic, readonly) NSDate *startOfRollingMonthMidnight;
@property (nonatomic, readonly) NSDate *startOfRollingWeekMidnight;
@property (nonatomic, readonly) NSDate *startOfRollingYearMidnight;
@property (nonatomic, readonly) NSDate *startOfTomorrowMidnight;
@property (nonatomic, readonly) NSDate *startOfYesterdayMidnight;

- (void).cxx_destruct;
- (id)_currentDate;
- (void)_flushCacheAndNotifyObservers:(id)arg1;
- (void)_notifyObserversDidUpdateOnNotification:(id)arg1;
- (void)_setCurrentDate:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)calendar;
- (void)dealloc;
- (id)endOfDayMidnight;
- (id)endOfRollingDay:(id /* block */)arg1;
- (id)endOfRollingMonth:(id /* block */)arg1;
- (id)endOfRollingMonthMidnight;
- (id)endOfRollingWeek:(id /* block */)arg1;
- (id)endOfRollingWeekMidnight;
- (id)endOfRollingYear:(id /* block */)arg1;
- (id)endOfRollingYearMidnight;
- (id)endOfTomorrowMidnight;
- (id)endOfYesterdayMidnight;
- (void)flushCache;
- (id)init;
- (id)initWithCalendar:(id)arg1;
- (bool)isDateInThisCalendarMonth:(id)arg1;
- (bool)isDateInThisCalendarYear:(id)arg1;
- (bool)isDateInToday:(id)arg1;
- (bool)isDateInTomorrow:(id)arg1;
- (bool)isDateInYesterday:(id)arg1;
- (bool)isDayOfWeekNumberOnWeekend:(id)arg1;
- (id)oneMinuteBeforeEndOfDayMidnight;
- (id)oneSecondBeforeEndOfDayMidnight;
- (void)removeObserver:(id)arg1;
- (id)startOfDayMidnight;
- (id)startOfRollingDay:(id /* block */)arg1;
- (id)startOfRollingMonth:(id /* block */)arg1;
- (id)startOfRollingMonthMidnight;
- (id)startOfRollingWeek:(id /* block */)arg1;
- (id)startOfRollingWeekMidnight;
- (id)startOfRollingYear:(id /* block */)arg1;
- (id)startOfRollingYearMidnight;
- (id)startOfTomorrowMidnight;
- (id)startOfYesterdayMidnight;
- (id)weekendDays;

@end