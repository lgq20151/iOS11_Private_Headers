/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate> {
    UIPresentationController<_UISearchControllerPresenting> * _adaptivePresentationController;
    UIDimmingView * _dimmingView;
    bool  _isFormSheetPresentation;
    bool  _presentationWasAnimated;
    UIView * _searchBarContainerView;
    UIPresentationController * _searchPresentationController;
    <UIViewControllerTransitionCoordinator> * _transitioningToSizeCoordinator;
}

@property (nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (nonatomic) bool presentationWasAnimated;
@property (nonatomic, retain) <UIViewControllerTransitionCoordinator> *transitioningToSizeCoordinator;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_containerFrame;
- (bool)_currentTransitionIsRotating;
- (id)_searchBarContainerSuperview;
- (id)_searchControllerPresenting;
- (double)_statusBarHeightChangeDueToRotation;
- (bool)_statusBarPreferredHidden;
- (bool)_statusBarPreferredHiddenForInterfaceOrientation:(long long)arg1;
- (id)adaptivePresentationController;
- (void)dealloc;
- (id)dimmingView;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)ensureAppropriatelySizedSearchBar:(id)arg1;
- (id)initWithSearchPresentationController:(id)arg1;
- (id)locateNavigationController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })optimalFrameForSearchBar:(id)arg1;
- (bool)presentationIsPopoverToOverFullScreenAdaptation;
- (bool)presentationWasAnimated;
- (void)removeContainerViewFromSuperview;
- (double)resultsControllerContentOffset;
- (id)searchBarContainerView;
- (bool)searchBarToBecomeTopAttached;
- (bool)searchBarWillResizeForScopeBar;
- (void)setAdaptivePresentationController:(id)arg1;
- (void)setPresentationWasAnimated:(bool)arg1;
- (void)setTransitioningToSizeCoordinator:(id)arg1;
- (bool)shouldAccountForStatusBar;
- (double)statusBarAdjustment;
- (id)transitioningToSizeCoordinator;
- (struct CGSize { double x1; double x2; })updateSearchBarContainerFrame;

@end
