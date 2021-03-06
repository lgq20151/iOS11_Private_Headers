/* made by EzioChiu.
 */

@protocol PGGraphMomentNode <NSObject>

@required

- (bool)happensPartiallyAtHome;
- (bool)happensPartiallyAtMyHomeOrWork;
- (bool)isInterestingForMemories;
- (unsigned long long)locationMobilityType;
- (bool)momentEndsBeforeLocalDate:(NSDate *)arg1;
- (void)momentEnumerateAddressNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphAddressNode *, bool*, void*
- (void)momentEnumerateCelebratedHolidayNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphHolidayNode *, bool*, void*
- (void)momentEnumerateCollectionNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphCollectionNode *, bool*, void*
- (void)momentEnumerateDateNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphDateNode *, bool*, void*
- (void)momentEnumerateMeaningNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphMeaningEdge *, PGGraphMeaningNode *, bool*, void*
- (void)momentEnumeratePersonNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphPresentEdge *, PGGraphPersonNode *, bool*, void*
- (void)momentEnumerateRemoteAddressNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphAddressNode *, bool*, void*
- (bool)momentStartsAfterLocalDate:(NSDate *)arg1;
- (unsigned long long)numberOfAssetsWithPeople;

@end
