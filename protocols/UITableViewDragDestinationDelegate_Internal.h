/* made by EzioChiu.
 */

@protocol UITableViewDragDestinationDelegate_Internal <UITableViewDragDestinationDelegate>

@optional

- (NSIndexPath *)_tableView:(UITableView *)arg1 targetIndexPathForProposedIndexPath:(NSIndexPath *)arg2 currentIndexPath:(NSIndexPath *)arg3 dropSession:(id <UIDropSession>)arg4;

@end
