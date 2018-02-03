/* made by EzioChiu.
 */

@protocol UITableViewDragSourceDelegate <NSObject>

@optional

- (long long)__tableView:(UITableView *)arg1 dataOwnerForDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)_tableView:(UITableView *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2;
- (void)_tableView:(UITableView *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (NSArray *)_tableView:(UITableView *)arg1 itemsForAddingToDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (NSArray *)_tableView:(UITableView *)arg1 itemsForBeginningDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;

@end
