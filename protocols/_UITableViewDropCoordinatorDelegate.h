/* made by EzioChiu.
 */

@protocol _UITableViewDropCoordinatorDelegate <_UITableViewPlaceholderContextDelegate>

@required

- (<UIDragAnimating> *)animateDragItem:(UIDragItem *)arg1 intoRowAtIndexPath:(NSIndexPath *)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (<UIDragAnimating> *)animateDragItem:(UIDragItem *)arg1 toCell:(UITableViewCell *)arg2 withPreviewParameters:(UIDragPreviewParameters *)arg3;
- (<UIDragAnimating> *)animateDragItem:(UIDragItem *)arg1 toRowAtIndexPath:(NSIndexPath *)arg2;
- (<UIDragAnimating> *)animateDragItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (void)insertPlaceholderAtIndexPath:(void *)arg1 withContext:(void *)arg2 previewParametersProvider:(void *)arg3; // needs 3 arg types, found 8: NSIndexPath *, _UITableViewDropPlaceholderContextImpl *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UIDragPreviewParameters *, id /* block */, UITableViewCell *, void*
- (UITableView *)tableView;

@end
