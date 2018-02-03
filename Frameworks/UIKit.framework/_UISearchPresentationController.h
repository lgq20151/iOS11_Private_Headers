/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting> {
    _UISearchPresentationAssistant * _assistant;
    struct { 
        unsigned int searchBarWasTableHeaderView : 1; 
        unsigned int excisedSearchBarDuringPresentation : 1; 
        unsigned int searchBarWantedAutolayoutBeforeExcision : 1; 
    }  _controllerFlags;
    NSMapTable * _excisedSearchBarConstraitMap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _finalFrameForContainerView;
    NSMapTable * _placeholderConstraitMap;
    UIView * _placeholderView;
}

@property (nonatomic, readonly) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (nonatomic, readonly) bool animatorShouldLayoutPresentationViews;
@property (nonatomic, readonly) UIView *backgroundObscuringView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long edgeForHidingNavigationBar;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finalFrameForContainerView;
@property (nonatomic, readonly) bool forceObeyNavigationBarInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double resultsControllerContentOffset;
@property (nonatomic, readonly) bool resultsUnderlapsSearchBar;
@property (nonatomic, readonly) bool searchBarCanContainScopeBar;
@property (nonatomic, readonly, retain) UIView *searchBarContainerView;
@property (nonatomic, readonly) bool searchBarShouldClipToBounds;
@property (nonatomic, readonly) bool searchBarToBecomeTopAttached;
@property (nonatomic, readonly) bool shouldAccountForStatusBar;
@property (nonatomic, readonly) double statusBarAdjustment;
@property (readonly) Class superclass;

+ (bool)shouldExciseSearchBar:(id)arg1 duringPresentationWithPresenter:(id)arg2;

- (id)_constraintCopyOfConstraint:(id)arg1 replaceItem:(id)arg2 withItem:(id)arg3;
- (void)_exciseSearchBarFromCurrentContext;
- (void)_layoutPresentationWithSize:(struct CGSize { double x1; double x2; })arg1 transitionCoordinator:(id)arg2;
- (void)_placeSearchBarBackIntoOriginalContext;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (bool)_shouldKeepCurrentFirstResponder;
- (bool)_shouldRespectDefinesPresentationContext;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionToWillBegin;
- (void)_updateContainerFinalFrameForNonExcisedSearchBar;
- (void)_updatePresentingViewControllerContentScrollViewWithOffsets:(struct CGSize { double x1; double x2; })arg1 transitionCoordinator:(id)arg2;
- (double)_visibleRefreshControlHeightForTableView:(id)arg1;
- (id)adaptivePresentationController;
- (long long)adaptivePresentationStyle;
- (bool)animatorShouldLayoutPresentationViews;
- (id)backgroundObscuringView;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (unsigned long long)edgeForHidingNavigationBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForContainerView;
- (bool)forceObeyNavigationBarInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)hideBackgroundObscuringView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (double)resultsControllerContentOffset;
- (bool)resultsUnderlapsSearchBar;
- (bool)searchBarCanContainScopeBar;
- (id)searchBarContainerView;
- (bool)searchBarShouldClipToBounds;
- (bool)searchBarToBecomeTopAttached;
- (void)setContentVisible:(bool)arg1;
- (bool)shouldAccountForStatusBar;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;
- (void)showBackgroundObscuringView;
- (double)statusBarAdjustment;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
