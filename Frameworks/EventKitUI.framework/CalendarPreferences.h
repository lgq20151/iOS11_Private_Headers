/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarPreferences : NSObject {
    bool  _drawDebugViewColors;
    CalPreferences * _preferences;
}

@property (nonatomic, retain) NSArray *calendarUUIDsExcludedFromNotifications;
@property (nonatomic, retain) NSNumber *dayViewHourScale;
@property (nonatomic) unsigned long long debugOccurrenceViewIconOverload;
@property (nonatomic, retain) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic) bool disableContinuity;
@property (nonatomic) bool disableTodayPushes;
@property (nonatomic) bool drawDebugViewColors;
@property (nonatomic) bool enableAvatars;
@property (nonatomic) bool eventAutocompleteEnabled;
@property (nonatomic) bool hideInlineDayViewInEventDetails;
@property (nonatomic) bool immediateAlarmCreation;
@property (nonatomic) bool largeListViewDisclosingEventDetails;
@property (nonatomic, retain) NSNumber *lastSuspendTime;
@property (nonatomic, retain) NSNumber *lastViewMode;
@property (nonatomic, retain) NSNumber *lastViewedDate;
@property (nonatomic, retain) NSNumber *locationSearchResultLimit;
@property (nonatomic, retain) NSString *overlayCalendarID;
@property (nonatomic) unsigned long long promptForCommentWhenDeclining;
@property (nonatomic) bool requestSyncOnApplicationLaunch;
@property (nonatomic, retain) NSString *searchString;
@property (getter=isShortResumeToTodayTimeout, nonatomic) bool shortResumeToTodayTimeout;
@property (nonatomic) bool showDetailedListView;
@property (nonatomic) bool showEventsInPhoneMonthView;
@property (nonatomic) bool showExperimentalUI;
@property (nonatomic) bool showListView;
@property (nonatomic) bool showMonthDividedListView;
@property (nonatomic) bool showWeekNumbers;
@property (nonatomic) bool showWindowDebugButton;
@property (nonatomic, retain) NSDate *simulatedCurrentDate;
@property (nonatomic) bool swipeToDeleteEnabled;
@property (nonatomic) bool viewedTimeZoneAutomatic;
@property (nonatomic, retain) NSNumber *weekStart;
@property (nonatomic, retain) NSNumber *weekViewHourScale;

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)calendarUUIDsExcludedFromNotifications;
- (id)dayViewHourScale;
- (unsigned long long)debugOccurrenceViewIconOverload;
- (id)deselectedCalendarSyncHashes;
- (bool)disableContinuity;
- (bool)disableTodayPushes;
- (bool)drawDebugViewColors;
- (bool)enableAvatars;
- (bool)eventAutocompleteEnabled;
- (bool)hideInlineDayViewInEventDetails;
- (bool)immediateAlarmCreation;
- (id)init;
- (bool)isShortResumeToTodayTimeout;
- (bool)largeListViewDisclosingEventDetails;
- (id)lastSuspendTime;
- (id)lastViewMode;
- (id)lastViewedDate;
- (id)locationSearchResultLimit;
- (id)overlayCalendarID;
- (unsigned long long)promptForCommentWhenDeclining;
- (bool)requestSyncOnApplicationLaunch;
- (id)searchString;
- (void)setCalendarUUIDsExcludedFromNotifications:(id)arg1;
- (void)setDayViewHourScale:(id)arg1;
- (void)setDebugOccurrenceViewIconOverload:(unsigned long long)arg1;
- (void)setDeselectedCalendarSyncHashes:(id)arg1;
- (void)setDisableContinuity:(bool)arg1;
- (void)setDisableTodayPushes:(bool)arg1;
- (void)setDrawDebugViewColors:(bool)arg1;
- (void)setEnableAvatars:(bool)arg1;
- (void)setEventAutocompleteEnabled:(bool)arg1;
- (void)setHideInlineDayViewInEventDetails:(bool)arg1;
- (void)setImmediateAlarmCreation:(bool)arg1;
- (void)setLargeListViewDisclosingEventDetails:(bool)arg1;
- (void)setLastSuspendTime:(id)arg1;
- (void)setLastViewMode:(id)arg1;
- (void)setLastViewedDate:(id)arg1;
- (void)setLocationSearchResultLimit:(id)arg1;
- (void)setOverlayCalendarID:(id)arg1;
- (void)setPromptForCommentWhenDeclining:(unsigned long long)arg1;
- (void)setRequestSyncOnApplicationLaunch:(bool)arg1;
- (void)setSearchString:(id)arg1;
- (void)setShortResumeToTodayTimeout:(bool)arg1;
- (void)setShowDetailedListView:(bool)arg1;
- (void)setShowEventsInPhoneMonthView:(bool)arg1;
- (void)setShowExperimentalUI:(bool)arg1;
- (void)setShowListView:(bool)arg1;
- (void)setShowMonthDividedListView:(bool)arg1;
- (void)setShowWeekNumbers:(bool)arg1;
- (void)setShowWindowDebugButton:(bool)arg1;
- (void)setSimulatedCurrentDate:(id)arg1;
- (void)setSwipeToDeleteEnabled:(bool)arg1;
- (void)setViewedTimeZoneAutomatic:(bool)arg1;
- (void)setWeekStart:(id)arg1;
- (void)setWeekViewHourScale:(id)arg1;
- (bool)showDetailedListView;
- (bool)showEventsInPhoneMonthView;
- (bool)showExperimentalUI;
- (bool)showListView;
- (bool)showMonthDividedListView;
- (bool)showWeekNumbers;
- (bool)showWindowDebugButton;
- (id)simulatedCurrentDate;
- (bool)swipeToDeleteEnabled;
- (bool)viewedTimeZoneAutomatic;
- (id)weekStart;
- (id)weekViewHourScale;

@end