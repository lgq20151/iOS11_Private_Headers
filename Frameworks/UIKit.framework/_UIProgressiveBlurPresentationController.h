/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIProgressiveBlurPresentationController : UIPresentationController {
    long long  _blurStyle;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) long long blurStyle;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)_animateWithCoordinator:(id)arg1 isPresenting:(bool)arg2;
- (void)_configureSubviews;
- (bool)_forcesPreferredAnimationControllers;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (long long)blurStyle;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (long long)presentationStyle;
- (void)presentationTransitionWillBegin;
- (void)setBlurStyle:(long long)arg1;
- (id)visualEffectView;

@end
