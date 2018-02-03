/* made by EzioChiu.
 */

@protocol UITableViewDragDelegate <NSObject>

@required

- (NSArray *)tableView:(UITableView *)arg1 itemsForBeginningDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;

@optional

- (UIDragPreviewParameters *)tableView:(UITableView *)arg1 dragPreviewParametersForRowAtIndexPath:(NSIndexPath *)arg2;
- (bool)tableView:(UITableView *)arg1 dragSessionAllowsMoveOperation:(id <UIDragSession>)arg2;
- (void)tableView:(UITableView *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2;
- (bool)tableView:(UITableView *)arg1 dragSessionIsRestrictedToDraggingApplication:(id <UIDragSession>)arg2;
- (void)tableView:(UITableView *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (NSArray *)tableView:(UITableView *)arg1 itemsForAddingToDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3 point:(struct CGPoint { double x1; double x2; })arg4;

@end
