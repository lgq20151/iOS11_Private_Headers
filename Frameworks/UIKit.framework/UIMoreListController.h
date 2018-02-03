/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMoreListController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    bool  _allowsCustomizing;
    bool  _disableCustomizing;
    bool  _hideNavigationBar;
    UIMoreListCellLayoutManager * _layoutManager;
    UIBarButtonItem * _moreEditButtonItem;
    NSArray * _moreViewControllers;
    bool  _moreViewControllersChanged;
    UITableView * _table;
}

@property (nonatomic) bool allowsCustomizing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *moreViewControllers;
@property (nonatomic) bool moreViewControllersChanged;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (void)_layoutCells;
- (id)_targetNavigationController;
- (void)_updateEditButton;
- (bool)_viewControllerWasSelected;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (bool)allowsCustomizing;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)init;
- (void)loadView;
- (id)moreViewControllers;
- (bool)moreViewControllersChanged;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAllowsCustomizing:(bool)arg1;
- (void)setMoreViewControllers:(id)arg1;
- (void)setMoreViewControllersChanged:(bool)arg1;
- (id)tabBarItem;
- (id)table;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillAppear:(bool)arg1;

@end
