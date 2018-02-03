/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIWindowAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _shouldCrossfade;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldCrossfade;
@property (readonly) Class superclass;
@property (nonatomic) UIWindow *window;

+ (id)animationControllerWithWindow:(id)arg1;

- (void)_performCrossfadeAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(id /* block */)arg2;
- (void)_performLayoutAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(id /* block */)arg2;
- (void)animateTransition:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)setShouldCrossfade:(bool)arg1;
- (void)setWindow:(id)arg1;
- (bool)shouldCrossfade;
- (double)transitionDuration:(id)arg1;
- (id)window;

@end
