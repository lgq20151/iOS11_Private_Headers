/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRecentsInputViewController : UITableViewController {
    bool  _canManageList;
    NSString * _clearAllString;
    long long  _containingEffectStyle;
    UIView * _customHeaderView;
    NSString * _enterNewString;
    UIView * _headerContainerView;
    UIViewController * _headerContainerViewController;
    UIView * _headerView;
    NSLayoutConstraint * _heightConstraint;
    NSString * _previouslyUsedString;
    <UIRecentsInputViewControllerDelegate> * _recentInputDelegate;
    UILexicon * _recentInputs;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic) bool canManageList;
@property (nonatomic, retain) NSString *clearAllString;
@property (nonatomic) long long containingEffectStyle;
@property (nonatomic, retain) UIView *customHeaderView;
@property (nonatomic, retain) NSString *enterNewString;
@property (nonatomic, retain) UIView *headerContainerView;
@property (nonatomic, retain) UIViewController *headerContainerViewController;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) NSString *previouslyUsedString;
@property (nonatomic) <UIRecentsInputViewControllerDelegate> *recentInputDelegate;
@property (nonatomic, retain) UILexicon *recentInputs;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

- (void).cxx_destruct;
- (void)_delete:(id)arg1;
- (void)_overrideTraitCollectionForHeaderViewController;
- (id)_uiktest_FocusedCellLabel;
- (id)_uiktest_UnfocusedCellBackgroundView;
- (id)_uiktest_UnfocusedCellLabel;
- (bool)canManageList;
- (id)clearAllString;
- (long long)containingEffectStyle;
- (id)customHeaderView;
- (void)didSelectButtonAtIndexPath:(id)arg1;
- (void)ensureConstraints;
- (id)enterNewString;
- (id)headerContainerView;
- (id)headerContainerViewController;
- (id)headerView;
- (id)heightConstraint;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)preferredFocusedView;
- (id)previouslyUsedString;
- (id)recentInputDelegate;
- (id)recentInputs;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (void)setCanManageList:(bool)arg1;
- (void)setClearAllString:(id)arg1;
- (void)setContainingEffectStyle:(long long)arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setEnterNewString:(id)arg1;
- (void)setHeaderContainerView:(id)arg1;
- (void)setHeaderContainerViewController:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setPreviouslyUsedString:(id)arg1;
- (void)setRecentInputDelegate:(id)arg1;
- (void)setRecentInputs:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateTableViewWidth;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)widthConstraint;

@end
