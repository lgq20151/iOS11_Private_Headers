/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUOnboardingInstructionsTableViewController : HUInstructionsTableViewController <HOOnboardingChildViewController, HOOnboardingChildViewControllerDelegate, HOOnboardingChildViewControllerNavigationBarDelegate> {
    UIBarButtonItem * _doneButtonBarItem;
    UICollectionViewController<HOOnboardingChildViewController> * _onboardingViewController;
    <HOOnboardingChildViewControllerDelegate> * delegate;
    <HOOnboardingChildViewControllerNavigationBarDelegate> * navigationBarDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HOOnboardingChildViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButtonBarItem;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HOOnboardingChildViewControllerNavigationBarDelegate> *navigationBarDelegate;
@property (nonatomic, retain) UICollectionViewController<HOOnboardingChildViewController> *onboardingViewController;
@property (readonly) Class superclass;

+ (bool)adoptsDefaultGridLayoutMargins;

- (void).cxx_destruct;
- (void)_next:(id)arg1;
- (void)_setNavigationBarVisibility;
- (void)childViewControllerDidFinish:(id)arg1;
- (id)delegate;
- (id)doneButtonBarItem;
- (id)initWithDelegate:(id)arg1;
- (id)initWithInstructionText:(id)arg1 title:(id)arg2 contentViewControllerClass:(Class)arg3 onboardingDelegate:(id)arg4;
- (id)navigationBarDelegate;
- (void)nextButtonPressed;
- (id)onboardingViewController;
- (void)setDelegate:(id)arg1;
- (void)setDoneButtonBarItem:(id)arg1;
- (void)setNavigationBarDelegate:(id)arg1;
- (void)setOnboardingViewController:(id)arg1;
- (void)setShouldShowRightNavigationBarActivitySpinner:(bool)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end