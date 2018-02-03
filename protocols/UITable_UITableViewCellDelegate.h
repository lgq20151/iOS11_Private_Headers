/* made by EzioChiu.
 */

@protocol UITable_UITableViewCellDelegate <UITable>

@required

- (void)_accessoryButtonAction:(UIView *)arg1;
- (void)_actionButton:(_UITableViewCellActionButton *)arg1 pushedInCell:(UITableViewCell *)arg2;
- (void)_animateDeletionOfRowAtIndexPath:(NSIndexPath *)arg1;
- (void)_animateDeletionOfRowWithCell:(UITableViewCell *)arg1;
- (void)_animateSwipeCancelation;
- (bool)_beginReorderingForCell:(UITableViewCell *)arg1 touch:(UITouch *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calloutTargetRectForCell:(UITableViewCell *)arg1;
- (bool)_canFocusCell:(UITableViewCell *)arg1;
- (bool)_canPerformAction:(SEL)arg1 forCell:(UITableViewCell *)arg2 sender:(id)arg3;
- (void)_cellDidBecomeFocused:(UITableViewCell *)arg1;
- (void)_cellDidBecomeUnfocused:(UITableViewCell *)arg1;
- (void)_cellDidHideSelectedBackground:(UITableViewCell *)arg1;
- (void)_cellDidShowSelectedBackground:(UITableViewCell *)arg1;
- (void)_configureDeleteConfirmationDecelerationRate:(double)arg1;
- (double)_deleteConfirmationHorizontalOffset;
- (double)_deleteConfirmationHorizontalVelocity;
- (void)_didInsertRowForTableCell:(UITableViewCell *)arg1;
- (void)_draggingReorderingCell:(UITableViewCell *)arg1 yDelta:(double)arg2 touch:(UITouch *)arg3;
- (void)_endReorderingForCell:(UITableViewCell *)arg1 wasCancelled:(bool)arg2 animated:(bool)arg3;
- (void)_endSwipeToDeleteGesture:(bool)arg1;
- (void)_endSwipeToDeleteRowDidDelete:(bool)arg1;
- (void)_finishedRemovingRemovalButtonForTableCell:(UITableViewCell *)arg1;
- (void)_highlightCell:(UITableViewCell *)arg1 animated:(bool)arg2 scrollPosition:(long long)arg3 highlight:(bool)arg4;
- (void)_highlightDidEndForCell:(UITableViewCell *)arg1 withInteraction:(id <UIInteraction>)arg2;
- (void)_installSwipeToDeleteGobbler;
- (bool)_isCellReorderable:(UITableViewCell *)arg1;
- (bool)_isEditingForSwipeDeletion;
- (bool)_isInModalViewController;
- (bool)_isReorderControlActiveForCell:(UITableViewCell *)arg1;
- (void)_performAction:(SEL)arg1 forCell:(UITableViewCell *)arg2 sender:(id)arg3;
- (long long)_popoverControllerStyle;
- (void)_prepareHighlightForCell:(UITableViewCell *)arg1 withInteraction:(id <UIInteraction>)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_rawSeparatorInset;
- (void)_removeWasCanceledForCell:(UITableViewCell *)arg1;
- (UIView *)_reorderingCell;
- (void)_revealDeleteConfirmationButtonWithWidth:(double)arg1;
- (double)_rowSpacing;
- (void)_setSwipeToDeleteCell:(UITableViewCell *)arg1;
- (void)_setSwipeToDeleteCell:(UITableViewCell *)arg1 installGobbler:(bool)arg2;
- (bool)_shouldDrawThickSeparators;
- (bool)_shouldShowMenuForCell:(UITableViewCell *)arg1;
- (void)_swipeAccessoryButtonPushedInCell:(UITableViewCell *)arg1;
- (NSArray *)_swipeActionButtons;
- (UITableViewCell *)_swipeToDeleteCell;
- (void)_swipeToDeleteCell:(UITableViewCell *)arg1;
- (NSString *)_titleForDeleteConfirmationButton:(UITableViewCell *)arg1;
- (void)_updateCell:(UITableViewCell *)arg1 withValue:(NSString *)arg2;
- (void)_userSelectCell:(UITableViewCell *)arg1;
- (bool)_usesModernSwipeActions;
- (bool)_wasEditing;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;

@end
