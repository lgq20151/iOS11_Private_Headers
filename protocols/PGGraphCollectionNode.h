/* made by EzioChiu.
 */

@protocol PGGraphCollectionNode <NSObject>

@required

- (bool)collectionEndsBeforeLocalDate:(NSDate *)arg1;
- (void)collectionEnumerateChildCollectionNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphCollectionNode *, bool*, void*
- (void)collectionEnumerateMeaningNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphMeaningEdge *, PGGraphMeaningNode *, bool*, void*
- (void)collectionEnumerateMomentNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphMomentNode *, bool*, void*
- (NSSet *)collectionMeaningLabels;
- (NSSet *)collectionMeaningNodes;
- (NSSet *)collectionMomentNodes;
- (unsigned long long)collectionNumberOfAssets;
- (NSArray *)collectionSortedMomentNodes;
- (bool)collectionStartsAfterLocalDate:(NSDate *)arg1;
- (NSString *)collectionUpgradingMeaningLabelForWeekend;

@end
