/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISimpleTransitioningDelegate : NSObject <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate> {
    bool  __suppressCrossFadeNavigationBarAnimation;
    <UIViewControllerAnimatedTransitioning> * _animator;
}

@property (setter=_setSuppressCrossFadeNavigationBarAnimation:, nonatomic) bool _suppressCrossFadeNavigationBarAnimation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_navigationControllerShouldCrossFadeNavigationBar:(id)arg1;
- (void)_setSuppressCrossFadeNavigationBarAnimation:(bool)arg1;
- (bool)_suppressCrossFadeNavigationBarAnimation;
- (id)initWithAnimator:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;

@end
