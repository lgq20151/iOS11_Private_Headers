/* made by EzioChiu.
 */

@protocol SearchUIResultViewDelegate <NSObject>

@optional

- (void)clearResultsFromSection:(SFResultSection *)arg1;
- (NSString *)currentQuery;
- (void)didBeginScrollingResults;
- (void)didChangeExpansionStateForSection:(SFResultSection *)arg1 expanded:(bool)arg2;
- (void)didTapInEmptyRegion;
- (void)didUpdateContentScrolledOffScreenStatus:(bool)arg1 animated:(bool)arg2;
- (bool)sectionIsClearable:(SFResultSection *)arg1;
- (bool)sectionShouldBeExpanded:(SFResultSection *)arg1;

@end
