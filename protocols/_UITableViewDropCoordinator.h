/* made by EzioChiu.
 */

@protocol _UITableViewDropCoordinator <UITableViewDropCoordinator>

@required

- (NSIndexPath *)_destinationIndexPath;
- (<_UITableViewPlaceholderContext> *)_dropItem:(void *)arg1 toPlaceholderInsertedAtIndexPath:(void *)arg2 withReuseIdentifier:(void *)arg3 rowHeight:(void *)arg4 cellUpdateHandler:(void *)arg5; // needs 5 arg types, found 10: UIDragItem *, NSIndexPath *, NSString *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UITableViewCell *, void*
- (void)_dropItem:(UIDragItem *)arg1 toRowAtIndexPath:(NSIndexPath *)arg2;
- (void)_dropItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (UITableViewDropProposal *)_dropProposal;
- (<UIDropSession> *)_dropSession;
- (NSArray *)_items;

@end
