/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISectionRowData : NSObject <NSCopying> {
    unsigned long long  _arrayLength;
    bool  _estimatesHeights;
    long long  _footerAlignment;
    double  _footerHeight;
    double  _footerOffset;
    long long  _headerAlignment;
    double  _headerHeight;
    double  _headerOffset;
    double  _maxFooterTitleWidth;
    double  _maxHeaderTitleWidth;
    unsigned long long  _numRows;
    UITableViewRowData * _rowData;
    float * _rowHeights;
    double * _rowOffsets;
    double  _sectionHeight;
    double  _sectionOffset;
    bool  _sectionOffsetValid;
    long long  _sectionRowOffset;
    bool  _valid;
}

- (double)_defaultSectionFooterHeightForSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (double)_defaultSectionHeaderHeightForSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (double)_headerOrFooterSizeForTable:(id)arg1 title:(id)arg2 detailText:(id)arg3 isHeader:(bool)arg4 stripPaddingForAbuttingView:(bool)arg5 isTopHeader:(bool)arg6;
- (double)_offsetForFirstRow;
- (long long)_rowForPoint:(struct CGPoint { double x1; double x2; })arg1 beginningWithRow:(long long)arg2 numberOfRows:(long long)arg3 extraHitSpaceBetweenRows:(double)arg4;
- (long long)_rowForPoint:(struct CGPoint { double x1; double x2; })arg1 extraHitSpaceBetweenRows:(double)arg2;
- (void)addOffset:(double)arg1 fromRow:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)defaultSectionFooterHeight;
- (double)defaultSectionHeaderHeight;
- (void)deleteRowAtIndex:(long long)arg1;
- (double)heightForEmptySection:(long long)arg1 inTableView:(id)arg2 rowData:(id)arg3;
- (double)heightForFooterInSection:(long long)arg1 canGuess:(bool)arg2;
- (double)heightForHeaderInSection:(long long)arg1 canGuess:(bool)arg2;
- (double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(bool)arg3;
- (id)initWithRowData:(id)arg1;
- (void)insertRowAtIndex:(long long)arg1 inSection:(long long)arg2 rowHeight:(double)arg3 tableViewRowData:(id)arg4;
- (void)invalidate;
- (void)invalidateSectionOffset;
- (double)offsetForRow:(long long)arg1 adjustedForGap:(bool)arg2;
- (void)refreshWithSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (int)sectionLocationForReorderedRow:(long long)arg1;
- (int)sectionLocationForRow:(long long)arg1;
- (void)setHeight:(double)arg1 forRow:(long long)arg2 inSection:(long long)arg3;
- (void)updateSectionHeightWithDelta:(double)arg1 section:(long long)arg2 updateFooterOffset:(bool)arg3;

@end
