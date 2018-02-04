/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKStringFactory : NSObject {
    struct __CFDateFormatter { } * _abbrevDayFormatter;
    struct __CFDateFormatter { } * _customFormatter;
    struct __CFDateFormatter { } * _dayFormatter;
    struct __CFDateFormatter { } * _dayOfWeekFormatter;
    struct __CFDateFormatter { } * _fullStyleDateFormatter;
    NSMutableDictionary * _longFormatters;
    struct __CFDateFormatter { } * _standardTimeFormatter;
    struct __CFDateFormatter { } * _timeFormatter;
}

+ (id)_dateAfterTodayNextWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(bool)arg2;
+ (id)_dateAfterTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(bool)arg2;
+ (id)_dateBeforeTodayLastWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(bool)arg2;
+ (id)_dateBeforeTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(bool)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (struct __CFDateFormatter { }*)_customFormatter;
- (id)_dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 withFormat:(unsigned long long)arg5 showTimeZone:(bool)arg6;
- (id)_dayStringForDate:(double)arg1 allDay:(bool)arg2 shortFormat:(bool)arg3 lowercase:(bool)arg4;
- (void)_invalidateFormatters;
- (void)_localeChanged:(id)arg1;
- (id)_stringForDateTime:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 timeZone:(struct __CFTimeZone { }*)arg2;
- (id)_stringForDay:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(bool)arg3 lowerCase:(bool)arg4;
- (id)_stringForTime:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (id)_timeStringForDate:(double)arg1;
- (struct __CFDateFormatter { }*)abbreviatedDayFormatter;
- (id)dateStringForDate:(double)arg1 allDay:(bool)arg2 shortFormat:(bool)arg3;
- (id)dateStringForDate:(double)arg1 allDay:(bool)arg2 standalone:(bool)arg3 shortFormat:(bool)arg4;
- (id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2;
- (id)dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4;
- (id)dateStringForSuggestedEventWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 showTimeZone:(bool)arg5;
- (struct __CFDateFormatter { }*)dayFormatter;
- (struct __CFDateFormatter { }*)dayOfWeekFormatter;
- (void)dealloc;
- (struct __CFDateFormatter { }*)formatterForLongFormat:(id)arg1;
- (struct __CFDateFormatter { }*)fullStyleDateFormatter;
- (id)init;
- (struct __CFDateFormatter { }*)standardTimeFormatter;
- (struct __CFDateFormatter { }*)timeFormatter;
- (id)timeStringForDate:(double)arg1 inTimeZone:(id)arg2;

@end