/* made by EzioChiu.
 */

@protocol UISplitViewControllerImpl <NSObject>

@required

- (NSArray *)_additionalViewControllersToCheckForUserActivity;
- (NSArray *)_allContainedViewControllers;
- (NSArray *)_childViewControllersToSendViewWillTransitionToSize;
- (void)_commonInit;
- (double)_contentMarginForChildViewController:(UIViewController *)arg1;
- (struct CGSize { double x1; double x2; })_contentSizeForChildViewController:(UIViewController *)arg1 inPopoverController:(UIPopoverController *)arg2;
- (void)_descendantWillPresentViewController:(UIViewController *)arg1 modalSourceViewController:(UIViewController *)arg2 presentationController:(UIPresentationController *)arg3 animated:(bool)arg4;
- (void)_didChangeToFirstResponder:(UIResponder *)arg1;
- (void)_didEndSnapshotSession;
- (void)_didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (bool)_disableAutomaticKeyboardBehavior;
- (NSString *)_displayModeButtonItemTitle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(UIViewController *)arg1 insetsAreAbsolute:(bool*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForChildContentContainer:(id <UIContentContainer>)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (bool)_handlesCounterRotationForPresentation;
- (bool)_hasPreferredInterfaceOrientationForPresentation;
- (void)_initWithCoder:(NSCoder *)arg1;
- (bool)_isCollapsed;
- (bool)_isRotating;
- (void)_marginInfoForChild:(UIViewController *)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
- (bool)_optsOutOfPopoverControllerHierarchyCheck;
- (void)_popoverController:(UIPopoverController *)arg1 didChangeFromVisible:(bool)arg2;
- (void)_popoverController:(UIPopoverController *)arg1 willChangeToVisible:(bool)arg2;
- (UIResponder *)_primaryContentResponder;
- (UIDimmingView *)_primaryDimmingView;
- (void)_setDisplayModeButtonItemTitle:(NSString *)arg1;
- (bool)_shouldPersistViewWhenCoding;
- (bool)_shouldSynthesizeSupportedOrientations;
- (void)_updateChildContentMargins;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_willBeginSnapshotSession;
- (void)_willShowCollapsedDetailViewController:(UIViewController *)arg1 inTargetController:(UIViewController *)arg2;
- (void)decodeRestorableStateWithCoder:(NSCoder *)arg1;
- (<UISplitViewControllerDelegate> *)delegate;
- (UIViewController *)detailViewController;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (long long)displayMode;
- (UIBarButtonItem *)displayModeButtonItem;
- (void)encodeRestorableStateWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
- (float)gutterWidth;
- (bool)hidesMasterViewInPortrait;
- (id)initWithSplitViewController:(UISplitViewController *)arg1;
- (bool)isCollapsed;
- (void)loadView;
- (float)masterColumnWidth;
- (UIViewController *)masterViewController;
- (double)maximumPrimaryColumnWidth;
- (double)minimumPrimaryColumnWidth;
- (long long)preferredDisplayMode;
- (NSArray *)preferredFocusEnvironments;
- (UIView *)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (double)preferredPrimaryColumnWidthFraction;
- (bool)presentsWithGesture;
- (double)primaryColumnWidth;
- (long long)primaryEdge;
- (void)purgeMemoryForReason:(int)arg1;
- (void)setDelegate:(id <UISplitViewControllerDelegate>)arg1;
- (void)setGutterWidth:(float)arg1;
- (void)setHidesMasterViewInPortrait:(bool)arg1;
- (void)setMasterColumnWidth:(float)arg1;
- (void)setMaximumPrimaryColumnWidth:(double)arg1;
- (void)setMinimumPrimaryColumnWidth:(double)arg1;
- (void)setPreferredDisplayMode:(long long)arg1;
- (void)setPreferredPrimaryColumnWidthFraction:(double)arg1;
- (void)setPresentsWithGesture:(bool)arg1;
- (void)setPrimaryEdge:(long long)arg1;
- (void)setViewControllers:(NSArray *)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)showDetailViewController:(UIViewController *)arg1 sender:(id)arg2;
- (void)showViewController:(UIViewController *)arg1 sender:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id <UIContentContainer>)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toggleMasterVisible:(id)arg1;
- (void)traitCollectionDidChange:(UITraitCollection *)arg1;
- (void)unloadViewForced:(bool)arg1;
- (NSArray *)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(UITraitCollection *)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;

@optional

- (void)preferredContentSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1;
- (void)removeChildViewController:(UIViewController *)arg1;
- (void)updateViewConstraints;

@end
