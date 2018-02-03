/* made by EzioChiu.
 */

@protocol UITableViewDropCoordinator <NSObject>

@required

- (NSIndexPath *)destinationIndexPath;
- (<UIDragAnimating> *)dropItem:(UIDragItem *)arg1 intoRowAtIndexPath:(NSIndexPath *)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (<UITableViewDropPlaceholderContext> *)dropItem:(UIDragItem *)arg1 toPlaceholder:(UITableViewDropPlaceholder *)arg2;
- (<UIDragAnimating> *)dropItem:(UIDragItem *)arg1 toRowAtIndexPath:(NSIndexPath *)arg2;
- (<UIDragAnimating> *)dropItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (NSArray *)items;
- (UITableViewDropProposal *)proposal;
- (<UIDropSession> *)session;

@end
