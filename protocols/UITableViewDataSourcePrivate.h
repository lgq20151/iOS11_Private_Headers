/* made by EzioChiu.
 */

@protocol UITableViewDataSourcePrivate <UITableViewDataSource>

@optional

- (NSString *)tableView:(UITableView *)arg1 detailTextForHeaderInSection:(long long)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 indexPathForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;

@end
