/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpotlightSearchResultsController : UITableViewController <PSKeyboardNavigationSearchResultsController> {
    <PSSpotlightSearchResultsControllerDelegate> * _delegate;
    NSMutableDictionary * _iconViewMap;
    NSArray * _results;
    NSMutableArray * _reusableIconViews;
    NSMutableArray * _tableData;
    NSArray * _tableDataCopy;
}

@property (nonatomic) <PSSpotlightSearchResultsControllerDelegate> *delegate;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic, retain) NSMutableArray *tableData;

- (void).cxx_destruct;
- (id)_itemForIndexPath:(id)arg1;
- (void)_removeIconViewForSection:(id)arg1;
- (void)_selectIndexPath:(id)arg1;
- (void)_updateIconViews:(bool)arg1;
- (id)delegate;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)results;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchQueryCompleted;
- (void)searchQueryFoundItems:(id)arg1;
- (void)searchQueryStarted;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)setDelegate:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setTableData:(id)arg1;
- (void)showSelectedSearchResult;
- (id)tableData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)viewDidLoad;

@end