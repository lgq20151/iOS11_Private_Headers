/* made by EzioChiu.
 */

@protocol UITableConstants <NSObject>

@required

+ (id)sharedConstants;

- (double)defaultAlphaForDraggingCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultAlphaForReorderingCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultBackgroundColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultBackgroundColorForTableViewStyle:(long long)arg1;
- (UIImage *)defaultCheckmarkImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultContentAccessoryPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultContentEditPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultContentReorderPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDeleteBackgroundImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDeleteImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultDeleteMinusRectForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultDetailTextFontForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultDetailTextLabelFontSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDisclosureImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDisclosurePressedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultEditControlPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct CGSize { double x1; double x2; })defaultEditControlSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultFocusedHorizontalOutsetForTableView:(id <UITable>)arg1;
- (double)defaultFocusedShadowRadiusForTableView:(id <UITable>)arg1;
- (UIColor *)defaultFooterBackgroundColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultFooterFontForTableViewStyle:(long long)arg1;
- (UIFont *)defaultFooterFontForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFooterTextColorForTableViewStyle:(long long)arg1;
- (UIColor *)defaultFooterTextColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultHeaderBackgroundColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultHeaderFontForTableViewStyle:(long long)arg1;
- (UIFont *)defaultHeaderFontForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultHeaderTextColorForTableViewStyle:(long long)arg1;
- (UIColor *)defaultHeaderTextColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultInsertImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMarginsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMarginsForTableView:(id <UITable>)arg1;
- (double)defaultLeadingCellMarginWidthForTableView:(id <UITable>)arg1;
- (double)defaultMarginWidthForTableView:(id <UITable>)arg1;
- (double)defaultMaskGradientHeightForTableView:(id <UITable>)arg1;
- (UIImage *)defaultMultiSelectHighlightedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultMultiSelectNotSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultMultiSelectSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultPaddingBetweenHeaderAndRowsForTableView:(id <UITable>)arg1;
- (double)defaultPaddingBetweenRowsForTableView:(id <UITable>)arg1;
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id <UITable>)arg1;
- (double)defaultPlainHeaderLabelYPositionForTableView:(id <UITable>)arg1 headerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 isHeader:(bool)arg4;
- (UIImage *)defaultReorderControlImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct CGSize { double x1; double x2; })defaultReorderControlSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (bool)defaultRowHeightDependsOnCellStyle;
- (double)defaultRowHeightForTableView:(id <UITable>)arg1;
- (double)defaultRowHeightForTableView:(id <UITable>)arg1 cellStyle:(long long)arg2;
- (double)defaultSectionFooterHeightForTableView:(id <UITable>)arg1;
- (double)defaultSectionHeaderHeightForTableView:(id <UITable>)arg1;
- (UIColor *)defaultSelectionTintColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultSeparatorColorForTableViewStyle:(long long)arg1;
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultTextLabelFontForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultTextLabelFontSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultTrailingCellMarginWidthForTableView:(id <UITable>)arg1;
- (bool)imageViewOffsetByLayoutMarginsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (bool)reorderingCellWantsShadows:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (bool)supportsUserInterfaceStyles;

@optional

- (UIColor *)defaultDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2 forUserInterfaceStyle:(long long)arg3;
- (UIImage *)defaultFocusedCheckmarkImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedDeleteImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFocusedDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedDisclosureImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedInsertImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedMultiSelectNotSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedMultiSelectSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedReorderControlImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFocusedTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultHeaderTextColorForTableViewStyle:(long long)arg1 userInterfaceStyle:(long long)arg2;
- (UIColor *)defaultTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2 forUserInterfaceStyle:(long long)arg3;

@end
