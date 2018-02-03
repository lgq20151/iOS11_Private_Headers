/* made by EzioChiu.
 */

@protocol UITableViewDragDestinationDelegate <NSObject>

@optional

- (long long)__tableView:(UITableView *)arg1 dataOwnerForDropSession:(id <UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;
- (bool)_tableView:(UITableView *)arg1 canHandleDropSession:(id <UIDropSession>)arg2;
- (void)_tableView:(UITableView *)arg1 dropSessionDidEnd:(id <UIDropSession>)arg2;
- (void)_tableView:(UITableView *)arg1 dropSessionDidEnter:(id <UIDropSession>)arg2;
- (void)_tableView:(UITableView *)arg1 dropSessionDidExit:(id <UIDropSession>)arg2;
- (UITableViewDropProposal *)_tableView:(UITableView *)arg1 dropSessionDidUpdate:(id <UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;
- (void)_tableView:(UITableView *)arg1 performDropWithCoordinator:(id <_UITableViewDropCoordinator>)arg2;

@end
