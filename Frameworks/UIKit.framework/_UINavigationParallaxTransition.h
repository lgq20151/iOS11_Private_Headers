/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationParallaxTransition : NSObject <UIViewControllerAnimatedTransitioningEx, _UIBasicAnimationFactory> {
    bool  __shouldReverseLayoutDirection;
    _UIParallaxDimmingView * _borderDimmingView;
    UIView * _clipUnderView;
    bool  _clipUnderlapWhileTransitioning;
    UIView * _containerFromView;
    UIView * _containerToView;
    _UIParallaxDimmingView * _contentDimmingView;
    NSUUID * _currentRunningAnimationsUUID;
    NSUUID * _currentTrackingAnimatorsAnimationsUUID;
    bool  _interactionAborted;
    _UINavigationInteractiveTransitionBase * _interactionController;
    long long  _operation;
    UIColor * _overrideDimmingColor;
    <UIViewControllerContextTransitioning> * _transitionContext;
    double  _transitionGap;
    long long  _transitionStyle;
}

@property (setter=_setShouldReverseLayoutDirection:, nonatomic) bool _shouldReverseLayoutDirection;
@property (nonatomic, retain) _UIParallaxDimmingView *borderDimmingView;
@property (nonatomic, retain) UIView *clipUnderView;
@property (nonatomic) bool clipUnderlapWhileTransitioning;
@property (nonatomic, retain) UIView *containerFromView;
@property (nonatomic, retain) UIView *containerToView;
@property (nonatomic, retain) _UIParallaxDimmingView *contentDimmingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interactionAborted;
@property (nonatomic) _UINavigationInteractiveTransitionBase *interactionController;
@property (nonatomic) long long operation;
@property (nonatomic, retain) UIColor *overrideDimmingColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) <UIViewControllerContextTransitioning> *transitionContext;
@property (nonatomic) double transitionGap;
@property (nonatomic) long long transitionStyle;

+ (double)defaultSlidingTransitionDuration;
+ (void)setDefaultSlidingTransitionDuration:(double)arg1;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_setShouldReverseLayoutDirection:(bool)arg1;
- (bool)_shouldReverseLayoutDirection;
- (void)_stopTransitionImmediately;
- (id)_timingFunctionForAnimation;
- (void)animateKeyboard:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (id)borderDimmingView;
- (id)clipUnderView;
- (bool)clipUnderlapWhileTransitioning;
- (void)completeKeyboard:(id)arg1;
- (id)containerFromView;
- (id)containerToView;
- (id)contentDimmingView;
- (double)gapBetweenViews;
- (id)initWithCurrentOperation:(long long)arg1;
- (bool)interactionAborted;
- (id)interactionController;
- (long long)operation;
- (id)overrideDimmingColor;
- (double)parallaxOffset;
- (void)prepareToAnimateKeyboard:(id)arg1;
- (void)resizeShadow:(id)arg1;
- (id)resizedFromContainerView;
- (id)resizedToContainerView;
- (void)setBorderDimmingView:(id)arg1;
- (void)setClipUnderView:(id)arg1;
- (void)setClipUnderlapWhileTransitioning:(bool)arg1;
- (void)setContainerFromView:(id)arg1;
- (void)setContainerToView:(id)arg1;
- (void)setContentDimmingView:(id)arg1;
- (void)setInteractionAborted:(bool)arg1;
- (void)setInteractionController:(id)arg1;
- (void)setOperation:(long long)arg1;
- (void)setOverrideDimmingColor:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setTransitionGap:(double)arg1;
- (void)setTransitionStyle:(long long)arg1;
- (id)shadowContainerForKeyboardTransition:(id)arg1;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (double)transitionGap;
- (long long)transitionStyle;

@end
