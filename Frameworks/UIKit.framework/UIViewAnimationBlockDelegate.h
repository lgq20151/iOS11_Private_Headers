/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewAnimationBlockDelegate : NSObject {
    bool  __forcingImmediateCompletion;
    bool  _allowUserInteraction;
    bool  _allowsHitTesting;
    bool  _allowsUserInteractionToCutOffEndOfAnimation;
    bool  _animationDidStopSent;
    UIViewAnimationState * _animationState;
    id /* block */  _completion;
    bool  _didBeginBlockAnimation;
    bool  _isZeroDuration;
    id /* block */  _start;
    NSMutableArray * _systemPostAnimationActions;
}

@property (nonatomic, readonly) bool _allowsUserInteraction;
@property (nonatomic) UIViewAnimationState *_animationState;
@property (setter=_setForcingImmediateCompletion:, nonatomic) bool _forcingImmediateCompletion;

+ (id)animationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(id /* block */)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (bool)_allowsHitTesting;
- (bool)_allowsUserInteraction;
- (bool)_allowsUserInteractionToCutOffEndOfAnimation;
- (id)_animationState;
- (void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (bool)_forcingImmediateCompletion;
- (void)_sendDeferredCompletion:(id)arg1;
- (void)_setForcingImmediateCompletion:(bool)arg1;
- (void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2;
- (void)set_animationState:(id)arg1;

@end
