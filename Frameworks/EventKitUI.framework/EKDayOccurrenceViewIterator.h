/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayOccurrenceViewIterator : NSObject <EKBidirectionallyIterable> {
    long long  _currentIndex;
    long long  _firstTimedOccurrenceIndex;
    NSArray * _occurrenceViews;
}

@property long long currentIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long firstTimedOccurrenceIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *occurrenceViews;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_firstTimedOccurrenceViewIndexInOccurrenceViews:(id)arg1;
- (long long)_nextIndexFromCurrentIndex:(long long)arg1 forward:(bool)arg2;
- (id)_occurrenceViewAtIndex:(long long)arg1;
- (void)_prepareOccurrenceViewsForIteration:(id)arg1 selectedEvent:(id)arg2 result:(id /* block */)arg3;
- (long long)_selectedCopyOccurrenceViewIndexInOccurrenceViews:(id)arg1 selectedIndex:(long long)arg2;
- (long long)_selectedOccurrenceViewIndexInOccurrenceViews:(id)arg1 selectedEvent:(id)arg2;
- (void)_separateOccurrenceViews:(id)arg1 result:(id /* block */)arg2;
- (long long)currentIndex;
- (long long)firstTimedOccurrenceIndex;
- (id)initWithOccurrenceViews:(id)arg1 selectedEvent:(id)arg2;
- (id)next;
- (id)occurrenceViews;
- (id)previous;
- (void)setCurrentIndex:(long long)arg1;
- (void)setFirstTimedOccurrenceIndex:(long long)arg1;
- (void)setOccurrenceViews:(id)arg1;

@end