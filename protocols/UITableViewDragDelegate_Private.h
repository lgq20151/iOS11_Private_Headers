/* made by EzioChiu.
 */

@protocol UITableViewDragDelegate_Private <UITableViewDragDelegate>

@optional

- (long long)_tableView:(UITableView *)arg1 dataOwnerForDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;

@end