/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductTracklistTableViewController : MusicLibraryBrowseTableViewController {
    double  _trackNumberColumnWidth;
}

- (void)_updateTrackNumberColumnWidthAllowingVisibleCellUpdate:(bool)arg1;
- (void)_updateTrackNumberColumnWidthForCell:(id)arg1;
- (void)_updateTrackNumberColumnWidthForHeader:(id)arg1;
- (void)_updateTrackNumberColumnWidthForVisibleCells;
- (void)_updateTrackNumberColumnWidthForVisibleHeaders;
- (void)handleContentSizeCategoryDidChange;
- (void)handleEntityProviderDidInvalidate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
