/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActionSheetCompactPresentationController : UIPresentationController {
    <_UIActionSheetCompactPresentationControllerDelegate> * _actionSheetDelegate;
    _UIAnimationCoordinator * _animationCoordinator;
    bool  _avoidsKeyboardDisabled;
    _UIDimmingKnockoutBackdropView * _backdropView;
    UIView * _dimmingView;
    UITapGestureRecognizer * _dimmingViewDismissTapGestureRecognizer;
    UIView<UIActionSheetPresentationControllerDismissActionView> * _dismissActionView;
    UILongPressGestureRecognizer * _dismissActionViewGestureRecognizer;
    bool  _hasPendingAnimatedLayout;
    double  _pseudoAlertPreferredTop;
    bool  _shouldAdoptPresentedAppearance;
    <UIActionSheetPresentationControllerVisualStyle> * _visualStyle;
}

@property (nonatomic) <_UIActionSheetCompactPresentationControllerDelegate> *actionSheetDelegate;
@property (nonatomic, retain) _UIAnimationCoordinator *animationCoordinator;
@property (nonatomic) bool avoidsKeyboardDisabled;
@property (nonatomic, retain) _UIDimmingKnockoutBackdropView *backdropView;
@property (nonatomic, retain) UIView *dimmingView;
@property (nonatomic, retain) UITapGestureRecognizer *dimmingViewDismissTapGestureRecognizer;
@property (nonatomic, copy) NSString *dismissActionTitle;
@property (nonatomic) bool dismissActionUsesShorterHeightWhenCompactVertically;
@property (nonatomic, retain) UIView<UIActionSheetPresentationControllerDismissActionView> *dismissActionView;
@property (nonatomic, retain) UILongPressGestureRecognizer *dismissActionViewGestureRecognizer;
@property (nonatomic) bool hasPendingAnimatedLayout;
@property (nonatomic) double pseudoAlertPreferredTop;
@property (nonatomic) bool shouldAdoptPresentedAppearance;
@property (nonatomic, retain) <UIActionSheetPresentationControllerVisualStyle> *visualStyle;

- (void).cxx_destruct;
- (void)_applyVisualAffordancesToViews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2;
- (struct { bool x1; double x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; double x6; bool x7; bool x8; struct CGSize { double x_9_1_1; double x_9_1_2; } x9; })_currentLayoutGeometry;
- (void)_dismiss;
- (void)_handleDismiss:(id)arg1;
- (void)_keyboardChanged:(id)arg1;
- (void)_layoutViews;
- (struct CGSize { double x1; double x2; })_minimumSizeForDismissButton;
- (double)_resizeAnimationDuration;
- (bool)_shouldOccludeDuringPresentation;
- (bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (void)_subscribeToKeyboardNotifications;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_unsubscribeFromKeyboardNotifications;
- (void)_updateForKeyboardStartFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 endFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3 curve:(long long)arg4;
- (void)_willRunTransitionForCurrentStateDeferred:(bool)arg1;
- (id)actionSheetDelegate;
- (id)animationCoordinator;
- (bool)avoidsKeyboardDisabled;
- (id)backdropView;
- (void)beginPseudoAlertPresentationMode;
- (void)dealloc;
- (id)dimmingView;
- (id)dimmingViewDismissTapGestureRecognizer;
- (id)dismissActionTitle;
- (bool)dismissActionUsesShorterHeightWhenCompactVertically;
- (id)dismissActionView;
- (id)dismissActionViewGestureRecognizer;
- (void)dismissalTransitionWillBegin;
- (void)endPseudoAlertPresentationMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (bool)hasPendingAnimatedLayout;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 visualStyle:(id)arg3;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionWillBegin;
- (double)pseudoAlertPreferredTop;
- (void)setActionSheetDelegate:(id)arg1;
- (void)setAnimationCoordinator:(id)arg1;
- (void)setAvoidsKeyboardDisabled:(bool)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setDimmingViewDismissTapGestureRecognizer:(id)arg1;
- (void)setDismissActionTitle:(id)arg1;
- (void)setDismissActionUsesShorterHeightWhenCompactVertically:(bool)arg1;
- (void)setDismissActionView:(id)arg1;
- (void)setDismissActionViewGestureRecognizer:(id)arg1;
- (void)setHasPendingAnimatedLayout:(bool)arg1;
- (void)setPseudoAlertPreferredTop:(double)arg1;
- (void)setShouldAdoptPresentedAppearance:(bool)arg1;
- (void)setVisualStyle:(id)arg1;
- (bool)shouldAdoptPresentedAppearance;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visualStyle;

@end
