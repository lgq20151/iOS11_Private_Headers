/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewInteractionDismissTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    UIViewPropertyAnimator * _dismissAnimator;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_preparedDismissAnimator;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (id)init;
- (double)transitionDuration:(id)arg1;

@end
