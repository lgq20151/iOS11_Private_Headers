/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIWindowRotationAnimationController : _UIWindowAnimationController {
    id /* block */  _animations;
    double  _duration;
    bool  _skipCallbacks;
    bool  _updateStatusBarIfNecessary;
}

@property (nonatomic, copy) id /* block */ animations;
@property (nonatomic) double duration;
@property (nonatomic) bool skipCallbacks;
@property (nonatomic) bool updateStatusBarIfNecessary;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id /* block */)animations;
- (void)dealloc;
- (double)duration;
- (void)setAnimations:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setSkipCallbacks:(bool)arg1;
- (void)setUpdateStatusBarIfNecessary:(bool)arg1;
- (bool)skipCallbacks;
- (double)transitionDuration:(id)arg1;
- (bool)updateStatusBarIfNecessary;

@end
