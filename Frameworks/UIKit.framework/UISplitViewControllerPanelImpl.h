/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISplitViewControllerPanelImpl : NSObject <UIDimmingViewDelegate, UIGestureRecognizerDelegate, UIPanelControllerDelegate, UISplitViewControllerImpl> {
    UIDimmingView * __dimmingView;
    UIImage * __fullScreenButtonImage;
    UIPanGestureRecognizer * __presentationGestureRecognizer;
    UIViewController * __preservedDetailController;
    long long  _animatingToDisplayMode;
    <UISplitViewControllerDelegate> * _delegate;
    UISplitViewControllerPanelImplDisplayModeButtonItem * _displayModeButtonItem;
    NSString * _displayModeButtonItemTitle;
    struct { 
        unsigned int usedNewAPI : 1; 
        unsigned int primaryHidingState : 2; 
        unsigned int didSetLastShouldAllowChangeDuringUpdate : 1; 
        unsigned int hasTransitioningSizeAndOrientation : 1; 
        unsigned int hasPendingPreferredDisplayModeChange : 1; 
        unsigned int firstResponderChangedFromPostTransitionResponder : 1; 
        unsigned int firstResponderChangedFromPostTransitionResponderToNil : 1; 
    }  _flags;
    bool  _lastNotifiedIsCollapsed;
    long long  _lastNotifiedMode;
    bool  _lastShouldAllowChange;
    double  _lastUserInitiatedPrimaryWidth;
    double  _maximumPrimaryColumnWidth;
    double  _minimumPrimaryColumnWidth;
    long long  _overrideReportedDisplayMode;
    UIPanelController * _panelController;
    UIResponder * _postTransitionResponder;
    long long  _preferredDisplayMode;
    double  _preferredPrimaryColumnWidthFraction;
    double  _presentationGestureDirection;
    bool  _presentsWithGesture;
    long long  _primaryEdge;
    struct CGSize { 
        double width; 
        double height; 
    }  _suspendedSize;
    long long  _suspendedState;
    UISlidingBarStateRequest * _suspendedStateRequest;
    UITraitCollection * _suspendedTraitCollection;
    UISplitViewController * _svc;
    long long  _transitioningToOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _transitioningToSize;
    UITraitCollection * _transitioningToTraitCollection;
}

@property (setter=_setDimmingView:, nonatomic, retain) UIDimmingView *_dimmingView;
@property (setter=_setDisplayModeButtonItemTitle:, nonatomic, copy) NSString *_displayModeButtonItemTitle;
@property (setter=_setFullScreenButtonImage:, nonatomic, retain) UIImage *_fullScreenButtonImage;
@property (setter=_setPresentationGestureRecognizer:, nonatomic, retain) UIPanGestureRecognizer *_presentationGestureRecognizer;
@property (setter=_setPreservedDetailController:, nonatomic, retain) UIViewController *_preservedDetailController;
@property (getter=isCollapsed, nonatomic, readonly) bool collapsed;
@property (nonatomic, copy) UISlidingBarConfiguration *configuration;
@property (nonatomic, readonly) UISlidingBarState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISplitViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float gutterWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesMasterViewInPortrait;
@property (nonatomic, retain) UIViewController *leadingViewController;
@property (nonatomic, retain) UIViewController *mainViewController;
@property (nonatomic) float masterColumnWidth;
@property (nonatomic) double maximumPrimaryColumnWidth;
@property (nonatomic) double minimumPrimaryColumnWidth;
@property (nonatomic, retain) UIPanelController *panelController;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic) long long preferredDisplayMode;
@property (nonatomic) double preferredPrimaryColumnWidthFraction;
@property (nonatomic) bool presentsWithGesture;
@property (nonatomic) long long primaryEdge;
@property (nonatomic, copy) UISlidingBarStateRequest *stateRequest;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *trailingViewController;
@property (nonatomic, copy) NSArray *viewControllers;

+ (id)_withDisabledAppearanceTransitions:(bool)arg1 forVisibleDescendantsOf:(id)arg2 perform:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_additionalViewControllersToCheckForUserActivity;
- (id)_allContainedViewControllers;
- (id)_childContainingSender:(id)arg1;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (void)_commonInit;
- (double)_contentMarginForChildViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(bool)arg4;
- (void)_didChangeToFirstResponder:(id)arg1;
- (void)_didEndSnapshotSession;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_dimmingView;
- (bool)_disableAutomaticKeyboardBehavior;
- (id)_displayModeButtonItemTitle;
- (void)_displayModeButtonItemWasAddedForFirstTime;
- (long long)_displayModeForState:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (long long)_effectiveTargetDisplayMode;
- (long long)_effectiveTargetDisplayModeForDisplayMode:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForChildContentContainer:(id)arg1;
- (id)_fullScreenButtonImage;
- (long long)_fullScreenStateForOrientation:(long long)arg1 viewWidth:(double)arg2;
- (bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (bool)_handlesCounterRotationForPresentation;
- (bool)_hasPreferredInterfaceOrientationForPresentation;
- (bool)_iPadShouldUseOverlayInCurrentEnvironment;
- (void)_initWithCoder:(id)arg1;
- (bool)_isCollapsed;
- (bool)_isLeadingShown;
- (bool)_isRotating;
- (bool)_layoutPrimaryOnRight;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
- (bool)_optsOutOfPopoverControllerHierarchyCheck;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(bool)arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(bool)arg2;
- (id)_presentationGestureRecognizer;
- (void)_presentationGestureRecognizerChanged:(id)arg1;
- (id)_preservedDetailController;
- (id)_primaryContentResponder;
- (id)_primaryDimmingView;
- (long long)_primaryHidingState;
- (void)_setDimmingView:(id)arg1;
- (void)_setDisplayModeButtonItemTitle:(id)arg1;
- (void)_setFullScreenButtonImage:(id)arg1;
- (void)_setLeadingShownFromGesture:(bool)arg1;
- (void)_setPresentationGestureRecognizer:(id)arg1;
- (void)_setPreservedDetailController:(id)arg1;
- (void)_setPrimaryHidingState:(long long)arg1;
- (bool)_shouldPersistViewWhenCoding;
- (bool)_shouldSynthesizeSupportedOrientations;
- (void)_stopTransitionsInViewController:(id)arg1;
- (void)_triggerDisplayModeAction:(id)arg1;
- (void)_updateChildContentMargins;
- (void)_updateDimmingView;
- (void)_updateDisplayModeButtonItem;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updatePresentationGestureRecognizer;
- (void)_willBeginSnapshotSession;
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
- (void)_withDisabledAppearanceTransitionsPerform:(id /* block */)arg1;
- (void)animateToRequest:(id)arg1;
- (id)configuration;
- (id)currentState;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (id)detailViewController;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (long long)displayMode;
- (id)displayModeButtonItem;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)gutterWidth;
- (bool)hidesMasterViewInPortrait;
- (id)initWithSplitViewController:(id)arg1;
- (bool)isCollapsed;
- (id)leadingViewController;
- (void)loadView;
- (id)mainViewController;
- (float)masterColumnWidth;
- (id)masterViewController;
- (double)maximumPrimaryColumnWidth;
- (double)minimumPrimaryColumnWidth;
- (id)panelController;
- (void)panelController:(id)arg1 adjustLeadingViewController:(id)arg2 forKeyboardInfo:(id)arg3;
- (bool)panelController:(id)arg1 collapseOntoPrimaryViewController:(id)arg2;
- (void)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 transitionCoordinator:(id)arg4;
- (void)panelController:(id)arg1 didChangeToState:(id)arg2;
- (void)panelController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2;
- (id)panelController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (void)panelController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3;
- (void)panelController:(id)arg1 willChangeToState:(id)arg2;
- (id /* block */)panelControllerWillUpdate:(id)arg1;
- (id)possibleStates;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredDisplayMode;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (double)preferredPrimaryColumnWidthFraction;
- (bool)presentsWithGesture;
- (double)primaryColumnWidth;
- (long long)primaryEdge;
- (id)primaryViewControllerForCollapsingPanelController:(id)arg1;
- (id)primaryViewControllerForExpandingPanelController:(id)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGutterWidth:(float)arg1;
- (void)setHidesMasterViewInPortrait:(bool)arg1;
- (void)setLeadingViewController:(id)arg1;
- (void)setMainViewController:(id)arg1;
- (void)setMasterColumnWidth:(float)arg1;
- (void)setMaximumPrimaryColumnWidth:(double)arg1;
- (void)setMinimumPrimaryColumnWidth:(double)arg1;
- (void)setPanelController:(id)arg1;
- (void)setPreferredDisplayMode:(long long)arg1;
- (void)setPreferredPrimaryColumnWidthFraction:(double)arg1;
- (void)setPresentsWithGesture:(bool)arg1;
- (void)setPrimaryEdge:(long long)arg1;
- (void)setStateRequest:(id)arg1;
- (void)setTrailingViewController:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (id)stateRequest;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toggleMasterVisible:(id)arg1;
- (id)trailingViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unloadViewForced:(bool)arg1;
- (void)updateDisplayModeButtonItem;
- (void)updateViewConstraints;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
