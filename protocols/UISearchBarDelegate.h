/* made by EzioChiu.
 */

@protocol UISearchBarDelegate <UIBarPositioningDelegate>

@optional

- (void)searchBar:(UISearchBar *)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (bool)searchBar:(UISearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(NSString *)arg3;
- (void)searchBar:(UISearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarBookmarkButtonClicked:(UISearchBar *)arg1;
- (void)searchBarCancelButtonClicked:(UISearchBar *)arg1;
- (void)searchBarResultsListButtonClicked:(UISearchBar *)arg1;
- (void)searchBarSearchButtonClicked:(UISearchBar *)arg1;
- (bool)searchBarShouldBeginEditing:(UISearchBar *)arg1;
- (bool)searchBarShouldEndEditing:(UISearchBar *)arg1;
- (void)searchBarTextDidBeginEditing:(UISearchBar *)arg1;
- (void)searchBarTextDidEndEditing:(UISearchBar *)arg1;

@end
