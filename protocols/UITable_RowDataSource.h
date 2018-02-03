/* made by EzioChiu.
 */

@protocol UITable_RowDataSource <UITable>

@required

- (void)_applyContentSizeDeltaForEstimatedHeightAdjustments:(double)arg1;
- (void)_coalesceContentSizeUpdateWithDelta:(double)arg1;
- (<UITableConstants> *)_constants;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInset;
- (double)_dataSourceHeightForFooterInSection:(long long)arg1;
- (double)_dataSourceHeightForHeaderInSection:(long long)arg1;
- (double)_dataSourceHeightForRowAtIndexPath:(NSIndexPath *)arg1;
- (double)_defaultSectionFooterHeight;
- (double)_defaultSectionHeaderHeight;
- (NSString *)_detailTextForHeaderInSection:(long long)arg1;
- (double)_estimatedHeightForFooterInSection:(long long)arg1;
- (double)_estimatedHeightForHeaderInSection:(long long)arg1;
- (double)_estimatedHeightForRowAtIndexPath:(NSIndexPath *)arg1;
- (bool)_estimatesHeights;
- (bool)_estimatesRowHeights;
- (bool)_estimatesSectionFooterHeights;
- (bool)_estimatesSectionHeaderHeights;
- (double)_headerFooterLeadingMarginWidth;
- (double)_headerFooterTrailingMarginWidth;
- (double)_heightForFooterInSection:(long long)arg1;
- (double)_heightForHeaderInSection:(long long)arg1;
- (double)_heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (double)_heightForTableFooter;
- (double)_heightForTableHeader;
- (bool)_isTableHeaderAutohiding;
- (double)_maxTitleWidthForFooterInSection:(long long)arg1;
- (double)_maxTitleWidthForHeaderInSection:(long long)arg1;
- (bool)_providesRowHeights;
- (double)_rowSpacing;
- (void)_setHeight:(double)arg1 forRowAtIndexPath:(NSIndexPath *)arg2 usingPresentationValues:(bool)arg3;
- (bool)_shouldStripHeaderTopPaddingForSection:(long long)arg1;
- (bool)_shouldUseNewHeaderFooterBehavior;
- (bool)_shouldUseSearchBarHeaderBehavior;
- (double)_sidePadding;
- (double)_swipeToDeleteOffsetForRow:(long long)arg1 inSection:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_tableContentInset;
- (UIView *)_tableFooterView;
- (UIView *)_tableHeaderView;
- (long long)_titleAlignmentForFooterInSection:(long long)arg1;
- (long long)_titleAlignmentForHeaderInSection:(long long)arg1;
- (NSString *)_titleForFooterInSection:(long long)arg1;
- (NSString *)_titleForHeaderInSection:(long long)arg1;
- (UIView *)_viewForFooterInSection:(long long)arg1;
- (UIView *)_viewForHeaderInSection:(long long)arg1;

@end
