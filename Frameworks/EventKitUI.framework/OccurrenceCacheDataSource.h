/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol> {
    NSArray * _cachedDays;
    int  _cachedDaysSeed;
    NSSet * _calendars;
    EKEventStore * _eventStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedDays;
- (long long)cachedDayCount;
- (id)cachedOccurrenceAtIndexPath:(id)arg1;
- (bool)cachedOccurrencesAreBeingGenerated;
- (bool)cachedOccurrencesAreLoaded;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (id)dateAtDayIndex:(long long)arg1;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)arg1;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;
- (void)invalidate;
- (void)invalidateCachedOccurrences;
- (void)searchWithTerm:(id)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1;
- (void)stopSearching;
- (bool)supportsFakeTodaySection;
- (bool)supportsInvitations;

@end
