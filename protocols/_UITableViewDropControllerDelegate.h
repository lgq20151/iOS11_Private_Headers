/* made by EzioChiu.
 */

@protocol _UITableViewDropControllerDelegate <NSObject>

@required

- (<UIDragSession> *)_activeSourceDragSession;
- (void)_beginAnimatingDropIntoCell:(UITableViewCell *)arg1;
- (_UITableViewDropAnimationContainerView *)_beginAnimatingDropOfCell:(UITableViewCell *)arg1 isCanceling:(bool)arg2;
- (bool)_canHandleDropSession:(id <UIDropSession>)arg1;
- (bool)_commitPlaceholderInsertionWithContext:(void *)arg1 dataSourceUpdates:(void *)arg2; // needs 2 arg types, found 7: _UITableViewDropPlaceholderContextImpl *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSIndexPath *, void*
- (long long)_dataOwnerForDropSession:(id <UIDropSession>)arg1 atIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)_deletePlaceholderForContext:(_UITableViewDropPlaceholderContextImpl *)arg1;
- (void)_dropEnded:(id <UIDropSession>)arg1;
- (void)_dropEntered:(id <UIDropSession>)arg1;
- (void)_dropExited:(id <UIDropSession>)arg1;
- (UIDragPreviewParameters *)_dropPreviewParametersForIndexPath:(NSIndexPath *)arg1;
- (void)_endAnimatingDropIntoCell:(UITableViewCell *)arg1;
- (void)_endAnimatingDropOfCell:(UITableViewCell *)arg1;
- (NSIndexPath *)_insertPlaceholderAtIndexPath:(NSIndexPath *)arg1 withContext:(_UITableViewDropPlaceholderContextImpl *)arg2;
- (void)_performDrop:(id <UIDropSession>)arg1 withDropCoordinator:(_UITableViewDropCoordinatorImpl *)arg2 forceHandleAsReorder:(bool)arg3;
- (void)_removeDropTargetAndResetAppearance;
- (bool)_shouldAllowInternalDrop;
- (NSIndexPath *)_targetIndexPathForDrop:(id <UIDropSession>)arg1;
- (void)_updateDropTargetAppearanceWithTargetIndexPath:(NSIndexPath *)arg1 dropProposal:(UITableViewDropProposal *)arg2 dropSession:(id <UIDropSession>)arg3;
- (UITableViewDropProposal *)_updatedDropProposalForIndexPath:(NSIndexPath *)arg1 dropSession:(id <UIDropSession>)arg2 withDefaultProposal:(UITableViewDropProposal *)arg3;

@end
