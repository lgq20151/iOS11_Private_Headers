/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsCommuteOnlyFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter> {
    NSDate * _exitDate;
    NSDate * _overriddenCurrentTime;
    RTRoutineManager * _routineManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)_bestAvailableDateForEntry:(id)arg1 now:(id)arg2;
- (id)_currentTime;
- (id)_entryDateArrivalWindowForEntry:(id)arg1;
- (id)_exitDateDepartureWindow;
- (id)_lastVisitDateArrivalWindowForEntry:(id)arg1 now:(id)arg2;
- (id)_lastVisitDateMovedToTodayForEntry:(id)arg1 now:(id)arg2;
- (void)_overrideCurrentTime:(id)arg1;
- (void)_setEstimatedExitTime:(id)arg1;
- (id)init;
- (bool)shouldKeepEntry:(id)arg1;
- (void)updateExitTimeEstimationForLocation:(id)arg1;

@end
