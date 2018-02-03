/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIIdleModeController : NSObject {
    UIWindow * _backgroundWindow;
    bool  _didApplyVisualEffects;
    bool  _idleModeEnabled;
    UIWindow * _keyWindow;
    bool  _keyWindowAllowedGroupBlending;
    UIScreen * _screen;
    NSMapTable * _viewsToAttributes;
    NSMapTable * _viewsToCAFilters;
    NSMapTable * _viewsToOriginalAttributes;
    UIImageView * _vignetteView;
}

@property (getter=isIdleModeEnabled, nonatomic) bool idleModeEnabled;
@property (nonatomic, readonly) UIScreen *screen;

- (void).cxx_destruct;
- (void)_animateDismissal;
- (void)_animatePresentation;
- (void)_applyDismissalLayoutAttributesToViews;
- (void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2;
- (void)_applyPresentationLayoutAttributesToViews;
- (void)_completeDismissal;
- (double)_dimmingOverlayWhiteValueForUserInterfaceStyle:(long long)arg1;
- (double)_dismissalAnimationDuration;
- (void)_enterIdleMode;
- (void)_exitIdleMode;
- (id)_imageForTraitCollection:(id)arg1;
- (id)_originalAttributesForView:(id)arg1 comparedToIdleModeAttributes:(id)arg2;
- (void)_prepareForPresentationWithKeyWindow:(id)arg1 focusedView:(id)arg2;
- (double)_presentationAnimationDuration;
- (bool)_recordLayoutAttributesStartingAtView:(id)arg1;
- (double)_vignetteAlphaForUserInterfaceStyle:(long long)arg1;
- (id)_vignetteImageAroundFocusedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;
- (bool)isIdleModeEnabled;
- (id)screen;
- (void)setIdleModeEnabled:(bool)arg1;

@end
